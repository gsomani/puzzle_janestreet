#!/usr/bin/env python3
"""
verilog_dep_graph.py

Extracts a module-level dependency (instantiation) graph from Verilog/SystemVerilog
source files and visualizes it.

Usage:
    python3 verilog_dep_graph.py <file_or_directory> [more files/dirs ...] [options]

Examples:
    python3 verilog_dep_graph.py ./rtl
    python3 verilog_dep_graph.py top.v cpu.v alu.v -o hierarchy.png
    python3 verilog_dep_graph.py ./rtl --dot hierarchy.dot
    python3 verilog_dep_graph.py ./rtl --root top --format svg

Notes:
    - This uses regex-based parsing, which works well on typical synthesizable RTL.
      It strips comments and strings first to avoid false positives, and recognizes
      both named (`.port(sig)`) and positional module instantiations, as well as
      parameterized instantiations (`modname #(.WIDTH(8)) inst_name (...)`).
    - Verilog keywords that look like instantiations (if/case/begin/etc.) are
      filtered out via a keyword blocklist.
    - For deep SystemVerilog (interfaces, generate blocks with complex macros,
      preprocessor-heavy code) consider a real parser (e.g. pyverilog, sv-parser)
      for higher accuracy. This script is meant to be a fast, dependency-light
      starting point.
"""

import argparse
import os
import re
import sys
from collections import defaultdict

try:
    import networkx as nx
except ImportError:
    sys.exit("This script requires networkx. Install with: pip install networkx")


# ----------------------------------------------------------------------------
# Parsing
# ----------------------------------------------------------------------------

VERILOG_KEYWORDS = {
    "if", "else", "case", "casex", "casez", "endcase", "begin", "end",
    "always", "always_ff", "always_comb", "always_latch", "initial",
    "for", "while", "repeat", "forever", "function", "endfunction",
    "task", "endtask", "generate", "endgenerate", "genvar", "assign",
    "module", "endmodule", "input", "output", "inout", "wire", "reg",
    "logic", "parameter", "localparam", "integer", "real", "time",
    "signed", "unsigned", "posedge", "negedge", "or", "and", "not",
    "nand", "nor", "xor", "xnor", "buf", "bufif0", "bufif1", "notif0",
    "notif1", "pullup", "pulldown", "wait", "fork", "join", "disable",
    "force", "release", "deassign", "specify", "endspecify", "table",
    "endtable", "primitive", "endprimitive", "package", "endpackage",
    "interface", "endinterface", "class", "endclass", "program",
    "endprogram", "typedef", "struct", "union", "enum",
}

# Strip //, /* */ comments and string literals so they don't confuse parsing.
_COMMENT_STRING_RE = re.compile(
    r'//.*?$|/\*.*?\*/|"(?:\\.|[^"\\])*"',
    re.MULTILINE | re.DOTALL,
)

# module <name> ... ( ... ) ... ; ... endmodule
_MODULE_RE = re.compile(
    r'\bmodule\s+(\w+)\b(.*?)\bendmodule\b',
    re.DOTALL,
)

_IDENT_RE = re.compile(r'[A-Za-z_]\w*')


def _skip_ws(s, i):
    n = len(s)
    while i < n and s[i].isspace():
        i += 1
    return i


def _skip_balanced(s, i, open_ch, close_ch):
    """s[i] must be open_ch. Returns index just past the matching close_ch."""
    depth = 0
    n = len(s)
    while i < n:
        if s[i] == open_ch:
            depth += 1
        elif s[i] == close_ch:
            depth -= 1
            if depth == 0:
                return i + 1
        i += 1
    return i  # unbalanced (malformed source) - just stop here


def find_instantiations(body):
    """Find (module_type, instance_name) pairs in a module body using a
    paren-depth-aware scan, so nested port-connection parens like
    '.clk(clk)' never get misread as separate instantiations."""
    results = []
    i, n = 0, len(body)
    while i < n:
        m = _IDENT_RE.match(body, i)
        if not m:
            i += 1
            continue
        mod_type = m.group(0)
        j = _skip_ws(body, m.end())

        if mod_type in VERILOG_KEYWORDS:
            i = m.end()
            continue

        # optional #( parameters )
        if j < n and body[j] == '#':
            k = _skip_ws(body, j + 1)
            if k < n and body[k] == '(':
                j = _skip_ws(body, _skip_balanced(body, k, '(', ')'))
            else:
                i = m.end()
                continue

        m2 = _IDENT_RE.match(body, j)
        if not m2:
            i = m.end()
            continue
        inst_name = m2.group(0)
        k = _skip_ws(body, m2.end())

        # optional instance array [N:0]
        if k < n and body[k] == '[':
            k = _skip_ws(body, _skip_balanced(body, k, '[', ']'))

        if k < n and body[k] == '(':
            end = _skip_balanced(body, k, '(', ')')
            after = _skip_ws(body, end)
            if after < n and body[after] == ';' and inst_name not in VERILOG_KEYWORDS:
                results.append((mod_type, inst_name))
                i = after + 1
                continue

        i = m.end()
    return results


def strip_comments_and_strings(text: str) -> str:
    def repl(m):
        s = m.group(0)
        if s.startswith("//") or s.startswith("/*"):
            return " "
        return s  # keep string contents (rare to matter here)
    return _COMMENT_STRING_RE.sub(repl, text)


