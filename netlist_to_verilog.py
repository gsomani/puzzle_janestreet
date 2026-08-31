#!/usr/bin/env python3
"""
netlist_to_verilog.py
======================
Converts a transistor-level SPICE netlist (LVS-extracted, using the Skywater
sky130_fd_sc_hd standard cell library) into a single flattened, *behavioral*
Verilog module.

Why this works
--------------
The SPICE file has two layers:
  1. A "library" section: one `.subckt` per standard cell (nand2, a21oi, ...)
     containing the actual MOSFETs (`X...  sky130_fd_pr__pfet_01v8...`).
  2. A "design" section: one `.subckt` (here, named "puzzle") that instantiates
     those library cells to build the real circuit.

We never need to touch the transistors themselves. Each standard cell type has
a well-known, fixed boolean function (that's the entire point of a standard
cell library). So the approach is:

  1. Parse every `.subckt <name> <port list>` header to learn each cell type's
     *pin names*, in the exact order used by this file (order varies between
     extraction tools, so we don't hardcode it -- we read it).
  2. Look up the top-level design subckt (auto-detected as the one `.subckt`
     that is never instantiated by any other `.subckt`) and parse its instance
     list into (instance_name, cell_type, connected_nets) tuples.
  3. For each instance, zip its port names to its connected nets, drop the
     power/ground/body pins (VPWR/VGND/VPB/VNB), and substitute the remaining
     signal names into a hand-written boolean template for that cell type
     (see CELL_FUNCTIONS below). Sequential cells (dfxtp/dfrtp/dfstp) become
     `always` blocks instead of `assign`s.
  4. Emit one flattened Verilog module: `wire`/`reg` declarations + all the
     `assign` statements + all the `always` blocks.

This produces a cycle-accurate, simulate-able RTL model of the exact circuit
described by the SPICE file -- no Sky130 cell libraries or gate primitives
required to simulate it afterwards.

Usage
-----
    python3 netlist_to_verilog.py input.spice output.v [TOP_MODULE_NAME]

If TOP_MODULE_NAME is omitted, the script auto-detects the top by picking the
one `.subckt` that isn't instantiated anywhere else in the file.
"""

import re
import sys
from collections import Counter, defaultdict

POWER_PINS = {"VGND", "VPWR", "VPB", "VNB"}

# Cells with no logical function (decoupling caps, antenna diodes) -- their
# instances are simply dropped.
NO_LOGIC_CELLS = {"decap", "diode"}

