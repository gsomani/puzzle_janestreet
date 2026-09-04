#!/usr/bin/env python3
"""Discover the 8-bit affine/GF(2) recurrence directly from the raw puzzle.

The key trick is black-box state injection:
  1. reset the whole design so all control/validator state is legitimate,
  2. deposit an arbitrary value into the eight candidate registers,
  3. clock exactly one active input step,
  4. observe the next eight-register value,
  5. repeat for all 256 states and I=0/1,
  6. fit x' = A*x xor b*I xor c and verify all 512 transitions.

This avoids manually simplifying the huge XOR/XNOR expressions.

Requires iverilog + vvp. The puzzle file should be next to output2.v because
it contains `include "output2.v".
"""

from __future__ import annotations

import argparse
import subprocess
import tempfile
from pathlib import Path

from gf2_affine import (
    characteristic_polynomial_bits,
    fit_affine,
    orbit_period,
    polynomial_to_int,
    polynomial_to_string,
    print_affine,
    verify_affine,
)

# Bit ordering chosen so the reset vector is 8'hA5 and the recurrence becomes
# a normal left-shifting LFSR:
#   s[0] = xor2_2_16_A
#   ...
#   s[7] = xor2_2_17_B
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


def make_tb() -> str:
    set_lines = "\n".join(
        f"            dut.{name} = v[{i}];" for i, name in enumerate(REGS_LSB_TO_MSB)
    )
    concat = ", ".join(f"dut.{name}" for name in reversed(REGS_LSB_TO_MSB))

    return f'''`timescale 1ns/1ps
module tb;
    reg I = 0;
    reg clk = 0;
    reg enable = 1;
    reg rst_n = 0;
    integer s;
    integer b;

    puzzle_readable_combined dut (
        .I(I), .clk(clk), .enable(enable), .rst_n(rst_n)
    );

    always #5 clk = ~clk;

    task deposit_state(input [7:0] v);
        begin
{set_lines}
        end
    endtask

    initial begin
        for (s = 0; s < 256; s = s + 1) begin
            for (b = 0; b < 2; b = b + 1) begin
                // Reset all non-LFSR state to a genuine reachable active-phase state.
                rst_n = 0;
                I = 0;
                enable = 1;
                repeat (2) @(posedge clk);
                #1;
                rst_n = 1;
                #1;

                // Replace only the candidate 8-register cluster.
                deposit_state(s[7:0]);
                I = b[0];

                @(posedge clk);
                #1;
                $display("TRANS %0d %0d %0d", s, b, {{{concat}}});
            end
        end
        $finish;
    end
endmodule
'''


def sample_transitions(puzzle: Path):
    with tempfile.TemporaryDirectory() as td:
        td = Path(td)
        tb = td / "tb_lfsr.v"
        sim = td / "sim.out"
        tb.write_text(make_tb())

        subprocess.run(
            ["iverilog", "-g2012", "-o", str(sim), str(tb), str(puzzle)],
            cwd=puzzle.parent,
            check=True,
        )
        p = subprocess.run(["vvp", str(sim)], cwd=puzzle.parent,
                           text=True, capture_output=True, check=True)

    table = {}
    for line in p.stdout.splitlines():
        if not line.startswith("TRANS "):
            continue
        _, s, b, ns = line.split()
        table[(int(s), int(b))] = int(ns)
    if len(table) != 512:
        raise RuntimeError(f"expected 512 transitions, got {len(table)}")
    return table


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("puzzle", help="puzzle_readable_combined.v")
    args = ap.parse_args()

    puzzle = Path(args.puzzle).resolve()
    table = sample_transitions(puzzle)

    def f(s, u):
        return table[(s, u & 1)]

    A, B, c = fit_affine(8, 1, f)
    ok = verify_affine(8, 1, f, A, B, c)
    print("affine over GF(2):", ok)
    if not ok:
        raise SystemExit(1)

    print("\nRecovered equations:")
    print_affine(A, B, c, 8)

    coeffs = characteristic_polynomial_bits(A, 8)
    print("\nCharacteristic polynomial:")
    print("  ", polynomial_to_string(coeffs))
    print(f"  encoded as 0x{polynomial_to_int(coeffs):X}")
    print("  period from seed 1:", orbit_period(A, 1))

    print("\nExpected compact form for this puzzle:")
    print("  s_next = {s[6:0], I ^ s[7] ^ s[5] ^ s[4] ^ s[3]}")


if __name__ == "__main__":
    main()
