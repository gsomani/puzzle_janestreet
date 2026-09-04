import re

pattern = r"assign\s*(.*?)\s*=\s*(\(counter_output\[\d+(?::\d)?\]\s(?:!|=)=\s*\d+\));"

f = open("counter_control1.v","r")
of = open("output2.v","w")

text = f.read()
a = []

for match in re.finditer(pattern, text, re.VERBOSE):
    lhs = match.group(1)
    rhs = match.group(2)
    a.append([lhs,rhs])

for lhs,rhs in a:
   s = f"wire {lhs};"
   text = text.replace(s, "\n")
   text = text.replace(lhs, rhs) 
   text = text.replace(f"assign {rhs} = {rhs};", "\n")

text = re.sub(r"//.*", "", text)

of.write(text)