# ---------------------------------------------------------------------------
# Boolean function templates, keyed by cell *base type* (library name with
# the "sky130_fd_sc_hd__" prefix and trailing "_<drive-strength>" suffix
# stripped, e.g. "sky130_fd_sc_hd__a21oi_2" -> "a21oi").
#
# Each entry is (output_pin_name, lambda pins_dict -> verilog_expression).
# `pins_dict` maps this cell's *pin names* (A, B, A1, B1_N, ...) to the
# already-sanitized Verilog net names actually connected to them.
#
# These match the standard Sky130 HD cell truth tables (naming convention:
# "aXXXo[i]" = AND groups of size X,X,X... then OR'd, then optionally
# inverted; "oXXXa[i]" = OR groups then AND'd, then optionally inverted;
# a trailing "b"/"bb" before the final letter, or an "_N" pin suffix, means
# that particular input is used inverted).
# ---------------------------------------------------------------------------
CELL_FUNCTIONS = {
    "inv":      ("Y", lambda p: f"~{p['A']}"),
    "buf":      ("X", lambda p: f"{p['A']}"),
    "clkbuf":   ("X", lambda p: f"{p['A']}"),

    "and2":     ("X", lambda p: f"{p['A']} & {p['B']}"),
    "and3":     ("X", lambda p: f"{p['A']} & {p['B']} & {p['C']}"),
    "and4":     ("X", lambda p: f"{p['A']} & {p['B']} & {p['C']} & {p['D']}"),
    "and2b":    ("X", lambda p: f"(~{p['A_N']}) & {p['B']}"),
    "and3b":    ("X", lambda p: f"(~{p['A_N']}) & {p['B']} & {p['C']}"),
    "and4b":    ("X", lambda p: f"(~{p['A_N']}) & {p['B']} & {p['C']} & {p['D']}"),
    "and4bb":   ("X", lambda p: f"(~{p['A_N']}) & (~{p['B_N']}) & {p['C']} & {p['D']}"),

    "or2":      ("X", lambda p: f"{p['A']} | {p['B']}"),
    "or3":      ("X", lambda p: f"{p['A']} | {p['B']} | {p['C']}"),
    "or4":      ("X", lambda p: f"{p['A']} | {p['B']} | {p['C']} | {p['D']}"),
    "or3b":     ("X", lambda p: f"{p['A']} | {p['B']} | (~{p['C_N']})"),
    "or4b":     ("X", lambda p: f"{p['A']} | {p['B']} | {p['C']} | (~{p['D_N']})"),
    "or4bb":    ("X", lambda p: f"{p['A']} | {p['B']} | (~{p['C_N']}) | (~{p['D_N']})"),

    "nand2":    ("Y", lambda p: f"~({p['A']} & {p['B']})"),
    "nand3":    ("Y", lambda p: f"~({p['A']} & {p['B']} & {p['C']})"),
    "nand4":    ("Y", lambda p: f"~({p['A']} & {p['B']} & {p['C']} & {p['D']})"),
    "nand2b":   ("Y", lambda p: f"~((~{p['A_N']}) & {p['B']})"),
    "nand3b":   ("Y", lambda p: f"~((~{p['A_N']}) & {p['B']} & {p['C']})"),

    "nor2":     ("Y", lambda p: f"~({p['A']} | {p['B']})"),
    "nor3":     ("Y", lambda p: f"~({p['A']} | {p['B']} | {p['C']})"),
    "nor4":     ("Y", lambda p: f"~({p['A']} | {p['B']} | {p['C']} | {p['D']})"),
    "nor3b":    ("Y", lambda p: f"~({p['A']} | {p['B']} | (~{p['C_N']}))"),
    "nor4b":    ("Y", lambda p: f"~({p['A']} | {p['B']} | {p['C']} | (~{p['D_N']}))"),

    "xor2":     ("X", lambda p: f"{p['A']} ^ {p['B']}"),
    "xnor2":    ("Y", lambda p: f"~({p['A']} ^ {p['B']})"),

    "a21o":     ("X", lambda p: f"({p['A1']} & {p['A2']}) | {p['B1']}"),
    "a21oi":    ("Y", lambda p: f"~(({p['A1']} & {p['A2']}) | {p['B1']})"),
    "a21bo":    ("X", lambda p: f"({p['A1']} & {p['A2']}) | (~{p['B1_N']})"),
    "a21boi":   ("Y", lambda p: f"~(({p['A1']} & {p['A2']}) | (~{p['B1_N']}))"),
    "a22o":     ("X", lambda p: f"({p['A1']} & {p['A2']}) | ({p['B1']} & {p['B2']})"),
    "a22oi":    ("Y", lambda p: f"~(({p['A1']} & {p['A2']}) | ({p['B1']} & {p['B2']}))"),
    "a31o":     ("X", lambda p: f"({p['A1']} & {p['A2']} & {p['A3']}) | {p['B1']}"),
    "a31oi":    ("Y", lambda p: f"~(({p['A1']} & {p['A2']} & {p['A3']}) | {p['B1']})"),
    "a32o":     ("X", lambda p: f"({p['A1']} & {p['A2']} & {p['A3']}) | ({p['B1']} & {p['B2']})"),
    "a41oi":    ("Y", lambda p: f"~(({p['A1']} & {p['A2']} & {p['A3']} & {p['A4']}) | {p['B1']})"),
    "a211o":    ("X", lambda p: f"({p['A1']} & {p['A2']}) | {p['B1']} | {p['C1']}"),
    "a211oi":   ("Y", lambda p: f"~(({p['A1']} & {p['A2']}) | {p['B1']} | {p['C1']})"),
    "a221o":    ("X", lambda p: f"({p['A1']} & {p['A2']}) | ({p['B1']} & {p['B2']}) | {p['C1']}"),
    "a221oi":   ("Y", lambda p: f"~(({p['A1']} & {p['A2']}) | ({p['B1']} & {p['B2']}) | {p['C1']})"),
    "a2111oi":  ("Y", lambda p: f"~(({p['A1']} & {p['A2']}) | {p['B1']} | {p['C1']} | {p['D1']})"),
    "a311o":    ("X", lambda p: f"({p['A1']} & {p['A2']} & {p['A3']}) | {p['B1']} | {p['C1']}"),

    "o21a":     ("X", lambda p: f"({p['A1']} | {p['A2']}) & {p['B1']}"),
    "o21ai":    ("Y", lambda p: f"~(({p['A1']} | {p['A2']}) & {p['B1']})"),
    "o21ba":    ("X", lambda p: f"({p['A1']} | {p['A2']}) & (~{p['B1_N']})"),
    "o21bai":   ("Y", lambda p: f"~(({p['A1']} | {p['A2']}) & (~{p['B1_N']}))"),
    "o22a":     ("X", lambda p: f"({p['A1']} | {p['A2']}) & ({p['B1']} | {p['B2']})"),
    "o22ai":    ("Y", lambda p: f"~(({p['A1']} | {p['A2']}) & ({p['B1']} | {p['B2']}))"),
    "o211a":    ("X", lambda p: f"({p['A1']} | {p['A2']}) & {p['B1']} & {p['C1']}"),
    "o211ai":   ("Y", lambda p: f"~(({p['A1']} | {p['A2']}) & {p['B1']} & {p['C1']})"),
    "o221a":    ("X", lambda p: f"({p['A1']} | {p['A2']}) & ({p['B1']} | {p['B2']}) & {p['C1']}"),
    "o311a":    ("X", lambda p: f"({p['A1']} | {p['A2']} | {p['A3']}) & {p['B1']} & {p['C1']}"),
    "o31a":     ("X", lambda p: f"({p['A1']} | {p['A2']} | {p['A3']}) & {p['B1']}"),
    "o31ai":    ("Y", lambda p: f"~(({p['A1']} | {p['A2']} | {p['A3']}) & {p['B1']})"),
    "o32a":     ("X", lambda p: f"({p['A1']} | {p['A2']} | {p['A3']}) & ({p['B1']} | {p['B2']})"),
    "o32ai":    ("Y", lambda p: f"~(({p['A1']} | {p['A2']} | {p['A3']}) & ({p['B1']} | {p['B2']}))"),
    "o2bb2a":   ("X", lambda p: f"((~{p['A1_N']}) | (~{p['A2_N']})) & ({p['B1']} | {p['B2']})"),

    "mux2":     ("X", lambda p: f"{p['S']} ? {p['A1']} : {p['A0']}"),
}

