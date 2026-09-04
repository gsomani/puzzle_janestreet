#!/usr/bin/env python3
"""
verilog_dep_graph_pyverilog.py

Module-level dependency graph extraction using pyverilog's real Verilog
parser (AST-based, not regex) + an interactive HTML graph viewer (vis.js).

Why pyverilog instead of the regex version:
    - Handles nested parens, generate blocks, macros (via preprocessing),
      and other constructs far more reliably than a hand-rolled regex.
    - Fails loudly with a real syntax error on malformed/non-standard
      Verilog instead of silently producing a wrong graph.

Install (requires internet access):
    pip install pyverilog

pyverilog also shells out to a Verilog preprocessor for `include and
`define handling. It bundles its own preprocessor (no external iverilog
needed) for basic use.

Usage:
    python3 verilog_dep_graph_pyverilog.py <file_or_directory> [more ...] [options]

Examples:
    python3 verilog_dep_graph_pyverilog.py ./rtl
    python3 verilog_dep_graph_pyverilog.py top.v cpu.v alu.v --html hierarchy.html
    python3 verilog_dep_graph_pyverilog.py ./rtl --root top --html hierarchy.html
    python3 verilog_dep_graph_pyverilog.py ./rtl -I ./rtl/include -D SIM

Outputs:
    --list         print module -> instantiated modules as text
    -o out.png     static image (matplotlib)
    --dot out.dot  Graphviz DOT file
    --html out.html  self-contained INTERACTIVE viewer (open in any browser:
                      drag nodes, zoom/pan, search, click a node to highlight
                      its neighbors). No server needed, but needs internet
                      the first time you open it (loads vis-network from a
                      CDN) unless you vendor the JS yourself.
"""

import argparse
import json
import os
import sys
from collections import defaultdict

try:
    import networkx as nx
except ImportError:
    sys.exit("This script requires networkx. Install with: pip install networkx")

try:
    from pyverilog.vparser.parser import parse as verilog_parse
except ImportError:
    sys.exit(
        "This script requires pyverilog. Install with:\n"
        "    pip install pyverilog\n"
        "(pyverilog itself depends on 'ply', which pip installs automatically.)"
    )


# ----------------------------------------------------------------------------
# File discovery
# ----------------------------------------------------------------------------

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


# ----------------------------------------------------------------------------
# AST walk: find ModuleDef and InstanceList nodes
# ----------------------------------------------------------------------------

def collect_modules_and_edges(ast):
    """Walk the pyverilog AST generically (via node.children()) so this
    keeps working even if pyverilog adds/reorders node types. We only care
    about two node classes by name: 'ModuleDef' and 'InstanceList'."""
    all_modules = set()
    edges = defaultdict(set)          # parent_module -> set of child_module
    instance_names = defaultdict(list)  # (parent, child) -> [instance names]

    def visit(node, current_module):
        cls_name = type(node).__name__

        if cls_name == "ModuleDef":
            current_module = node.name
            all_modules.add(current_module)

        elif cls_name == "InstanceList":
            child_module = node.module
            for inst in getattr(node, "instances", []) or []:
                inst_name = getattr(inst, "name", "?")
                if current_module is not None:
                    edges[current_module].add(child_module)
                    instance_names[(current_module, child_module)].append(inst_name)

        for child in node.children():
            visit(child, current_module)

    visit(ast, None)
    return all_modules, edges, instance_names


def build_graph(paths, include_dirs=None, defines=None):
    files = find_verilog_files(paths)
    if not files:
        sys.exit("No Verilog files (.v/.sv/.vh/.svh) found in given paths.")

    ast, directives = verilog_parse(
        files,
        preprocess_include=include_dirs or [],
        preprocess_define=defines or [],
    )

    all_modules, edges, instance_names = collect_modules_and_edges(ast)

    G = nx.DiGraph()
    for m in all_modules:
        G.add_node(m)

    undefined = set()
    for parent, children in edges.items():
        for child in children:
            if child not in all_modules:
                undefined.add(child)
            names = instance_names.get((parent, child), [])
            G.add_edge(parent, child, instances=names)

    return G, files, undefined


# ----------------------------------------------------------------------------
# Static visualization (matplotlib / DOT) - same as the regex-script version
# ----------------------------------------------------------------------------

def visualize_matplotlib(G, out_path, root=None, highlight_undefined=None):
    import matplotlib.pyplot as plt

    if root:
        if root not in G:
            sys.exit(f"--root '{root}' not found among parsed modules: {sorted(G.nodes)}")
        nodes = nx.descendants(G, root) | {root}
        G = G.subgraph(nodes).copy()

    if len(G.nodes) == 0:
        sys.exit("Nothing to draw: graph is empty.")

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
        with open(out_path, "w") as f:
            f.write('digraph G {\n  rankdir=TB;\n  node [shape=box, style=filled, fillcolor="#8ecae6"];\n')
            for n in G.nodes:
                f.write(f'  "{n}";\n')
            for u, v in G.edges:
                f.write(f'  "{u}" -> "{v}";\n')
            f.write("}\n")
    print(f"Saved DOT file: {out_path}")


# ----------------------------------------------------------------------------
# Interactive HTML viewer (vis-network, self-contained, no server needed)
# ----------------------------------------------------------------------------

