import re

TOKEN_RE = re.compile(r"1'b[01]|[A-Za-z_][A-Za-z0-9_]*|[~&|^()?:]")

class Node:
    __slots__ = ('kind', 'args')
    def __init__(self, kind, *args):
        self.kind = kind   # 'var','const','not','and','or','xor','mux'
        self.args = args

def tokenize(expr):
    return TOKEN_RE.findall(expr)

class Parser:
    def __init__(self, tokens):
        self.toks = tokens
        self.i = 0

    def peek(self):
        return self.toks[self.i] if self.i < len(self.toks) else None

    def eat(self, tok=None):
        t = self.toks[self.i]
        if tok is not None and t != tok:
            raise ValueError(f"expected {tok}, got {t} at {self.i} in {self.toks}")
        self.i += 1
        return t

    def parse(self):
        node = self.p_ternary()
        if self.i != len(self.toks):
            raise ValueError(f"trailing tokens: {self.toks[self.i:]}")
        return node

    def p_ternary(self):
        cond = self.p_or()
        if self.peek() == '?':
            self.eat('?')
            a = self.p_ternary()
            self.eat(':')
            b = self.p_ternary()
            return Node('mux', cond, a, b)
        return cond

    def p_or(self):
        node = self.p_xor()
        while self.peek() == '|':
            self.eat('|')
            node = Node('or', node, self.p_xor())
        return node

    def p_xor(self):
        node = self.p_and()
        while self.peek() == '^':
            self.eat('^')
            node = Node('xor', node, self.p_and())
        return node

    def p_and(self):
        node = self.p_unary()
        while self.peek() == '&':
            self.eat('&')
            node = Node('and', node, self.p_unary())
        return node

    def p_unary(self):
        if self.peek() == '~':
            self.eat('~')
            return Node('not', self.p_unary())
        return self.p_primary()

    def p_primary(self):
        t = self.peek()
        if t == '(':
            self.eat('(')
            node = self.p_ternary()
            self.eat(')')
            return node
        if t in ("1'b0", "1'b1"):
            self.eat()
            return Node('const', 1 if t == "1'b1" else 0)
        # identifier
        self.eat()
        return Node('var', t)

def parse_expr(expr):
    return Parser(tokenize(expr)).parse()

def sanitize(name):
    return name.replace('[', '_').replace(']', '_')

def flatten_nary(node):
    """Flatten chains of same-kind and/or into n-ary form for smaller CNF."""
    if node.kind in ('and', 'or'):
        parts = []
        for a in node.args:
            fa = flatten_nary(a)
            if fa.kind == node.kind:
                parts.extend(fa.args)
            else:
                parts.append(fa)
        return Node(node.kind, *parts)
    if node.kind == 'not':
        return Node('not', flatten_nary(node.args[0]))
    if node.kind == 'xor':
        return Node('xor', flatten_nary(node.args[0]), flatten_nary(node.args[1]))
    if node.kind == 'mux':
        return Node('mux', *[flatten_nary(a) for a in node.args])
    return node

if __name__ == '__main__':
    tests = [
        "(~inv_2_11_A) & or2_2_11_A",
        "and4_2_3_A & and4_2_3_B & and4_2_3_C & nor3_2_2_Y",
        "(I & inv_2_7_A & and3_2_10_B) | (inv_2_10_Y & and4_2_3_A)",
        "~(xor2_2_16_A ^ xor2_2_19_X)",
        "mux2_1_4_S ? mux2_1_4_A1 : mux2_1_4_A0",
        "1'b0",
        "(~or4_2_4_D) & or4_2_4_C & or4_2_4_A & or4_2_4_B",
    ]
    for t in tests:
        n = parse_expr(t)
        fn = flatten_nary(n)
        print(t, '->', fn.kind, len(fn.args) if fn.kind in ('and','or') else '')