SEQUENTIAL_CELLS = {"dfxtp", "dfrtp", "dfstp"}  # handled specially, see below


def base_type(cell_type):
    """'sky130_fd_sc_hd__a21oi_2' -> 'a21oi' (strip vendor prefix + drive suffix)."""
    m = re.match(r"^sky130_fd_sc_hd__(.+)_(\d+)$", cell_type)
    if not m:
        raise ValueError(f"Unrecognized cell type naming: {cell_type}")
    return m.group(1)


def sanitize(net):
    """Turn a SPICE net name into a legal, unique Verilog identifier."""
    if net == "VGND":
        return "1'b0"
    if net == "VPWR":
        return "1'b1"
    if re.match(r"^O\[\d+\]$", net):   # keep bus bit-selects like O[3] as-is
        return net
    n = re.sub(r"[^A-Za-z0-9_]", "_", net)   # e.g. "a_281_297#" or "inst/PIN"
    if re.match(r"^[0-9]", n):
        n = "n_" + n
    return n


def parse_spice(path):
    """Join continuation lines, then split into subckt headers + bodies."""
    with open(path) as f:
        raw_lines = f.readlines()

    logical = []
    cur = ""
    for ln in raw_lines:
        ln = ln.rstrip("\n")
        if ln.startswith("+"):
            cur += " " + ln[1:].strip()
        else:
            if cur:
                logical.append(cur)
            cur = ln
    if cur:
        logical.append(cur)

    lib_ports = {}          # cell_type -> [pin names in header order]
    subckt_bodies = {}      # subckt name -> list of raw instance lines
    subckt_instantiated_types = set()  # every cell type used as an "X..." line
    cur_name = None
    for ln in logical:
        s = ln.strip()
        if s.startswith(".subckt"):
            toks = s.split()
            name = toks[1]
            lib_ports[name] = toks[2:]
            subckt_bodies[name] = []
            cur_name = name
            continue
        if s.startswith(".ends"):
            cur_name = None
            continue
        if cur_name is not None and s.startswith("X"):
            subckt_bodies[cur_name].append(s)
            subckt_instantiated_types.add(s.split()[-1])

    return lib_ports, subckt_bodies, subckt_instantiated_types


