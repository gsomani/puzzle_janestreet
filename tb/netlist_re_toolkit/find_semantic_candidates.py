#!/usr/bin/env python3
"""Heuristic report for finding human-level structures in a netlist.

This does not 'solve' semantics automatically. It points your attention to:
  * self-dependent registers (counters/sticky flags)
  * XOR-heavy register clusters (LFSR/CRC candidates)
  * registers gated by counter comparisons (row/column/position trackers)
  * purely combinational outputs driven only by counters (lookup-map candidates)

Requires pyverilog + networkx and imports verilog_ir.py.
"""

from __future__ import annotations

import argparse
import re
from collections import defaultdict

import networkx as nx

from verilog_ir import NetlistIR


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("verilog")
    args = ap.parse_args()

    ir = NetlistIR(args.verilog)
    rg = ir.register_graph()

    print("=== self-dependent registers ===")
    for r in sorted(ir.registers):
        if rg.has_edge(r, r):
            print(r)

    print("\n=== register clusters ===")
    comps = sorted(nx.weakly_connected_components(rg), key=len, reverse=True)
    for c in comps:
        if len(c) >= 2:
            print(f"[{len(c)}] " + ", ".join(sorted(c)))

    print("\n=== XOR/XNOR-heavy updates ===")
    for u in ir.guarded_updates:
        score = u.rhs.count("^") + u.rhs.lower().count("xor")
        if score >= 2:
            print(f"{u.target:24s} score={score:2d}  {u.rhs}")

    print("\n=== counter/position-gated updates ===")
    pat = re.compile(r"counter(?:_11|_outer|_output)?\s*(?:==|!=|<|>|<=|>=)")
    for u in ir.guarded_updates:
        txt = u.guard + " " + u.rhs
        if pat.search(txt):
            print(f"{u.target:24s} guard={u.guard}")
            print(f"    rhs={u.rhs}")

    print("\n=== combinational nets that depend only on counter-like state ===")
    counters = {x for x in ir.registers if "counter" in x}
    for dst in sorted(ir.continuous):
        deps = ir.expanded_dependencies_of_expr(ir.continuous[dst])
        if deps and deps <= (counters | ir.inputs) and not (deps - counters):
            print(f"{dst:24s} <- {', '.join(sorted(deps))}")


if __name__ == "__main__":
    main()
