#!/usr/bin/env python3
"""Extract a useful reverse-engineering IR from flattened Verilog.

Requires:
    pip install pyverilog networkx

This intentionally treats the netlist as a dependency graph / transition system:
  * continuous assignments form the combinational graph
  * nonblocking assignments identify stored state
  * guarded sequential assignments show when each register changes
  * register-to-register dependencies expose counters, shifts, LFSRs, etc.

The parser uses VerilogParser directly, so it does not require iverilog for
simple already-preprocessed/flattened netlists. If your source uses macros or
complex `include files, preprocess it first.
"""

from __future__ import annotations

import argparse
import json
from dataclasses import dataclass, asdict
from pathlib import Path
from typing import Dict, Iterable, List, Optional, Set, Tuple

import networkx as nx
from pyverilog.vparser.parser import VerilogParser
from pyverilog.vparser import ast as vast
from pyverilog.ast_code_generator.codegen import ASTCodeGenerator

CG = ASTCodeGenerator()


def walk(node):
    if node is None:
        return
    yield node
    for c in node.children():
        yield from walk(c)


def code(node) -> str:
    return CG.visit(node).strip()


def identifier_names(node) -> Set[str]:
    out: Set[str] = set()
    for n in walk(node):
        if isinstance(n, vast.Identifier):
            out.add(n.name)
    return out


def lhs_names(node) -> Set[str]:
    # Pointer/part-select LHS still belongs to the underlying identifier.
    return identifier_names(node)


@dataclass
class GuardedUpdate:
    always_index: int
    target: str
    guard: str
    rhs: str
    rhs_ids: List[str]