def find_verilog_files(paths):
    exts = (".v", ".sv", ".vh", ".svh")
    files = []
    for p in paths:
        if os.path.isdir(p):
            for root, _, names in os.walk(p):
                for n in names:
                    if n.lower().endswith(exts):
                        files.append(os.path.join(root, n))
        elif os.path.isfile(p):
            files.append(p)
        else:
            print(f"warning: path not found, skipping: {p}", file=sys.stderr)
    return sorted(set(files))


def parse_file(path, edges, module_files, all_modules):
    """Parse a single file, updating edges (parent -> set of children),
    module_files (module -> defining file), and all_modules (set)."""
    with open(path, "r", errors="replace") as f:
        raw = f.read()
    text = strip_comments_and_strings(raw)

    for mmatch in _MODULE_RE.finditer(text):
        mod_name = mmatch.group(1)
        body = mmatch.group(2)
        all_modules.add(mod_name)
        module_files[mod_name] = path

        for mod_type, inst_name in find_instantiations(body):
            edges[mod_name].add(mod_type)


def build_graph(paths):
    files = find_verilog_files(paths)
    if not files:
        sys.exit("No Verilog files (.v/.sv/.vh/.svh) found in given paths.")

    edges = defaultdict(set)
    module_files = {}
    all_modules = set()

    for f in files:
        try:
            parse_file(f, edges, module_files, all_modules)
        except Exception as e:
            print(f"warning: failed to parse {f}: {e}", file=sys.stderr)

    G = nx.DiGraph()
    for m in all_modules:
        G.add_node(m, file=module_files.get(m, "?"))

    undefined = set()
    for parent, children in edges.items():
        for child in children:
            if child not in all_modules:
                undefined.add(child)  # likely a primitive/blackbox/external IP
            G.add_edge(parent, child)

    return G, files, undefined


# ----------------------------------------------------------------------------
# Visualization
# ----------------------------------------------------------------------------

def visualize_matplotlib(G, out_path, root=None, highlight_undefined=None):
    import matplotlib.pyplot as plt

    if root:
        nodes = nx.descendants(G, root) | {root}
        G = G.subgraph(nodes).copy()

    if len(G.nodes) == 0:
        sys.exit("Nothing to draw: graph is empty (check --root spelling?).")

    try:
        pos = nx.nx_agraph.graphviz_layout(G, prog="dot")
    except Exception:
        pos = nx.spring_layout(G, k=1.2, seed=42)

    plt.figure(figsize=(max(8, len(G.nodes) * 1.2), max(6, len(G.nodes) * 0.8)))

    undefined = highlight_undefined or set()
    node_colors = ["#f4a261" if n in undefined else "#8ecae6" for n in G.nodes]

    nx.draw_networkx_nodes(G, pos, node_color=node_colors, node_size=1800, edgecolors="#333333")
    nx.draw_networkx_labels(G, pos, font_size=9, font_weight="bold")
    nx.draw_networkx_edges(G, pos, arrowstyle="-|>", arrowsize=15, edge_color="#555555",
                            connectionstyle="arc3,rad=0.05")

    plt.axis("off")
    plt.tight_layout()
    plt.savefig(out_path, dpi=150)
    print(f"Saved image: {out_path}")


def export_dot(G, out_path):
    try:
        nx.nx_agraph.write_dot(G, out_path)
    except Exception:
        # Fallback: hand-write DOT without pygraphviz dependency
        with open(out_path, "w") as f:
            f.write("digraph G {\n  rankdir=TB;\n  node [shape=box, style=filled, fillcolor=\"#8ecae6\"];\n")
            for n in G.nodes:
                f.write(f'  "{n}";\n')
            for u, v in G.edges:
                f.write(f'  "{u}" -> "{v}";\n')
            f.write("}\n")
    print(f"Saved DOT file: {out_path}  (render with: dot -Tpng {out_path} -o out.png)")


# ----------------------------------------------------------------------------
# CLI
# ----------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description="Build and visualize a Verilog module dependency graph.")
    ap.add_argument("paths", nargs="+", help="Verilog file(s) and/or directory(ies) to scan")
    ap.add_argument("-o", "--output", default="module_graph.png", help="Image output path (png/svg/pdf)")
    ap.add_argument("--dot", help="Also export a Graphviz .dot file")
    ap.add_argument("--root", help="Only show this module and everything it depends on")
    ap.add_argument("--list", action="store_true", help="Print modules and instantiation edges instead of drawing")
    args = ap.parse_args()

    G, files, undefined = build_graph(args.paths)

    print(f"Scanned {len(files)} file(s), found {G.number_of_nodes()} module(s), "
          f"{G.number_of_edges()} instantiation edge(s).")
    if undefined:
        print(f"Note: {len(undefined)} instantiated name(s) have no local definition "
              f"(likely primitives / external IP / blackboxes): {', '.join(sorted(undefined))}")

    if args.list:
        for parent in sorted(G.nodes):
            children = sorted(G.successors(parent))
            if children:
                print(f"{parent} -> {', '.join(children)}")
            else:
                print(f"{parent} (leaf)")
        return

    if args.dot:
        export_dot(G, args.dot)

    visualize_matplotlib(G, args.output, root=args.root, highlight_undefined=undefined)


if __name__ == "__main__":
    main()
