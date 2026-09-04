#!/usr/bin/env python3
"""Solve the semantic puzzle recovered from the synthesized checker.

The checker semantics found by examining the guarded state updates are:
  * 11x11 grid
  * exactly two stars per row
  * exactly two stars per column
  * exactly two stars per irregular region
  * no two stars touch horizontally, vertically, or diagonally

The REGION table is obtained automatically with extract_region_map.py.
"""

from itertools import combinations

N = 11

REGION = [
    [5, 5, 5, 5, 5, 2, 2, 12, 4, 4, 10],
    [5, 5, 0, 5, 5, 2, 12, 12, 4, 4, 10],
    [5, 5, 0, 2, 2, 2, 2, 12, 12, 4, 10],
    [5, 5, 0, 2, 8, 8, 8, 10, 12, 12, 10],
    [0, 5, 0, 2, 8, 10, 10, 10, 10, 10, 10],
    [0, 0, 0, 2, 8, 8, 8, 10, 1, 1, 1],
    [2, 2, 2, 2, 2, 2, 2, 13, 1, 3, 3],
    [2, 13, 13, 13, 8, 8, 8, 10, 1, 3, 3],
    [2, 13, 13, 9, 10, 10, 10, 10, 1, 3, 3],
    [2, 2, 13, 9, 9, 10, 0, 0, 1, 1, 1],
    [2, 13, 13, 9, 10, 10, 10, 10, 10, 10, 10],
]

REGION_IDS = sorted({x for row in REGION for x in row})


def solve_all():
    row_options = []
    for r in range(N):
        opts = []
        for c1, c2 in combinations(range(N), 2):
            # Horizontal adjacency forbidden.
            if c2 == c1 + 1:
                continue
            opts.append((c1, c2, REGION[r][c1], REGION[r][c2]))
        row_options.append(opts)

    col_count = [0] * N
    reg_count = {rid: 0 for rid in REGION_IDS}
    chosen = []
    solutions = []

    def dfs(r):
        if r == N:
            if all(x == 2 for x in col_count) and all(reg_count[x] == 2 for x in REGION_IDS):
                solutions.append(tuple(chosen))
            return

        prev = chosen[-1] if chosen else ()

        for c1, c2, g1, g2 in row_options[r]:
            # No vertical/diagonal touching to previous row.
            if prev and any(abs(c - p) <= 1 for c in (c1, c2) for p in prev):
                continue
            if col_count[c1] >= 2 or col_count[c2] >= 2:
                continue
            if g1 == g2:
                if reg_count[g1] + 2 > 2:
                    continue
            else:
                if reg_count[g1] >= 2 or reg_count[g2] >= 2:
                    continue

            col_count[c1] += 1
            col_count[c2] += 1
            reg_count[g1] += 1
            reg_count[g2] += 1
            chosen.append((c1, c2))

            remaining_rows = N - r - 1
            if all(v <= 2 and v + remaining_rows >= 2 for v in col_count):
                dfs(r + 1)

            chosen.pop()
            reg_count[g1] -= 1
            reg_count[g2] -= 1
            col_count[c1] -= 1
            col_count[c2] -= 1

    dfs(0)
    return solutions


def grid_from_solution(sol):
    grid = [[0] * N for _ in range(N)]
    for r, (c1, c2) in enumerate(sol):
        grid[r][c1] = 1
        grid[r][c2] = 1
    return grid


def lfsr_step(state, bit_in):
    fb = bit_in ^ ((state >> 7) & 1) ^ ((state >> 5) & 1) ^ ((state >> 4) & 1) ^ ((state >> 3) & 1)
    return ((state << 1) & 0xFF) | fb


def lfsr_step_byte(state):
    for _ in range(8):
        state = lfsr_step(state, 0)
    return state


OUTPUT_MASK = [
    0x4D, 0xAD, 0xFB, 0x83, 0x13,
    0x79, 0x1C, 0xB5, 0x79, 0x63,
    0xC7, 0x68, 0x93, 0xF5, 0x8F,
]


def checksum(grid):
    state = 0xA5
    for row in grid:
        for bit in row:
            state = lfsr_step(state, bit)
    return state


def success_message(final_state):
    chars = []
    state = final_state
    for mask in OUTPUT_MASK:
        chars.append(chr(state ^ mask))
        state = lfsr_step_byte(state)
    return ''.join(chars)


def main():
    sols = solve_all()
    print(f"number of valid grids: {len(sols)}")
    for n, sol in enumerate(sols, 1):
        grid = grid_from_solution(sol)
        print(f"\nsolution {n}:")
        for row in grid:
            print(''.join('*' if x else '.' for x in row))
        s = checksum(grid)
        print(f"final LFSR state: 0x{s:02X}")
        print(f"output: {success_message(s)!r}")


if __name__ == "__main__":
    main()
