// output_logic -- the O-exclusive decode subsystem of puzzle_readable.
// Contains every signal needed to compute O[7:0] that is NOT also needed
// to compute `success`, and that is I-dependent (the purely invariant part
// of this same logic already lives in counter_control).
module output_logic (
    input  clk,
    input  rst_n,
    input  I,
    input  success,
    input  and2_2_15_X,
    input  and3_2_10_B,
    input  and4_2_3_A,
    input  and4_2_3_B,
    input  and4_2_3_C,
    input  and4_2_4_B,
    input  and4b_2_3_X,
    input  inv_2_23_A,
    input  nor3_2_2_B,
    input  nor3_2_2_Y,
    input  or3_2_8_B,
    input  or3_2_8_C,
    input  a22o_2_13_A1,
    input  a22o_2_21_B2,
    input  a22o_2_22_X,
    input  a22o_2_7_A1,
    input  a31o_2_15_X,
    input  a32o_2_4_B2,
    input  and2_2_8_X,
    input  and2b_2_16_X,
    input  and2b_2_19_X,
    input  and3_2_17_X,
    input  and3_2_25_C,
    input  and3b_2_1_X,
    input  and3b_2_2_X,
    input  conb_1_0_LO,
    input  conb_1_3_LO,
    input  conb_1_4_LO,
    input  conb_1_5_LO,
    input  inv_2_7_A,
    input  nor2_2_23_Y,
    input  nor2_2_39_Y,
    input  nor2_2_46_A,
    input  o211a_2_10_X,
    input  o211a_2_9_X,
    input  o21a_2_13_X,
    input  o21a_2_15_X,
    input  o21ai_2_4_Y,
    input  o21bai_2_0_Y,
    input  o221a_2_2_X,
    input  o22a_2_2_X,
    input  o31a_2_0_X,
    input  o31a_2_1_X,
    input  o31a_2_2_X,
    input  o32a_2_2_X,
    input  o32ai_2_0_Y,
    input  or2_2_10_X,
    input  or2_2_11_B,
    input  or2_2_9_X,
    input  or3_2_10_A,
    input  or3_2_11_A,
    input  or3_2_13_A,
    input  or3_2_14_A,
    input  or3_2_15_A,
    input  or3_2_16_A,
    input  or3_2_17_A,
    input  or3_2_6_X,
    input  or3_2_9_X,
    input  xnor2_2_14_B,
    input  xnor2_2_6_Y,
    input  xor2_2_20_B,
    output [7:0] O
);

    // internal wires
    wire a221o_2_2_X;
    wire a221o_2_4_X;
    wire a22o_2_13_X;
    wire a22o_2_17_X;
    wire a22o_2_4_X;
    wire a22o_2_5_X;
    wire a22o_2_6_X;
    wire a22o_2_7_X;
    wire a22o_2_8_X;
    wire a22o_2_9_A1;
    wire a22o_2_9_X;
    wire a31o_2_14_X;
    wire a32o_2_3_X;
    wire and3_2_10_A;
    wire dfstp_2_0_D;
    wire dfstp_2_2_D;
    wire inv_2_22_Y;
    wire inv_2_23_Y;
    wire nand2_2_38_Y;
    wire nor2_2_34_Y;
    wire nor2_2_40_A;
    wire nor2_2_40_Y;
    wire nor2_2_46_B;
    wire nor2_2_46_Y;
    wire nor3_2_3_A;
    wire nor3_2_3_B;
    wire nor3_2_3_C;
    wire nor3_2_3_Y;
    wire nor3b_2_0_B;
    wire nor3b_2_2_Y;
    wire nor3b_2_3_Y;
    wire o21a_2_14_B1;
    wire o21a_2_14_X;
    wire o21ai_2_3_B1;
    wire o21ai_2_3_Y;
    wire o21ba_2_1_X;
    wire o221a_2_1_X;
    wire o22a_2_3_B1;
    wire o22a_2_3_B2;
    wire o22a_2_3_X;
    wire o31a_2_10_X;
    wire o31a_2_3_A3;
    wire o31a_2_3_X;
    wire o31a_2_4_X;
    wire o31a_2_5_A2;
    wire o31a_2_5_X;
    wire o31a_2_6_A2;
    wire o31a_2_6_A3;
    wire o31a_2_6_X;
    wire o31a_2_7_A2;
    wire o31a_2_7_A3;
    wire o31a_2_7_X;
    wire o31a_2_8_A2;
    wire o31a_2_8_A3;
    wire o31a_2_8_X;
    wire o31a_2_9_A1;
    wire o31a_2_9_A2;
    wire o31a_2_9_A3;
    wire o31a_2_9_X;
    wire o32a_2_3_A1;
    wire o32a_2_3_A2;
    wire o32a_2_3_A3;
    wire o32a_2_3_X;
    wire or2_2_12_B;
    wire or2_2_12_X;
    wire or3_2_10_X;
    wire or3_2_11_X;
    wire or3_2_12_X;
    wire or3_2_13_X;
    wire or3_2_14_X;
    wire or3_2_15_X;
    wire or3_2_16_X;
    wire or3_2_17_B;
    wire or3_2_17_C;
    wire or3_2_17_X;
    wire or4b_2_8_A;
    wire or4b_2_8_C;
    wire or4b_2_8_X;
    wire xnor2_2_13_Y;
    wire xnor2_2_14_Y;
    wire xnor2_2_18_Y;
    wire xnor2_2_19_Y;
    wire xnor2_2_21_B;
    wire xnor2_2_21_Y;
    wire xnor2_2_22_Y;
    wire xnor2_2_26_A;
    wire xnor2_2_26_B;
    wire xor2_2_12_X;
    wire xor2_2_13_X;
    wire xor2_2_14_X;
    wire xor2_2_15_X;
    wire xor2_2_16_X;
    wire xor2_2_17_X;
    wire xor2_2_18_X;
    wire xor2_2_19_X;
    wire xor2_2_20_X;

    // internal registers
    reg a22o_2_4_B2;
    reg a32o_2_3_B1;
    reg or2_2_12_A;
    reg xor2_2_14_B;
    reg xor2_2_16_A;
    reg xor2_2_17_B;
    reg xor2_2_19_A;
    reg xor2_2_19_B;
    reg xor2_2_20_A;

    assign and3_2_10_A = (~and4_2_3_B)
                         & (~or3_2_8_C)
                         & nor3_2_2_B
                         & or3_2_8_B;  // sky130_fd_sc_hd__and4bb_2_5 : sky130_fd_sc_hd__and4bb_2
    assign inv_2_22_Y = ~success;  // sky130_fd_sc_hd__inv_2_22 : sky130_fd_sc_hd__inv_2
    assign xnor2_2_21_B = ~(or2_2_12_A ^ xor2_2_20_A);  // sky130_fd_sc_hd__xnor2_2_20 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_26_A = ~(xor2_2_14_B ^ xor2_2_19_A);  // sky130_fd_sc_hd__xnor2_2_17 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_26_B = ~(xor2_2_20_A ^ xor2_2_17_B);  // sky130_fd_sc_hd__xnor2_2_16 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_13_X = or2_2_12_A
                         ^ xor2_2_19_B;  // sky130_fd_sc_hd__xor2_2_13 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_14_X = xor2_2_16_A
                         ^ xor2_2_14_B;  // sky130_fd_sc_hd__xor2_2_14 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_17_X = xor2_2_19_A
                         ^ xor2_2_17_B;  // sky130_fd_sc_hd__xor2_2_17 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_19_X = xor2_2_19_A
                         ^ xor2_2_19_B;  // sky130_fd_sc_hd__xor2_2_19 : sky130_fd_sc_hd__xor2_2
    assign inv_2_23_Y = ~inv_2_23_A;  // sky130_fd_sc_hd__inv_2_23 : sky130_fd_sc_hd__inv_2
    assign nor2_2_40_A = ~(xnor2_2_26_A ^ xnor2_2_26_B);  // sky130_fd_sc_hd__xnor2_2_26 : sky130_fd_sc_hd__xnor2_2
    assign nor2_2_46_B = ~(a22o_2_4_B2 ^ xor2_2_17_X);  // sky130_fd_sc_hd__xnor2_2_25 : sky130_fd_sc_hd__xnor2_2
    assign nor3b_2_0_B = ~(xor2_2_16_A ^ xor2_2_19_X);  // sky130_fd_sc_hd__xnor2_2_24 : sky130_fd_sc_hd__xnor2_2
    assign or2_2_12_B = ~(a22o_2_4_B2 ^ xnor2_2_26_A);  // sky130_fd_sc_hd__xnor2_2_23 : sky130_fd_sc_hd__xnor2_2
    assign or4b_2_8_C = and3_2_10_A
                        & and3_2_10_B
                        & and4_2_4_B;  // sky130_fd_sc_hd__and3_2_10 : sky130_fd_sc_hd__and3_2
    assign xnor2_2_19_Y = ~(xnor2_2_21_B ^ xor2_2_19_X);  // sky130_fd_sc_hd__xnor2_2_19 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_21_Y = ~(a22o_2_4_B2 ^ xnor2_2_21_B);  // sky130_fd_sc_hd__xnor2_2_21 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_15_X = xor2_2_19_B
                         ^ or2_2_9_X;  // sky130_fd_sc_hd__xor2_2_15 : sky130_fd_sc_hd__xor2_2
    assign a22o_2_9_A1 = ~(a22o_2_4_B2 ^ a22o_2_22_X);  // sky130_fd_sc_hd__xnor2_2_15 : sky130_fd_sc_hd__xnor2_2
    assign nand2_2_38_Y = ~(or2_2_12_A & or2_2_12_B);  // sky130_fd_sc_hd__nand2_2_38 : sky130_fd_sc_hd__nand2_2
    assign nor2_2_34_Y = ~(inv_2_7_A | nor2_2_40_A);  // sky130_fd_sc_hd__nor2_2_34 : sky130_fd_sc_hd__nor2_2
    assign o21ai_2_3_B1 = ~((I & nor2_2_40_A) | (~inv_2_7_A));  // sky130_fd_sc_hd__a21boi_2_0 : sky130_fd_sc_hd__a21boi_2
    assign o21ba_2_1_X = (success | a32o_2_3_B1)
                         & (~or4b_2_8_C);  // sky130_fd_sc_hd__o21ba_2_1 : sky130_fd_sc_hd__o21ba_2
    assign o22a_2_3_B1 = ~(inv_2_7_A | nor3b_2_0_B | (~nor2_2_40_A));  // sky130_fd_sc_hd__nor3b_2_0 : sky130_fd_sc_hd__nor3b_2
    assign or2_2_12_X = or2_2_12_A
                        | or2_2_12_B;  // sky130_fd_sc_hd__or2_2_12 : sky130_fd_sc_hd__or2_2
    assign or4b_2_8_A = ~(and4_2_3_A | and4_2_3_B | and4_2_3_C | (~nor3_2_2_Y));  // sky130_fd_sc_hd__nor4b_2_1 : sky130_fd_sc_hd__nor4b_2
    assign xor2_2_16_X = xor2_2_16_A
                         ^ or2_2_12_B;  // sky130_fd_sc_hd__xor2_2_16 : sky130_fd_sc_hd__xor2_2
    assign a22o_2_4_X = (inv_2_7_A & xor2_2_20_A)
                        | (nor2_2_39_Y & a22o_2_4_B2);  // sky130_fd_sc_hd__a22o_2_4 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_5_X = (inv_2_7_A & xor2_2_14_B)
                        | (xor2_2_20_A & nor2_2_39_Y);  // sky130_fd_sc_hd__a22o_2_5 : sky130_fd_sc_hd__a22o_2
    assign nor2_2_40_Y = ~(nor2_2_40_A | nor2_2_46_A);  // sky130_fd_sc_hd__nor2_2_40 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_46_Y = ~(nor2_2_46_A | nor2_2_46_B);  // sky130_fd_sc_hd__nor2_2_46 : sky130_fd_sc_hd__nor2_2
    assign nor3_2_3_A = ~((inv_2_22_Y & a32o_2_3_B1) | or4b_2_8_C | or4b_2_8_A);  // sky130_fd_sc_hd__a211oi_2_1 : sky130_fd_sc_hd__a211oi_2
    assign nor3_2_3_B = ~(or4b_2_8_A | o21ba_2_1_X);  // sky130_fd_sc_hd__nor2_2_48 : sky130_fd_sc_hd__nor2_2
    assign o21a_2_14_B1 = ~((xor2_2_13_X & xor2_2_14_X) | nor2_2_46_A);  // sky130_fd_sc_hd__a21oi_2_19 : sky130_fd_sc_hd__a21oi_2
    assign o21ai_2_3_Y = ~((I | nor2_2_40_A) & o21ai_2_3_B1);  // sky130_fd_sc_hd__o21ai_2_3 : sky130_fd_sc_hd__o21ai_2
    assign o22a_2_3_B2 = (inv_2_7_A & or2_2_12_A)
                         | (nor2_2_34_Y & nor3b_2_0_B)
                         | nor2_2_39_Y;  // sky130_fd_sc_hd__a221o_2_3 : sky130_fd_sc_hd__a221o_2
    assign o32a_2_3_A1 = (~xor2_2_16_X)
                         & nor2_2_34_Y;  // sky130_fd_sc_hd__and2b_2_18 : sky130_fd_sc_hd__and2b_2
    assign o32a_2_3_A2 = (~inv_2_7_A)
                         & nor2_2_40_A
                         & xor2_2_16_X;  // sky130_fd_sc_hd__and3b_2_3 : sky130_fd_sc_hd__and3b_2
    assign o32a_2_3_A3 = (inv_2_7_A & xor2_2_19_B)
                         | nor2_2_39_Y;  // sky130_fd_sc_hd__a21o_2_12 : sky130_fd_sc_hd__a21o_2
    assign or4b_2_8_X = or4b_2_8_A
                        | success
                        | or4b_2_8_C
                        | (~a32o_2_3_B1);  // sky130_fd_sc_hd__or4b_2_8 : sky130_fd_sc_hd__or4b_2
    assign xnor2_2_13_Y = ~(xor2_2_17_B ^ a31o_2_15_X);  // sky130_fd_sc_hd__xnor2_2_13 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_14_Y = ~(xor2_2_16_A ^ xnor2_2_14_B);  // sky130_fd_sc_hd__xnor2_2_14 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_18_Y = ~(or3_2_9_X ^ xor2_2_15_X);  // sky130_fd_sc_hd__xnor2_2_18 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_12_X = xor2_2_14_B
                         ^ o31a_2_1_X;  // sky130_fd_sc_hd__xor2_2_12 : sky130_fd_sc_hd__xor2_2
    assign a221o_2_2_X = (inv_2_7_A & xor2_2_16_A)
                         | (xor2_2_19_B & nor2_2_39_Y)
                         | nor2_2_46_Y;  // sky130_fd_sc_hd__a221o_2_2 : sky130_fd_sc_hd__a221o_2
    assign a31o_2_14_X = (and2b_2_16_X & nand2_2_38_Y & or2_2_12_X)
                         | a22o_2_4_X;  // sky130_fd_sc_hd__a31o_2_14 : sky130_fd_sc_hd__a31o_2
    assign dfstp_2_0_D = (inv_2_7_A & a22o_2_4_B2)
                         | (xor2_2_17_B & nor2_2_39_Y)
                         | nor2_2_40_Y;  // sky130_fd_sc_hd__a221o_2_5 : sky130_fd_sc_hd__a221o_2
    assign dfstp_2_2_D = (and2b_2_16_X & xnor2_2_19_Y)
                         | a22o_2_5_X;  // sky130_fd_sc_hd__a21o_2_11 : sky130_fd_sc_hd__a21o_2
    assign nor3_2_3_C = ~or4b_2_8_X;  // sky130_fd_sc_hd__inv_2_24 : sky130_fd_sc_hd__inv_2
    assign o21a_2_14_X = (xor2_2_13_X | xor2_2_14_X)
                         & o21a_2_14_B1;  // sky130_fd_sc_hd__o21a_2_14 : sky130_fd_sc_hd__o21a_2
    assign o221a_2_1_X = (xor2_2_16_A | or2_2_10_X)
                         & (nor2_2_46_A | xnor2_2_21_Y)
                         & o21ai_2_3_Y;  // sky130_fd_sc_hd__o221a_2_1 : sky130_fd_sc_hd__o221a_2
    assign o22a_2_3_X = (xor2_2_19_A | or2_2_10_X)
                        & (o22a_2_3_B1 | o22a_2_3_B2);  // sky130_fd_sc_hd__o22a_2_3 : sky130_fd_sc_hd__o22a_2
    assign o32a_2_3_X = (o32a_2_3_A1 | o32a_2_3_A2 | o32a_2_3_A3)
                        & (or2_2_10_X | or2_2_12_A);  // sky130_fd_sc_hd__o32a_2_3 : sky130_fd_sc_hd__o32a_2
    assign xnor2_2_22_Y = ~(or2_2_12_A ^ o21ai_2_4_Y);  // sky130_fd_sc_hd__xnor2_2_22 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_18_X = xor2_2_19_A
                         ^ o32a_2_2_X;  // sky130_fd_sc_hd__xor2_2_18 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_20_X = xor2_2_20_A
                         ^ xor2_2_20_B;  // sky130_fd_sc_hd__xor2_2_20 : sky130_fd_sc_hd__xor2_2

    assign a221o_2_4_X = (inv_2_7_A & xor2_2_19_A)
                         | (nor2_2_39_Y & xor2_2_14_B)
                         | o21a_2_14_X;  // sky130_fd_sc_hd__a221o_2_4 : sky130_fd_sc_hd__a221o_2
    assign a32o_2_3_X = (inv_2_23_Y & and2_2_15_X & and4b_2_3_X)
                        | (a32o_2_3_B1 & a32o_2_4_B2);  // sky130_fd_sc_hd__a32o_2_3 : sky130_fd_sc_hd__a32o_2
    assign nor3_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | nor3_2_3_C);  // sky130_fd_sc_hd__nor3_2_3 : sky130_fd_sc_hd__nor3_2
    assign nor3b_2_2_Y = ~(nor3_2_3_A | nor3_2_3_C | (~nor3_2_3_B));  // sky130_fd_sc_hd__nor3b_2_2 : sky130_fd_sc_hd__nor3b_2
    assign nor3b_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | (~nor3_2_3_C));  // sky130_fd_sc_hd__nor3b_2_3 : sky130_fd_sc_hd__nor3b_2
    assign or3_2_17_B = ~(nor3_2_3_B | nor3_2_3_C | (~nor3_2_3_A));  // sky130_fd_sc_hd__nor3b_2_4 : sky130_fd_sc_hd__nor3b_2
    assign or3_2_17_C = ~((nor3_2_3_B & nor3_2_3_C) | nor3_2_3_A);  // sky130_fd_sc_hd__a21oi_2_18 : sky130_fd_sc_hd__a21oi_2

    assign a22o_2_13_X = (a22o_2_13_A1 & nor3b_2_2_Y)
                         | (nor3_2_3_Y & o221a_2_2_X);  // sky130_fd_sc_hd__a22o_2_13 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_17_X = (xor2_2_18_X & or3_2_17_B)
                         | (nor3b_2_3_Y & xnor2_2_6_Y);  // sky130_fd_sc_hd__a22o_2_17 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_6_X = (conb_1_5_LO & nor3b_2_2_Y)
                        | (nor3_2_3_Y & conb_1_3_LO);  // sky130_fd_sc_hd__a22o_2_6 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_7_X = (a22o_2_7_A1 & nor3b_2_2_Y)
                        | (nor3_2_3_Y & o21a_2_15_X);  // sky130_fd_sc_hd__a22o_2_7 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_8_X = (xor2_2_12_X & or3_2_17_B)
                        | (nor3b_2_3_Y & o32ai_2_0_Y);  // sky130_fd_sc_hd__a22o_2_8 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_9_X = (a22o_2_9_A1 & or3_2_17_B)
                        | (nor3b_2_3_Y & o22a_2_2_X);  // sky130_fd_sc_hd__a22o_2_9 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_3_A3 = (xnor2_2_13_Y & or3_2_17_B)
                         | (nor3b_2_3_Y & conb_1_0_LO);  // sky130_fd_sc_hd__a22o_2_20 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_5_A2 = (conb_1_4_LO & nor3b_2_2_Y)
                         | (nor3_2_3_Y & o211a_2_9_X);  // sky130_fd_sc_hd__a22o_2_12 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_6_A2 = (o21a_2_13_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & and3b_2_1_X);  // sky130_fd_sc_hd__a22o_2_15 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_6_A3 = (xnor2_2_18_Y & or3_2_17_B)
                         | (nor3b_2_3_Y & o31a_2_0_X);  // sky130_fd_sc_hd__a22o_2_11 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_7_A2 = (o211a_2_10_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & and2b_2_19_X);  // sky130_fd_sc_hd__a22o_2_16 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_7_A3 = (xnor2_2_22_Y & or3_2_17_B)
                         | (nor3b_2_3_Y & and2_2_8_X);  // sky130_fd_sc_hd__a22o_2_18 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_8_A2 = (and3_2_17_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & and3b_2_2_X);  // sky130_fd_sc_hd__a22o_2_14 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_8_A3 = (xor2_2_20_X & or3_2_17_B)
                         | (nor3b_2_3_Y & nor2_2_23_Y);  // sky130_fd_sc_hd__a22o_2_19 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_9_A1 = ~(or3_2_17_B | or3_2_17_C);  // sky130_fd_sc_hd__nor2_2_47 : sky130_fd_sc_hd__nor2_2
    assign o31a_2_9_A2 = (o31a_2_2_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & a22o_2_21_B2);  // sky130_fd_sc_hd__a22o_2_21 : sky130_fd_sc_hd__a22o_2
    assign o31a_2_9_A3 = (xnor2_2_14_Y & or3_2_17_B)
                         | (nor3b_2_3_Y & o21bai_2_0_Y);  // sky130_fd_sc_hd__a22o_2_10 : sky130_fd_sc_hd__a22o_2
    assign or3_2_10_X = or3_2_10_A
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_10 : sky130_fd_sc_hd__or3_2
    assign or3_2_11_X = or3_2_11_A
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_11 : sky130_fd_sc_hd__or3_2
    assign or3_2_12_X = or3_2_6_X
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_12 : sky130_fd_sc_hd__or3_2
    assign or3_2_13_X = or3_2_13_A
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_13 : sky130_fd_sc_hd__or3_2
    assign or3_2_14_X = or3_2_14_A
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_14 : sky130_fd_sc_hd__or3_2
    assign or3_2_15_X = or3_2_15_A
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_15 : sky130_fd_sc_hd__or3_2
    assign or3_2_16_X = or3_2_16_A
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_16 : sky130_fd_sc_hd__or3_2
    assign or3_2_17_X = or3_2_17_A
                        | or3_2_17_B
                        | or3_2_17_C;  // sky130_fd_sc_hd__or3_2_17 : sky130_fd_sc_hd__or3_2
    assign o31a_2_10_X = (o31a_2_9_A1 | a22o_2_13_X | a22o_2_17_X)
                         & or3_2_15_X;  // sky130_fd_sc_hd__o31a_2_10 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_3_X = (o31a_2_9_A1 | a22o_2_6_X | o31a_2_3_A3)
                        & or3_2_13_X;  // sky130_fd_sc_hd__o31a_2_3 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_4_X = (o31a_2_9_A1 | a22o_2_7_X | a22o_2_9_X)
                        & or3_2_12_X;  // sky130_fd_sc_hd__o31a_2_4 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_5_X = (o31a_2_9_A1 | o31a_2_5_A2 | a22o_2_8_X)
                        & or3_2_17_X;  // sky130_fd_sc_hd__o31a_2_5 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_6_X = (o31a_2_9_A1 | o31a_2_6_A2 | o31a_2_6_A3)
                        & or3_2_10_X;  // sky130_fd_sc_hd__o31a_2_6 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_7_X = (o31a_2_9_A1 | o31a_2_7_A2 | o31a_2_7_A3)
                        & or3_2_11_X;  // sky130_fd_sc_hd__o31a_2_7 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_8_X = (o31a_2_9_A1 | o31a_2_8_A2 | o31a_2_8_A3)
                        & or3_2_14_X;  // sky130_fd_sc_hd__o31a_2_8 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_9_X = (o31a_2_9_A1 | o31a_2_9_A2 | o31a_2_9_A3)
                        & or3_2_16_X;  // sky130_fd_sc_hd__o31a_2_9 : sky130_fd_sc_hd__o31a_2

    assign O[0] = or2_2_11_B
                  & o31a_2_9_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_25 : sky130_fd_sc_hd__and3_2
    assign O[1] = or2_2_11_B
                  & o31a_2_6_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_18 : sky130_fd_sc_hd__and3_2
    assign O[2] = or2_2_11_B
                  & o31a_2_7_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_24 : sky130_fd_sc_hd__and3_2
    assign O[3] = or2_2_11_B
                  & o31a_2_10_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_20 : sky130_fd_sc_hd__and3_2
    assign O[4] = or2_2_11_B
                  & o31a_2_5_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_21 : sky130_fd_sc_hd__and3_2
    assign O[5] = or2_2_11_B
                  & o31a_2_8_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_22 : sky130_fd_sc_hd__and3_2
    assign O[6] = or2_2_11_B
                  & o31a_2_4_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_19 : sky130_fd_sc_hd__and3_2
    assign O[7] = or2_2_11_B
                  & o31a_2_3_X
                  & and3_2_25_C;  // sky130_fd_sc_hd__and3_2_23 : sky130_fd_sc_hd__and3_2

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            a32o_2_3_B1 <= 1'b0;
            xor2_2_19_A <= 1'b0;
            xor2_2_19_B <= 1'b0;
            xor2_2_14_B <= 1'b0;
            a22o_2_4_B2 <= 1'b0;
            xor2_2_17_B <= 1'b1;
            xor2_2_16_A <= 1'b1;
            xor2_2_20_A <= 1'b1;
            or2_2_12_A <= 1'b1;
        end else begin
            a32o_2_3_B1 <= a32o_2_3_X;
            xor2_2_19_A <= o22a_2_3_X;
            xor2_2_19_B <= a221o_2_2_X;
            xor2_2_14_B <= a221o_2_4_X;
            a22o_2_4_B2 <= a31o_2_14_X;
            xor2_2_17_B <= dfstp_2_0_D;
            xor2_2_16_A <= o221a_2_1_X;
            xor2_2_20_A <= dfstp_2_2_D;
            or2_2_12_A <= o32a_2_3_X;
        end
    end

endmodule
