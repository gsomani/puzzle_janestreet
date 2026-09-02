"""
Decode a SAT solver's model (satisfying assignment) back into the 122-bit `I`
input sequence, and replay it through the ground-truth simulator to confirm
success=1 and see the resulting O message.

Usage once you have a solver result:
    A standard SAT solver invoked as e.g.:
        minisat puzzle_success.cnf model.txt
    or (with python-sat / pysat):
        from pysat.solvers import Cadical153
        with Cadical153(bootstrap_with=cnf_clauses) as s:
            if s.solve():
                model = s.get_model()   # list of signed ints

    `model` should be a list of ints where positive N means var N is True,
    negative N means var N is False (this is the standard DIMACS model format,
    and is also what `minisat`'s output file contains, one line of ints).

This script expects a plain-text file of the model: either
  - one line of space-separated signed integers (pysat / minisat style), or
  - the raw "SAT\\n v1 v2 -v3 ...\\n" format some solvers print to stdout.
"""
import sys
sys.path.insert(0, '/home/claude')
from sim_from_verilog import Sim

def load_varmap(path='/home/claude/puzzle_success.varmap.txt'):
    I_var = {}
    success_var = None
    with open(path) as f:
        for line in f:
            name, var = line.split()
            if name.startswith('I_'):
                I_var[int(name[2:])] = int(var)
            elif name.startswith('success_at_cycle_'):
                success_var = int(var)
    return I_var, success_var

def load_model(path):
    text = open(path).read()
    text = text.replace('SAT', ' ').replace('v', ' ')
    return {abs(int(tok)): (int(tok) > 0) for tok in text.split() if tok.lstrip('-').isdigit()}

def decode(model_path):
    I_var, success_var = load_varmap()
    model = load_model(model_path)
    T = len(I_var)
    I_seq = [1 if model.get(I_var[t], False) else 0 for t in range(T)]

    s = Sim()
    s.step(0, 0, 0)
    env = None
    for t in range(T):
        env = s.step(I_seq[t], 1, 1)
    print("Decoded I sequence (bit per cycle 0..%d):" % (T - 1))
    print(''.join(map(str, I_seq)))
    print("Re-simulated success:", s.regs['success'])
    O = 0
    for k in range(7, -1, -1):
        O = (O << 1) | env.get(f'O_{k}_', 0)
    print("Final O byte:", O, chr(O) if 32 <= O <= 126 else '(non-printable)')
    if success_var is not None:
        print("Model's claimed success var value:", model.get(success_var))

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print("usage: python3 decode_model.py <solver_model_file>")
        sys.exit(1)
    decode(sys.argv[1])
