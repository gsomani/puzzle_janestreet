#!/usr/bin/env python3
"""Black-box the raw counter/control netlist and dump its 11x11 `state` table.

This is how to discover that the frightening combinational `state` decoder is
really just a region-number lookup indexed by the two 0..10 counters.

Requires iverilog + vvp.
"""

from __future__ import annotations

import argparse
import subprocess
import tempfile
from pathlib import Path

TB = r'''
`timescale 1ns/1ps
module tb;
    reg clk = 0;
    reg rst_n = 0;
    reg enable = 1;
    integer k;

    counter_control1 dut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable)
    );

    always #5 clk = ~clk;

    initial begin
        // Make synchronous and asynchronous reset logic both settle.
        rst_n = 0;
        repeat (2) @(posedge clk);
        #1;
        rst_n = 1;

        // Sample at negedge so the current counter position is stable before
        // the next accepted input advances it.
        for (k = 0; k < 121; k = k + 1) begin
            @(negedge clk);
            #1;
            $display("REGION %0d %0d %0d", dut.counter_outer, dut.counter_11, dut.state);
        end
        $finish;
    end
endmodule
'''


def run(verilog: Path):
    with tempfile.TemporaryDirectory() as td:
        td = Path(td)
        tb = td / "tb_region.v"
        sim = td / "sim.out"
        tb.write_text(TB)

        subprocess.run(
            ["iverilog", "-g2012", "-o", str(sim), str(tb), str(verilog)],
            cwd=verilog.parent,
            check=True,
        )
        p = subprocess.run(["vvp", str(sim)], cwd=verilog.parent,
                           check=True, text=True, capture_output=True)

    grid = [[None] * 11 for _ in range(11)]
    for line in p.stdout.splitlines():
        if not line.startswith("REGION "):
            continue
        _, r, c, v = line.split()
        r, c, v = int(r), int(c), int(v)
        if 0 <= r < 11 and 0 <= c < 11:
            grid[r][c] = v

    if any(v is None for row in grid for v in row):
        raise RuntimeError("did not capture all 121 cells")
    return grid


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("verilog", help="raw file containing module counter_control1, e.g. output2.v")
    args = ap.parse_args()

    g = run(Path(args.verilog).resolve())
    print("Recovered 11x11 state/region table:\n")
    for row in g:
        print(" ".join(f"{x:2d}" for x in row))

    print("\nPython literal:\nREGION = [")
    for row in g:
        print("    " + repr(row) + ",")
    print("]")


if __name__ == "__main__":
    main()