def find_top(lib_ports, subckt_instantiated_types, forced_name=None):
    if forced_name:
        return forced_name
    # The top-level design subckt is the one that's never itself instantiated.
    candidates = [n for n in lib_ports if n not in subckt_instantiated_types]
    if len(candidates) != 1:
        raise ValueError(f"Could not uniquely auto-detect top module, candidates: {candidates}")
    return candidates[0]


def parse_instances(body_lines):
    instances = []
    for ln in body_lines:
        toks = ln.split()
        inst_name = toks[0][1:]     # strip leading 'X'
        cell_type = toks[-1]
        nets = toks[1:-1]
        instances.append((inst_name, cell_type, nets))
    return instances


def collapse_clock_trees(lib_ports, instances):
    """
    Physical netlists route the clock through a tree of dedicated clock-buffer
    cells (sky130's `clkbuf_4`/`clkbuf_8`/`clkbuf_16`, inserted by clock-tree
    synthesis) so every flip-flop sees a low-skew copy. That fanout structure
    is a *layout* concern, not logic -- for an RTL model it should just be a
    single clock net feeding every flop directly.

    This function:
      1. Finds every 'clkbuf' instance and builds its (input_net -> output_net)
         edge.
      2. Finds "root" nets: nets that feed a clkbuf but aren't themselves the
         output of another clkbuf (i.e. true clock sources, generally a
         top-level port like `clk`). Each root becomes the canonical name for
         its whole downstream tree.
      3. For safety, verifies every net inside a detected tree is consumed
         *only* by another clkbuf's input pin or a flip-flop's CLK pin --
         i.e. it's really a pure clock tree and not, e.g., a buffer that also
         happens to fan out into data logic. Raises an error rather than
         silently collapsing anything it isn't sure about.
      4. Returns a new instance list with all clkbuf instances removed, and
         every net reference rewritten to its tree's root/canonical name.

    Returns: (filtered_instances, alias_map, removed_instance_names)
    """
    POWER = POWER_PINS

    clkbuf_edges = []  # (inst_name, in_net, out_net)
    net_consumers = {}  # net -> [(inst_name, cell_type, pin_name), ...]
    for inst_name, cell_type, nets in instances:
        ports = lib_ports[cell_type]
        pin2net = dict(zip(ports, nets))
        for pin, net in pin2net.items():
            if pin in POWER:
                continue
            net_consumers.setdefault(net, []).append((inst_name, cell_type, pin))
        if base_type(cell_type) == "clkbuf":
            clkbuf_edges.append((inst_name, pin2net["A"], pin2net["X"]))

    if not clkbuf_edges:
        return instances, {}, set()

    clkbuf_outs = {out for _, _, out in clkbuf_edges}
    clkbuf_ins = {inp for _, inp, _ in clkbuf_edges}
    roots = clkbuf_ins - clkbuf_outs  # true clock sources feeding the tree(s)

    children = defaultdict(list)  # net -> [(inst_name, out_net)]
    for inst_name, in_net, out_net in clkbuf_edges:
        children[in_net].append((inst_name, out_net))

    alias_map = {}          # any net inside a tree -> its root's canonical name
    removed_instances = set()

    for root in roots:
        stack = [root]
        tree_nets = {root}
        tree_insts = set()
        while stack:
            net = stack.pop()
            for inst_name, out_net in children.get(net, []):
                tree_insts.add(inst_name)
                if out_net not in tree_nets:
                    tree_nets.add(out_net)
                    stack.append(out_net)

        # Purity check: every net in this tree (except the root itself) must
        # only ever be read by another clkbuf's 'A' pin or a flop's 'CLK' pin.
        for net in tree_nets:
            for cinst, ctype, cpin in net_consumers.get(net, []):
                if cinst in tree_insts and cpin == "X":
                    continue  # the clkbuf instance driving this net
                cbt = base_type(ctype)
                is_clean = (cbt == "clkbuf" and cpin == "A") or (
                    cbt in SEQUENTIAL_CELLS and cpin == "CLK"
                )
                if not is_clean:
                    raise ValueError(
                        f"Refusing to collapse clock tree rooted at '{root}': "
                        f"net '{net}' is also read by {cinst} ({ctype}).{cpin}, "
                        f"which is not another clock buffer or a flip-flop CLK pin. "
                        f"This buffer may be doing real logic, not just clock "
                        f"distribution -- please check this instance manually."
                    )

        for net in tree_nets:
            if net != root:
                alias_map[net] = root
        removed_instances |= tree_insts

    def resub(net):
        return alias_map.get(net, net)

    filtered = []
    for inst_name, cell_type, nets in instances:
        if inst_name in removed_instances:
            continue
        filtered.append((inst_name, cell_type, [resub(n) for n in nets]))

    return filtered, alias_map, removed_instances


