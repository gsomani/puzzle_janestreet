#!/usr/bin/env bash
set -euo pipefail

PUZZLE=${1:-puzzle_readable_combined.v}
COUNTER=${2:-output2.v}

python3 verilog_ir.py "$PUZZLE" --reg-dot regs.dot --comb-dot comb.dot
python3 find_semantic_candidates.py "$PUZZLE"
python3 extract_region_map.py "$COUNTER"
python3 discover_lfsr.py "$PUZZLE"
python3 star_battle_recovered_solver.py
python3 discover_output_affine.py "$PUZZLE"
