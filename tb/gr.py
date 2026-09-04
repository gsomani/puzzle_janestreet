from pyverilog.vparser.parser import parse
from pyverilog.vparser.ast import Assign, Identifier
import networkx as nx

ast, directives = parse(["output2.v"])
import networkx as nx

def get_identifiers(node):
    signals = []

    if node is None:
        return signals

    if isinstance(node, Identifier):
        signals.append(node.name)

    for child in node.children():
        signals.extend(get_identifiers(child))

    return signals


# Create directed graph
G = nx.DiGraph()


def find_assignments(node):
    if node is None:
        return

    if isinstance(node, Assign):

        # LHS
        lhs = node.left.children()[0]

        # RHS signals
        rhs_signals = get_identifiers(node.right)

        # Add dependencies
        for signal in rhs_signals:
            G.add_edge(signal, lhs)

    for child in node.children():
        find_assignments(child)


find_assignments(ast)


print("Nodes:")
print(list(G.nodes))

print("\nEdges:")
for source, destination in G.edges:
    print(f"{source} -> {destination}")


from graphviz import Digraph

dot = Digraph("dependency")

# Add nodes
for node in G.nodes:
    s = str(node)
    dot.node(s)

#targets = ['or2_2_4_A', 'xor2_2_2_A', 'xor2_2_2_B', 'counter_11', 'xor2_2_0_X', 'xor2_2_3_B', 'xor2_2_1_X', 'xor2_2_3_A', 'xnor2_2_8_A', 'xnor2_2_8_B', 'counter_outer', 'nor2_2_8_A', 'nor2_2_0_B', 'xor2_2_1_B', 'xnor2_2_5_B', 'xor2_2_7_X', 'xnor2_2_4_A', 'xor2_2_4_X']
targets = ['or2_2_4_B']
#targets = ['or2_2_4_B', 'or2_2_0_B', 'or2_2_2_A', 'nor2_2_9_B', 'xor2_2_3_B', 'xor2_2_3_A', 'nor2_2_8_A', 'nor2_2_0_B', 'counter_11', 'xor2_2_0_X', 'xor2_2_1_X', 'counter_outer', 'xor2_2_1_B', 'xor2_2_7_X']
for target in targets:
    nodes = [target]
    countedNodes = 0
    while len(nodes) > countedNodes:
        t = nodes[countedNodes]
        for source, destination in G.edges:
            if(destination.name == t):
                if source not in nodes:
                    nodes.append(source)
            #dot.edge(source, destination.name)
        countedNodes += 1
    print(nodes)

'''
for source, destination in G.edges:
    target = "or2_2_4_A"
    if(destination.name == target):
        print(source, destination)
    dot.edge(source, destination.name)

# Generate PNG
dot.render("dependency_graph", format="png", cleanup=True)

print("Graph written to dependency_graph.png")


import matplotlib.pyplot as plt
'''