def build_model(lib_ports, instances):
    """Walk every instance and classify it into comb assigns / flops / ties."""
    assigns = []      # (out_net_raw, verilog_expr, comment)
    flops = []         # dicts: {type, q, d, clk, [rb|sb]}
    ties = []           # (out_net_raw, "1'b0"/"1'b1")

    for inst_name, cell_type, nets in instances:
        bt = base_type(cell_type)
        if bt in NO_LOGIC_CELLS:
            continue

        ports = lib_ports[cell_type]
        if len(ports) != len(nets):
            raise ValueError(f"Pin count mismatch on {inst_name} ({cell_type})")
        pin2net = dict(zip(ports, nets))
        logic_pins = {k: v for k, v in pin2net.items() if k not in POWER_PINS}

        if bt == "conb":  # tie-low/tie-high cell
            lo, hi = logic_pins.get("LO"), logic_pins.get("HI")
            if lo and lo not in ("VGND", "VPWR"):
                ties.append((lo, "1'b0"))
            if hi and hi not in ("VGND", "VPWR"):
                ties.append((hi, "1'b1"))
            continue

        if bt == "dfxtp":
            flops.append({"type": "dfxtp", "q": logic_pins["Q"], "d": logic_pins["D"],
                           "clk": logic_pins["CLK"]})
            continue
        if bt == "dfrtp":
            flops.append({"type": "dfrtp", "q": logic_pins["Q"], "d": logic_pins["D"],
                           "clk": logic_pins["CLK"], "rb": logic_pins["RESET_B"]})
            continue
        if bt == "dfstp":
            flops.append({"type": "dfstp", "q": logic_pins["Q"], "d": logic_pins["D"],
                           "clk": logic_pins["CLK"], "sb": logic_pins["SET_B"]})
            continue

        if bt not in CELL_FUNCTIONS:
            raise ValueError(f"No behavioral template for cell type '{bt}' (instance {inst_name})")

        out_pin, fn = CELL_FUNCTIONS[bt]
        out_net = logic_pins[out_pin]
        sanitized_pins = {k: sanitize(v) for k, v in logic_pins.items()}
        expr = fn(sanitized_pins)
        assigns.append((out_net, expr, f"{inst_name} : {cell_type}"))

    return assigns, flops, ties


