#!/usr/bin/env python3
"""Small GF(2) utilities for reverse engineering state machines.

A surprisingly large amount of synthesized XOR/XNOR logic is an affine map

    x_next = A*x XOR B*u XOR c

This module recovers A, B and c from a black-box transition function and then
verifies the fit exhaustively for small blocks.
"""

from __future__ import annotations

from typing import Callable, Iterable, List, Sequence, Tuple


def parity(x: int) -> int:
    return x.bit_count() & 1


def apply_columns(columns: Sequence[int], x: int) -> int:
    y = 0
    i = 0
    while x:
        if x & 1:
            y ^= columns[i]
        x >>= 1
        i += 1
    return y


def fit_affine(
    n_state: int,
    n_input: int,
    f: Callable[[int, int], int],
) -> Tuple[List[int], List[int], int]:
    """Recover x' = A*x xor B*u xor c.

    A and B are returned as lists of integer columns.
    """
    c = f(0, 0)
    A = [f(1 << i, 0) ^ c for i in range(n_state)]
    B = [f(0, 1 << i) ^ c for i in range(n_input)]
    return A, B, c


def eval_affine(A: Sequence[int], B: Sequence[int], c: int, x: int, u: int) -> int:
    return apply_columns(A, x) ^ apply_columns(B, u) ^ c


def verify_affine(
    n_state: int,
    n_input: int,
    f: Callable[[int, int], int],
    A: Sequence[int],
    B: Sequence[int],
    c: int,
) -> bool:
    for x in range(1 << n_state):
        for u in range(1 << n_input):
            if f(x, u) != eval_affine(A, B, c, x, u):
                return False
    return True


def matrix_rows_from_columns(columns: Sequence[int], n: int) -> List[List[int]]:
    return [[(columns[j] >> i) & 1 for j in range(n)] for i in range(n)]


def characteristic_polynomial_bits(columns: Sequence[int], n: int) -> List[int]:
    """Return coefficients of det(xI-A), highest degree first, modulo 2."""
    try:
        import sympy as sp
    except ImportError as e:
        raise RuntimeError("sympy is required for characteristic_polynomial_bits") from e

    M = sp.Matrix(matrix_rows_from_columns(columns, n))
    coeffs = M.charpoly().all_coeffs()
    return [int(c) & 1 for c in coeffs]


def polynomial_to_string(coeffs: Sequence[int]) -> str:
    n = len(coeffs) - 1
    terms = []
    for i, c in enumerate(coeffs):
        if not c:
            continue
        p = n - i
        if p == 0:
            terms.append("1")
        elif p == 1:
            terms.append("x")
        else:
            terms.append(f"x^{p}")
    return " + ".join(terms) if terms else "0"


def polynomial_to_int(coeffs: Sequence[int]) -> int:
    v = 0
    for c in coeffs:
        v = (v << 1) | (c & 1)
    return v


def orbit_period(columns: Sequence[int], seed: int, max_steps: int = 1_000_000) -> int:
    if seed == 0:
        return 1
    x = seed
    for k in range(1, max_steps + 1):
        x = apply_columns(columns, x)
        if x == seed:
            return k
    raise RuntimeError("period not found within max_steps")


def equation_for_output_bit(A: Sequence[int], B: Sequence[int], c: int, bit: int,
                            state_name="s", input_name="u") -> str:
    terms = []
    for i, col in enumerate(A):
        if (col >> bit) & 1:
            terms.append(f"{state_name}[{i}]")
    for i, col in enumerate(B):
        if (col >> bit) & 1:
            terms.append(f"{input_name}[{i}]")
    if (c >> bit) & 1:
        terms.append("1")
    return " ^ ".join(terms) if terms else "0"


def print_affine(A: Sequence[int], B: Sequence[int], c: int, n: int):
    for bit in range(n):
        print(f"s_next[{bit}] = {equation_for_output_bit(A, B, c, bit)}")


if __name__ == "__main__":
    # Demonstration using the recurrence recovered from the puzzle.
    def recovered_step(s: int, u: int) -> int:
        fb = (u & 1) ^ ((s >> 7) & 1) ^ ((s >> 5) & 1) ^ ((s >> 4) & 1) ^ ((s >> 3) & 1)
        return ((s << 1) & 0xFF) | fb

    A, B, c = fit_affine(8, 1, recovered_step)
    assert verify_affine(8, 1, recovered_step, A, B, c)
    print_affine(A, B, c, 8)
    coeffs = characteristic_polynomial_bits(A, 8)
    print("char poly:", polynomial_to_string(coeffs))
    print(f"poly bits: 0x{polynomial_to_int(coeffs):X}")
    print("period(seed=1):", orbit_period(A, 1))
