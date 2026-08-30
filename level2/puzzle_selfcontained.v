// ============================================================
// puzzle_selfcontained.v
// Self-contained pure-Verilog version of puzzle.v
// All sky130_fd_sc_hd__* standard cells replaced with equivalent
// behavioral logic below -- no external PDK / `include files needed.
// ============================================================


// ============================================================
// Self-contained behavioral replacements for sky130_fd_sc_hd cells
// (pure Verilog -- no external PDK files required)
// ============================================================

module sky130_fd_sc_hd__buf_2 (input A, output X);
  assign X = A;
endmodule

module sky130_fd_sc_hd__clkbuf_4 (input A, output X);
  assign X = A;
endmodule

module sky130_fd_sc_hd__clkbuf_8 (input A, output X);
  assign X = A;
endmodule

module sky130_fd_sc_hd__clkbuf_16 (input A, output X);
  assign X = A;
endmodule

module sky130_fd_sc_hd__inv_2 (input A, output Y);
  assign Y = ~A;
endmodule

module sky130_fd_sc_hd__conb_1 (output HI, output LO);
  assign HI = 1'b1;
  assign LO = 1'b0;
endmodule

module sky130_fd_sc_hd__diode_2 (input DIODE);
  // antenna-protection cell: no logic function
endmodule

module sky130_fd_sc_hd__and2_2 (input A, input B, output X);
  assign X = A & B;
endmodule

module sky130_fd_sc_hd__and2b_2 (input A_N, input B, output X);
  assign X = (~A_N) & B;
endmodule

module sky130_fd_sc_hd__and3_2 (input A, input B, input C, output X);
  assign X = A & B & C;
endmodule

module sky130_fd_sc_hd__and3b_2 (input A_N, input B, input C, output X);
  assign X = (~A_N) & B & C;
endmodule

module sky130_fd_sc_hd__and4_2 (input A, input B, input C, input D, output X);
  assign X = A & B & C & D;
endmodule

module sky130_fd_sc_hd__and4b_2 (input A_N, input B, input C, input D, output X);
  assign X = (~A_N) & B & C & D;
endmodule

module sky130_fd_sc_hd__and4bb_2 (input A_N, input B_N, input C, input D, output X);
  assign X = (~A_N) & (~B_N) & C & D;
endmodule

module sky130_fd_sc_hd__or2_2 (input A, input B, output X);
  assign X = A | B;
endmodule

module sky130_fd_sc_hd__or3_2 (input A, input B, input C, output X);
  assign X = A | B | C;
endmodule

module sky130_fd_sc_hd__or3b_2 (input A, input B, input C_N, output X);
  assign X = A | B | (~C_N);
endmodule

module sky130_fd_sc_hd__or4_2 (input A, input B, input C, input D, output X);
  assign X = A | B | C | D;
endmodule

module sky130_fd_sc_hd__or4b_2 (input A, input B, input C, input D_N, output X);
  assign X = A | B | C | (~D_N);
endmodule

module sky130_fd_sc_hd__or4bb_2 (input A, input B, input C_N, input D_N, output X);
  assign X = A | B | (~C_N) | (~D_N);
endmodule

module sky130_fd_sc_hd__nand2_2 (input A, input B, output Y);
  assign Y = ~(A & B);
endmodule

module sky130_fd_sc_hd__nand2b_2 (input A_N, input B, output Y);
  assign Y = ~((~A_N) & B);
endmodule

module sky130_fd_sc_hd__nand3_2 (input A, input B, input C, output Y);
  assign Y = ~(A & B & C);
endmodule

module sky130_fd_sc_hd__nand3b_2 (input A_N, input B, input C, output Y);
  assign Y = ~((~A_N) & B & C);
endmodule

module sky130_fd_sc_hd__nand4_2 (input A, input B, input C, input D, output Y);
  assign Y = ~(A & B & C & D);
endmodule

module sky130_fd_sc_hd__nor2_2 (input A, input B, output Y);
  assign Y = ~(A | B);
endmodule

module sky130_fd_sc_hd__nor3_2 (input A, input B, input C, output Y);
  assign Y = ~(A | B | C);
endmodule

module sky130_fd_sc_hd__nor3b_2 (input A, input B, input C_N, output Y);
  assign Y = ~(A | B | (~C_N));
endmodule

module sky130_fd_sc_hd__nor4_2 (input A, input B, input C, input D, output Y);
  assign Y = ~(A | B | C | D);
endmodule

module sky130_fd_sc_hd__nor4b_2 (input A, input B, input C, input D_N, output Y);
  assign Y = ~(A | B | C | (~D_N));
endmodule

module sky130_fd_sc_hd__xor2_2 (input A, input B, output X);
  assign X = A ^ B;
endmodule

module sky130_fd_sc_hd__xnor2_2 (input A, input B, output Y);
  assign Y = ~(A ^ B);
endmodule

module sky130_fd_sc_hd__mux2_1 (input S, input A0, input A1, output X);
  assign X = S ? A1 : A0;
endmodule

// ---- AND-OR / AND-OR-INVERT compounds ----

module sky130_fd_sc_hd__a21o_2 (input A1, input A2, input B1, output X);
  assign X = (A1 & A2) | B1;
endmodule

module sky130_fd_sc_hd__a21oi_2 (input A1, input A2, input B1, output Y);
  assign Y = ~((A1 & A2) | B1);
endmodule

module sky130_fd_sc_hd__a21bo_2 (input A1, input A2, input B1_N, output X);
  assign X = (A1 & A2) | (~B1_N);
endmodule

module sky130_fd_sc_hd__a21boi_2 (input A1, input A2, input B1_N, output Y);
  assign Y = ~((A1 & A2) | (~B1_N));
endmodule

module sky130_fd_sc_hd__a211o_2 (input A1, input A2, input B1, input C1, output X);
  assign X = (A1 & A2) | B1 | C1;
endmodule

module sky130_fd_sc_hd__a211oi_2 (input A1, input A2, input B1, input C1, output Y);
  assign Y = ~((A1 & A2) | B1 | C1);
endmodule

module sky130_fd_sc_hd__a22o_2 (input A1, input A2, input B1, input B2, output X);
  assign X = (A1 & A2) | (B1 & B2);
endmodule

module sky130_fd_sc_hd__a22oi_2 (input A1, input A2, input B1, input B2, output Y);
  assign Y = ~((A1 & A2) | (B1 & B2));
endmodule

module sky130_fd_sc_hd__a221o_2 (input A1, input A2, input B1, input B2, input C1, output X);
  assign X = (A1 & A2) | (B1 & B2) | C1;
endmodule

module sky130_fd_sc_hd__a221oi_2 (input A1, input A2, input B1, input B2, input C1, output Y);
  assign Y = ~((A1 & A2) | (B1 & B2) | C1);
endmodule

module sky130_fd_sc_hd__a2111oi_2 (input A1, input A2, input B1, input C1, input D1, output Y);
  assign Y = ~((A1 & A2) | B1 | C1 | D1);
endmodule

module sky130_fd_sc_hd__a31o_2 (input A1, input A2, input A3, input B1, output X);
  assign X = (A1 & A2 & A3) | B1;
endmodule

module sky130_fd_sc_hd__a31oi_2 (input A1, input A2, input A3, input B1, output Y);
  assign Y = ~((A1 & A2 & A3) | B1);
endmodule

module sky130_fd_sc_hd__a311o_2 (input A1, input A2, input A3, input B1, input C1, output X);
  assign X = (A1 & A2 & A3) | B1 | C1;
endmodule

module sky130_fd_sc_hd__a32o_2 (input A1, input A2, input A3, input B1, input B2, output X);
  assign X = (A1 & A2 & A3) | (B1 & B2);
endmodule

module sky130_fd_sc_hd__a41oi_2 (input A1, input A2, input A3, input A4, input B1, output Y);
  assign Y = ~((A1 & A2 & A3 & A4) | B1);
endmodule

// ---- OR-AND / OR-AND-INVERT compounds ----

module sky130_fd_sc_hd__o21a_2 (input A1, input A2, input B1, output X);
  assign X = (A1 | A2) & B1;
endmodule

module sky130_fd_sc_hd__o21ai_2 (input A1, input A2, input B1, output Y);
  assign Y = ~((A1 | A2) & B1);
endmodule

module sky130_fd_sc_hd__o21ba_2 (input A1, input A2, input B1_N, output X);
  assign X = (A1 | A2) & (~B1_N);
endmodule

module sky130_fd_sc_hd__o21bai_2 (input A1, input A2, input B1_N, output Y);
  assign Y = ~((A1 | A2) & (~B1_N));
endmodule

module sky130_fd_sc_hd__o211a_2 (input A1, input A2, input B1, input C1, output X);
  assign X = (A1 | A2) & B1 & C1;
endmodule

module sky130_fd_sc_hd__o211ai_2 (input A1, input A2, input B1, input C1, output Y);
  assign Y = ~((A1 | A2) & B1 & C1);
endmodule

module sky130_fd_sc_hd__o22a_2 (input A1, input A2, input B1, input B2, output X);
  assign X = (A1 | A2) & (B1 | B2);
endmodule

module sky130_fd_sc_hd__o22ai_2 (input A1, input A2, input B1, input B2, output Y);
  assign Y = ~((A1 | A2) & (B1 | B2));
endmodule

module sky130_fd_sc_hd__o221a_2 (input A1, input A2, input B1, input B2, input C1, output X);
  assign X = (A1 | A2) & (B1 | B2) & C1;
endmodule

module sky130_fd_sc_hd__o2bb2a_2 (input A1_N, input A2_N, input B1, input B2, output X);
  assign X = ((~A1_N) | (~A2_N)) & (B1 | B2);
endmodule

module sky130_fd_sc_hd__o31a_2 (input A1, input A2, input A3, input B1, output X);
  assign X = (A1 | A2 | A3) & B1;
endmodule

module sky130_fd_sc_hd__o31ai_2 (input A1, input A2, input A3, input B1, output Y);
  assign Y = ~((A1 | A2 | A3) & B1);
endmodule

module sky130_fd_sc_hd__o311a_2 (input A1, input A2, input A3, input B1, input C1, output X);
  assign X = (A1 | A2 | A3) & B1 & C1;
endmodule

module sky130_fd_sc_hd__o32a_2 (input A1, input A2, input A3, input B1, input B2, output X);
  assign X = (A1 | A2 | A3) & (B1 | B2);
endmodule

module sky130_fd_sc_hd__o32ai_2 (input A1, input A2, input A3, input B1, input B2, output Y);
  assign Y = ~((A1 | A2 | A3) & (B1 | B2));
endmodule

// ---- Sequential cells ----

module sky130_fd_sc_hd__dfxtp_2 (input CLK, input D, output reg Q);
  always @(posedge CLK) Q <= D;
endmodule

module sky130_fd_sc_hd__dfrtp_2 (input CLK, input D, input RESET_B, output reg Q);
  always @(posedge CLK or negedge RESET_B)
    if (!RESET_B) Q <= 1'b0;
    else          Q <= D;
endmodule

module sky130_fd_sc_hd__dfstp_2 (input CLK, input D, input SET_B, output reg Q);
  always @(posedge CLK or negedge SET_B)
    if (!SET_B) Q <= 1'b1;
    else        Q <= D;
endmodule

// ============================================================

// ============================================================
// Top-level module (unchanged from original netlist)
// ============================================================

