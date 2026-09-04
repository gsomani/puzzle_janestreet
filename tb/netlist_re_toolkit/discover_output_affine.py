#!/usr/bin/env python3
"""Black-box the successful output stage and recover O(state,count).

Procedure:
  * solve the recovered Star Battle to obtain a genuinely successful input,
  * drive that 121-bit input through the raw design,
  * when output_count=k is active, save the legitimate LFSR state,
  * deposit all 256 possible 8-bit LFSR states without clocking,
  * sample O,
  * fit O = A_k * state xor c_k over GF(2),
  * restore the legitimate state and clock to k+1.

For this puzzle each A_k is the identity, so O = lfsr XOR mask[k].

Requires iverilog + vvp.
"""

from __future__ import annotations

import argparse
import subprocess
import tempfile
from pathlib import Path

from gf2_affine import fit_affine, verify_affine
from star_battle_recovered_solver import grid_from_solution, solve_all

REGS_LSB_TO_MSB = [
    "xor2_2_16_A",
    "xor2_2_19_B",
    "or2_2_12_A",
    "xor2_2_19_A",
    "xor2_2_14_B",
    "xor2_2_20_A",
    "a22o_2_4_B2",
    "xor2_2_17_B",
]


def solution_bits():
    sols = solve_all()
    if len(sols) != 1:
        raise RuntimeError(f"expected unique solution, got {len(sols)}")
    g = grid_from_solution(sols[0])
    return [b for row in g for b in row]


def make_tb(bits):
    set_lines = "\n".join(
        f"            dut.{name} = v[{i}];" for i, name in enumerate(REGS_LSB_TO_MSB)
    )
    concat = ", ".join(f"dut.{name}" for name in reversed(REGS_LSB_TO_MSB))
    bit_case = "\n".join(f"            {i}: I = 1'b{b};" for i, b in enumerate(bits))

    return f'''`timescale 1ns/1ps
module tb;
    reg I = 0;
    reg clk = 0;
    reg enable = 1;
    reg rst_n = 0;
    integer i;
    integer k;
    integer s;
    reg [7:0] base;

    puzzle_readable_combined dut (
        .I(I), .clk(clk), .enable(enable), .rst_n(rst_n)
    );

    always #5 clk = ~clk;

    task deposit_state(input [7:0] v);
        begin
{set_lines}
        end
    endtask

    task set_input_bit(input integer idx);
        begin
            case (idx)
{bit_case}
                default: I = 1'b0;
            endcase
        end
    endtask

    initial begin
        rst_n = 0;
        repeat (2) @(posedge clk);
        #1 rst_n = 1;

        // Consume the unique valid 121-bit solution, row-major.
        for (i = 0; i < 121; i = i + 1) begin
            @(negedge clk);
            set_input_bit(i);
            @(posedge clk);
        end

        I = 0;

        // Wait until the delayed-done output phase begins at count 0.
        while (!(dut.u_counter_control.or2_2_11_B && dut.u_counter_control.counter_output == 0))
            @(negedge clk);
        #1;

        for (k = 0; k < 15; k = k + 1) begin
            base = {{{concat}}};
            $display("BASE %0d %0d", k, base);

            for (s = 0; s < 256; s = s + 1) begin
                deposit_state(s[7:0]);
                #1;
                $display("OUT %0d %0d %0d", k, s, O);
            end

            // Restore the legitimate sequence before the next clock.
            deposit_state(base);
            @(posedge clk);
            @(negedge clk);
            #1;
        end
        $finish;
    end
endmodule
'''


def sample(puzzle: Path):
    bits = solution_bits()
    with tempfile.TemporaryDirectory() as td:
        td = Path(td)
        tb = td / "tb_output.v"
        sim = td / "sim.out"
        tb.write_text(make_tb(bits))
        subprocess.run(["iverilog", "-g2012", "-o", str(sim), str(tb), str(puzzle)],
                       cwd=puzzle.parent, check=True)
        p = subprocess.run(["vvp", str(sim)], cwd=puzzle.parent,
                           text=True, capture_output=True, check=True)

    table = {k: {} for k in range(15)}
    base = {}
    for line in p.stdout.splitlines():
        if line.startswith("BASE "):
            _, k, s = line.split()
            base[int(k)] = int(s)
        elif line.startswith("OUT "):
            _, k, s, o = line.split()
            table[int(k)][int(s)] = int(o)
    return base, table


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("puzzle", help="puzzle_readable_combined.v")
    args = ap.parse_args()
    base, tables = sample(Path(args.puzzle).resolve())

    masks = []
    for k in range(15):
        t = tables[k]
        if len(t) != 256:
            raise RuntimeError(f"count {k}: expected 256 samples, got {len(t)}")

        # No independent input in this combinational map.
        def f(s, _u):
            return t[s]

        A, B, c = fit_affine(8, 0, f)
        ok = verify_affine(8, 0, f, A, B, c)
        identity_cols = [1 << i for i in range(8)]
        is_identity = (A == identity_cols and c == t[0])
        masks.append(c)
        print(f"count {k:2d}: affine={ok}, identity-linear-part={is_identity}, "
              f"mask=0x{c:02X}, legitimate_state=0x{base[k]:02X}, "
              f"legitimate_O=0x{t[base[k]]:02X}")

    print("\nmask table:")
    print(", ".join(f"0x{x:02X}" for x in masks))


if __name__ == "__main__":
    main()
