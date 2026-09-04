OBJ=obj_dir
DUT       ?= puzzle
IN_VEC  = $(shell if [ $(IN_WIDTH) -gt 64 ]; then echo 1; else echo 0; fi)

FLAGS=+1364-2005ext+v --trace -cc
VERILATOR ?= /usr/share/verilator
VERILATOR_INCLUDE=${VERILATOR}/include
INCLUDES=$(shell find * -type d -printf ' -I%p')

.SECONDARY:

${OBJ}/V%.cpp: %.v
	verilator ${FLAGS} ${INCLUDES} --top-module $* $<

${OBJ}/V%__ALL.a: ${OBJ}/V%.cpp
	make -C ${OBJ} -f V$*.mk

V%: %.cpp ${OBJ}/V%__ALL.a
	echo '#include "V$*.h"' > module.h
	g++ -std=c++20 -DMODULE=$@ -I${VERILATOR_INCLUDE} -I ${OBJ} ${VERILATOR_INCLUDE}/verilated.cpp ${VERILATOR_INCLUDE}/verilated_vcd_c.cpp $< $(word 2,$^) -o $@

%.clean:
	rm -rf ${OBJ} $*.vcd V$* module.h