def sanity_check(assigns, flops, ties):
    """Every net should have exactly one driver -- catch mistakes early."""
    comb_outs = [a[0] for a in assigns]
    flop_outs = [f["q"] for f in flops]
    tie_outs = [t[0] for t in ties]

    problems = []
    for label, lst in [("combinational", comb_outs), ("flop", flop_outs), ("tie", tie_outs)]:
        dupes = {k: v for k, v in Counter(lst).items() if v > 1}
        if dupes:
            problems.append(f"Duplicate {label} drivers: {dupes}")

    overlap = (set(comb_outs) & set(flop_outs)) | (set(comb_outs) & set(tie_outs)) | (set(flop_outs) & set(tie_outs))
    if overlap:
        problems.append(f"Nets driven by more than one category: {overlap}")

    if problems:
        raise ValueError("Netlist sanity check failed:\n" + "\n".join(problems))


def generate_verilog(top_name, top_ports, assigns, flops, ties):
    top_ports_set = set(top_ports)

    driven = set(a[0] for a in assigns) | set(f["q"] for f in flops) | set(t[0] for t in ties)
    read = set()
    # (Re-derive "read" nets just for a human-readable direction hint in comments.)
    for a in assigns:
        pass  # expressions already flattened to strings; direction inference uses `driven` only

    wire_nets = (set(a[0] for a in assigns) | set(t[0] for t in ties)) - top_ports_set
    reg_nets = set(f["q"] for f in flops) - top_ports_set

    out = []
    out.append(f"// Auto-generated behavioral Verilog for module '{top_name}',")
    out.append("// translated from a sky130_fd_sc_hd gate-level SPICE netlist by netlist_to_verilog.py.")
    out.append("// Every standard-cell instance has been replaced by its equivalent boolean/")
    out.append("// behavioral expression; no gate-level primitives or cell libraries are needed")
    out.append("// to simulate this file. Power/ground/body nets and no-op cells (decap, diode)")
    out.append("// have been stripped since they carry no logic function.")
    out.append("")
    out.append(f"module {top_name} (")
    port_decls = []
    for p in top_ports:
        direction = "output" if p in driven else "input"
        is_reg = p in reg_nets or (direction == "output" and p in [f['q'] for f in flops])
        # bus detection: O[0]..O[7] style
        port_decls.append((p, direction))
    # group bus ports like O[0..7] into O[7:0]
    bus_re = re.compile(r"^([A-Za-z_]\w*)\[(\d+)\]$")
    buses = {}
    scalars = []
    for p, d in port_decls:
        m = bus_re.match(p)
        if m:
            name, idx = m.group(1), int(m.group(2))
            buses.setdefault(name, {"dir": d, "bits": set()})
            buses[name]["bits"].add(idx)
        else:
            scalars.append((p, d))
    port_lines = []
    for p, d in scalars:
        is_reg = (d == "output") and (p in [f["q"] for f in flops])
        kw = "output reg" if is_reg else d
        port_lines.append(f"    {kw} {p}")
    for name, info in buses.items():
        hi = max(info["bits"])
        port_lines.append(f"    {info['dir']} [{hi}:0] {name}")
    out.append(",\n".join(port_lines))
    out.append(");")
    out.append("")

    out.append(f"    // ---- internal combinational nets ({len(wire_nets)}) ----")
    for n in sorted(wire_nets, key=sanitize):
        out.append(f"    wire {sanitize(n)};")
    out.append("")

    out.append(f"    // ---- internal state (flip-flop) registers ({len(reg_nets)}) ----")
    for n in sorted(reg_nets, key=sanitize):
        out.append(f"    reg {sanitize(n)};")
    out.append("")

    out.append(f"    // ---- tie-off constants ({len(ties)}) ----")
    for out_net, val in ties:
        out.append(f"    assign {sanitize(out_net)} = {val};")
    out.append("")

    out.append(f"    // ---- combinational logic ({len(assigns)} gates) ----")
    for out_net, expr, comment in assigns:
        out.append(f"    assign {sanitize(out_net)} = {expr};  // {comment}")
    out.append("")

    out.append(f"    // ---- sequential logic ({len(flops)} flip-flops) ----")
    for f in flops:
        q, d, clk = sanitize(f["q"]), sanitize(f["d"]), sanitize(f["clk"])
        if f["type"] == "dfxtp":
            out.append(f"    always @(posedge {clk}) begin")
            out.append(f"        {q} <= {d};")
            out.append("    end")
        elif f["type"] == "dfrtp":
            rb = sanitize(f["rb"])
            out.append(f"    always @(posedge {clk} or negedge {rb}) begin")
            out.append(f"        if (!{rb})")
            out.append(f"            {q} <= 1'b0;")
            out.append("        else")
            out.append(f"            {q} <= {d};")
            out.append("    end")
        elif f["type"] == "dfstp":
            sb = sanitize(f["sb"])
            out.append(f"    always @(posedge {clk} or negedge {sb}) begin")
            out.append(f"        if (!{sb})")
            out.append(f"            {q} <= 1'b1;")
            out.append("        else")
            out.append(f"            {q} <= {d};")
            out.append("    end")
        out.append("")

    out.append("endmodule")
    return "\n".join(out)


