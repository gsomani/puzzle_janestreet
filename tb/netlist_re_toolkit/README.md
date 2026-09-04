# Netlist reverse-engineering toolkit used for this puzzle

This is the cleaned-up, reusable version of the scripts/workflow I used while
reverse engineering your synthesized Verilog.

The important idea is to work in this order:

1. **Parse the netlist and identify real state (flip-flops).**
2. **Build dependency graphs.** Ignore most combinational net names.
3. **Look for register clusters and control phases.**
4. **Black-box suspicious combinational decoders as truth tables.**
5. **Black-box XOR-heavy register clusters and fit affine maps over GF(2).**
6. **Translate sticky/counter-gated register banks into semantic constraints.**
7. **Solve those constraints independently.**
8. **Black-box the output stage and fit another affine transform.**
9. **Only after the semantics are known, rewrite the Verilog.**

## Dependencies

For structural parsing:

```bash
python3 -m pip install pyverilog networkx sympy
```

For the black-box discovery scripts:

```bash
sudo apt install iverilog
```

The black-box scripts deliberately use Icarus Verilog instead of trying to
write a complete Verilog interpreter in Python. That keeps the Python analysis
small and makes the *netlist itself* the ground truth.

## Files

### `verilog_ir.py`

Parses a flattened Verilog file and extracts:

- inputs/outputs
- continuous assignment graph
- nonblocking assignments / sequential registers
- guarded register updates
- combinational graph
- register dependency graph
- weakly connected register clusters

Example:

```bash
python3 verilog_ir.py puzzle_readable_combined.v \
    --updates \
    --comb-dot comb.dot \
    --reg-dot regs.dot

dot -Tsvg regs.dot > regs.svg
```

The register graph is the useful one. A dense XOR-heavy 8-register cluster is
what made the LFSR block stand out.

### `find_semantic_candidates.py`

Heuristically prints:

- self-dependent registers
- register clusters
- XOR/XNOR-heavy updates
- counter-position-gated registers
- combinational nets depending only on counters

```bash
python3 find_semantic_candidates.py puzzle_readable_combined.v
```

This is not a magic semantic decompiler; it tells you where to look.

### `extract_region_map.py`

Runs the raw `counter_control1` and samples its internal combinational `state`
for all 11x11 reachable counter positions:

```bash
python3 extract_region_map.py output2.v
```

That turns a huge decoder into a 2D table. In this design the table is the
irregular Star Battle region map.

### `gf2_affine.py`

Generic GF(2) affine-map fitter. Given a black-box function `F(state,input)`, it
recovers

```
state_next = A state XOR B input XOR c
```

from basis-vector evaluations and can verify the fit exhaustively.

It also computes the characteristic polynomial and an orbit period.

```bash
python3 gf2_affine.py
```

For this puzzle it prints the characteristic polynomial

```
x^8 + x^4 + x^3 + x^2 + 1
```

or `0x11D`, with period 255.

### `discover_lfsr.py`

This is the most important automatic discovery script.

It takes the **raw puzzle netlist**, repeatedly resets it, deposits each of the
256 possible values into the candidate eight-register cluster, clocks one
active input bit, and observes the next value for both `I=0` and `I=1`.

It then fits and exhaustively verifies the GF(2) affine transition.

```bash
python3 discover_lfsr.py puzzle_readable_combined.v
```

For this design it recovers exactly

```verilog
s_next = {
    s[6:0],
    I ^ s[7] ^ s[5] ^ s[4] ^ s[3]
};
```

This is much more reliable than manually simplifying the synthesized XOR/XNOR
expressions.

### `star_battle_recovered_solver.py`

Once the checker register banks were interpreted as:

- exactly 2 per row
- exactly 2 per column
- exactly 2 per region
- no touching stars

this independent DFS solver checks the hypothesis.

```bash
python3 star_battle_recovered_solver.py
```

It produces one solution, computes the LFSR final value `0x65`, and decodes the
message.

### `discover_output_affine.py`

Feeds the unique valid input to the original design, enters the genuine success
output phase, then deposits all 256 possible LFSR states at every output byte
position and samples `O` without clocking.

It fits `O(state)` over GF(2) for every output count.

```bash
python3 discover_output_affine.py puzzle_readable_combined.v
```

For this puzzle it shows that the linear part is the identity at each output
position:

```
O = lfsr XOR mask[output_count]
```

and recovers the 15 mask bytes.

## Recommended workflow on a new netlist

Start with:

```bash
python3 verilog_ir.py design.v --updates --reg-dot regs.dot
python3 find_semantic_candidates.py design.v
```

Then inspect `regs.dot`. Ask these questions in this order:

1. Which registers are counters?
2. Which registers only latch an event (`q <= q | condition`)?
3. Which registers shift data from one another?
4. Which cluster is XOR/XNOR-heavy?
5. Which signals depend only on address/counter-like registers?
6. Are there distinct phases controlled by `done`, `enable`, output count, etc.?

For a suspicious combinational decoder, **enumerate it** instead of simplifying
it symbolically. For a suspicious XOR-heavy sequential cluster, **fit it over
GF(2)** instead of staring at gates.

## What was manual vs automatic here

The following were automatic / exhaustive:

- identification of sequential register sets and dependencies
- dumping the 11x11 `state` truth table
- fitting and proving the 8-bit affine GF(2) recurrence over all 512
  `(state,I)` combinations
- characteristic polynomial / period calculation
- solving all Star Battle solutions
- proving uniqueness of the recovered grid
- calculating the final LFSR value
- fitting the successful output bytes as affine functions of the LFSR state

The semantic leap from the checker register patterns to “this is a two-star
Star Battle” was human pattern recognition. The solver was then used to verify
that hypothesis rather than trust it.

That distinction is important: a good reverse-engineering workflow alternates
**hypothesis generation** and **exhaustive/formal verification**.