class NetlistIR:
    def __init__(self, filename: str):
        self.filename = str(filename)
        text = Path(filename).read_text()
        parser = VerilogParser()
        self.ast = parser.parse(text)

        self.inputs: Set[str] = set()
        self.outputs: Set[str] = set()
        self.declared_regs: Set[str] = set()
        self.declared_wires: Set[str] = set()
        self.continuous: Dict[str, vast.Node] = {}
        self.registers: Set[str] = set()
        self.guarded_updates: List[GuardedUpdate] = []
        self.always_nodes: List[vast.Always] = []

        self._collect_decls()
        self._collect_continuous()
        self._collect_sequential()

    def _collect_decls(self):
        for n in walk(self.ast):
            if isinstance(n, vast.Input):
                self.inputs.add(n.name)
            elif isinstance(n, vast.Output):
                self.outputs.add(n.name)
            elif isinstance(n, vast.Reg):
                self.declared_regs.add(n.name)
            elif isinstance(n, vast.Wire):
                self.declared_wires.add(n.name)

    def _collect_continuous(self):
        for n in walk(self.ast):
            if isinstance(n, vast.Assign):
                lhs = list(lhs_names(n.left))
                if len(lhs) == 1:
                    # Store the expression under the signal name. Flattened
                    # netlists normally have one continuous driver per net.
                    self.continuous[lhs[0]] = n.right

    def _collect_sequential(self):
        self.always_nodes = [n for n in walk(self.ast) if isinstance(n, vast.Always)]
        for i, a in enumerate(self.always_nodes):
            self._collect_guarded_stmt(a.statement, i, "1'b1")

    def _collect_guarded_stmt(self, stmt, always_index: int, guard: str):
        if stmt is None:
            return

        if isinstance(stmt, vast.Block):
            for s in stmt.statements:
                self._collect_guarded_stmt(s, always_index, guard)
            return

        if isinstance(stmt, vast.IfStatement):
            c = code(stmt.cond)
            self._collect_guarded_stmt(stmt.true_statement, always_index,
                                       f"({guard}) && ({c})")
            if stmt.false_statement is not None:
                self._collect_guarded_stmt(stmt.false_statement, always_index,
                                           f"({guard}) && !({c})")
            return

        if isinstance(stmt, vast.CaseStatement):
            expr = code(stmt.comp)
            prior = []
            for citem in stmt.caselist:
                if citem.cond is None:
                    # default case
                    if prior:
                        cguard = " && ".join(f"!({x})" for x in prior)
                    else:
                        cguard = "1'b1"
                else:
                    tests = [f"({expr}) == ({code(c)})" for c in citem.cond]
                    cguard = " || ".join(tests)
                    prior.append(f"({cguard})")
                self._collect_guarded_stmt(citem.statement, always_index,
                                           f"({guard}) && ({cguard})")
            return

        if isinstance(stmt, vast.NonblockingSubstitution):
            targets = list(lhs_names(stmt.left))
            for t in targets:
                self.registers.add(t)
                self.guarded_updates.append(
                    GuardedUpdate(
                        always_index=always_index,
                        target=t,
                        guard=guard,
                        rhs=code(stmt.right),
                        rhs_ids=sorted(identifier_names(stmt.right)),
                    )
                )
            return

        # Some netlists use blocking assignments in sequential always blocks.
        # They are intentionally not classified as state here; inspect them if
        # your source uses that style.

    def terminal_dependencies(self, name: str, seen=None) -> Set[str]:
        """Inline combinational nets conceptually and return terminal names.

        Terminals are primary inputs, sequential registers, or unknown symbols.
        """
        if seen is None:
            seen = set()
        if name in seen:
            return {name}
        if name in self.registers or name in self.inputs:
            return {name}
        if name not in self.continuous:
            return {name}

        seen = set(seen)
        seen.add(name)
        deps: Set[str] = set()
        for d in identifier_names(self.continuous[name]):
            deps |= self.terminal_dependencies(d, seen)
        return deps

    def expanded_dependencies_of_expr(self, expr_node) -> Set[str]:
        deps: Set[str] = set()
        for d in identifier_names(expr_node):
            deps |= self.terminal_dependencies(d)
        return deps

    def combinational_graph(self) -> nx.DiGraph:
        g = nx.DiGraph()
        for dst, expr in self.continuous.items():
            g.add_node(dst)
            for src in identifier_names(expr):
                g.add_edge(src, dst)
        return g

    def register_graph(self) -> nx.DiGraph:
        g = nx.DiGraph()
        g.add_nodes_from(sorted(self.registers))

        # Use the original AST nodes again so guard dependencies are also visible.
        for u in self.guarded_updates:
            deps = set(u.rhs_ids)
            # The guard can also contain state dependencies.
            # We use a small textual fallback by parsing known signal names.
            deps |= {n for n in (self.registers | self.inputs | set(self.continuous))
                     if n in u.guard}
            terminals: Set[str] = set()
            for d in deps:
                terminals |= self.terminal_dependencies(d)
            for src in terminals:
                if src in self.registers:
                    g.add_edge(src, u.target)
        return g

    def summary(self) -> dict:
        rg = self.register_graph()
        weak = [sorted(c) for c in nx.weakly_connected_components(rg)]
        weak.sort(key=len, reverse=True)
        return {
            "file": self.filename,
            "inputs": sorted(self.inputs),
            "outputs": sorted(self.outputs),
            "registers": sorted(self.registers),
            "n_continuous_assignments": len(self.continuous),
            "n_always_blocks": len(self.always_nodes),
            "register_clusters": weak,
        }

    def dump_updates(self):
        by_reg: Dict[str, List[GuardedUpdate]] = {}
        for u in self.guarded_updates:
            by_reg.setdefault(u.target, []).append(u)

        for r in sorted(by_reg):
            print(f"\n=== {r} ===")
            for u in by_reg[r]:
                print(f"  if {u.guard}")
                print(f"      {r} <= {u.rhs}")

                expanded: Set[str] = set()
                for d in u.rhs_ids:
                    expanded |= self.terminal_dependencies(d)
                print("      terminal deps:", ", ".join(sorted(expanded)))


def write_dot(g: nx.DiGraph, path: str):
    with open(path, "w") as f:
        f.write("digraph G {\n")
        for n in g.nodes:
            f.write(f'  "{n}";\n')
        for a, b in g.edges:
            f.write(f'  "{a}" -> "{b}";\n')
        f.write("}\n")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("verilog")
    ap.add_argument("--updates", action="store_true", help="print guarded register updates")
    ap.add_argument("--json", dest="json_out")
    ap.add_argument("--comb-dot")
    ap.add_argument("--reg-dot")
    args = ap.parse_args()

    ir = NetlistIR(args.verilog)
    s = ir.summary()

    print("file:", s["file"])
    print("inputs:", ", ".join(s["inputs"]))
    print("outputs:", ", ".join(s["outputs"]))
    print(f"continuous assignments: {s['n_continuous_assignments']}")
    print(f"always blocks: {s['n_always_blocks']}")
    print(f"sequential registers: {len(s['registers'])}")
    print("\nregister clusters (largest first):")
    for c in s["register_clusters"]:
        print(f"  {len(c):3d}: " + ", ".join(c))

    if args.updates:
        ir.dump_updates()

    if args.json_out:
        Path(args.json_out).write_text(json.dumps(s, indent=2))

    if args.comb_dot:
        write_dot(ir.combinational_graph(), args.comb_dot)
    if args.reg_dot:
        write_dot(ir.register_graph(), args.reg_dot)


if __name__ == "__main__":
    main()