def main():
    if len(sys.argv) < 3:
        print(f"Usage: {sys.argv[0]} input.spice output.v [TOP_MODULE_NAME]")
        sys.exit(1)

    in_path, out_path = sys.argv[1], sys.argv[2]
    forced_top = sys.argv[3] if len(sys.argv) > 3 else None

    lib_ports, subckt_bodies, instantiated_types = parse_spice(in_path)
    top_name = find_top(lib_ports, instantiated_types, forced_top)
    top_ports = lib_ports[top_name]
    # top module's own power ports (VGND/VPWR) aren't logic ports -- drop them
    top_ports = [p for p in top_ports if p not in POWER_PINS]

    instances = parse_instances(subckt_bodies[top_name])

    instances, clk_alias_map, removed = collapse_clock_trees(lib_ports, instances)
    if removed:
        print(f"Collapsed {len(removed)} clock-buffer cells into "
              f"{len(set(clk_alias_map.values()))} canonical clock net(s): "
              f"{sorted(set(clk_alias_map.values()))}")

    assigns, flops, ties = build_model(lib_ports, instances)
    sanity_check(assigns, flops, ties)

    verilog = generate_verilog(top_name, top_ports, assigns, flops, ties)
    with open(out_path, "w") as f:
        f.write(verilog)

    print(f"Top module   : {top_name}")
    print(f"Instances    : {len(instances)}")
    print(f"Comb. gates  : {len(assigns)}")
    print(f"Flip-flops   : {len(flops)}")
    print(f"Tie cells    : {len(ties)}")
    print(f"Written to   : {out_path}")


if __name__ == "__main__":
    main()