HTML_TEMPLATE = """<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>Verilog Module Dependency Graph</title>
<script src="https://unpkg.com/vis-network@9.1.9/standalone/umd/vis-network.min.js"></script>
<style>
  html, body { margin: 0; height: 100%; font-family: -apple-system, Segoe UI, Roboto, sans-serif; }
  #toolbar {
    position: absolute; top: 10px; left: 10px; z-index: 10;
    background: white; padding: 10px 14px; border-radius: 8px;
    box-shadow: 0 2px 8px rgba(0,0,0,0.15); font-size: 14px;
  }
  #toolbar input { padding: 4px 8px; border: 1px solid #ccc; border-radius: 4px; width: 200px; }
  #network { width: 100%; height: 100vh; background: #fafafa; }
  .legend-dot { display:inline-block; width:10px; height:10px; border-radius:50%; margin-right:4px; }
</style>
</head>
<body>
<div id="toolbar">
  <div><strong>Verilog Module Graph</strong></div>
  <div style="margin-top:6px;">
    <input type="text" id="search" placeholder="Find module...">
  </div>
  <div style="margin-top:6px; font-size:12px; color:#555;">
    <span class="legend-dot" style="background:#8ecae6;"></span> defined module
    <br>
    <span class="legend-dot" style="background:#f4a261;"></span> undefined / blackbox
    <br><br>
    Click a node to highlight its neighbors. Drag to pan, scroll to zoom.
  </div>
</div>
<div id="network"></div>
<script>
const nodesData = new vis.DataSet(__NODES_JSON__);
const edgesData = new vis.DataSet(__EDGES_JSON__);

const container = document.getElementById('network');
const data = { nodes: nodesData, edges: edgesData };
const options = {
  layout: { hierarchical: { enabled: true, direction: 'UD', sortMethod: 'directed', levelSeparation: 130, nodeSpacing: 160 } },
  nodes: {
    shape: 'box', borderWidth: 1, font: { size: 14 },
    color: { background: '#8ecae6', border: '#333333' }
  },
  edges: {
    arrows: { to: { enabled: true, scaleFactor: 0.6 } },
    color: '#888888', smooth: { type: 'cubicBezier', roundness: 0.4 }
  },
  physics: false,
  interaction: { hover: true, tooltipDelay: 100 }
};
const network = new vis.Network(container, data, options);

let allNodeIds = nodesData.getIds();

network.on('click', function (params) {
  if (params.nodes.length > 0) {
    const selected = params.nodes[0];
    const connected = new Set([selected, ...network.getConnectedNodes(selected)]);
    nodesData.update(allNodeIds.map(id => ({
      id: id,
      opacity: connected.has(id) ? 1.0 : 0.15
    })));
  } else {
    nodesData.update(allNodeIds.map(id => ({ id: id, opacity: 1.0 })));
  }
});

document.getElementById('search').addEventListener('input', function (e) {
  const term = e.target.value.trim().toLowerCase();
  if (!term) {
    nodesData.update(allNodeIds.map(id => ({ id: id, opacity: 1.0 })));
    return;
  }
  nodesData.update(allNodeIds.map(id => {
    const node = nodesData.get(id);
    const match = node.label.toLowerCase().includes(term);
    return { id: id, opacity: match ? 1.0 : 0.1 };
  }));
});
</script>
</body>
</html>
"""


def export_html(G, out_path, root=None, undefined=None):
    if root:
        if root not in G:
            sys.exit(f"--root '{root}' not found among parsed modules: {sorted(G.nodes)}")
        nodes = nx.descendants(G, root) | {root}
        G = G.subgraph(nodes).copy()

    undefined = undefined or set()

    nodes = []
    for n in G.nodes:
        nodes.append({
            "id": n,
            "label": n,
            "color": {"background": "#f4a261" if n in undefined else "#8ecae6",
                      "border": "#333333"},
        })

    edges = []
    for u, v, data in G.edges(data=True):
        instances = data.get("instances", [])
        title = f"{u} -> {v}"
        if instances:
            title += f" (instance{'s' if len(instances) > 1 else ''}: {', '.join(instances)})"
        edges.append({"from": u, "to": v, "title": title})

    html = HTML_TEMPLATE.replace("__NODES_JSON__", json.dumps(nodes))
    html = html.replace("__EDGES_JSON__", json.dumps(edges))

    with open(out_path, "w") as f:
        f.write(html)
    print(f"Saved interactive viewer: {out_path}  (open it in any browser)")


# ----------------------------------------------------------------------------
# CLI
# ----------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description="Build and visualize a Verilog module dependency graph using pyverilog.")
    ap.add_argument("paths", nargs="+", help="Verilog file(s) and/or directory(ies) to scan")
    ap.add_argument("-I", "--include", action="append", default=[], help="Include directory (repeatable)")
    ap.add_argument("-D", "--define", action="append", default=[], help="Preprocessor define, NAME or NAME=VALUE (repeatable)")
    ap.add_argument("-o", "--output", help="Static image output path (png/svg/pdf)")
    ap.add_argument("--dot", help="Export a Graphviz .dot file")
    ap.add_argument("--html", help="Export an interactive HTML viewer (recommended)")
    ap.add_argument("--root", help="Only show this module and everything it depends on")
    ap.add_argument("--list", action="store_true", help="Print modules and instantiation edges instead of drawing")
    args = ap.parse_args()

    G, files, undefined = build_graph(args.paths, include_dirs=args.include, defines=args.define)

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

    if args.dot:
        export_dot(G, args.dot)
    if args.output:
        visualize_matplotlib(G, args.output, root=args.root, highlight_undefined=undefined)
    if args.html:
        export_html(G, args.html, root=args.root, undefined=undefined)

    if not (args.list or args.dot or args.output or args.html):
        # default: produce the interactive viewer since it's the most useful
        default_path = "module_graph.html"
        export_html(G, default_path, root=args.root, undefined=undefined)


if __name__ == "__main__":
    main()