module puzzle (
input I,
output [7:0]O,
input clk,
input enable,
 input rst_n,
output success
);  sky130_fd_sc_hd__nor4_2 Xnor4_2_0 (.C(or4b_2_2_C)
, .D(or4b_2_3_C)
, .Y(nor4_2_0_Y)
, .A(or4b_2_3_A)
, .B(or4b_2_3_B)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_8 (.B(or2_2_8_B)
, .X(or2_2_8_X)
, .A(or2_2_9_B)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_3 (.X(and4_2_1_A)
, .B(and2b_2_3_B)
, .A_N(nand4_2_1_C)
);
  sky130_fd_sc_hd__o31ai_2 Xo31ai_2_1 (.A1(or3_2_3_A)
, .Y(o31ai_2_1_Y)
, .B1(nor2_2_5_A)
, .A3(or2_2_2_A)
, .A2(or3_2_3_B)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_17 (.X(a31o_2_17_X)
, .B1(nand4_2_4_C)
, .A3(nand4_2_4_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_20 (.B(o31a_2_10_X)
, .X(O[3])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_12 (.B(inv_2_7_A)
, .A(I)
, .Y(o21a_2_27_A2)
, .D(nand4_2_12_D)
, .C(nand4_2_12_C)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_17 (.A(or3_2_17_A)
, .B(or3_2_17_B)
, .X(or3_2_17_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_9 (.X(a31o_2_9_X)
, .B1(nor3_2_2_A)
, .A3(and4_2_4_D)
, .A1(and4_2_3_C)
, .A2(inv_2_10_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_24 (.Y(nor3b_2_0_B)
, .A(xor2_2_16_A)
, .B(xor2_2_19_X)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_7 (.A_N(or4b_2_3_A)
, .C(or4b_2_2_C)
, .B_N(or4b_2_3_C)
, .X(nand4_2_4_D)
, .D(or4b_2_3_B)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_13 (.Y(xnor2_2_13_Y)
, .A(xor2_2_17_B)
, .B(a31o_2_15_X)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_15 (.X(dfrtp_2_8_CLK)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__nor3b_2 Xnor3b_2_2 (.C_N(nor3_2_3_B)
, .Y(nor3b_2_2_Y)
, .A(nor3_2_3_A)
, .B(nor3_2_3_C)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_1 (.X(clkbuf_8_1_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_4 (.S(mux2_1_4_S)
, .A1(or2_2_4_A)
, .A0(or3_2_4_B)
, .X(mux2_1_4_X)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_8 (.X(xor2_2_8_A)
, .B1(nor2_2_19_Y)
, .A1(xor2_2_2_A)
, .A2(a21o_2_8_A2)
);
  sky130_fd_sc_hd__a211oi_2 Xa211oi_2_0 (.A2(inv_2_9_A)
, .C1(xor2_2_11_B)
, .B1(a21oi_2_13_Y)
, .Y(dfrtp_2_43_D)
, .A1(inv_2_7_A)
);
  sky130_fd_sc_hd__nor4_2 Xnor4_2_1 (.C(or4_2_4_D)
, .D(or4_2_4_C)
, .Y(nor4_2_1_Y)
, .A(or4_2_4_B)
, .B(or4_2_4_A)
);
  sky130_fd_sc_hd__a22oi_2 Xa22oi_2_0 (.A1(or3b_2_0_A)
, .A2(inv_2_13_Y)
, .B1(or2_2_9_X)
, .B2(nand2_2_29_Y)
, .Y(a22oi_2_0_Y)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_9 (.B(or2_2_9_B)
, .X(or2_2_9_X)
, .A(or2_2_9_A)
);
  sky130_fd_sc_hd__o221a_2 Xo221a_2_0 (.B2(or4_2_0_A)
, .A2(o21ai_2_2_Y)
, .X(o221a_2_0_X)
, .B1(o21a_2_1_X)
, .C1(or4_2_0_B)
, .A1(or3_2_2_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_4 (.X(and4_2_1_D)
, .B(o21a_2_8_A1)
, .A_N(nand4_2_2_C)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_0 (.X(and4_2_0_X)
, .C(and4_2_0_C)
, .A(and4_2_0_A)
, .B(and4_2_0_B)
, .D(and4_2_0_D)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_18 (.X(a31o_2_18_X)
, .B1(nand4_2_7_C)
, .A3(nor4_2_1_Y)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_10 (.B(and3_2_10_B)
, .X(or4b_2_8_C)
, .A(and3_2_10_A)
, .C(and4_2_4_B)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_21 (.B(o31a_2_5_X)
, .X(O[4])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_13 (.B(inv_2_7_A)
, .A(I)
, .Y(o21a_2_25_A2)
, .D(nand4_2_13_D)
, .C(nand4_2_13_C)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_25 (.Y(nor2_2_46_B)
, .A(a22o_2_4_B2)
, .B(xor2_2_17_X)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_8 (.A_N(or4b_2_3_B)
, .C(or4b_2_2_C)
, .B_N(or4b_2_3_C)
, .X(nand4_2_6_D)
, .D(or4b_2_3_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_14 (.Y(xnor2_2_14_Y)
, .A(xor2_2_16_A)
, .B(xnor2_2_14_B)
);
  sky130_fd_sc_hd__nor3b_2 Xnor3b_2_3 (.C_N(nor3_2_3_C)
, .Y(nor3b_2_3_Y)
, .A(nor3_2_3_A)
, .B(nor3_2_3_B)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_2 (.X(clkbuf_8_2_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_5 (.S(xor2_2_7_A)
, .A1(mux2_1_5_A1)
, .A0(and3_2_7_X)
, .X(mux2_1_5_X)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_9 (.X(a21o_2_9_X)
, .B1(xor2_2_4_A)
, .A1(xor2_2_9_A)
, .A2(inv_2_5_A)
);
  sky130_fd_sc_hd__a211oi_2 Xa211oi_2_1 (.A2(a32o_2_3_B1)
, .C1(or4b_2_8_A)
, .B1(or4b_2_8_C)
, .Y(nor3_2_3_A)
, .A1(inv_2_22_Y)
);
  sky130_fd_sc_hd__o221a_2 Xo221a_2_1 (.B2(xnor2_2_21_Y)
, .A2(or2_2_10_X)
, .X(o221a_2_1_X)
, .B1(nor2_2_46_A)
, .C1(o21ai_2_3_Y)
, .A1(xor2_2_16_A)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_5 (.X(xor2_2_6_B)
, .B(o22ai_2_0_Y)
, .A_N(and4bb_2_0_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_0 (.B1(or4_2_0_A)
, .A2(nor2_2_3_B)
, .A1(or3_2_3_B)
, .Y(a32o_2_1_B2)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_1 (.X(and4_2_1_X)
, .C(and4_2_1_C)
, .A(and4_2_1_A)
, .B(and4_2_1_B)
, .D(and4_2_1_D)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_19 (.X(a31o_2_19_X)
, .B1(nand4_2_8_C)
, .A3(nand4_2_8_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_0 (.C1(xor2_2_4_A)
, .B1(xor2_2_9_A)
, .A2(xor2_2_0_B)
, .A1(xor2_2_7_A)
, .X(o211a_2_0_X)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_22 (.B(o31a_2_8_X)
, .X(O[5])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_11 (.B(and4_2_3_B)
, .X(and3_2_11_X)
, .A(and4_2_3_A)
, .C(inv_2_10_A)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_14 (.B(or2_2_9_B)
, .A(or2_2_8_B)
, .Y(and3_2_25_C)
, .D(or3b_2_0_A)
, .C(or2_2_9_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_9 (.A_N(or4_2_4_B)
, .C(or4_2_4_C)
, .B_N(or4_2_4_D)
, .X(nand4_2_9_D)
, .D(or4_2_4_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_15 (.Y(a22o_2_9_A1)
, .A(a22o_2_4_B2)
, .B(a22o_2_22_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_26 (.Y(nor2_2_40_A)
, .A(xnor2_2_26_A)
, .B(xnor2_2_26_B)
);
  sky130_fd_sc_hd__nor3b_2 Xnor3b_2_4 (.C_N(nor3_2_3_A)
, .Y(or3_2_17_B)
, .A(nor3_2_3_B)
, .B(nor3_2_3_C)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_3 (.X(clkbuf_8_3_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_6 (.S(inv_2_7_Y)
, .A1(inv_2_8_Y)
, .A0(inv_2_9_A)
, .X(mux2_1_6_X)
);
  sky130_fd_sc_hd__a211oi_2 Xa211oi_2_2 (.A2(or2_2_9_A)
, .C1(or2_2_8_B)
, .B1(or2_2_9_B)
, .Y(or3_2_17_A)
, .A1(or3b_2_0_A)
);
  sky130_fd_sc_hd__o221a_2 Xo221a_2_2 (.B2(o221a_2_2_B2)
, .A2(nor2_2_32_B)
, .X(o221a_2_2_X)
, .B1(nor2_2_32_Y)
, .C1(o221a_2_2_C1)
, .A1(or2_2_8_X)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_0 (.C(or4b_2_3_C)
, .A(or4b_2_3_A)
, .X(or4_2_1_C)
, .B(or4b_2_2_C)
, .D_N(or4b_2_3_B)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_6 (.X(and2b_2_6_X)
, .B(or3b_2_0_A)
, .A_N(or2_2_9_B)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_1 (.B1(or3_2_0_X)
, .A2(and3_2_0_C)
, .A1(or2_2_4_A)
, .Y(o32a_2_0_A3)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_2 (.X(inv_2_5_A)
, .C(xor2_2_0_B)
, .A(inv_2_9_A)
, .B(inv_2_7_A)
, .D(xor2_2_7_A)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_1 (.C1(nor2_2_5_A)
, .B1(or2_2_4_A)
, .A2(or2_2_2_A)
, .A1(or3_2_3_A)
, .X(or3_2_4_C)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_23 (.B(o31a_2_3_X)
, .X(O[7])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_12 (.B(and3_2_12_B)
, .X(and3_2_13_C)
, .A(and3_2_12_A)
, .C(and3_2_12_C)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_16 (.Y(xnor2_2_26_B)
, .A(xor2_2_20_A)
, .B(xor2_2_17_B)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_27 (.Y(o32a_2_2_A2)
, .A(or2_2_8_B)
, .B(and3_2_16_X)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_4 (.X(clkbuf_8_4_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_80 (.Q(nand4_2_9_C)
, .RESET_B(rst_n)
, .D(o21a_2_21_X)
, .CLK(clkbuf_8_9_X)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_7 (.S(inv_2_8_A)
, .A1(or2_2_7_X)
, .A0(mux2_1_7_A0)
, .X(mux2_1_7_X)
);
  sky130_fd_sc_hd__o2bb2a_2 Xo2bb2a_2_0 (.A1_N(or4_2_4_C)
, .X(xnor2_2_8_B)
, .A2_N(xor2_2_1_B)
, .B2(xor2_2_9_A)
, .B1(nand2_2_2_Y)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_1 (.C(or4b_2_3_C)
, .A(or4b_2_3_B)
, .X(or4_2_3_C)
, .B(or4b_2_2_C)
, .D_N(or4b_2_3_A)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_20 (.X(xor2_2_20_X)
, .B(xor2_2_20_B)
, .A(xor2_2_20_A)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_7 (.X(o31a_2_0_A1)
, .B(or2_2_9_B)
, .A_N(or2_2_9_A)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_2 (.B1(or4_2_0_A)
, .A2(o21ba_2_0_X)
, .A1(or2_2_5_A)
, .Y(a21oi_2_2_Y)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_3 (.X(and4_2_3_X)
, .C(and4_2_3_C)
, .A(and4_2_3_A)
, .B(and4_2_3_B)
, .D(nor3_2_2_Y)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_2 (.C1(or3_2_7_X)
, .B1(nor2_2_20_Y)
, .A2(a31o_2_5_X)
, .A1(o311a_2_0_X)
, .X(or4b_2_3_B)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_24 (.B(o31a_2_7_X)
, .X(O[2])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_13 (.B(and4_2_6_X)
, .X(and4b_2_3_D)
, .A(and4_2_5_X)
, .C(and3_2_13_C)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_10 (.B(inv_2_7_A)
, .X(or2_2_10_X)
, .A(or2_2_10_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_28 (.Y(xnor2_2_28_Y)
, .A(or2_2_9_A)
, .B(or3b_2_0_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_17 (.Y(xnor2_2_26_A)
, .A(xor2_2_14_B)
, .B(xor2_2_19_A)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_5 (.X(clkbuf_8_5_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_70 (.Q(o21a_2_27_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_70_D)
, .CLK(clkbuf_8_11_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_81 (.Q(success)
, .RESET_B(rst_n)
, .D(a32o_2_4_X)
, .CLK(dfxtp_2_2_CLK)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_8 (.S(inv_2_7_A)
, .A1(mux2_1_8_A1)
, .A0(mux2_1_8_A0)
, .X(mux2_1_8_X)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_2 (.C(or4b_2_2_C)
, .A(or4b_2_3_A)
, .X(or4_2_2_C)
, .B(or4b_2_3_B)
, .D_N(or4b_2_3_C)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_10 (.X(xor2_2_10_X)
, .B(and4_2_4_X)
, .A(or3_2_8_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_8 (.X(and3_2_10_B)
, .B(or3_2_8_A)
, .A_N(and4_2_3_A)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_3 (.B1(or4_2_0_B)
, .A2(or3_2_4_X)
, .A1(nand2_2_3_Y)
, .Y(or3_2_7_C)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_4 (.X(and4_2_4_X)
, .C(inv_2_10_A)
, .A(nor3_2_2_B)
, .B(and4_2_4_B)
, .D(and4_2_4_D)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_0 (.B(or2_2_4_B)
, .Y(mux2_1_4_S)
, .A_N(and3_2_0_C)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_3 (.C1(nor2_2_20_Y)
, .B1(o211ai_2_0_Y)
, .A2(a21o_2_3_X)
, .A1(xor2_2_5_X)
, .X(or4b_2_3_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_25 (.B(o31a_2_9_X)
, .X(O[0])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_14 (.B(or4_2_4_A)
, .X(xor2_2_11_B)
, .A(or4_2_4_B)
, .C(inv_2_7_A)
);
  sky130_fd_sc_hd__o211ai_2 Xo211ai_2_0 (.A1(or2_2_5_A)
, .A2(mux2_1_2_X)
, .B1(a211o_2_1_X)
, .Y(o211ai_2_0_Y)
, .C1(xor2_2_5_X)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_11 (.B(or2_2_11_B)
, .X(or2_2_11_X)
, .A(or2_2_11_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_18 (.Y(xnor2_2_18_Y)
, .A(or3_2_9_X)
, .B(xor2_2_15_X)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_6 (.X(clkbuf_8_6_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_60 (.Q(nand4_2_7_C)
, .RESET_B(rst_n)
, .D(o21a_2_19_X)
, .CLK(clkbuf_8_8_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_82 (.Q(a32o_2_3_B1)
, .RESET_B(rst_n)
, .D(a32o_2_3_X)
, .CLK(dfxtp_2_2_CLK)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_71 (.Q(nand4_2_8_C)
, .RESET_B(rst_n)
, .D(o21a_2_23_X)
, .CLK(clkbuf_8_9_X)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_9 (.S(inv_2_7_A)
, .A1(mux2_1_9_A1)
, .A0(mux2_1_9_A0)
, .X(mux2_1_9_X)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_0 (.C(or4_2_0_C)
, .A(or4_2_0_A)
, .X(or4_2_0_X)
, .B(or4_2_0_B)
, .D(or4_2_0_D)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_3 (.C(or4b_2_3_C)
, .A(or4b_2_3_A)
, .X(or4_2_5_C)
, .B(or4b_2_3_B)
, .D_N(or4b_2_2_C)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_11 (.X(xor2_2_11_X)
, .B(xor2_2_11_B)
, .A(or4_2_4_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_9 (.X(and2b_2_9_X)
, .B(and2b_2_9_B)
, .A_N(and4_2_4_X)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_0 (.X(clkbuf_4_0_X)
, .A(clkbuf_8_1_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_4 (.B1(or3_2_5_X)
, .A2(and3_2_4_B)
, .A1(and3_2_4_A)
, .Y(nor2_2_21_A)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_5 (.X(and4_2_5_X)
, .C(and4_2_5_C)
, .A(and4_2_5_A)
, .B(and4_2_5_B)
, .D(and4_2_5_D)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_1 (.B(o21a_2_4_A2)
, .Y(nand2b_2_1_Y)
, .A_N(o21a_2_4_A1)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_4 (.C1(nor2_2_20_Y)
, .B1(a221o_2_0_X)
, .A2(o21ai_2_1_Y)
, .A1(xor2_2_5_X)
, .X(or4b_2_3_C)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_15 (.B(or2_2_9_A)
, .X(o31a_2_2_A1)
, .A(or3b_2_0_A)
, .C(or2_2_9_B)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_12 (.B(or2_2_12_B)
, .X(or2_2_12_X)
, .A(or2_2_12_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_19 (.Y(xnor2_2_19_Y)
, .A(xnor2_2_21_B)
, .B(xor2_2_19_X)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_7 (.X(clkbuf_8_7_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_61 (.Q(or4_2_9_A)
, .RESET_B(rst_n)
, .D(a21o_2_18_X)
, .CLK(dfxtp_2_3_CLK)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_50 (.Q(xor2_2_19_A)
, .RESET_B(rst_n)
, .D(o22a_2_3_X)
, .CLK(clkbuf_8_7_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_83 (.Q(or2_2_11_B)
, .RESET_B(rst_n)
, .D(or2_2_11_X)
, .CLK(dfxtp_2_2_CLK)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_72 (.Q(inv_2_20_A)
, .RESET_B(rst_n)
, .D(o21a_2_26_X)
, .CLK(clkbuf_8_11_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_20 (.A(inv_2_20_A)
, .Y(or4_2_6_B)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_1 (.C(or4_2_1_C)
, .A(or4_2_1_A)
, .X(or4_2_1_X)
, .B(or4_2_1_B)
, .D(or4_2_1_D)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_4 (.C(or4_2_4_C)
, .A(or4_2_4_B)
, .X(or4_2_9_C)
, .B(or4_2_4_D)
, .D_N(or4_2_4_A)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_12 (.X(xor2_2_12_X)
, .B(o31a_2_1_X)
, .A(xor2_2_14_B)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_1 (.X(clkbuf_4_1_X)
, .A(clkbuf_8_0_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_5 (.B1(xor2_2_9_A)
, .A2(xor2_2_4_A)
, .A1(xor2_2_0_B)
, .Y(a21oi_2_5_Y)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_6 (.X(and4_2_6_X)
, .C(and4_2_6_C)
, .A(and4_2_6_A)
, .B(and4_2_6_B)
, .D(and4_2_6_D)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_2 (.B(nand4_2_1_Y)
, .Y(nand2b_2_2_Y)
, .A_N(and2b_2_3_B)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_5 (.C1(nor2_2_20_Y)
, .B1(a211o_2_0_X)
, .A2(mux2_1_3_X)
, .A1(xor2_2_5_X)
, .X(or4b_2_2_C)
);
  sky130_fd_sc_hd__a221oi_2 Xa221oi_2_0 (.B2(or4_2_4_D)
, .C1(a41oi_2_0_Y)
, .A2(inv_2_9_A)
, .A1(inv_2_7_A)
, .B1(and4_2_7_X)
, .Y(dfrtp_2_45_D)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_16 (.B(or2_2_9_A)
, .X(and3_2_16_X)
, .A(or3b_2_0_A)
, .C(or2_2_9_B)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_8 (.X(clkbuf_8_8_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_51 (.Q(xor2_2_19_B)
, .RESET_B(rst_n)
, .D(a221o_2_2_X)
, .CLK(clkbuf_8_7_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_40 (.Q(mux2_1_9_A0)
, .RESET_B(rst_n)
, .D(mux2_1_9_X)
, .CLK(clkbuf_8_5_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_73 (.Q(nand4_2_13_C)
, .RESET_B(rst_n)
, .D(o21a_2_25_X)
, .CLK(clkbuf_8_11_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_62 (.Q(inv_2_18_A)
, .RESET_B(rst_n)
, .D(o21a_2_20_X)
, .CLK(dfxtp_2_3_CLK)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_21 (.A(or2_2_8_B)
, .Y(inv_2_21_Y)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_10 (.A(inv_2_10_A)
, .Y(inv_2_10_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_0 (.Y(and3_2_1_C)
, .A(or2_2_1_X)
, .B(or3_2_0_B)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_2 (.C(or4_2_2_C)
, .A(or4_2_2_A)
, .X(or4_2_2_X)
, .B(or4_2_2_B)
, .D(or4_2_2_D)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_5 (.C(or4_2_4_D)
, .A(or4_2_4_B)
, .X(or4_2_8_C)
, .B(or4_2_4_A)
, .D_N(or4_2_4_C)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_13 (.X(xor2_2_13_X)
, .B(xor2_2_19_B)
, .A(or2_2_12_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_10 (.A_N(or4_2_4_D)
, .C(or4_2_4_A)
, .B_N(or4_2_4_C)
, .X(nand4_2_8_D)
, .D(or4_2_4_B)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_2 (.X(clkbuf_4_2_X)
, .A(clkbuf_8_4_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_6 (.B1(or3_2_5_B)
, .A2(xnor2_2_4_A)
, .A1(xor2_2_4_A)
, .Y(a21oi_2_6_Y)
);
  sky130_fd_sc_hd__and4_2 Xand4_2_7 (.X(and4_2_7_X)
, .C(or4_2_4_C)
, .A(or4_2_4_B)
, .B(or4_2_4_A)
, .D(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_3 (.B(o21a_2_8_A2)
, .Y(nand2b_2_3_Y)
, .A_N(o21a_2_8_A1)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_6 (.C1(or3_2_1_X)
, .B1(or4_2_0_B)
, .A2(or3_2_4_B)
, .A1(nand2_2_3_Y)
, .X(or3_2_7_B)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_17 (.B(inv_2_14_Y)
, .X(and3_2_17_X)
, .A(or3b_2_0_A)
, .C(and3_2_17_C)
);
  sky130_fd_sc_hd__a21bo_2 Xa21bo_2_0 (.B1_N(a32o_2_1_B2)
, .A2(or2_2_3_X)
, .X(a31o_2_5_A2)
, .A1(or3_2_0_B)
);
  sky130_fd_sc_hd__a31oi_2 Xa31oi_2_0 (.A3(nand2b_2_8_Y)
, .B1(and3b_2_0_C)
, .Y(o31a_2_0_A2)
, .A1(nor3_2_1_C)
, .A2(o32ai_2_0_B1)
);
  sky130_fd_sc_hd__o311a_2 Xo311a_2_0 (.X(o311a_2_0_X)
, .A2(or4_2_0_A)
, .A3(and3_2_0_X)
, .A1(nor2_2_26_Y)
, .B1(or4_2_0_B)
, .C1(o311a_2_0_C1)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_10 (.B1(nor2_2_6_Y)
, .A2(xor2_2_7_X)
, .A1(xor2_2_0_B)
, .Y(xor2_2_1_B)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_9 (.X(clkbuf_8_9_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_52 (.Q(or4_2_5_A)
, .RESET_B(rst_n)
, .D(a21o_2_13_X)
, .CLK(clkbuf_4_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_30 (.Q(mux2_1_8_A1)
, .RESET_B(rst_n)
, .D(mux2_1_14_X)
, .CLK(clkbuf_8_2_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_41 (.Q(a22o_2_2_A2)
, .RESET_B(rst_n)
, .D(mux2_1_13_X)
, .CLK(clkbuf_8_8_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_74 (.Q(nand4_2_12_C)
, .RESET_B(rst_n)
, .D(o21a_2_27_X)
, .CLK(clkbuf_8_11_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_63 (.Q(o21a_2_23_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_63_D)
, .CLK(clkbuf_8_9_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_11 (.A(inv_2_11_A)
, .Y(inv_2_23_A)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_22 (.A(success)
, .Y(inv_2_22_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_1 (.Y(and2_2_2_A)
, .A(xor2_2_3_A)
, .B(or2_2_0_B)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_3 (.C(or4_2_3_C)
, .A(or4_2_3_A)
, .X(or4_2_3_X)
, .B(or4_2_3_B)
, .D(or4_2_3_D)
);
  sky130_fd_sc_hd__o32a_2 Xo32a_2_0 (.B1(o32a_2_1_B2)
, .B2(nor2_2_3_Y)
, .A3(o32a_2_0_A3)
, .A2(and3_2_0_X)
, .A1(or4_2_0_A)
, .X(o32a_2_0_X)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_6 (.C(or4_2_4_C)
, .A(or4_2_4_A)
, .X(or4_2_7_C)
, .B(or4_2_4_D)
, .D_N(or4_2_4_B)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_14 (.X(xor2_2_14_X)
, .B(xor2_2_14_B)
, .A(xor2_2_16_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_11 (.A_N(or4_2_4_B)
, .C(or4_2_4_D)
, .B_N(or4_2_4_C)
, .X(nand4_2_12_D)
, .D(or4_2_4_A)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_3 (.X(clkbuf_4_3_X)
, .A(clkbuf_8_3_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_7 (.B1(and4bb_2_0_X)
, .A2(o22ai_2_0_Y)
, .A1(xor2_2_6_A)
, .Y(xor2_2_5_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_4 (.B(nand4_2_5_Y)
, .Y(nand2b_2_4_Y)
, .A_N(o21a_2_30_A1)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_7 (.C1(inv_2_5_Y)
, .B1(a31o_2_8_X)
, .A2(mux2_1_5_A1)
, .A1(and3_2_7_C)
, .X(o211a_2_7_X)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_18 (.B(o31a_2_6_X)
, .X(O[1])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__a21bo_2 Xa21bo_2_1 (.B1_N(a211o_2_2_X)
, .A2(nor2_2_5_Y)
, .X(a21o_2_3_A2)
, .A1(or4_2_0_A)
);
  sky130_fd_sc_hd__o311a_2 Xo311a_2_1 (.X(o311a_2_1_X)
, .A2(and3_2_7_C)
, .A3(mux2_1_5_A1)
, .A1(xor2_2_7_A)
, .B1(nand3_2_0_Y)
, .C1(a21o_2_9_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_11 (.B1(or3_2_8_A)
, .A2(inv_2_7_A)
, .A1(I)
, .Y(nor2_2_30_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_20 (.Q(and4_2_3_C)
, .RESET_B(rst_n)
, .D(xnor2_2_11_Y)
, .CLK(clkbuf_8_3_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_42 (.Q(mux2_1_15_A0)
, .RESET_B(rst_n)
, .D(mux2_1_15_X)
, .CLK(clkbuf_8_6_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_31 (.Q(mux2_1_19_A1)
, .RESET_B(rst_n)
, .D(mux2_1_18_X)
, .CLK(clkbuf_8_5_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_75 (.Q(nand4_2_11_C)
, .RESET_B(rst_n)
, .D(o21a_2_24_X)
, .CLK(clkbuf_8_10_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_64 (.Q(o21a_2_28_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_64_D)
, .CLK(clkbuf_8_11_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_53 (.Q(nand4_2_5_C)
, .RESET_B(rst_n)
, .D(o21a_2_30_X)
, .CLK(clkbuf_8_2_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_12 (.A(inv_2_12_A)
, .Y(inv_2_12_Y)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_23 (.A(inv_2_23_A)
, .Y(inv_2_23_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_2 (.Y(nand2_2_2_Y)
, .A(xor2_2_7_A)
, .B(xor2_2_0_B)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_4 (.C(or4_2_4_C)
, .A(or4_2_4_A)
, .X(or4_2_4_X)
, .B(or4_2_4_B)
, .D(or4_2_4_D)
);
  sky130_fd_sc_hd__o32a_2 Xo32a_2_1 (.B1(o32a_2_1_B1)
, .B2(o32a_2_1_B2)
, .A3(o32a_2_1_A3)
, .A2(and3_2_0_X)
, .A1(or4_2_0_A)
, .X(o32a_2_1_X)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_7 (.C(or4_2_4_C)
, .A(or4_2_4_B)
, .X(or4_2_6_C)
, .B(or4_2_4_A)
, .D_N(or4_2_4_D)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_15 (.X(xor2_2_15_X)
, .B(or2_2_9_X)
, .A(xor2_2_19_B)
);
  sky130_fd_sc_hd__a21boi_2 Xa21boi_2_0 (.B1_N(inv_2_7_A)
, .A2(nor2_2_40_A)
, .A1(I)
, .Y(o21ai_2_3_B1)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_12 (.A_N(or4_2_4_A)
, .C(or4_2_4_D)
, .B_N(or4_2_4_C)
, .X(nand4_2_13_D)
, .D(or4_2_4_B)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_4 (.X(clkbuf_4_4_X)
, .A(clkbuf_8_2_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_8 (.B1(or2_2_8_B)
, .A2(or2_2_9_A)
, .A1(or3b_2_0_A)
, .Y(and3b_2_0_C)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_5 (.B(o21a_2_5_A2)
, .Y(dfrtp_2_4_D)
, .A_N(o21a_2_5_A1)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_8 (.C1(inv_2_7_A)
, .B1(or2_2_7_X)
, .A2(mux2_1_7_A0)
, .A1(inv_2_8_A)
, .X(o211a_2_8_X)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_19 (.B(o31a_2_4_X)
, .X(O[6])
, .A(or2_2_11_B)
, .C(and3_2_25_C)
);
  sky130_fd_sc_hd__o22a_2 Xo22a_2_0 (.A2(mux2_1_4_S)
, .X(o22a_2_0_X)
, .B1(or2_2_4_X)
, .A1(or3_2_3_B)
, .B2(nor2_2_4_Y)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_20 (.X(and4_2_1_C)
, .B(o21a_2_30_A1)
, .A_N(nand4_2_5_C)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_12 (.B1(mux2_1_6_X)
, .A2(mux2_1_7_A0)
, .A1(inv_2_8_Y)
, .Y(dfrtp_2_29_D)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_10 (.Q(o21a_2_30_A1)
, .RESET_B(rst_n)
, .D(nand2b_2_4_Y)
, .CLK(clkbuf_8_2_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_21 (.Q(nor3_2_2_A)
, .RESET_B(rst_n)
, .D(o21a_2_12_X)
, .CLK(clkbuf_8_3_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_43 (.Q(or4_2_4_B)
, .RESET_B(rst_n)
, .D(dfrtp_2_43_D)
, .CLK(clkbuf_8_5_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_32 (.Q(mux2_1_9_A1)
, .RESET_B(rst_n)
, .D(mux2_1_17_X)
, .CLK(clkbuf_8_6_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_65 (.Q(inv_2_19_A)
, .RESET_B(rst_n)
, .D(o21a_2_22_X)
, .CLK(clkbuf_8_9_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_76 (.Q(inv_2_17_A)
, .RESET_B(rst_n)
, .D(o21a_2_29_X)
, .CLK(dfxtp_2_3_CLK)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_54 (.Q(inv_2_16_A)
, .RESET_B(rst_n)
, .D(o21a_2_17_X)
, .CLK(clkbuf_4_9_A)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_24 (.A(or4b_2_8_X)
, .Y(nor3_2_3_C)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_13 (.A(or2_2_8_B)
, .Y(inv_2_13_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_3 (.Y(nand2_2_3_Y)
, .A(or4_2_0_A)
, .B(o21a_2_3_A2)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_5 (.C(or4_2_5_C)
, .A(or4_2_5_A)
, .X(or4_2_5_X)
, .B(or4_2_5_B)
, .D(or4_2_5_D)
);
  sky130_fd_sc_hd__and4b_2 Xand4b_2_0 (.X(or3_2_6_B)
, .A_N(or2_2_8_B)
, .D(or3b_2_0_A)
, .C(or2_2_9_A)
, .B(or2_2_9_B)
);
  sky130_fd_sc_hd__nor3_2 Xnor3_2_0 (.C(or2_2_9_B)
, .Y(nor3_2_0_Y)
, .A(or3b_2_0_A)
, .B(or2_2_9_A)
);
  sky130_fd_sc_hd__o32a_2 Xo32a_2_2 (.B1(o32a_2_2_B1)
, .B2(o32a_2_2_B2)
, .A3(o32a_2_2_A3)
, .A2(o32a_2_2_A2)
, .A1(inv_2_12_Y)
, .X(o32a_2_2_X)
);
  sky130_fd_sc_hd__or4b_2 Xor4b_2_8 (.C(or4b_2_8_C)
, .A(or4b_2_8_A)
, .X(or4b_2_8_X)
, .B(success)
, .D_N(a32o_2_3_B1)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_16 (.X(xor2_2_16_X)
, .B(or2_2_12_B)
, .A(xor2_2_16_A)
);
  sky130_fd_sc_hd__a21boi_2 Xa21boi_2_1 (.B1_N(or2_2_11_B)
, .A2(xnor2_2_28_Y)
, .A1(and3_2_25_C)
, .Y(dfxtp_2_1_D)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_13 (.A_N(or4_2_4_A)
, .C(or4_2_4_C)
, .B_N(or4_2_4_D)
, .X(nand4_2_10_D)
, .D(or4_2_4_B)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_5 (.X(clkbuf_4_5_X)
, .A(clkbuf_8_5_X)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_9 (.B1(or2_2_8_B)
, .A2(or2_2_9_A)
, .A1(or3b_2_0_A)
, .Y(or3_2_6_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_6 (.B(xor2_2_4_X)
, .Y(and3_2_4_A)
, .A_N(xnor2_2_4_A)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_9 (.C1(o21ai_2_5_Y)
, .B1(o21a_2_15_A2)
, .A2(or2_2_8_X)
, .A1(or2_2_9_A)
, .X(o211a_2_9_X)
);
  sky130_fd_sc_hd__a221o_2 Xa221o_2_0 (.X(a221o_2_0_X)
, .B1(or2_2_5_X)
, .A1(or4_2_0_A)
, .B2(a21oi_2_2_Y)
, .A2(o22ai_2_1_Y)
, .C1(or3_2_7_A)
);
  sky130_fd_sc_hd__o22a_2 Xo22a_2_1 (.A2(or2_2_9_B)
, .X(or3_2_16_A)
, .B1(or3_2_6_A)
, .A1(or2_2_9_A)
, .B2(or3_2_6_B)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_30 (.A1(o21a_2_30_A1)
, .B1(a31o_2_25_X)
, .A2(nand4_2_5_Y)
, .X(o21a_2_30_X)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_10 (.X(dfrtp_2_25_D)
, .B(a21o_2_10_X)
, .A_N(and3_2_11_X)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_21 (.X(and3_2_5_C)
, .B(o21a_2_18_A1)
, .A_N(nand4_2_6_C)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_13 (.B1(or4_2_4_B)
, .A2(inv_2_7_A)
, .A1(or4_2_4_A)
, .Y(a21oi_2_13_Y)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_22 (.Q(or3_2_8_C)
, .RESET_B(rst_n)
, .D(xor2_2_10_X)
, .CLK(dfrtp_2_8_CLK)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_11 (.Q(and2b_2_3_B)
, .RESET_B(rst_n)
, .D(nand2b_2_2_Y)
, .CLK(clkbuf_8_1_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_33 (.Q(mux2_1_12_A1)
, .RESET_B(rst_n)
, .D(mux2_1_10_X)
, .CLK(clkbuf_8_2_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_66 (.Q(o21a_2_21_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_66_D)
, .CLK(clkbuf_8_10_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_77 (.Q(or4_2_7_A)
, .RESET_B(rst_n)
, .D(a21o_2_14_X)
, .CLK(clkbuf_8_9_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_55 (.Q(nand4_2_6_C)
, .RESET_B(rst_n)
, .D(o21a_2_18_X)
, .CLK(clkbuf_8_8_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_44 (.Q(or4_2_4_A)
, .RESET_B(rst_n)
, .D(nor2_2_31_Y)
, .CLK(clkbuf_8_5_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_14 (.A(or2_2_8_B)
, .Y(inv_2_14_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_4 (.Y(nor2_2_0_B)
, .A(or4_2_4_A)
, .B(xor2_2_7_A)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_6 (.C(or4_2_6_C)
, .A(or4_2_6_A)
, .X(or4_2_6_X)
, .B(or4_2_6_B)
, .D(or4_2_6_D)
);
  sky130_fd_sc_hd__and4b_2 Xand4b_2_1 (.X(nand4_2_5_D)
, .A_N(or4b_2_2_C)
, .D(or4b_2_3_A)
, .C(or4b_2_3_B)
, .B(or4b_2_3_C)
);
  sky130_fd_sc_hd__nor3_2 Xnor3_2_1 (.C(nor3_2_1_C)
, .Y(nor3_2_1_Y)
, .A(or2_2_9_B)
, .B(nor3_2_1_B)
);
  sky130_fd_sc_hd__o32a_2 Xo32a_2_3 (.B1(or2_2_10_X)
, .B2(or2_2_12_A)
, .A3(o32a_2_3_A3)
, .A2(o32a_2_3_A2)
, .A1(o32a_2_3_A1)
, .X(o32a_2_3_X)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_17 (.X(xor2_2_17_X)
, .B(xor2_2_17_B)
, .A(xor2_2_19_A)
);
  sky130_fd_sc_hd__a21boi_2 Xa21boi_2_2 (.B1_N(or2_2_11_B)
, .A2(nand3_2_1_Y)
, .A1(inv_2_21_Y)
, .Y(dfxtp_2_0_D)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_6 (.X(clkbuf_4_6_X)
, .A(clkbuf_8_6_X)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_0 (.B(or3_2_0_B)
, .X(and3_2_0_X)
, .A(or2_2_4_A)
, .C(and3_2_0_C)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_7 (.B(or3b_2_0_A)
, .Y(a21o_2_6_A2)
, .A_N(or2_2_9_B)
);
  sky130_fd_sc_hd__o22a_2 Xo22a_2_2 (.A2(and2_2_8_A)
, .X(o22a_2_2_X)
, .B1(and2_2_8_B)
, .A1(or2_2_8_B)
, .B2(nor3_2_1_B)
);
  sky130_fd_sc_hd__a221o_2 Xa221o_2_1 (.X(a221o_2_1_X)
, .B1(conb_1_2_HI)
, .A1(or4bb_2_0_X)
, .B2(mux2_1_12_A0)
, .A2(mux2_1_12_A1)
, .C1(a22o_2_2_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_20 (.A1(inv_2_18_A)
, .B1(or4_2_7_X)
, .A2(nor2_2_43_Y)
, .X(o21a_2_20_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_10 (.A(or4_2_5_A)
, .X(and3_2_5_B)
, .B(or4_2_5_B)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_11 (.X(inv_2_7_A)
, .B(enable)
, .A_N(or2_2_11_A)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_22 (.X(and3_2_5_A)
, .B(o21a_2_16_A1)
, .A_N(nand4_2_4_C)
);
  sky130_fd_sc_hd__a211o_2 Xa211o_2_0 (.X(a211o_2_0_X)
, .A2(a32o_2_1_X)
, .A1(or2_2_5_A)
, .B1(o221a_2_0_X)
, .C1(or3_2_7_A)
);
  sky130_fd_sc_hd__dfxtp_2 Xdfxtp_2_0 (.Q(or2_2_8_B)
, .CLK(dfxtp_2_3_CLK)
, .D(dfxtp_2_0_D)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_14 (.B1(or2_2_9_B)
, .A2(or2_2_8_B)
, .A1(or3b_2_0_A)
, .Y(o221a_2_2_B2)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_23 (.Q(or3_2_8_A)
, .RESET_B(rst_n)
, .D(nor2_2_30_Y)
, .CLK(dfrtp_2_8_CLK)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_12 (.Q(o21a_2_8_A1)
, .RESET_B(rst_n)
, .D(nand2b_2_3_Y)
, .CLK(clkbuf_8_1_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_34 (.Q(mux2_1_8_A0)
, .RESET_B(rst_n)
, .D(mux2_1_8_X)
, .CLK(clkbuf_8_2_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_67 (.Q(o21a_2_24_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_67_D)
, .CLK(clkbuf_8_11_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_56 (.Q(nand4_2_4_C)
, .RESET_B(rst_n)
, .D(o21a_2_16_X)
, .CLK(clkbuf_4_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_45 (.Q(or4_2_4_D)
, .RESET_B(rst_n)
, .D(dfrtp_2_45_D)
, .CLK(clkbuf_8_5_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_78 (.Q(nand4_2_10_C)
, .RESET_B(rst_n)
, .D(o21a_2_28_X)
, .CLK(clkbuf_8_10_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_15 (.A(or3b_2_0_A)
, .Y(inv_2_15_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_5 (.Y(nand2_2_5_Y)
, .A(or3_2_0_B)
, .B(or3_2_2_B)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_7 (.C(or4_2_7_C)
, .A(or4_2_7_A)
, .X(or4_2_7_X)
, .B(or4_2_7_B)
, .D(or4_2_7_D)
);
  sky130_fd_sc_hd__and4b_2 Xand4b_2_2 (.X(and4b_2_2_X)
, .A_N(or4_2_4_D)
, .D(or4_2_4_B)
, .C(or4_2_4_A)
, .B(or4_2_4_C)
);
  sky130_fd_sc_hd__buf_2 Xbuf_2_0 (.X(buf_2_0_X)
, .A(or4_2_4_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_0 (.A(or3_2_3_C)
, .Y(inv_2_0_Y)
);
  sky130_fd_sc_hd__nor3_2 Xnor3_2_2 (.C(or3_2_8_X)
, .Y(nor3_2_2_Y)
, .A(nor3_2_2_A)
, .B(nor3_2_2_B)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_18 (.X(xor2_2_18_X)
, .B(o32a_2_2_X)
, .A(xor2_2_19_A)
);
  sky130_fd_sc_hd__a21boi_2 Xa21boi_2_3 (.B1_N(or2_2_11_B)
, .A2(and3_2_25_C)
, .A1(or3b_2_0_A)
, .Y(dfxtp_2_2_D)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_7 (.X(clkbuf_4_7_X)
, .A(clkbuf_8_7_X)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_1 (.B(inv_2_4_Y)
, .X(and3_2_1_X)
, .A(or2_2_4_A)
, .C(and3_2_1_C)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_8 (.B(or2_2_9_B)
, .Y(nand2b_2_8_Y)
, .A_N(or2_2_8_B)
);
  sky130_fd_sc_hd__o22a_2 Xo22a_2_3 (.A2(or2_2_10_X)
, .X(o22a_2_3_X)
, .B1(o22a_2_3_B1)
, .A1(xor2_2_19_A)
, .B2(o22a_2_3_B2)
);
  sky130_fd_sc_hd__a221o_2 Xa221o_2_2 (.X(a221o_2_2_X)
, .B1(xor2_2_19_B)
, .A1(inv_2_7_A)
, .B2(nor2_2_39_Y)
, .A2(xor2_2_16_A)
, .C1(nor2_2_46_Y)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_21 (.A1(o21a_2_21_A1)
, .B1(a31o_2_24_X)
, .A2(nand4_2_9_Y)
, .X(o21a_2_21_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_10 (.A1(and2b_2_3_B)
, .B1(a31o_2_3_X)
, .A2(nand4_2_1_Y)
, .X(o21a_2_10_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_11 (.A(or4_2_9_A)
, .X(and4_2_6_A)
, .B(or4_2_9_B)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_23 (.X(and4_2_6_B)
, .B(o21a_2_19_A1)
, .A_N(nand4_2_7_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_12 (.X(and3_2_17_C)
, .B(or2_2_9_A)
, .A_N(or2_2_9_B)
);
  sky130_fd_sc_hd__a211o_2 Xa211o_2_1 (.X(a211o_2_1_X)
, .A2(or2_2_4_B)
, .A1(or4_2_0_A)
, .B1(mux2_1_4_X)
, .C1(or4_2_0_B)
);
  sky130_fd_sc_hd__dfxtp_2 Xdfxtp_2_1 (.Q(or2_2_9_A)
, .CLK(dfxtp_2_2_CLK)
, .D(dfxtp_2_1_D)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_15 (.B1(mux2_1_20_X)
, .A2(nor2_2_32_B)
, .A1(or2_2_8_X)
, .Y(a22o_2_21_B2)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_24 (.Q(and4_2_3_A)
, .RESET_B(rst_n)
, .D(a32o_2_2_X)
, .CLK(dfrtp_2_8_CLK)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_13 (.Q(or4_2_2_A)
, .RESET_B(rst_n)
, .D(a21o_2_1_X)
, .CLK(clkbuf_8_0_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_68 (.Q(o21a_2_25_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_68_D)
, .CLK(clkbuf_8_10_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_57 (.Q(o21a_2_19_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_57_D)
, .CLK(clkbuf_8_8_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_35 (.Q(mux2_1_16_A0)
, .RESET_B(rst_n)
, .D(mux2_1_16_X)
, .CLK(clkbuf_8_2_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_46 (.Q(or4_2_4_C)
, .RESET_B(rst_n)
, .D(xor2_2_11_X)
, .CLK(clkbuf_8_5_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_79 (.Q(or4_2_8_A)
, .RESET_B(rst_n)
, .D(a21o_2_15_X)
, .CLK(clkbuf_8_9_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_16 (.A(inv_2_16_A)
, .Y(or4_2_5_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_6 (.Y(nor2_2_5_A)
, .A(xor2_2_3_A)
, .B(or3_2_3_A)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_8 (.C(or4_2_8_C)
, .A(or4_2_8_A)
, .X(or4_2_8_X)
, .B(or4_2_8_B)
, .D(or4_2_8_D)
);
  sky130_fd_sc_hd__and4b_2 Xand4b_2_3 (.X(and4b_2_3_X)
, .A_N(or2_2_11_B)
, .D(and4b_2_3_D)
, .C(and3_2_6_X)
, .B(or2_2_11_A)
);
  sky130_fd_sc_hd__nor3_2 Xnor3_2_3 (.C(nor3_2_3_C)
, .Y(nor3_2_3_Y)
, .A(nor3_2_3_A)
, .B(nor3_2_3_B)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_1 (.A(inv_2_1_A)
, .Y(or4_2_1_B)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_19 (.X(xor2_2_19_X)
, .B(xor2_2_19_B)
, .A(xor2_2_19_A)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_8 (.X(clkbuf_4_8_X)
, .A(clkbuf_8_8_X)
);
  sky130_fd_sc_hd__or3b_2 Xor3b_2_0 (.A(or3b_2_0_A)
, .B(or2_2_9_B)
, .C_N(or2_2_9_A)
, .X(or3b_2_0_X)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_0 (.X(xor2_2_0_X)
, .B(xor2_2_0_B)
, .A(xor2_2_7_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_2 (.B(and3_2_2_B)
, .X(or3_2_5_C)
, .A(and3_2_2_A)
, .C(and3_2_2_C)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_9 (.B(or2_2_8_B)
, .Y(o32ai_2_0_B1)
, .A_N(or2_2_9_B)
);
  sky130_fd_sc_hd__a221o_2 Xa221o_2_3 (.X(o22a_2_3_B2)
, .B1(nor2_2_34_Y)
, .A1(inv_2_7_A)
, .B2(nor3b_2_0_B)
, .A2(or2_2_12_A)
, .C1(nor2_2_39_Y)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_22 (.A1(inv_2_19_A)
, .B1(or4_2_8_X)
, .A2(nor2_2_44_Y)
, .X(o21a_2_22_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_11 (.A1(or3_2_8_B)
, .B1(xnor2_2_11_B)
, .A2(and3_2_11_X)
, .X(o21a_2_11_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_12 (.A(or4_2_7_A)
, .X(and4_2_6_D)
, .B(or4_2_7_B)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_13 (.X(nor2_2_32_B)
, .B(or3b_2_0_A)
, .A_N(or2_2_9_A)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_24 (.X(and4_2_6_C)
, .B(o21a_2_23_A1)
, .A_N(nand4_2_8_C)
);
  sky130_fd_sc_hd__a211o_2 Xa211o_2_2 (.X(a211o_2_2_X)
, .A2(nand2_2_9_Y)
, .A1(or2_2_4_A)
, .B1(or4_2_0_D)
, .C1(or4_2_0_A)
);
  sky130_fd_sc_hd__dfxtp_2 Xdfxtp_2_2 (.Q(or3b_2_0_A)
, .CLK(dfxtp_2_2_CLK)
, .D(dfxtp_2_2_D)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_16 (.B1(or3_2_9_A)
, .A2(o31a_2_1_B1)
, .A1(inv_2_12_A)
, .Y(xnor2_2_14_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_25 (.Q(and4_2_3_B)
, .RESET_B(rst_n)
, .D(dfrtp_2_25_D)
, .CLK(clkbuf_8_3_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_14 (.Q(o21a_2_4_A1)
, .RESET_B(rst_n)
, .D(nand2b_2_1_Y)
, .CLK(clkbuf_8_0_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_47 (.Q(or2_2_11_A)
, .RESET_B(rst_n)
, .D(a31o_2_13_X)
, .CLK(clkbuf_8_8_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_58 (.Q(o21a_2_18_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_58_D)
, .CLK(clkbuf_4_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_36 (.Q(mux2_1_12_A0)
, .RESET_B(rst_n)
, .D(mux2_1_12_X)
, .CLK(clkbuf_8_6_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_69 (.Q(or4_2_6_A)
, .RESET_B(rst_n)
, .D(a21o_2_16_X)
, .CLK(clkbuf_8_10_X)
);
  sky130_fd_sc_hd__o21bai_2 Xo21bai_2_0 (.B1_N(xnor2_2_6_A)
, .Y(o21bai_2_0_Y)
, .A2(o32ai_2_0_B1)
, .A1(nor3_2_1_B)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_17 (.A(inv_2_17_A)
, .Y(or4_2_9_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_7 (.Y(nor2_2_9_B)
, .A(nor2_2_8_A)
, .B(nor2_2_0_B)
);
  sky130_fd_sc_hd__or4_2 Xor4_2_9 (.C(or4_2_9_C)
, .A(or4_2_9_A)
, .X(or4_2_9_X)
, .B(or4_2_9_B)
, .D(or4_2_9_D)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_2 (.A(inv_2_2_A)
, .Y(or4_2_2_B)
);
  sky130_fd_sc_hd__a41oi_2 Xa41oi_2_0 (.A4(inv_2_7_A)
, .A3(or4_2_4_C)
, .A2(or4_2_4_A)
, .B1(or4_2_4_D)
, .A1(or4_2_4_B)
, .Y(a41oi_2_0_Y)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_9 (.X(clkbuf_4_9_X)
, .A(clkbuf_4_9_A)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_1 (.X(xor2_2_1_X)
, .B(xor2_2_1_B)
, .A(or4_2_4_C)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_3 (.B(and3_2_3_B)
, .X(and3_2_3_X)
, .A(or4_2_0_B)
, .C(and3_2_3_C)
);
  sky130_fd_sc_hd__a221o_2 Xa221o_2_4 (.X(a221o_2_4_X)
, .B1(nor2_2_39_Y)
, .A1(inv_2_7_A)
, .B2(xor2_2_14_B)
, .A2(xor2_2_19_A)
, .C1(o21a_2_14_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_23 (.A1(o21a_2_23_A1)
, .B1(a31o_2_19_X)
, .A2(nand4_2_8_Y)
, .X(o21a_2_23_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_12 (.A1(o21a_2_12_A1)
, .B1(a31o_2_9_X)
, .A2(xnor2_2_11_B)
, .X(o21a_2_12_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_13 (.A(or4_2_8_A)
, .X(and4_2_5_B)
, .B(or4_2_8_B)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_14 (.X(o31a_2_2_A2)
, .B(or3b_2_0_A)
, .A_N(or2_2_9_A)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_25 (.X(and4_2_5_A)
, .B(o21a_2_21_A1)
, .A_N(nand4_2_9_C)
);
  sky130_fd_sc_hd__a211o_2 Xa211o_2_3 (.X(a211o_2_3_X)
, .A2(or2_2_9_B)
, .A1(or3b_2_0_A)
, .B1(inv_2_13_Y)
, .C1(o31a_2_1_A3)
);
  sky130_fd_sc_hd__dfxtp_2 Xdfxtp_2_3 (.Q(or2_2_9_B)
, .CLK(dfxtp_2_3_CLK)
, .D(dfxtp_2_3_D)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_17 (.B1(or2_2_8_B)
, .A2(and3_2_17_C)
, .A1(or3b_2_0_A)
, .Y(a22o_2_7_A1)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_15 (.Q(xor2_2_0_B)
, .RESET_B(rst_n)
, .D(o211a_2_7_X)
, .CLK(clkbuf_8_4_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_48 (.Q(xor2_2_14_B)
, .RESET_B(rst_n)
, .D(a221o_2_4_X)
, .CLK(clkbuf_8_7_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_26 (.Q(or3_2_8_B)
, .RESET_B(rst_n)
, .D(o21a_2_11_X)
, .CLK(clkbuf_8_3_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_59 (.Q(o21a_2_16_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_59_D)
, .CLK(clkbuf_4_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_37 (.Q(inv_2_11_A)
, .RESET_B(rst_n)
, .D(a31o_2_12_X)
, .CLK(clkbuf_8_6_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_18 (.A(inv_2_18_A)
, .Y(or4_2_7_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_8 (.Y(xnor2_2_0_A)
, .A(or4_2_4_B)
, .B(xor2_2_0_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_3 (.A(inv_2_3_A)
, .Y(or4_2_3_B)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_20 (.S(or2_2_9_B)
, .A1(or2_2_8_B)
, .A0(or2_2_9_A)
, .X(mux2_1_20_X)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_2 (.X(or3_2_3_B)
, .B(xor2_2_2_B)
, .A(xor2_2_2_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_4 (.B(and3_2_4_B)
, .X(and3_2_4_X)
, .A(and3_2_4_A)
, .C(or3_2_5_X)
);
  sky130_fd_sc_hd__a221o_2 Xa221o_2_5 (.X(dfstp_2_0_D)
, .B1(xor2_2_17_B)
, .A1(inv_2_7_A)
, .B2(nor2_2_39_Y)
, .A2(a22o_2_4_B2)
, .C1(nor2_2_40_Y)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_24 (.A1(o21a_2_24_A1)
, .B1(a31o_2_20_X)
, .A2(o21a_2_24_A2)
, .X(o21a_2_24_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_13 (.A1(inv_2_15_Y)
, .B1(inv_2_14_Y)
, .A2(o31a_2_2_A1)
, .X(o21a_2_13_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_14 (.A(or4_2_6_A)
, .X(and3_2_12_B)
, .B(or4_2_6_B)
);
  sky130_fd_sc_hd__a32o_2 Xa32o_2_0 (.B2(xor2_2_3_B)
, .X(xor2_2_2_A)
, .A2(xor2_2_0_X)
, .A3(xor2_2_1_X)
, .A1(or4_2_4_B)
, .B1(xor2_2_3_A)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_26 (.X(and4_2_5_D)
, .B(o21a_2_28_A1)
, .A_N(nand4_2_10_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_15 (.X(o32a_2_2_B1)
, .B(nand2_2_29_Y)
, .A_N(or3_2_9_B)
);
  sky130_fd_sc_hd__a211o_2 Xa211o_2_4 (.X(or3_2_15_A)
, .A2(or3_2_17_A)
, .A1(or2_2_9_A)
, .B1(or3_2_6_C)
, .C1(or3_2_6_B)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_18 (.B1(nor3_2_3_A)
, .A2(nor3_2_3_C)
, .A1(nor3_2_3_B)
, .Y(or3_2_17_C)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_16 (.Q(xor2_2_7_A)
, .RESET_B(rst_n)
, .D(mux2_1_5_X)
, .CLK(clkbuf_8_3_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_49 (.Q(a22o_2_4_B2)
, .RESET_B(rst_n)
, .D(a31o_2_14_X)
, .CLK(clkbuf_4_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_27 (.Q(or2_2_7_A)
, .RESET_B(rst_n)
, .D(a22o_2_1_X)
, .CLK(clkbuf_8_4_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_38 (.Q(a22o_2_2_B2)
, .RESET_B(rst_n)
, .D(mux2_1_11_X)
, .CLK(clkbuf_8_6_X)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_19 (.A(inv_2_19_A)
, .Y(or4_2_8_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_9 (.Y(nand2_2_9_Y)
, .A(xor2_2_3_A)
, .B(inv_2_4_A)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_0 (.A(or3_2_3_A)
, .B(or3_2_0_B)
, .X(or3_2_0_X)
, .C(or3_2_2_B)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_4 (.A(inv_2_4_A)
, .Y(inv_2_4_Y)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_10 (.S(inv_2_7_A)
, .A1(mux2_1_8_A0)
, .A0(mux2_1_12_A1)
, .X(mux2_1_10_X)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_3 (.X(or2_2_2_A)
, .B(xor2_2_3_B)
, .A(xor2_2_3_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_5 (.B(and3_2_5_B)
, .X(and3_2_6_C)
, .A(and3_2_5_A)
, .C(and3_2_5_C)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_25 (.A1(o21a_2_25_A1)
, .B1(a31o_2_21_X)
, .A2(o21a_2_25_A2)
, .X(o21a_2_25_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_14 (.A1(xor2_2_13_X)
, .B1(o21a_2_14_B1)
, .A2(xor2_2_14_X)
, .X(o21a_2_14_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_15 (.A(inv_2_6_Y)
, .X(and2_2_15_X)
, .B(and4_2_3_X)
);
  sky130_fd_sc_hd__a32o_2 Xa32o_2_1 (.B2(a32o_2_1_B2)
, .X(a32o_2_1_X)
, .A2(o21a_2_3_A2)
, .A3(or2_2_4_X)
, .A1(or4_2_0_A)
, .B1(o22a_2_0_X)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_27 (.X(and3_2_12_C)
, .B(o21a_2_25_A1)
, .A_N(nand4_2_13_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_16 (.X(and2b_2_16_X)
, .B(or2_2_10_A)
, .A_N(inv_2_7_A)
);
  sky130_fd_sc_hd__a21oi_2 Xa21oi_2_19 (.B1(nor2_2_46_A)
, .A2(xor2_2_14_X)
, .A1(xor2_2_13_X)
, .Y(o21a_2_14_B1)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_0 (.A1(nand2_2_5_Y)
, .A2(or3_2_4_B)
, .X(a22o_2_0_X)
, .B2(or2_2_4_A)
, .B1(or3_2_3_C)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_28 (.Q(inv_2_6_A)
, .RESET_B(rst_n)
, .D(a31o_2_11_X)
, .CLK(clkbuf_8_4_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_17 (.Q(xor2_2_9_A)
, .RESET_B(rst_n)
, .D(xor2_2_9_X)
, .CLK(clkbuf_8_4_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_39 (.Q(mux2_1_19_A0)
, .RESET_B(rst_n)
, .D(mux2_1_19_X)
, .CLK(clkbuf_8_8_X)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_1 (.A(or4_2_0_A)
, .B(or3_2_1_B)
, .X(or3_2_1_X)
, .C(or3_2_1_C)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_5 (.A(inv_2_5_A)
, .Y(inv_2_5_Y)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_11 (.S(inv_2_7_A)
, .A1(mux2_1_12_A0)
, .A0(a22o_2_2_B2)
, .X(mux2_1_11_X)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_4 (.X(xor2_2_4_X)
, .B(xor2_2_7_X)
, .A(xor2_2_4_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_6 (.B(and4_2_0_X)
, .X(and3_2_6_X)
, .A(and4_2_1_X)
, .C(and3_2_6_C)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_15 (.A1(or2_2_9_A)
, .B1(o21ai_2_5_Y)
, .A2(o21a_2_15_A2)
, .X(o21a_2_15_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_26 (.A1(inv_2_20_A)
, .B1(or4_2_6_X)
, .A2(nor2_2_45_Y)
, .X(o21a_2_26_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_16 (.A(or2_2_11_B)
, .X(or2_2_10_A)
, .B(and3_2_25_C)
);
  sky130_fd_sc_hd__a32o_2 Xa32o_2_2 (.B2(and4_2_3_A)
, .X(a32o_2_2_X)
, .A2(inv_2_7_A)
, .A3(and3_2_10_B)
, .A1(I)
, .B1(inv_2_10_Y)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_28 (.X(and4_2_5_C)
, .B(o21a_2_24_A1)
, .A_N(nand4_2_11_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_17 (.X(o31a_2_1_A3)
, .B(or2_2_9_A)
, .A_N(or3b_2_0_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_30 (.Y(o31a_2_1_B1)
, .A(or2_2_9_A)
, .B(or2_2_8_B)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_0 (.DIODE(or4b_2_3_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_18 (.Q(xor2_2_4_A)
, .RESET_B(rst_n)
, .D(o311a_2_1_X)
, .CLK(clkbuf_8_4_X)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_29 (.Q(inv_2_8_A)
, .RESET_B(rst_n)
, .D(dfrtp_2_29_D)
, .CLK(clkbuf_8_4_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_1 (.A1(inv_2_7_Y)
, .A2(or2_2_7_A)
, .X(a22o_2_1_X)
, .B2(inv_2_9_Y)
, .B1(o211a_2_8_X)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_10 (.X(clkbuf_4_10_X)
, .A(clkbuf_8_9_X)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_2 (.A(or3_2_3_A)
, .B(or3_2_2_B)
, .X(or4_2_0_C)
, .C(or3_2_2_C)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_6 (.A(inv_2_6_A)
, .Y(inv_2_6_Y)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_12 (.S(inv_2_7_A)
, .A1(mux2_1_12_A1)
, .A0(mux2_1_12_A0)
, .X(mux2_1_12_X)
);
  sky130_fd_sc_hd__a311o_2 Xa311o_2_0 (.X(and3_2_3_B)
, .C1(and3_2_1_X)
, .B1(or3_2_4_B)
, .A1(xor2_2_3_A)
, .A2(or4_2_0_A)
, .A3(or2_2_0_B)
);
  sky130_fd_sc_hd__dfstp_2 Xdfstp_2_0 (.Q(xor2_2_17_B)
, .D(dfstp_2_0_D)
, .SET_B(rst_n)
, .CLK(clkbuf_8_7_X)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_5 (.X(xor2_2_5_X)
, .B(xor2_2_5_B)
, .A(xor2_2_5_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_7 (.B(inv_2_7_A)
, .X(and3_2_7_X)
, .A(inv_2_9_A)
, .C(and3_2_7_C)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_16 (.A1(o21a_2_16_A1)
, .B1(a31o_2_17_X)
, .A2(nand4_2_4_Y)
, .X(o21a_2_16_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_27 (.A1(o21a_2_27_A1)
, .B1(a31o_2_22_X)
, .A2(o21a_2_27_A2)
, .X(o21a_2_27_X)
);
  sky130_fd_sc_hd__a32o_2 Xa32o_2_3 (.B2(a32o_2_4_B2)
, .X(a32o_2_3_X)
, .A2(and2_2_15_X)
, .A3(and4b_2_3_X)
, .A1(inv_2_23_Y)
, .B1(a32o_2_3_B1)
);
  sky130_fd_sc_hd__clkbuf_16 Xclkbuf_16_0 (.X(clkbuf_8_9_A)
, .A(clk)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_29 (.X(and3_2_12_A)
, .B(o21a_2_27_A1)
, .A_N(nand4_2_12_C)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_18 (.X(o32a_2_3_A1)
, .B(nor2_2_34_Y)
, .A_N(xor2_2_16_X)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_20 (.Y(and2_2_8_B)
, .A(or2_2_9_B)
, .B(or2_2_8_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_31 (.Y(xor2_2_20_B)
, .A(nand2_2_31_A)
, .B(a22o_2_3_X)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_1 (.DIODE(enable)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_19 (.Q(nor3_2_2_B)
, .RESET_B(rst_n)
, .D(and2b_2_9_X)
, .CLK(clkbuf_8_3_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_2 (.A1(or4_2_4_X)
, .A2(a22o_2_2_A2)
, .X(a22o_2_2_X)
, .B2(a22o_2_2_B2)
, .B1(buf_2_0_X)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_11 (.X(clkbuf_4_11_X)
, .A(clkbuf_8_11_X)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_10 (.X(o31a_2_10_X)
, .A1(o31a_2_9_A1)
, .A2(a22o_2_13_X)
, .B1(or3_2_15_X)
, .A3(a22o_2_17_X)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_3 (.A(or3_2_3_A)
, .B(or3_2_3_B)
, .X(or3_2_3_X)
, .C(or3_2_3_C)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_7 (.A(inv_2_7_A)
, .Y(inv_2_7_Y)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_13 (.S(inv_2_7_A)
, .A1(I)
, .A0(a22o_2_2_A2)
, .X(mux2_1_13_X)
);
  sky130_fd_sc_hd__a311o_2 Xa311o_2_1 (.X(o31a_2_0_B1)
, .C1(and3b_2_0_C)
, .B1(and2b_2_6_X)
, .A1(nor3_2_1_C)
, .A2(o32ai_2_0_B1)
, .A3(nand2b_2_8_Y)
);
  sky130_fd_sc_hd__dfstp_2 Xdfstp_2_1 (.Q(xor2_2_16_A)
, .D(o221a_2_1_X)
, .SET_B(rst_n)
, .CLK(dfxtp_2_3_CLK)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_0 (.X(o31a_2_0_X)
, .A1(o31a_2_0_A1)
, .A2(o31a_2_0_A2)
, .B1(o31a_2_0_B1)
, .A3(nor3_2_1_Y)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_6 (.X(or2_2_5_A)
, .B(xor2_2_6_B)
, .A(xor2_2_6_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_8 (.B(and4_2_3_B)
, .X(and4_2_4_D)
, .A(and4_2_3_A)
, .C(or3_2_8_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_0 (.Q(nand4_2_0_C)
, .RESET_B(rst_n)
, .D(o21a_2_4_X)
, .CLK(clkbuf_8_0_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_28 (.A1(o21a_2_28_A1)
, .B1(a31o_2_23_X)
, .A2(o21a_2_28_A2)
, .X(o21a_2_28_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_17 (.A1(inv_2_16_A)
, .B1(or4_2_5_X)
, .A2(nor2_2_42_Y)
, .X(o21a_2_17_X)
);
  sky130_fd_sc_hd__a32o_2 Xa32o_2_4 (.B2(a32o_2_4_B2)
, .X(a32o_2_4_X)
, .A2(and2_2_15_X)
, .A3(and4b_2_3_X)
, .A1(inv_2_23_A)
, .B1(success)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_19 (.X(and2b_2_19_X)
, .B(o221a_2_2_C1)
, .A_N(or2_2_8_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_20 (.A1(xnor2_2_13_Y)
, .A2(or3_2_17_B)
, .X(o31a_2_3_A3)
, .B2(conb_1_0_LO)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_10 (.Y(a31o_2_5_A3)
, .A(or4_2_0_A)
, .B(o31ai_2_1_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_21 (.Y(and3_2_2_A)
, .A(xor2_2_7_A)
, .B(xor2_2_9_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_32 (.Y(inv_2_12_A)
, .A(or2_2_9_B)
, .B(o31a_2_1_A3)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_2 (.DIODE(conb_1_4_LO)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_3 (.A1(or3_2_9_A)
, .A2(or2_2_9_X)
, .X(a22o_2_3_X)
, .B2(or3b_2_0_X)
, .B1(o32a_2_2_A2)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_12 (.X(clkbuf_4_12_X)
, .A(clkbuf_8_10_X)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_4 (.A(or4_2_0_A)
, .B(or3_2_4_B)
, .X(or3_2_4_X)
, .C(or3_2_4_C)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_8 (.A(inv_2_8_A)
, .Y(inv_2_8_Y)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_14 (.S(inv_2_7_A)
, .A1(mux2_1_15_A0)
, .A0(mux2_1_8_A1)
, .X(mux2_1_14_X)
);
  sky130_fd_sc_hd__dfstp_2 Xdfstp_2_2 (.Q(xor2_2_20_A)
, .D(dfstp_2_2_D)
, .SET_B(rst_n)
, .CLK(clkbuf_8_7_X)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_1 (.X(o31a_2_1_X)
, .A1(or2_2_9_B)
, .A2(or3_2_9_A)
, .B1(o31a_2_1_B1)
, .A3(o31a_2_1_A3)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_7 (.X(xor2_2_7_X)
, .B(xor2_2_9_A)
, .A(xor2_2_7_A)
);
  sky130_fd_sc_hd__and3_2 Xand3_2_9 (.B(I)
, .X(inv_2_10_A)
, .A(or3_2_8_A)
, .C(inv_2_7_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_1 (.Q(inv_2_1_A)
, .RESET_B(rst_n)
, .D(o21a_2_7_X)
, .CLK(clkbuf_8_0_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_29 (.A1(inv_2_17_A)
, .B1(or4_2_9_X)
, .A2(nor2_2_41_Y)
, .X(o21a_2_29_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_18 (.A1(o21a_2_18_A1)
, .B1(a31o_2_16_X)
, .A2(nand4_2_6_Y)
, .X(o21a_2_18_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_0 (.A1(or3_2_3_A)
, .B1(or3_2_3_B)
, .A2(or3_2_3_C)
, .X(or4_2_0_D)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_21 (.A1(o31a_2_2_X)
, .A2(nor3b_2_2_Y)
, .X(o31a_2_9_A2)
, .B2(a22o_2_21_B2)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_10 (.A1(xnor2_2_14_Y)
, .A2(or3_2_17_B)
, .X(o31a_2_9_A3)
, .B2(o21bai_2_0_Y)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_11 (.Y(o21a_2_3_A2)
, .A(or2_2_4_A)
, .B(nand2_2_5_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_33 (.Y(or4_2_9_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_22 (.Y(and3_2_2_B)
, .A(xor2_2_4_A)
, .B(xor2_2_7_X)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_3 (.DIODE(and4_2_3_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_4 (.A1(inv_2_7_A)
, .A2(xor2_2_20_A)
, .X(a22o_2_4_X)
, .B2(a22o_2_4_B2)
, .B1(nor2_2_39_Y)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_0 (.B(inv_2_7_A)
, .A(I)
, .Y(o21a_2_4_A2)
, .D(nor4_2_0_Y)
, .C(nand4_2_0_C)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_13 (.X(clkbuf_4_13_X)
, .A(dfxtp_2_2_CLK)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_5 (.A(or3_2_5_A)
, .B(or3_2_5_B)
, .X(or3_2_5_X)
, .C(or3_2_5_C)
);
  sky130_fd_sc_hd__inv_2 Xinv_2_9 (.A(inv_2_9_A)
, .Y(inv_2_9_Y)
);
  sky130_fd_sc_hd__and3b_2 Xand3b_2_0 (.B(and2_2_7_B)
, .X(xnor2_2_6_A)
, .A_N(nor3_2_1_B)
, .C(and3b_2_0_C)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_0 (.B(nor2_2_0_B)
, .Y(xor2_2_3_B)
, .A(nor2_2_8_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_15 (.S(inv_2_7_A)
, .A1(mux2_1_16_A0)
, .A0(mux2_1_15_A0)
, .X(mux2_1_15_X)
);
  sky130_fd_sc_hd__dfstp_2 Xdfstp_2_3 (.Q(or2_2_12_A)
, .D(o32a_2_3_X)
, .SET_B(rst_n)
, .CLK(clkbuf_8_7_X)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_2 (.X(o31a_2_2_X)
, .A1(o31a_2_2_A1)
, .A2(o31a_2_2_A2)
, .B1(inv_2_14_Y)
, .A3(o31a_2_2_A3)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_40 (.B(nor2_2_46_A)
, .Y(nor2_2_40_Y)
, .A(nor2_2_40_A)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_8 (.X(or4_2_0_A)
, .B(xor2_2_8_B)
, .A(xor2_2_8_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_2 (.Q(or4_2_1_A)
, .RESET_B(rst_n)
, .D(a21o_2_0_X)
, .CLK(dfrtp_2_8_CLK)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_19 (.A1(o21a_2_19_A1)
, .B1(a31o_2_18_X)
, .A2(nand4_2_7_Y)
, .X(o21a_2_19_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_1 (.A1(or3_2_3_B)
, .B1(or2_2_4_X)
, .A2(and2_2_2_X)
, .X(o21a_2_1_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_0 (.Y(xor2_2_3_A)
, .A(xnor2_2_0_A)
, .B(xor2_2_1_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_11 (.A1(xnor2_2_18_Y)
, .A2(or3_2_17_B)
, .X(o31a_2_6_A3)
, .B2(o31a_2_0_X)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_22 (.A1(or3b_2_0_A)
, .A2(or3_2_9_C)
, .X(a22o_2_22_X)
, .B2(or2_2_9_B)
, .B1(nand2_2_31_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_12 (.Y(o311a_2_0_C1)
, .A(or4_2_0_A)
, .B(mux2_1_1_X)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_23 (.Y(mux2_1_5_A1)
, .A(inv_2_9_A)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_34 (.Y(or4_2_5_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_4 (.DIODE(and3_2_6_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_5 (.A1(inv_2_7_A)
, .A2(xor2_2_14_B)
, .X(a22o_2_5_X)
, .B2(nor2_2_39_Y)
, .B1(xor2_2_20_A)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_1 (.B(inv_2_7_A)
, .A(I)
, .Y(nand4_2_1_Y)
, .D(nand4_2_1_D)
, .C(nand4_2_1_C)
);
  sky130_fd_sc_hd__clkbuf_4 Xclkbuf_4_14 (.X(clkbuf_4_14_X)
, .A(dfrtp_2_8_CLK)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_10 (.X(a21o_2_10_X)
, .B1(and4_2_3_B)
, .A1(and4_2_3_A)
, .A2(inv_2_10_A)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_6 (.A(or3_2_6_A)
, .B(or3_2_6_B)
, .X(or3_2_6_X)
, .C(or3_2_6_C)
);
  sky130_fd_sc_hd__and3b_2 Xand3b_2_1 (.B(or2_2_9_B)
, .X(and3b_2_1_X)
, .A_N(or2_2_8_B)
, .C(or2_2_9_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_1 (.B(or2_2_0_B)
, .Y(or3_2_2_B)
, .A(nor2_2_4_Y)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_16 (.S(inv_2_7_A)
, .A1(mux2_1_9_A0)
, .A0(mux2_1_16_A0)
, .X(mux2_1_16_X)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_20 (.B(o21a_2_27_A2)
, .Y(dfrtp_2_70_D)
, .A_N(o21a_2_27_A1)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_3 (.X(o31a_2_3_X)
, .A1(o31a_2_9_A1)
, .A2(a22o_2_6_X)
, .B1(or3_2_13_X)
, .A3(o31a_2_3_A3)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_41 (.B(or4_2_9_D)
, .Y(nor2_2_41_Y)
, .A(or4_2_9_C)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_30 (.B(nor2_2_30_B)
, .Y(nor2_2_30_Y)
, .A(inv_2_10_A)
);
  sky130_fd_sc_hd__xor2_2 Xxor2_2_9 (.X(xor2_2_9_X)
, .B(inv_2_5_A)
, .A(xor2_2_9_A)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_0 (.A(or2_2_1_X)
, .X(and3_2_0_C)
, .B(or2_2_0_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_3 (.Q(or4_2_3_A)
, .RESET_B(rst_n)
, .D(a21o_2_2_X)
, .CLK(clkbuf_8_0_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_2 (.A1(or3_2_3_B)
, .B1(or2_2_4_B)
, .A2(inv_2_4_A)
, .X(or2_2_6_B)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_1 (.Y(nor2_2_8_A)
, .A(or4_2_4_B)
, .B(xor2_2_0_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_12 (.A1(conb_1_4_LO)
, .A2(nor3b_2_2_Y)
, .X(o31a_2_5_A2)
, .B2(o211a_2_9_X)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_35 (.Y(or4_2_6_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_24 (.Y(xnor2_2_11_B)
, .A(inv_2_10_A)
, .B(and4_2_4_D)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_13 (.Y(or4_2_3_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__nor4b_2 Xnor4b_2_0 (.D_N(or2_2_8_B)
, .Y(or3_2_6_C)
, .C(or2_2_9_B)
, .A(or3b_2_0_A)
, .B(or2_2_9_A)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_5 (.DIODE(and4_2_3_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_6 (.A1(conb_1_5_LO)
, .A2(nor3b_2_2_Y)
, .X(a22o_2_6_X)
, .B2(conb_1_3_LO)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_2 (.B(inv_2_7_A)
, .A(I)
, .Y(o21a_2_8_A2)
, .D(nand4_2_2_D)
, .C(nand4_2_2_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_11 (.X(dfstp_2_2_D)
, .B1(a22o_2_5_X)
, .A1(and2b_2_16_X)
, .A2(xnor2_2_19_Y)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_7 (.A(or3_2_7_A)
, .B(or3_2_7_B)
, .X(or3_2_7_X)
, .C(or3_2_7_C)
);
  sky130_fd_sc_hd__and3b_2 Xand3b_2_2 (.B(nor2_2_32_B)
, .X(and3b_2_2_X)
, .A_N(or2_2_8_B)
, .C(or2_2_9_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_2 (.B(inv_2_4_A)
, .Y(or3_2_2_C)
, .A(or3_2_0_B)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_17 (.S(inv_2_7_A)
, .A1(mux2_1_19_A0)
, .A0(mux2_1_9_A1)
, .X(mux2_1_17_X)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_21 (.B(o21a_2_28_A2)
, .Y(dfrtp_2_64_D)
, .A_N(o21a_2_28_A1)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_10 (.B(or2_2_9_B)
, .Y(and2_2_7_B)
, .A_N(or3b_2_0_A)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_4 (.X(o31a_2_4_X)
, .A1(o31a_2_9_A1)
, .A2(a22o_2_7_X)
, .B1(or3_2_12_X)
, .A3(a22o_2_9_X)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_20 (.B(o211a_2_0_X)
, .Y(nor2_2_20_Y)
, .A(nor2_2_20_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_31 (.B(nor2_2_31_B)
, .Y(nor2_2_31_Y)
, .A(inv_2_9_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_42 (.B(or4_2_5_D)
, .Y(nor2_2_42_Y)
, .A(or4_2_5_C)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_1 (.A(or4_2_4_A)
, .X(or2_2_1_A)
, .B(xor2_2_7_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_4 (.Q(o21a_2_5_A1)
, .RESET_B(rst_n)
, .D(dfrtp_2_4_D)
, .CLK(dfrtp_2_8_CLK)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_3 (.A1(or3_2_3_A)
, .B1(or2_2_3_X)
, .A2(o21a_2_3_A2)
, .X(o21a_2_3_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_2 (.Y(or3_2_0_B)
, .A(xor2_2_3_A)
, .B(xor2_2_3_B)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_13 (.A1(a22o_2_13_A1)
, .A2(nor3b_2_2_Y)
, .X(a22o_2_13_X)
, .B2(o221a_2_2_X)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_36 (.Y(or4_2_7_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__nor4b_2 Xnor4b_2_1 (.D_N(nor3_2_2_Y)
, .Y(or4b_2_8_A)
, .C(and4_2_3_C)
, .A(and4_2_3_A)
, .B(and4_2_3_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_14 (.Y(or4_2_1_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_25 (.Y(mux2_1_7_A0)
, .A(or2_2_7_A)
, .B(I)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_6 (.DIODE(and3_2_6_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_7 (.A1(a22o_2_7_A1)
, .A2(nor3b_2_2_Y)
, .X(a22o_2_7_X)
, .B2(o21a_2_15_X)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_3 (.B(inv_2_7_A)
, .A(I)
, .Y(o21a_2_5_A2)
, .D(nand4_2_3_D)
, .C(nand4_2_3_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_12 (.X(o32a_2_3_A3)
, .B1(nor2_2_39_Y)
, .A1(inv_2_7_A)
, .A2(xor2_2_19_B)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_8 (.A(or3_2_8_A)
, .B(or3_2_8_B)
, .X(or3_2_8_X)
, .C(or3_2_8_C)
);
  sky130_fd_sc_hd__and3b_2 Xand3b_2_3 (.B(nor2_2_40_A)
, .X(o32a_2_3_A2)
, .A_N(inv_2_7_A)
, .C(xor2_2_16_X)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_3 (.B(nor2_2_3_B)
, .Y(nor2_2_3_Y)
, .A(or3_2_3_B)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_18 (.S(inv_2_7_A)
, .A1(a22o_2_2_A2)
, .A0(mux2_1_19_A1)
, .X(mux2_1_18_X)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_22 (.B(or2_2_10_A)
, .Y(nor2_2_46_A)
, .A_N(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_11 (.B(or3b_2_0_A)
, .Y(nand2_2_31_A)
, .A_N(or2_2_9_A)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_5 (.X(o31a_2_5_X)
, .A1(o31a_2_9_A1)
, .A2(o31a_2_5_A2)
, .B1(or3_2_17_X)
, .A3(a22o_2_8_X)
);
  sky130_fd_sc_hd__conb_1 Xconb_1_0 (.LO(conb_1_0_LO)
, .HI(conb_1_0_HI)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_10 (.B(or3_2_2_B)
, .Y(nor2_2_3_B)
, .A(or3_2_0_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_21 (.B(and3_2_4_X)
, .Y(xor2_2_8_B)
, .A(nor2_2_21_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_32 (.B(nor2_2_32_B)
, .Y(nor2_2_32_Y)
, .A(or2_2_8_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_43 (.B(or4_2_7_D)
, .Y(nor2_2_43_Y)
, .A(or4_2_7_C)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_2 (.A(and2_2_2_A)
, .X(and2_2_2_X)
, .B(and3_2_1_C)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_5 (.Q(nand4_2_2_C)
, .RESET_B(rst_n)
, .D(o21a_2_8_X)
, .CLK(clkbuf_8_1_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_4 (.A1(o21a_2_4_A1)
, .B1(a31o_2_1_X)
, .A2(o21a_2_4_A2)
, .X(o21a_2_4_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_3 (.Y(and3_2_2_C)
, .A(xor2_2_0_B)
, .B(xor2_2_4_A)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_14 (.A1(and3_2_17_X)
, .A2(nor3b_2_2_Y)
, .X(o31a_2_8_A2)
, .B2(and3b_2_2_X)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_26 (.Y(o21a_2_12_A1)
, .A(and4_2_3_C)
, .B(nor3_2_2_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_15 (.Y(or4_2_2_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_37 (.Y(or4_2_8_D)
, .A(I)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_7 (.DIODE(and3_2_6_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_8 (.A1(xor2_2_12_X)
, .A2(or3_2_17_B)
, .X(a22o_2_8_X)
, .B2(o32ai_2_0_Y)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_4 (.B(inv_2_7_A)
, .A(I)
, .Y(nand4_2_4_Y)
, .D(nand4_2_4_D)
, .C(nand4_2_4_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_13 (.X(a21o_2_13_X)
, .B1(or4_2_5_A)
, .A1(inv_2_16_A)
, .A2(nor2_2_42_Y)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_9 (.A(or3_2_9_A)
, .B(or3_2_9_B)
, .X(or3_2_9_X)
, .C(or3_2_9_C)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_4 (.B(or2_2_1_B)
, .Y(nor2_2_4_Y)
, .A(or2_2_1_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_19 (.S(inv_2_7_A)
, .A1(mux2_1_19_A1)
, .A0(mux2_1_19_A0)
, .X(mux2_1_19_X)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_23 (.B(or2_2_11_A)
, .Y(a32o_2_4_B2)
, .A_N(or2_2_11_B)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_12 (.B(or2_2_9_A)
, .Y(o221a_2_2_C1)
, .A_N(or3b_2_0_A)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_6 (.X(o31a_2_6_X)
, .A1(o31a_2_9_A1)
, .A2(o31a_2_6_A2)
, .B1(or3_2_10_X)
, .A3(o31a_2_6_A3)
);
  sky130_fd_sc_hd__conb_1 Xconb_1_1 (.LO(or3_2_13_A)
, .HI(conb_1_1_HI)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_11 (.B(or2_2_4_B)
, .Y(or3_2_1_C)
, .A(or3_2_3_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_22 (.B(or2_2_9_A)
, .Y(nor3_2_1_B)
, .A(or3b_2_0_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_44 (.B(or4_2_8_D)
, .Y(nor2_2_44_Y)
, .A(or4_2_8_C)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_33 (.B(or2_2_9_A)
, .Y(nor2_2_33_Y)
, .A(or3b_2_0_A)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_10 (.C1(or2_2_9_A)
, .B1(inv_2_14_Y)
, .A2(or2_2_9_B)
, .A1(inv_2_15_Y)
, .X(o211a_2_10_X)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_3 (.A(or4_2_1_A)
, .X(and4_2_0_A)
, .B(or4_2_1_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_6 (.Q(nand4_2_1_C)
, .RESET_B(rst_n)
, .D(o21a_2_10_X)
, .CLK(clkbuf_8_1_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_5 (.A1(o21a_2_5_A1)
, .B1(a31o_2_4_X)
, .A2(o21a_2_5_A2)
, .X(o21a_2_5_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_4 (.Y(xnor2_2_5_B)
, .A(xnor2_2_4_A)
, .B(xor2_2_4_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_15 (.A1(o21a_2_13_X)
, .A2(nor3b_2_2_Y)
, .X(o31a_2_6_A2)
, .B2(and3b_2_1_X)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_16 (.Y(and3_2_4_B)
, .A(or4_2_4_D)
, .B(xnor2_2_5_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_27 (.Y(o21a_2_15_A2)
, .A(or3b_2_0_A)
, .B(or2_2_8_X)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_38 (.Y(nand2_2_38_Y)
, .A(or2_2_12_A)
, .B(or2_2_12_B)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_8 (.DIODE(and3_2_6_X)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_9 (.A1(a22o_2_9_A1)
, .A2(or3_2_17_B)
, .X(a22o_2_9_X)
, .B2(o22a_2_2_X)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_5 (.B(inv_2_7_A)
, .A(I)
, .Y(nand4_2_5_Y)
, .D(nand4_2_5_D)
, .C(nand4_2_5_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_14 (.X(a21o_2_14_X)
, .B1(or4_2_7_A)
, .A1(inv_2_18_A)
, .A2(nor2_2_43_Y)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_5 (.B(or3_2_3_B)
, .Y(nor2_2_5_Y)
, .A(nor2_2_5_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_13 (.B(nand4_2_6_Y)
, .Y(dfrtp_2_58_D)
, .A_N(o21a_2_18_A1)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_7 (.X(o31a_2_7_X)
, .A1(o31a_2_9_A1)
, .A2(o31a_2_7_A2)
, .B1(or3_2_11_X)
, .A3(o31a_2_7_A3)
);
  sky130_fd_sc_hd__conb_1 Xconb_1_2 (.LO(conb_1_2_LO)
, .HI(conb_1_2_HI)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_12 (.B(nor2_2_3_B)
, .Y(or3_2_4_B)
, .A(or2_2_4_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_23 (.B(and2_2_8_A)
, .Y(nor2_2_23_Y)
, .A(or2_2_8_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_45 (.B(or4_2_6_D)
, .Y(nor2_2_45_Y)
, .A(or4_2_6_C)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_34 (.B(nor2_2_40_A)
, .Y(nor2_2_34_Y)
, .A(inv_2_7_A)
);
  sky130_fd_sc_hd__o211a_2 Xo211a_2_11 (.C1(or2_2_11_B)
, .B1(a21o_2_17_X)
, .A2(nand3_2_1_Y)
, .A1(or2_2_8_B)
, .X(dfxtp_2_3_D)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_4 (.A(or4_2_2_A)
, .X(and4_2_1_B)
, .B(or4_2_2_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_7 (.Q(inv_2_2_A)
, .RESET_B(rst_n)
, .D(o21a_2_9_X)
, .CLK(clkbuf_8_1_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_6 (.A1(inv_2_3_A)
, .B1(or4_2_3_X)
, .A2(o21a_2_6_A2)
, .X(o21a_2_6_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_5 (.Y(xnor2_2_8_A)
, .A(or4_2_4_D)
, .B(xnor2_2_5_B)
);
  sky130_fd_sc_hd__o22ai_2 Xo22ai_2_0 (.B2(a31o_2_7_X)
, .B1(a21oi_2_5_Y)
, .Y(o22ai_2_0_Y)
, .A1(xor2_2_0_B)
, .A2(and3_2_2_B)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_16 (.A1(o211a_2_10_X)
, .A2(nor3b_2_2_Y)
, .X(o31a_2_7_A2)
, .B2(and2b_2_19_X)
, .B1(nor3_2_3_Y)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_0 (.X(a31o_2_0_X)
, .B1(and3_2_0_C)
, .A3(and3_2_1_C)
, .A1(or3_2_3_B)
, .A2(and2_2_2_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_17 (.Y(xnor2_2_4_A)
, .A(xor2_2_0_B)
, .B(xor2_2_9_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_28 (.Y(o32a_2_2_B2)
, .A(or2_2_9_X)
, .B(o32a_2_2_A2)
);
  sky130_fd_sc_hd__diode_2 Xdiode_2_9 (.DIODE(and4_2_3_X)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_6 (.B(inv_2_7_A)
, .A(I)
, .Y(nand4_2_6_Y)
, .D(nand4_2_6_D)
, .C(nand4_2_6_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_15 (.X(a21o_2_15_X)
, .B1(or4_2_8_A)
, .A1(inv_2_19_A)
, .A2(nor2_2_44_Y)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_0 (.B(or2_2_0_B)
, .X(or2_2_4_B)
, .A(or2_2_2_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_6 (.B(xor2_2_9_A)
, .Y(nor2_2_6_Y)
, .A(xor2_2_0_B)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_14 (.B(nand4_2_7_Y)
, .Y(dfrtp_2_57_D)
, .A_N(o21a_2_19_A1)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_8 (.X(o31a_2_8_X)
, .A1(o31a_2_9_A1)
, .A2(o31a_2_8_A2)
, .B1(or3_2_14_X)
, .A3(o31a_2_8_A3)
);
  sky130_fd_sc_hd__conb_1 Xconb_1_3 (.LO(conb_1_3_LO)
, .HI(conb_1_3_HI)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_13 (.B(or3_2_0_X)
, .Y(o32a_2_1_A3)
, .A(or2_2_4_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_46 (.B(nor2_2_46_B)
, .Y(nor2_2_46_Y)
, .A(nor2_2_46_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_24 (.B(or2_2_8_B)
, .Y(nor2_2_24_Y)
, .A(or2_2_9_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_35 (.B(o32a_2_2_B1)
, .Y(o32a_2_2_A3)
, .A(or2_2_9_B)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_20 (.X(a31o_2_20_X)
, .B1(nand4_2_11_C)
, .A3(and4b_2_2_X)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_5 (.A(or4_2_3_A)
, .X(and4_2_0_D)
, .B(or4_2_3_B)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_8 (.Q(nand4_2_3_C)
, .RESET_B(rst_n)
, .D(o21a_2_5_X)
, .CLK(dfrtp_2_8_CLK)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_7 (.A1(inv_2_1_A)
, .B1(or4_2_1_X)
, .A2(o21a_2_7_A2)
, .X(o21a_2_7_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_6 (.Y(xnor2_2_6_Y)
, .A(xnor2_2_6_A)
, .B(a21o_2_6_X)
);
  sky130_fd_sc_hd__o22ai_2 Xo22ai_2_1 (.B2(or2_2_5_A)
, .B1(or3_2_3_X)
, .Y(o22ai_2_1_Y)
, .A1(or2_2_4_A)
, .A2(nand2_2_5_Y)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_17 (.A1(xor2_2_18_X)
, .A2(or3_2_17_B)
, .X(a22o_2_17_X)
, .B2(xnor2_2_6_Y)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_1 (.X(a31o_2_1_X)
, .B1(nand4_2_0_C)
, .A3(nor4_2_0_Y)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_18 (.Y(a21o_2_8_A2)
, .A(xnor2_2_8_A)
, .B(xnor2_2_8_B)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_29 (.Y(nand2_2_29_Y)
, .A(or3b_2_0_A)
, .B(or2_2_9_A)
);
  sky130_fd_sc_hd__o21ai_2 Xo21ai_2_0 (.B1(or4_2_0_A)
, .Y(and3_2_3_C)
, .A2(and3_2_1_X)
, .A1(or3_2_4_B)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_7 (.B(inv_2_7_A)
, .A(I)
, .Y(nand4_2_7_Y)
, .D(nor4_2_1_Y)
, .C(nand4_2_7_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_16 (.X(a21o_2_16_X)
, .B1(or4_2_6_A)
, .A1(inv_2_20_A)
, .A2(nor2_2_45_Y)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_0 (.X(a21o_2_0_X)
, .B1(or4_2_1_A)
, .A1(inv_2_1_A)
, .A2(o21a_2_7_A2)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_1 (.B(or2_2_1_B)
, .X(or2_2_1_X)
, .A(or2_2_1_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_7 (.B(xor2_2_7_A)
, .Y(or2_2_1_B)
, .A(or4_2_4_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_15 (.B(nand4_2_4_Y)
, .Y(dfrtp_2_59_D)
, .A_N(o21a_2_16_A1)
);
  sky130_fd_sc_hd__o31a_2 Xo31a_2_9 (.X(o31a_2_9_X)
, .A1(o31a_2_9_A1)
, .A2(o31a_2_9_A2)
, .B1(or3_2_16_X)
, .A3(o31a_2_9_A3)
);
  sky130_fd_sc_hd__conb_1 Xconb_1_4 (.LO(conb_1_4_LO)
, .HI(conb_1_4_HI)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_14 (.B(or4_2_3_D)
, .Y(o21a_2_6_A2)
, .A(or4_2_3_C)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_47 (.B(or3_2_17_C)
, .Y(o31a_2_9_A1)
, .A(or3_2_17_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_25 (.B(and3_2_2_B)
, .Y(or3_2_5_A)
, .A(xor2_2_0_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_36 (.B(inv_2_13_Y)
, .Y(or3_2_9_A)
, .A(or3b_2_0_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_21 (.X(a31o_2_21_X)
, .B1(nand4_2_13_C)
, .A3(nand4_2_13_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_10 (.X(and2b_2_9_B)
, .B1(nor3_2_2_B)
, .A3(and4_2_4_D)
, .A1(and4_2_4_B)
, .A2(inv_2_10_A)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_6 (.A(or3b_2_0_A)
, .X(nor3_2_1_C)
, .B(or2_2_9_A)
);
  sky130_fd_sc_hd__dfrtp_2 Xdfrtp_2_9 (.Q(inv_2_3_A)
, .RESET_B(rst_n)
, .D(o21a_2_6_X)
, .CLK(clkbuf_8_0_X)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_8 (.A1(o21a_2_8_A1)
, .B1(a31o_2_2_X)
, .A2(o21a_2_8_A2)
, .X(o21a_2_8_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_7 (.Y(or3_2_7_A)
, .A(xor2_2_5_A)
, .B(xor2_2_5_B)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_10 (.A(or3_2_10_A)
, .B(or3_2_17_B)
, .X(or3_2_10_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_18 (.A1(xnor2_2_22_Y)
, .A2(or3_2_17_B)
, .X(o31a_2_7_A3)
, .B2(and2_2_8_X)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_2 (.X(a31o_2_2_X)
, .B1(nand4_2_2_C)
, .A3(nand4_2_2_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__nand2_2 Xnand2_2_19 (.Y(and2_2_8_A)
, .A(or3b_2_0_A)
, .B(or2_2_9_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_0 (.A_N(xor2_2_7_A)
, .C(xor2_2_9_A)
, .B_N(xor2_2_0_B)
, .X(and4bb_2_0_X)
, .D(xor2_2_4_A)
);
  sky130_fd_sc_hd__o21ai_2 Xo21ai_2_1 (.B1(or4_2_0_X)
, .Y(o21ai_2_1_Y)
, .A2(o32a_2_0_X)
, .A1(or2_2_5_A)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_8 (.B(inv_2_7_A)
, .A(I)
, .Y(nand4_2_8_Y)
, .D(nand4_2_8_D)
, .C(nand4_2_8_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_17 (.X(a21o_2_17_X)
, .B1(or2_2_9_B)
, .A1(or2_2_9_A)
, .A2(or3b_2_0_A)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_1 (.X(a21o_2_1_X)
, .B1(or4_2_2_A)
, .A1(inv_2_2_A)
, .A2(o21a_2_9_A2)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_2 (.B(or3_2_2_B)
, .X(or3_2_3_C)
, .A(or2_2_2_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_8 (.B(or2_2_1_X)
, .Y(or3_2_3_A)
, .A(nor2_2_8_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_16 (.B(nand4_2_9_Y)
, .Y(dfrtp_2_66_D)
, .A_N(o21a_2_21_A1)
);
  sky130_fd_sc_hd__conb_1 Xconb_1_5 (.LO(conb_1_5_LO)
, .HI(conb_1_5_HI)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_37 (.B(or2_2_8_B)
, .Y(or3_2_9_C)
, .A(or2_2_9_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_26 (.B(or2_2_4_A)
, .Y(nor2_2_26_Y)
, .A(nor2_2_5_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_15 (.B(or4_2_1_D)
, .Y(o21a_2_7_A2)
, .A(or4_2_1_C)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_48 (.B(o21ba_2_1_X)
, .Y(nor3_2_3_B)
, .A(or4b_2_8_A)
);
  sky130_fd_sc_hd__nand3b_2 Xnand3b_2_0 (.Y(and3_2_7_C)
, .C(xor2_2_0_B)
, .A_N(xor2_2_9_A)
, .B(xor2_2_4_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_22 (.X(a31o_2_22_X)
, .B1(nand4_2_12_C)
, .A3(nand4_2_12_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_11 (.X(a31o_2_11_X)
, .B1(inv_2_6_A)
, .A3(mux2_1_7_X)
, .A1(inv_2_9_A)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_7 (.A(or2_2_9_A)
, .X(and2_2_7_X)
, .B(and2_2_7_B)
);
  sky130_fd_sc_hd__o21a_2 Xo21a_2_9 (.A1(inv_2_2_A)
, .B1(or4_2_2_X)
, .A2(o21a_2_9_A2)
, .X(o21a_2_9_X)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_8 (.Y(xor2_2_2_B)
, .A(xnor2_2_8_A)
, .B(xnor2_2_8_B)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_11 (.A(or3_2_11_A)
, .B(or3_2_17_B)
, .X(or3_2_11_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a22o_2 Xa22o_2_19 (.A1(xor2_2_20_X)
, .A2(or3_2_17_B)
, .X(o31a_2_8_A3)
, .B2(nor2_2_23_Y)
, .B1(nor3b_2_3_Y)
);
  sky130_fd_sc_hd__a2111oi_2 Xa2111oi_2_0 (.D1(nor2_2_33_Y)
, .C1(and3_2_17_C)
, .A2(or2_2_9_B)
, .A1(or3b_2_0_A)
, .Y(a22o_2_13_A1)
, .B1(or2_2_8_B)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_3 (.X(a31o_2_3_X)
, .B1(nand4_2_1_C)
, .A3(nand4_2_1_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_1 (.A_N(or4b_2_2_C)
, .C(or4b_2_3_B)
, .B_N(or4b_2_3_C)
, .X(nand4_2_3_D)
, .D(or4b_2_3_A)
);
  sky130_fd_sc_hd__o21ai_2 Xo21ai_2_2 (.B1(or4_2_0_A)
, .Y(o21ai_2_2_Y)
, .A2(inv_2_0_Y)
, .A1(or3_2_3_B)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_9 (.B(inv_2_7_A)
, .A(I)
, .Y(nand4_2_9_Y)
, .D(nand4_2_9_D)
, .C(nand4_2_9_C)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_18 (.X(a21o_2_18_X)
, .B1(or4_2_9_A)
, .A1(inv_2_17_A)
, .A2(nor2_2_41_Y)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_2 (.X(a21o_2_2_X)
, .B1(or4_2_3_A)
, .A1(inv_2_3_A)
, .A2(o21a_2_6_A2)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_3 (.B(or3_2_2_B)
, .X(or2_2_3_X)
, .A(or2_2_4_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_9 (.B(nor2_2_9_B)
, .Y(inv_2_4_A)
, .A(or2_2_1_B)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_17 (.B(nand4_2_8_Y)
, .Y(dfrtp_2_63_D)
, .A_N(o21a_2_23_A1)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_38 (.B(or2_2_9_A)
, .Y(or3_2_9_B)
, .A(or3b_2_0_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_27 (.B(o21a_2_3_A2)
, .Y(o32a_2_1_B1)
, .A(nor2_2_3_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_16 (.B(or4_2_2_D)
, .Y(o21a_2_9_A2)
, .A(or4_2_2_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_23 (.X(a31o_2_23_X)
, .B1(nand4_2_10_C)
, .A3(nand4_2_10_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_12 (.X(a31o_2_12_X)
, .B1(inv_2_11_A)
, .A3(a221o_2_1_X)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_8 (.A(and2_2_8_A)
, .X(and2_2_8_X)
, .B(and2_2_8_B)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_9 (.Y(or2_2_4_A)
, .A(xor2_2_2_A)
, .B(xor2_2_2_B)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_12 (.A(or3_2_6_X)
, .B(or3_2_17_B)
, .X(or3_2_12_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_4 (.X(a31o_2_4_X)
, .B1(nand4_2_3_C)
, .A3(nand4_2_3_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_2 (.A_N(or4b_2_3_A)
, .C(or4b_2_3_C)
, .B_N(or4b_2_2_C)
, .X(nand4_2_1_D)
, .D(or4b_2_3_B)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_10 (.X(clkbuf_8_10_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__o21ai_2 Xo21ai_2_3 (.B1(o21ai_2_3_B1)
, .Y(o21ai_2_3_Y)
, .A2(nor2_2_40_A)
, .A1(I)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_3 (.X(a21o_2_3_X)
, .B1(and3_2_3_X)
, .A1(or2_2_5_A)
, .A2(a21o_2_3_A2)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_4 (.B(or2_2_4_B)
, .X(or2_2_4_X)
, .A(or2_2_4_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_18 (.B(o21a_2_24_A2)
, .Y(dfrtp_2_67_D)
, .A_N(o21a_2_24_A1)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_17 (.B(and3_2_2_C)
, .Y(or3_2_5_B)
, .A(and3_2_2_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_28 (.B(and2_2_2_A)
, .Y(or3_2_1_B)
, .A(or3_2_3_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_39 (.B(inv_2_7_A)
, .Y(nor2_2_39_Y)
, .A(or2_2_10_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_13 (.X(a31o_2_13_X)
, .B1(or2_2_11_A)
, .A3(inv_2_7_A)
, .A1(inv_2_9_A)
, .A2(nor2_2_29_Y)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_24 (.X(a31o_2_24_X)
, .B1(nand4_2_9_C)
, .A3(nand4_2_9_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__and2_2 Xand2_2_9 (.A(and4_2_3_C)
, .X(and4_2_4_B)
, .B(nor3_2_2_A)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_13 (.A(or3_2_13_A)
, .B(or3_2_17_B)
, .X(or3_2_13_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_5 (.X(a31o_2_5_X)
, .B1(xor2_2_5_X)
, .A3(a31o_2_5_A3)
, .A1(or2_2_5_A)
, .A2(a31o_2_5_A2)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_20 (.Y(xnor2_2_21_B)
, .A(or2_2_12_A)
, .B(xor2_2_20_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_3 (.A_N(or4b_2_3_B)
, .C(or4b_2_3_C)
, .B_N(or4b_2_2_C)
, .X(nand4_2_2_D)
, .D(or4b_2_3_A)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_11 (.X(clkbuf_8_11_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__o21ai_2 Xo21ai_2_4 (.B1(a211o_2_3_X)
, .Y(o21ai_2_4_Y)
, .A2(o32a_2_2_B2)
, .A1(inv_2_12_Y)
);
  sky130_fd_sc_hd__nand3_2 Xnand3_2_0 (.A(xor2_2_9_A)
, .Y(nand3_2_0_Y)
, .B(xor2_2_4_A)
, .C(inv_2_5_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_0 (.S(or4_2_0_A)
, .A1(a31o_2_0_X)
, .A0(o21a_2_3_X)
, .X(mux2_1_0_X)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_4 (.X(xor2_2_5_B)
, .B1(a21oi_2_6_Y)
, .A1(xnor2_2_4_A)
, .A2(or3_2_5_B)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_5 (.B(or3_2_1_B)
, .X(or2_2_5_X)
, .A(or2_2_5_A)
);
  sky130_fd_sc_hd__nand2b_2 Xnand2b_2_19 (.B(o21a_2_25_A2)
, .Y(dfrtp_2_68_D)
, .A_N(o21a_2_25_A1)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_0 (.X(or2_2_0_B)
, .B(nor2_2_9_B)
, .A_N(xor2_2_3_B)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_18 (.B(xor2_2_5_B)
, .Y(nor2_2_20_A)
, .A(xor2_2_5_A)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_29 (.B(and3_2_7_C)
, .Y(nor2_2_29_Y)
, .A(xor2_2_7_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_14 (.X(a31o_2_14_X)
, .B1(a22o_2_4_X)
, .A3(or2_2_12_X)
, .A1(and2b_2_16_X)
, .A2(nand2_2_38_Y)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_25 (.X(a31o_2_25_X)
, .B1(nand4_2_5_C)
, .A3(nand4_2_5_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_14 (.A(or3_2_14_A)
, .B(or3_2_17_B)
, .X(or3_2_14_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_6 (.X(or3_2_11_A)
, .B1(nor3_2_0_Y)
, .A3(nor2_2_24_Y)
, .A1(or3b_2_0_A)
, .A2(or2_2_9_B)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_10 (.Y(or4_2_0_B)
, .A(xor2_2_6_A)
, .B(xor2_2_6_B)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_21 (.Y(xnor2_2_21_Y)
, .A(a22o_2_4_B2)
, .B(xnor2_2_21_B)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_4 (.A_N(or2_2_9_B)
, .C(or3b_2_0_A)
, .B_N(or2_2_8_B)
, .X(or3_2_14_A)
, .D(or2_2_9_A)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_12 (.X(dfxtp_2_2_CLK)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__o21ai_2 Xo21ai_2_5 (.B1(or2_2_8_B)
, .Y(o21ai_2_5_Y)
, .A2(or2_2_9_B)
, .A1(or2_2_9_A)
);
  sky130_fd_sc_hd__nand3_2 Xnand3_2_1 (.A(or2_2_9_B)
, .Y(nand3_2_1_Y)
, .B(or2_2_9_A)
, .C(or3b_2_0_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_1 (.S(or3_2_3_B)
, .A1(or4_2_0_C)
, .A0(or3_2_0_X)
, .X(mux2_1_1_X)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_5 (.X(xor2_2_6_A)
, .B1(nor2_2_21_A)
, .A1(xor2_2_8_A)
, .A2(xor2_2_8_B)
);
  sky130_fd_sc_hd__o32ai_2 Xo32ai_2_0 (.A1(o31a_2_0_A1)
, .B1(o32ai_2_0_B1)
, .A2(o31a_2_0_A2)
, .A3(and2_2_7_X)
, .Y(o32ai_2_0_Y)
, .B2(or3b_2_0_A)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_6 (.B(or2_2_6_B)
, .X(or2_2_6_X)
, .A(or3_2_1_C)
);
  sky130_fd_sc_hd__o21ba_2 Xo21ba_2_0 (.B1_N(nor2_2_5_Y)
, .A1(or2_2_4_A)
, .X(o21ba_2_0_X)
, .A2(nand2_2_9_Y)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_1 (.X(and4_2_0_B)
, .B(o21a_2_4_A1)
, .A_N(nand4_2_0_C)
);
  sky130_fd_sc_hd__or4bb_2 Xor4bb_2_0 (.A(or4_2_4_A)
, .X(or4bb_2_0_X)
, .B(or4_2_4_C)
, .D_N(or4_2_4_B)
, .C_N(or4_2_4_D)
);
  sky130_fd_sc_hd__nor2_2 Xnor2_2_19 (.B(xnor2_2_8_B)
, .Y(nor2_2_19_Y)
, .A(xnor2_2_8_A)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_15 (.X(a31o_2_15_X)
, .B1(a22oi_2_0_Y)
, .A3(nand2_2_29_Y)
, .A1(or2_2_9_B)
, .A2(inv_2_13_Y)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_10 (.B(inv_2_7_A)
, .A(I)
, .Y(o21a_2_28_A2)
, .D(nand4_2_10_D)
, .C(nand4_2_10_C)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_15 (.A(or3_2_15_A)
, .B(or3_2_17_B)
, .X(or3_2_15_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_7 (.X(a31o_2_7_X)
, .B1(or3_2_5_B)
, .A3(xor2_2_4_A)
, .A1(xor2_2_0_B)
, .A2(xor2_2_9_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_22 (.Y(xnor2_2_22_Y)
, .A(or2_2_12_A)
, .B(o21ai_2_4_Y)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_11 (.Y(xnor2_2_11_Y)
, .A(and4_2_3_C)
, .B(xnor2_2_11_B)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_5 (.A_N(and4_2_3_B)
, .C(nor3_2_2_B)
, .B_N(or3_2_8_C)
, .X(and3_2_10_A)
, .D(or3_2_8_B)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_13 (.X(clkbuf_4_9_A)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__nor3b_2 Xnor3b_2_0 (.C_N(nor2_2_40_A)
, .Y(o22a_2_3_B1)
, .A(inv_2_7_A)
, .B(nor3b_2_0_B)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_2 (.S(or4_2_0_A)
, .A1(a22o_2_0_X)
, .A0(or2_2_6_X)
, .X(mux2_1_2_X)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_6 (.X(a21o_2_6_X)
, .B1(or2_2_9_A)
, .A1(and2_2_7_B)
, .A2(a21o_2_6_A2)
);
  sky130_fd_sc_hd__or2_2 Xor2_2_7 (.B(I)
, .X(or2_2_7_X)
, .A(or2_2_7_A)
);
  sky130_fd_sc_hd__o21ba_2 Xo21ba_2_1 (.B1_N(or4b_2_8_C)
, .A1(success)
, .X(o21ba_2_1_X)
, .A2(a32o_2_3_B1)
);
  sky130_fd_sc_hd__and2b_2 Xand2b_2_2 (.X(and4_2_0_C)
, .B(o21a_2_5_A1)
, .A_N(nand4_2_3_C)
);
  sky130_fd_sc_hd__o31ai_2 Xo31ai_2_0 (.A1(or2_2_4_A)
, .Y(o32a_2_1_B2)
, .B1(or4_2_0_A)
, .A3(inv_2_0_Y)
, .A2(or3_2_2_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_16 (.X(a31o_2_16_X)
, .B1(nand4_2_6_C)
, .A3(nand4_2_6_D)
, .A1(I)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__nand4_2 Xnand4_2_11 (.B(inv_2_7_A)
, .A(I)
, .Y(o21a_2_24_A2)
, .D(and4b_2_2_X)
, .C(nand4_2_11_C)
);
  sky130_fd_sc_hd__or3_2 Xor3_2_16 (.A(or3_2_16_A)
, .B(or3_2_17_B)
, .X(or3_2_16_X)
, .C(or3_2_17_C)
);
  sky130_fd_sc_hd__a31o_2 Xa31o_2_8 (.X(a31o_2_8_X)
, .B1(xor2_2_0_B)
, .A3(xor2_2_7_A)
, .A1(inv_2_9_A)
, .A2(inv_2_7_A)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_23 (.Y(or2_2_12_B)
, .A(a22o_2_4_B2)
, .B(xnor2_2_26_A)
);
  sky130_fd_sc_hd__and4bb_2 Xand4bb_2_6 (.A_N(or4_2_4_A)
, .C(or4_2_4_D)
, .B_N(or4_2_4_C)
, .X(inv_2_9_A)
, .D(or4_2_4_B)
);
  sky130_fd_sc_hd__xnor2_2 Xxnor2_2_12 (.Y(nor2_2_31_B)
, .A(or4_2_4_A)
, .B(inv_2_7_A)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_14 (.X(dfxtp_2_3_CLK)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__nor3b_2 Xnor3b_2_1 (.C_N(or2_2_9_A)
, .Y(o31a_2_2_A3)
, .A(or3b_2_0_A)
, .B(or2_2_9_B)
);
  sky130_fd_sc_hd__clkbuf_8 Xclkbuf_8_0 (.X(clkbuf_8_0_X)
, .A(clkbuf_8_9_A)
);
  sky130_fd_sc_hd__mux2_1 Xmux2_1_3 (.S(or2_2_5_A)
, .A1(mux2_1_0_X)
, .A0(o32a_2_1_X)
, .X(mux2_1_3_X)
);
  sky130_fd_sc_hd__a21o_2 Xa21o_2_7 (.X(or3_2_10_A)
, .B1(or3_2_6_C)
, .A1(or3b_2_0_A)
, .A2(nor2_2_24_Y)
);
endmodule