// counter_control -- the full input-invariant subsystem of puzzle_readable.
// None of this logic reads `I`. It contains the mod-11 round counter, the
// rounds-complete sticky latch, and every other signal (used by either the
// success-checking FSM or the O output-decode logic) that is provably
// independent of the serial input.
module counter_control (
    input  clk,
    input  rst_n,
    input  enable,
    output a22o_2_13_A1,
    output a22o_2_21_B2,
    output a22o_2_22_X,
    output a22o_2_7_A1,
    output a31o_2_15_X,
    output a32o_2_4_B2,
    output and2_2_8_X,
    output and2b_2_16_X,
    output and2b_2_19_X,
    output and3_2_17_X,
    output and3_2_25_C,
    output and3b_2_1_X,
    output and3b_2_2_X,
    output and4b_2_2_X,
    output buf_2_0_X,
    output conb_1_0_LO,
    output conb_1_2_HI,
    output conb_1_3_LO,
    output conb_1_4_LO,
    output conb_1_5_LO,
    output inv_2_7_A,
    output inv_2_7_Y,
    output inv_2_9_A,
    output inv_2_9_Y,
    output nand4_2_10_D,
    output nand4_2_12_D,
    output nand4_2_13_D,
    output nand4_2_1_D,
    output nand4_2_2_D,
    output nand4_2_3_D,
    output nand4_2_4_D,
    output nand4_2_5_D,
    output nand4_2_6_D,
    output nand4_2_8_D,
    output nand4_2_9_D,
    output nor2_2_23_Y,
    output nor2_2_39_Y,
    output nor2_2_46_A,
    output nor4_2_0_Y,
    output nor4_2_1_Y,
    output o211a_2_10_X,
    output o211a_2_9_X,
    output o21a_2_13_X,
    output o21a_2_15_X,
    output o21ai_2_4_Y,
    output o21bai_2_0_Y,
    output o221a_2_2_X,
    output o22a_2_2_X,
    output o31a_2_0_X,
    output o31a_2_1_X,
    output o31a_2_2_X,
    output o32a_2_2_X,
    output o32ai_2_0_Y,
    output or2_2_10_X,
    output reg or2_2_11_A,
    output reg or2_2_11_B,
    output or2_2_9_X,
    output or3_2_10_A,
    output or3_2_11_A,
    output or3_2_13_A,
    output or3_2_14_A,
    output or3_2_15_A,
    output or3_2_16_A,
    output or3_2_17_A,
    output or3_2_6_X,
    output or3_2_9_X,
    output or4_2_1_C,
    output or4_2_2_C,
    output or4_2_3_C,
    output or4_2_4_X,
    output or4_2_5_C,
    output or4_2_6_C,
    output or4_2_7_C,
    output or4_2_8_C,
    output or4_2_9_C,
    output or4bb_2_0_X,
    output xnor2_2_14_B,
    output xnor2_2_6_Y,
    output xor2_2_20_B
);

    // internal wires
    wire a211o_2_0_X;
    wire a211o_2_1_X;
    wire a211o_2_2_X;
    wire a211o_2_3_X;
    wire a21o_2_17_X;
    wire a21o_2_3_A2;
    wire a21o_2_3_X;
    wire a21o_2_6_A2;
    wire a21o_2_6_X;
    wire a21o_2_8_A2;
    wire a21o_2_9_X;
    wire a21oi_2_13_Y;
    wire a21oi_2_2_Y;
    wire a21oi_2_5_Y;
    wire a21oi_2_6_Y;
    wire a221o_2_0_X;
    wire a22o_2_0_X;
    wire a22o_2_3_X;
    wire a22oi_2_0_Y;
    wire a31o_2_0_X;
    wire a31o_2_13_X;
    wire a31o_2_5_A2;
    wire a31o_2_5_A3;
    wire a31o_2_5_X;
    wire a31o_2_7_X;
    wire a31o_2_8_X;
    wire a32o_2_1_B2;
    wire a32o_2_1_X;
    wire a41oi_2_0_Y;
    wire and2_2_2_A;
    wire and2_2_2_X;
    wire and2_2_7_B;
    wire and2_2_7_X;
    wire and2_2_8_A;
    wire and2_2_8_B;
    wire and2b_2_6_X;
    wire and3_2_0_C;
    wire and3_2_0_X;
    wire and3_2_16_X;
    wire and3_2_17_C;
    wire and3_2_1_C;
    wire and3_2_1_X;
    wire and3_2_2_A;
    wire and3_2_2_B;
    wire and3_2_2_C;
    wire and3_2_3_B;
    wire and3_2_3_C;
    wire and3_2_3_X;
    wire and3_2_4_A;
    wire and3_2_4_B;
    wire and3_2_4_X;
    wire and3_2_7_C;
    wire and3_2_7_X;
    wire and3b_2_0_C;
    wire and4_2_7_X;
    wire and4bb_2_0_X;
    wire dfrtp_2_43_D;
    wire dfrtp_2_45_D;
    wire dfxtp_2_0_D;
    wire dfxtp_2_1_D;
    wire dfxtp_2_2_D;
    wire dfxtp_2_3_D;
    wire inv_2_0_Y;
    wire inv_2_12_A;
    wire inv_2_12_Y;
    wire inv_2_13_Y;
    wire inv_2_14_Y;
    wire inv_2_15_Y;
    wire inv_2_21_Y;
    wire inv_2_4_A;
    wire inv_2_4_Y;
    wire inv_2_5_A;
    wire inv_2_5_Y;
    wire mux2_1_0_X;
    wire mux2_1_1_X;
    wire mux2_1_20_X;
    wire mux2_1_2_X;
    wire mux2_1_3_X;
    wire mux2_1_4_S;
    wire mux2_1_4_X;
    wire mux2_1_5_A1;
    wire mux2_1_5_X;
    wire nand2_2_29_Y;
    wire nand2_2_2_Y;
    wire nand2_2_31_A;
    wire nand2_2_3_Y;
    wire nand2_2_5_Y;
    wire nand2_2_9_Y;
    wire nand2b_2_8_Y;
    wire nand3_2_0_Y;
    wire nand3_2_1_Y;
    wire nor2_2_0_B;
    wire nor2_2_19_Y;
    wire nor2_2_20_A;
    wire nor2_2_20_Y;
    wire nor2_2_21_A;
    wire nor2_2_24_Y;
    wire nor2_2_26_Y;
    wire nor2_2_29_Y;
    wire nor2_2_31_B;
    wire nor2_2_31_Y;
    wire nor2_2_32_B;
    wire nor2_2_32_Y;
    wire nor2_2_33_Y;
    wire nor2_2_3_B;
    wire nor2_2_3_Y;
    wire nor2_2_4_Y;
    wire nor2_2_5_A;
    wire nor2_2_5_Y;
    wire nor2_2_6_Y;
    wire nor2_2_8_A;
    wire nor2_2_9_B;
    wire nor3_2_0_Y;
    wire nor3_2_1_B;
    wire nor3_2_1_C;
    wire nor3_2_1_Y;
    wire o211a_2_0_X;
    wire o211a_2_7_X;
    wire o211ai_2_0_Y;
    wire o21a_2_15_A2;
    wire o21a_2_1_X;
    wire o21a_2_3_A2;
    wire o21a_2_3_X;
    wire o21ai_2_1_Y;
    wire o21ai_2_2_Y;
    wire o21ai_2_5_Y;
    wire o21ba_2_0_X;
    wire o221a_2_0_X;
    wire o221a_2_2_B2;
    wire o221a_2_2_C1;
    wire o22a_2_0_X;
    wire o22ai_2_0_Y;
    wire o22ai_2_1_Y;
    wire o311a_2_0_C1;
    wire o311a_2_0_X;
    wire o311a_2_1_X;
    wire o31a_2_0_A1;
    wire o31a_2_0_A2;
    wire o31a_2_0_B1;
    wire o31a_2_1_A3;
    wire o31a_2_1_B1;
    wire o31a_2_2_A1;
    wire o31a_2_2_A2;
    wire o31a_2_2_A3;
    wire o31ai_2_1_Y;
    wire o32a_2_0_A3;
    wire o32a_2_0_X;
    wire o32a_2_1_A3;
    wire o32a_2_1_B1;
    wire o32a_2_1_B2;
    wire o32a_2_1_X;
    wire o32a_2_2_A2;
    wire o32a_2_2_A3;
    wire o32a_2_2_B1;
    wire o32a_2_2_B2;
    wire o32ai_2_0_B1;
    wire or2_2_0_B;
    wire or2_2_10_A;
    wire or2_2_11_X;
    wire or2_2_1_A;
    wire or2_2_1_B;
    wire or2_2_1_X;
    wire or2_2_2_A;
    wire or2_2_3_X;
    wire or2_2_4_A;
    wire or2_2_4_B;
    wire or2_2_4_X;
    wire or2_2_5_A;
    wire or2_2_5_X;
    wire or2_2_6_B;
    wire or2_2_6_X;
    wire or2_2_8_X;
    wire or3_2_0_B;
    wire or3_2_0_X;
    wire or3_2_1_B;
    wire or3_2_1_C;
    wire or3_2_1_X;
    wire or3_2_2_B;
    wire or3_2_2_C;
    wire or3_2_3_A;
    wire or3_2_3_B;
    wire or3_2_3_C;
    wire or3_2_3_X;
    wire or3_2_4_B;
    wire or3_2_4_C;
    wire or3_2_4_X;
    wire or3_2_5_A;
    wire or3_2_5_B;
    wire or3_2_5_C;
    wire or3_2_5_X;
    wire or3_2_6_A;
    wire or3_2_6_B;
    wire or3_2_6_C;
    wire or3_2_7_A;
    wire or3_2_7_B;
    wire or3_2_7_C;
    wire or3_2_7_X;
    wire or3_2_9_A;
    wire or3_2_9_B;
    wire or3_2_9_C;
    wire or3b_2_0_X;
    wire or4_2_0_A;
    wire or4_2_0_B;
    wire or4_2_0_C;
    wire or4_2_0_D;
    wire or4_2_0_X;
    wire or4b_2_2_C;
    wire or4b_2_3_A;
    wire or4b_2_3_B;
    wire or4b_2_3_C;
    wire xnor2_2_0_A;
    wire xnor2_2_28_Y;
    wire xnor2_2_4_A;
    wire xnor2_2_5_B;
    wire xnor2_2_6_A;
    wire xnor2_2_8_A;
    wire xnor2_2_8_B;
    wire xor2_2_0_X;
    wire xor2_2_11_B;
    wire xor2_2_11_X;
    wire xor2_2_1_B;
    wire xor2_2_1_X;
    wire xor2_2_2_A;
    wire xor2_2_2_B;
    wire xor2_2_3_A;
    wire xor2_2_3_B;
    wire xor2_2_4_X;
    wire xor2_2_5_A;
    wire xor2_2_5_B;
    wire xor2_2_5_X;
    wire xor2_2_6_A;
    wire xor2_2_6_B;
    wire xor2_2_7_X;
    wire xor2_2_8_A;
    wire xor2_2_8_B;
    wire xor2_2_9_X;


    // internal registers
    reg or2_2_8_B;
    reg or2_2_9_A;
    reg or2_2_9_B;
    reg or3b_2_0_A;
    reg or4_2_4_A;
    reg or4_2_4_B;
    reg or4_2_4_C;
    reg or4_2_4_D;
    reg xor2_2_0_B;
    reg xor2_2_4_A;
    reg xor2_2_7_A;
    reg xor2_2_9_A;



    assign conb_1_0_LO = 1'b0;
    assign or3_2_13_A = 1'b0;
    assign conb_1_2_HI = 1'b1;
    assign conb_1_3_LO = 1'b0;
    assign conb_1_4_LO = 1'b0;
    assign conb_1_5_LO = 1'b0;


    assign a21o_2_17_X = (or2_2_9_A & or3b_2_0_A)
                         | or2_2_9_B;  // sky130_fd_sc_hd__a21o_2_17 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_6_A2 = ~((~or2_2_9_B) & or3b_2_0_A);  // sky130_fd_sc_hd__nand2b_2_7 : sky130_fd_sc_hd__nand2b_2
    assign a21oi_2_5_Y = ~((xor2_2_0_B & xor2_2_4_A) | xor2_2_9_A);  // sky130_fd_sc_hd__a21oi_2_5 : sky130_fd_sc_hd__a21oi_2
    assign a32o_2_4_B2 = ~((~or2_2_11_B) & or2_2_11_A);  // sky130_fd_sc_hd__nand2b_2_23 : sky130_fd_sc_hd__nand2b_2
    assign and2_2_7_B = ~((~or3b_2_0_A) & or2_2_9_B);  // sky130_fd_sc_hd__nand2b_2_10 : sky130_fd_sc_hd__nand2b_2
    assign and2_2_8_A = ~(or3b_2_0_A & or2_2_9_A);  // sky130_fd_sc_hd__nand2_2_19 : sky130_fd_sc_hd__nand2_2
    assign and2_2_8_B = ~(or2_2_9_B & or2_2_8_B);  // sky130_fd_sc_hd__nand2_2_20 : sky130_fd_sc_hd__nand2_2
    assign and2b_2_6_X = (~or2_2_9_B)
                         & or3b_2_0_A;  // sky130_fd_sc_hd__and2b_2_6 : sky130_fd_sc_hd__and2b_2
    assign and3_2_16_X = or3b_2_0_A
                         & or2_2_9_A
                         & or2_2_9_B;  // sky130_fd_sc_hd__and3_2_16 : sky130_fd_sc_hd__and3_2
    assign and3_2_17_C = (~or2_2_9_B)
                         & or2_2_9_A;  // sky130_fd_sc_hd__and2b_2_12 : sky130_fd_sc_hd__and2b_2
    assign and3_2_25_C = ~(or2_2_8_B & or2_2_9_B & or2_2_9_A & or3b_2_0_A);  // sky130_fd_sc_hd__nand4_2_14 : sky130_fd_sc_hd__nand4_2
    assign and3_2_2_A = ~(xor2_2_7_A & xor2_2_9_A);  // sky130_fd_sc_hd__nand2_2_21 : sky130_fd_sc_hd__nand2_2
    assign and3_2_2_C = ~(xor2_2_0_B ^ xor2_2_4_A);  // sky130_fd_sc_hd__xnor2_2_3 : sky130_fd_sc_hd__xnor2_2
    assign and3_2_7_C = ~((~xor2_2_9_A) & xor2_2_4_A & xor2_2_0_B);  // sky130_fd_sc_hd__nand3b_2_0 : sky130_fd_sc_hd__nand3b_2
    assign and3b_2_0_C = ~((or3b_2_0_A & or2_2_9_A) | or2_2_8_B);  // sky130_fd_sc_hd__a21oi_2_8 : sky130_fd_sc_hd__a21oi_2
    assign and3b_2_1_X = (~or2_2_8_B)
                         & or2_2_9_B
                         & or2_2_9_A;  // sky130_fd_sc_hd__and3b_2_1 : sky130_fd_sc_hd__and3b_2
    assign and4b_2_2_X = (~or4_2_4_D)
                         & or4_2_4_C
                         & or4_2_4_A
                         & or4_2_4_B;  // sky130_fd_sc_hd__and4b_2_2 : sky130_fd_sc_hd__and4b_2
    assign and4bb_2_0_X = (~xor2_2_7_A)
                          & (~xor2_2_0_B)
                          & xor2_2_9_A
                          & xor2_2_4_A;  // sky130_fd_sc_hd__and4bb_2_0 : sky130_fd_sc_hd__and4bb_2
    assign inv_2_13_Y = ~or2_2_8_B;  // sky130_fd_sc_hd__inv_2_13 : sky130_fd_sc_hd__inv_2
    assign inv_2_14_Y = ~or2_2_8_B;  // sky130_fd_sc_hd__inv_2_14 : sky130_fd_sc_hd__inv_2
    assign inv_2_15_Y = ~or3b_2_0_A;  // sky130_fd_sc_hd__inv_2_15 : sky130_fd_sc_hd__inv_2
    assign inv_2_21_Y = ~or2_2_8_B;  // sky130_fd_sc_hd__inv_2_21 : sky130_fd_sc_hd__inv_2
    assign inv_2_7_A = (~or2_2_11_A)
                       & enable;  // sky130_fd_sc_hd__and2b_2_11 : sky130_fd_sc_hd__and2b_2
    assign inv_2_9_A = (~or4_2_4_A)
                       & (~or4_2_4_C)
                       & or4_2_4_D
                       & or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_6 : sky130_fd_sc_hd__and4bb_2
    assign mux2_1_20_X = or2_2_9_B ? or2_2_8_B : or2_2_9_A;  // sky130_fd_sc_hd__mux2_1_20 : sky130_fd_sc_hd__mux2_1
    assign nand2_2_29_Y = ~(or3b_2_0_A & or2_2_9_A);  // sky130_fd_sc_hd__nand2_2_29 : sky130_fd_sc_hd__nand2_2
    assign nand2_2_2_Y = ~(xor2_2_7_A & xor2_2_0_B);  // sky130_fd_sc_hd__nand2_2_2 : sky130_fd_sc_hd__nand2_2
    assign nand2_2_31_A = ~((~or2_2_9_A) & or3b_2_0_A);  // sky130_fd_sc_hd__nand2b_2_11 : sky130_fd_sc_hd__nand2b_2
    assign nand2b_2_8_Y = ~((~or2_2_8_B) & or2_2_9_B);  // sky130_fd_sc_hd__nand2b_2_8 : sky130_fd_sc_hd__nand2b_2
    assign nand3_2_1_Y = ~(or2_2_9_B & or2_2_9_A & or3b_2_0_A);  // sky130_fd_sc_hd__nand3_2_1 : sky130_fd_sc_hd__nand3_2
    assign nand4_2_10_D = (~or4_2_4_A)
                          & (~or4_2_4_D)
                          & or4_2_4_C
                          & or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_13 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_12_D = (~or4_2_4_B)
                          & (~or4_2_4_C)
                          & or4_2_4_D
                          & or4_2_4_A;  // sky130_fd_sc_hd__and4bb_2_11 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_13_D = (~or4_2_4_A)
                          & (~or4_2_4_C)
                          & or4_2_4_D
                          & or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_12 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_8_D = (~or4_2_4_D)
                         & (~or4_2_4_C)
                         & or4_2_4_A
                         & or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_10 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_9_D = (~or4_2_4_B)
                         & (~or4_2_4_D)
                         & or4_2_4_C
                         & or4_2_4_A;  // sky130_fd_sc_hd__and4bb_2_9 : sky130_fd_sc_hd__and4bb_2
    assign nor2_2_0_B = ~(or4_2_4_A & xor2_2_7_A);  // sky130_fd_sc_hd__nand2_2_4 : sky130_fd_sc_hd__nand2_2
    assign nor2_2_24_Y = ~(or2_2_9_A | or2_2_8_B);  // sky130_fd_sc_hd__nor2_2_24 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_32_B = (~or2_2_9_A)
                         & or3b_2_0_A;  // sky130_fd_sc_hd__and2b_2_13 : sky130_fd_sc_hd__and2b_2
    assign nor2_2_33_Y = ~(or3b_2_0_A | or2_2_9_A);  // sky130_fd_sc_hd__nor2_2_33 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_6_Y = ~(xor2_2_0_B | xor2_2_9_A);  // sky130_fd_sc_hd__nor2_2_6 : sky130_fd_sc_hd__nor2_2
    assign nor3_2_0_Y = ~(or3b_2_0_A | or2_2_9_A | or2_2_9_B);  // sky130_fd_sc_hd__nor3_2_0 : sky130_fd_sc_hd__nor3_2
    assign nor3_2_1_B = ~(or3b_2_0_A | or2_2_9_A);  // sky130_fd_sc_hd__nor2_2_22 : sky130_fd_sc_hd__nor2_2
    assign nor3_2_1_C = or3b_2_0_A
                        & or2_2_9_A;  // sky130_fd_sc_hd__and2_2_6 : sky130_fd_sc_hd__and2_2
    assign nor4_2_1_Y = ~(or4_2_4_B | or4_2_4_A | or4_2_4_D | or4_2_4_C);  // sky130_fd_sc_hd__nor4_2_1 : sky130_fd_sc_hd__nor4_2
    assign o211a_2_0_X = (xor2_2_7_A | xor2_2_0_B)
                         & xor2_2_9_A
                         & xor2_2_4_A;  // sky130_fd_sc_hd__o211a_2_0 : sky130_fd_sc_hd__o211a_2
    assign o21ai_2_5_Y = ~((or2_2_9_A | or2_2_9_B) & or2_2_8_B);  // sky130_fd_sc_hd__o21ai_2_5 : sky130_fd_sc_hd__o21ai_2
    assign o221a_2_2_B2 = ~((or3b_2_0_A & or2_2_8_B) | or2_2_9_B);  // sky130_fd_sc_hd__a21oi_2_14 : sky130_fd_sc_hd__a21oi_2
    assign o221a_2_2_C1 = ~((~or3b_2_0_A) & or2_2_9_A);  // sky130_fd_sc_hd__nand2b_2_12 : sky130_fd_sc_hd__nand2b_2
    assign o31a_2_0_A1 = (~or2_2_9_A)
                         & or2_2_9_B;  // sky130_fd_sc_hd__and2b_2_7 : sky130_fd_sc_hd__and2b_2
    assign o31a_2_1_A3 = (~or3b_2_0_A)
                         & or2_2_9_A;  // sky130_fd_sc_hd__and2b_2_17 : sky130_fd_sc_hd__and2b_2
    assign o31a_2_1_B1 = ~(or2_2_9_A & or2_2_8_B);  // sky130_fd_sc_hd__nand2_2_30 : sky130_fd_sc_hd__nand2_2
    assign o31a_2_2_A1 = or3b_2_0_A
                         & or2_2_9_A
                         & or2_2_9_B;  // sky130_fd_sc_hd__and3_2_15 : sky130_fd_sc_hd__and3_2
    assign o31a_2_2_A2 = (~or2_2_9_A)
                         & or3b_2_0_A;  // sky130_fd_sc_hd__and2b_2_14 : sky130_fd_sc_hd__and2b_2
    assign o31a_2_2_A3 = ~(or3b_2_0_A | or2_2_9_B | (~or2_2_9_A));  // sky130_fd_sc_hd__nor3b_2_1 : sky130_fd_sc_hd__nor3b_2
    assign o32ai_2_0_B1 = ~((~or2_2_9_B) & or2_2_8_B);  // sky130_fd_sc_hd__nand2b_2_9 : sky130_fd_sc_hd__nand2b_2
    assign or2_2_11_X = or2_2_11_A
                        | or2_2_11_B;  // sky130_fd_sc_hd__or2_2_11 : sky130_fd_sc_hd__or2_2
    assign or2_2_1_A = or4_2_4_A
                       & xor2_2_7_A;  // sky130_fd_sc_hd__and2_2_1 : sky130_fd_sc_hd__and2_2
    assign or2_2_1_B = ~(or4_2_4_A | xor2_2_7_A);  // sky130_fd_sc_hd__nor2_2_7 : sky130_fd_sc_hd__nor2_2
    assign or2_2_8_X = or2_2_9_B
                       | or2_2_8_B;  // sky130_fd_sc_hd__or2_2_8 : sky130_fd_sc_hd__or2_2
    assign or2_2_9_X = or2_2_9_A
                       | or2_2_9_B;  // sky130_fd_sc_hd__or2_2_9 : sky130_fd_sc_hd__or2_2
    assign or3_2_14_A = (~or2_2_9_B)
                        & (~or2_2_8_B)
                        & or3b_2_0_A
                        & or2_2_9_A;  // sky130_fd_sc_hd__and4bb_2_4 : sky130_fd_sc_hd__and4bb_2
    assign or3_2_17_A = ~((or3b_2_0_A & or2_2_9_A) | or2_2_9_B | or2_2_8_B);  // sky130_fd_sc_hd__a211oi_2_2 : sky130_fd_sc_hd__a211oi_2
    assign or3_2_6_A = ~((or3b_2_0_A & or2_2_9_A) | or2_2_8_B);  // sky130_fd_sc_hd__a21oi_2_9 : sky130_fd_sc_hd__a21oi_2
    assign or3_2_6_B = (~or2_2_8_B)
                       & or2_2_9_B
                       & or2_2_9_A
                       & or3b_2_0_A;  // sky130_fd_sc_hd__and4b_2_0 : sky130_fd_sc_hd__and4b_2
    assign or3_2_6_C = ~(or3b_2_0_A | or2_2_9_A | or2_2_9_B | (~or2_2_8_B));  // sky130_fd_sc_hd__nor4b_2_0 : sky130_fd_sc_hd__nor4b_2
    assign or3_2_9_B = ~(or3b_2_0_A | or2_2_9_A);  // sky130_fd_sc_hd__nor2_2_38 : sky130_fd_sc_hd__nor2_2
    assign or3_2_9_C = ~(or2_2_9_B | or2_2_8_B);  // sky130_fd_sc_hd__nor2_2_37 : sky130_fd_sc_hd__nor2_2
    assign or3b_2_0_X = or3b_2_0_A
                        | or2_2_9_B
                        | (~or2_2_9_A);  // sky130_fd_sc_hd__or3b_2_0 : sky130_fd_sc_hd__or3b_2
    assign or4_2_4_X = or4_2_4_A
                       | or4_2_4_B
                       | or4_2_4_C
                       | or4_2_4_D;  // sky130_fd_sc_hd__or4_2_4 : sky130_fd_sc_hd__or4_2
    assign or4_2_6_C = or4_2_4_B
                       | or4_2_4_A
                       | or4_2_4_C
                       | (~or4_2_4_D);  // sky130_fd_sc_hd__or4b_2_7 : sky130_fd_sc_hd__or4b_2
    assign or4_2_7_C = or4_2_4_A
                       | or4_2_4_D
                       | or4_2_4_C
                       | (~or4_2_4_B);  // sky130_fd_sc_hd__or4b_2_6 : sky130_fd_sc_hd__or4b_2
    assign or4_2_8_C = or4_2_4_B
                       | or4_2_4_A
                       | or4_2_4_D
                       | (~or4_2_4_C);  // sky130_fd_sc_hd__or4b_2_5 : sky130_fd_sc_hd__or4b_2
    assign or4_2_9_C = or4_2_4_B
                       | or4_2_4_D
                       | or4_2_4_C
                       | (~or4_2_4_A);  // sky130_fd_sc_hd__or4b_2_4 : sky130_fd_sc_hd__or4b_2
    assign or4bb_2_0_X = or4_2_4_A
                         | or4_2_4_C
                         | (~or4_2_4_D)
                         | (~or4_2_4_B);  // sky130_fd_sc_hd__or4bb_2_0 : sky130_fd_sc_hd__or4bb_2
    assign xnor2_2_28_Y = ~(or2_2_9_A ^ or3b_2_0_A);  // sky130_fd_sc_hd__xnor2_2_28 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_4_A = ~(xor2_2_0_B & xor2_2_9_A);  // sky130_fd_sc_hd__nand2_2_17 : sky130_fd_sc_hd__nand2_2
    assign xor2_2_0_X = xor2_2_7_A
                        ^ xor2_2_0_B;  // sky130_fd_sc_hd__xor2_2_0 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_7_X = xor2_2_7_A
                        ^ xor2_2_9_A;  // sky130_fd_sc_hd__xor2_2_7 : sky130_fd_sc_hd__xor2_2

    assign a211o_2_3_X = (or3b_2_0_A & or2_2_9_B)
                         | inv_2_13_Y
                         | o31a_2_1_A3;  // sky130_fd_sc_hd__a211o_2_3 : sky130_fd_sc_hd__a211o_2
    assign a21o_2_6_X = (and2_2_7_B & a21o_2_6_A2)
                        | or2_2_9_A;  // sky130_fd_sc_hd__a21o_2_6 : sky130_fd_sc_hd__a21o_2
    assign a21oi_2_13_Y = ~((or4_2_4_A & inv_2_7_A) | or4_2_4_B);  // sky130_fd_sc_hd__a21oi_2_13 : sky130_fd_sc_hd__a21oi_2
    assign a22o_2_13_A1 = ~((or3b_2_0_A & or2_2_9_B) | or2_2_8_B | and3_2_17_C | nor2_2_33_Y);  // sky130_fd_sc_hd__a2111oi_2_0 : sky130_fd_sc_hd__a2111oi_2
    assign a22o_2_21_B2 = ~((or2_2_8_X & nor2_2_32_B) | mux2_1_20_X);  // sky130_fd_sc_hd__a21oi_2_15 : sky130_fd_sc_hd__a21oi_2
    assign a22o_2_22_X = (or3b_2_0_A & or3_2_9_C)
                         | (nand2_2_31_A & or2_2_9_B);  // sky130_fd_sc_hd__a22o_2_22 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_7_A1 = ~((or3b_2_0_A & and3_2_17_C) | or2_2_8_B);  // sky130_fd_sc_hd__a21oi_2_17 : sky130_fd_sc_hd__a21oi_2
    assign a22oi_2_0_Y = ~((or3b_2_0_A & inv_2_13_Y) | (or2_2_9_X & nand2_2_29_Y));  // sky130_fd_sc_hd__a22oi_2_0 : sky130_fd_sc_hd__a22oi_2
    assign a31o_2_8_X = (inv_2_9_A & inv_2_7_A & xor2_2_7_A)
                        | xor2_2_0_B;  // sky130_fd_sc_hd__a31o_2_8 : sky130_fd_sc_hd__a31o_2
    assign a41oi_2_0_Y = ~((or4_2_4_B & or4_2_4_A & or4_2_4_C & inv_2_7_A) | or4_2_4_D);  // sky130_fd_sc_hd__a41oi_2_0 : sky130_fd_sc_hd__a41oi_2
    assign and2_2_7_X = or2_2_9_A
                        & and2_2_7_B;  // sky130_fd_sc_hd__and2_2_7 : sky130_fd_sc_hd__and2_2
    assign and2_2_8_X = and2_2_8_A
                        & and2_2_8_B;  // sky130_fd_sc_hd__and2_2_8 : sky130_fd_sc_hd__and2_2
    assign and2b_2_19_X = (~or2_2_8_X)
                          & o221a_2_2_C1;  // sky130_fd_sc_hd__and2b_2_19 : sky130_fd_sc_hd__and2b_2
    assign and3_2_17_X = or3b_2_0_A
                         & inv_2_14_Y
                         & and3_2_17_C;  // sky130_fd_sc_hd__and3_2_17 : sky130_fd_sc_hd__and3_2
    assign and3_2_2_B = ~(xor2_2_4_A & xor2_2_7_X);  // sky130_fd_sc_hd__nand2_2_22 : sky130_fd_sc_hd__nand2_2
    assign and3_2_7_X = inv_2_9_A
                        & inv_2_7_A
                        & and3_2_7_C;  // sky130_fd_sc_hd__and3_2_7 : sky130_fd_sc_hd__and3_2
    assign and3b_2_2_X = (~or2_2_8_B)
                         & nor2_2_32_B
                         & or2_2_9_B;  // sky130_fd_sc_hd__and3b_2_2 : sky130_fd_sc_hd__and3b_2
    assign and4_2_7_X = or4_2_4_B
                        & or4_2_4_A
                        & or4_2_4_C
                        & inv_2_7_A;  // sky130_fd_sc_hd__and4_2_7 : sky130_fd_sc_hd__and4_2
    assign buf_2_0_X = or4_2_4_X;  // sky130_fd_sc_hd__buf_2_0 : sky130_fd_sc_hd__buf_2
    assign dfxtp_2_0_D = ~((inv_2_21_Y & nand3_2_1_Y) | (~or2_2_11_B));  // sky130_fd_sc_hd__a21boi_2_2 : sky130_fd_sc_hd__a21boi_2
    assign dfxtp_2_1_D = ~((and3_2_25_C & xnor2_2_28_Y) | (~or2_2_11_B));  // sky130_fd_sc_hd__a21boi_2_1 : sky130_fd_sc_hd__a21boi_2
    assign dfxtp_2_2_D = ~((or3b_2_0_A & and3_2_25_C) | (~or2_2_11_B));  // sky130_fd_sc_hd__a21boi_2_3 : sky130_fd_sc_hd__a21boi_2
    assign dfxtp_2_3_D = (or2_2_8_B | nand3_2_1_Y)
                         & a21o_2_17_X
                         & or2_2_11_B;  // sky130_fd_sc_hd__o211a_2_11 : sky130_fd_sc_hd__o211a_2
    assign inv_2_12_A = ~(or2_2_9_B & o31a_2_1_A3);  // sky130_fd_sc_hd__nand2_2_32 : sky130_fd_sc_hd__nand2_2
    assign inv_2_5_A = inv_2_9_A
                       & inv_2_7_A
                       & xor2_2_0_B
                       & xor2_2_7_A;  // sky130_fd_sc_hd__and4_2_2 : sky130_fd_sc_hd__and4_2
    assign inv_2_7_Y = ~inv_2_7_A;  // sky130_fd_sc_hd__inv_2_7 : sky130_fd_sc_hd__inv_2
    assign inv_2_9_Y = ~inv_2_9_A;  // sky130_fd_sc_hd__inv_2_9 : sky130_fd_sc_hd__inv_2
    assign mux2_1_5_A1 = ~(inv_2_9_A & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_23 : sky130_fd_sc_hd__nand2_2
    assign nor2_2_23_Y = ~(or2_2_8_B | and2_2_8_A);  // sky130_fd_sc_hd__nor2_2_23 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_29_Y = ~(xor2_2_7_A | and3_2_7_C);  // sky130_fd_sc_hd__nor2_2_29 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_31_B = ~(or4_2_4_A ^ inv_2_7_A);  // sky130_fd_sc_hd__xnor2_2_12 : sky130_fd_sc_hd__xnor2_2
    assign nor2_2_32_Y = ~(or2_2_8_B | nor2_2_32_B);  // sky130_fd_sc_hd__nor2_2_32 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_4_Y = ~(or2_2_1_A | or2_2_1_B);  // sky130_fd_sc_hd__nor2_2_4 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_8_A = ~(or4_2_4_B ^ xor2_2_0_X);  // sky130_fd_sc_hd__xnor2_2_1 : sky130_fd_sc_hd__xnor2_2
    assign nor3_2_1_Y = ~(or2_2_9_B | nor3_2_1_B | nor3_2_1_C);  // sky130_fd_sc_hd__nor3_2_1 : sky130_fd_sc_hd__nor3_2
    assign o211a_2_10_X = (inv_2_15_Y | or2_2_9_B)
                          & inv_2_14_Y
                          & or2_2_9_A;  // sky130_fd_sc_hd__o211a_2_10 : sky130_fd_sc_hd__o211a_2
    assign o21a_2_13_X = (inv_2_15_Y | o31a_2_2_A1)
                         & inv_2_14_Y;  // sky130_fd_sc_hd__o21a_2_13 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_15_A2 = ~(or3b_2_0_A & or2_2_8_X);  // sky130_fd_sc_hd__nand2_2_27 : sky130_fd_sc_hd__nand2_2
    assign o22a_2_2_X = (or2_2_8_B | and2_2_8_A)
                        & (and2_2_8_B | nor3_2_1_B);  // sky130_fd_sc_hd__o22a_2_2 : sky130_fd_sc_hd__o22a_2
    assign o31a_2_0_A2 = ~((nor3_2_1_C & o32ai_2_0_B1 & nand2b_2_8_Y) | and3b_2_0_C);  // sky130_fd_sc_hd__a31oi_2_0 : sky130_fd_sc_hd__a31oi_2
    assign o31a_2_0_B1 = (nor3_2_1_C & o32ai_2_0_B1 & nand2b_2_8_Y)
                         | and2b_2_6_X
                         | and3b_2_0_C;  // sky130_fd_sc_hd__a311o_2_1 : sky130_fd_sc_hd__a311o_2
    assign o31a_2_2_X = (o31a_2_2_A1 | o31a_2_2_A2 | o31a_2_2_A3)
                        & inv_2_14_Y;  // sky130_fd_sc_hd__o31a_2_2 : sky130_fd_sc_hd__o31a_2
    assign o32a_2_2_A2 = ~(or2_2_8_B ^ and3_2_16_X);  // sky130_fd_sc_hd__xnor2_2_27 : sky130_fd_sc_hd__xnor2_2
    assign o32a_2_2_B1 = (~or3_2_9_B)
                         & nand2_2_29_Y;  // sky130_fd_sc_hd__and2b_2_15 : sky130_fd_sc_hd__and2b_2
    assign or2_2_10_A = or2_2_11_B
                        & and3_2_25_C;  // sky130_fd_sc_hd__and2_2_16 : sky130_fd_sc_hd__and2_2
    assign or2_2_1_X = or2_2_1_A
                       | or2_2_1_B;  // sky130_fd_sc_hd__or2_2_1 : sky130_fd_sc_hd__or2_2
    assign or3_2_10_A = (or3b_2_0_A & nor2_2_24_Y)
                        | or3_2_6_C;  // sky130_fd_sc_hd__a21o_2_7 : sky130_fd_sc_hd__a21o_2
    assign or3_2_11_A = (or3b_2_0_A & or2_2_9_B & nor2_2_24_Y)
                        | nor3_2_0_Y;  // sky130_fd_sc_hd__a31o_2_6 : sky130_fd_sc_hd__a31o_2
    assign or3_2_15_A = (or2_2_9_A & or3_2_17_A)
                        | or3_2_6_C
                        | or3_2_6_B;  // sky130_fd_sc_hd__a211o_2_4 : sky130_fd_sc_hd__a211o_2
    assign or3_2_16_A = (or2_2_9_A | or2_2_9_B)
                        & (or3_2_6_A | or3_2_6_B);  // sky130_fd_sc_hd__o22a_2_1 : sky130_fd_sc_hd__o22a_2
    assign or3_2_5_B = ~(and3_2_2_A | and3_2_2_C);  // sky130_fd_sc_hd__nor2_2_17 : sky130_fd_sc_hd__nor2_2
    assign or3_2_6_X = or3_2_6_A
                       | or3_2_6_B
                       | or3_2_6_C;  // sky130_fd_sc_hd__or3_2_6 : sky130_fd_sc_hd__or3_2
    assign or3_2_9_A = ~(or3b_2_0_A | inv_2_13_Y);  // sky130_fd_sc_hd__nor2_2_36 : sky130_fd_sc_hd__nor2_2
    assign xnor2_2_0_A = ~(or4_2_4_B & xor2_2_0_X);  // sky130_fd_sc_hd__nand2_2_8 : sky130_fd_sc_hd__nand2_2
    assign xnor2_2_6_A = (~nor3_2_1_B)
                         & and2_2_7_B
                         & and3b_2_0_C;  // sky130_fd_sc_hd__and3b_2_0 : sky130_fd_sc_hd__and3b_2
    assign xor2_2_11_B = or4_2_4_B
                         & or4_2_4_A
                         & inv_2_7_A;  // sky130_fd_sc_hd__and3_2_14 : sky130_fd_sc_hd__and3_2
    assign xor2_2_1_B = ~((xor2_2_0_B & xor2_2_7_X) | nor2_2_6_Y);  // sky130_fd_sc_hd__a21oi_2_10 : sky130_fd_sc_hd__a21oi_2
    assign xor2_2_4_X = xor2_2_4_A
                        ^ xor2_2_7_X;  // sky130_fd_sc_hd__xor2_2_4 : sky130_fd_sc_hd__xor2_2
    assign a21o_2_9_X = (xor2_2_9_A & inv_2_5_A)
                        | xor2_2_4_A;  // sky130_fd_sc_hd__a21o_2_9 : sky130_fd_sc_hd__a21o_2
    assign a21oi_2_6_Y = ~((xor2_2_4_A & xnor2_2_4_A) | or3_2_5_B);  // sky130_fd_sc_hd__a21oi_2_6 : sky130_fd_sc_hd__a21oi_2
    assign a22o_2_3_X = (or3_2_9_A & or2_2_9_X)
                        | (o32a_2_2_A2 & or3b_2_0_X);  // sky130_fd_sc_hd__a22o_2_3 : sky130_fd_sc_hd__a22o_2
    assign a31o_2_13_X = (inv_2_9_A & nor2_2_29_Y & inv_2_7_A)
                         | or2_2_11_A;  // sky130_fd_sc_hd__a31o_2_13 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_15_X = (or2_2_9_B & inv_2_13_Y & nand2_2_29_Y)
                         | a22oi_2_0_Y;  // sky130_fd_sc_hd__a31o_2_15 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_7_X = (xor2_2_0_B & xor2_2_9_A & xor2_2_4_A)
                        | or3_2_5_B;  // sky130_fd_sc_hd__a31o_2_7 : sky130_fd_sc_hd__a31o_2
    assign and2b_2_16_X = (~inv_2_7_A)
                          & or2_2_10_A;  // sky130_fd_sc_hd__and2b_2_16 : sky130_fd_sc_hd__and2b_2
    assign and3_2_4_A = ~((~xnor2_2_4_A) & xor2_2_4_X);  // sky130_fd_sc_hd__nand2b_2_6 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_43_D = ~((inv_2_7_A & inv_2_9_A) | a21oi_2_13_Y | xor2_2_11_B);  // sky130_fd_sc_hd__a211oi_2_0 : sky130_fd_sc_hd__a211oi_2
    assign dfrtp_2_45_D = ~((inv_2_7_A & inv_2_9_A) | (and4_2_7_X & or4_2_4_D) | a41oi_2_0_Y);  // sky130_fd_sc_hd__a221oi_2_0 : sky130_fd_sc_hd__a221oi_2
    assign inv_2_12_Y = ~inv_2_12_A;  // sky130_fd_sc_hd__inv_2_12 : sky130_fd_sc_hd__inv_2
    assign inv_2_5_Y = ~inv_2_5_A;  // sky130_fd_sc_hd__inv_2_5 : sky130_fd_sc_hd__inv_2
    assign mux2_1_5_X = xor2_2_7_A ? mux2_1_5_A1 : and3_2_7_X;  // sky130_fd_sc_hd__mux2_1_5 : sky130_fd_sc_hd__mux2_1
    assign nand3_2_0_Y = ~(xor2_2_9_A & xor2_2_4_A & inv_2_5_A);  // sky130_fd_sc_hd__nand3_2_0 : sky130_fd_sc_hd__nand3_2
    assign nor2_2_31_Y = ~(inv_2_9_A | nor2_2_31_B);  // sky130_fd_sc_hd__nor2_2_31 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_39_Y = ~(or2_2_10_A | inv_2_7_A);  // sky130_fd_sc_hd__nor2_2_39 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_46_A = ~((~inv_2_7_A) & or2_2_10_A);  // sky130_fd_sc_hd__nand2b_2_22 : sky130_fd_sc_hd__nand2b_2
    assign nor2_2_9_B = ~(nor2_2_8_A & nor2_2_0_B);  // sky130_fd_sc_hd__nand2_2_7 : sky130_fd_sc_hd__nand2_2
    assign o211a_2_9_X = (or2_2_9_A | or2_2_8_X)
                         & o21a_2_15_A2
                         & o21ai_2_5_Y;  // sky130_fd_sc_hd__o211a_2_9 : sky130_fd_sc_hd__o211a_2
    assign o21a_2_15_X = (or2_2_9_A | o21a_2_15_A2)
                         & o21ai_2_5_Y;  // sky130_fd_sc_hd__o21a_2_15 : sky130_fd_sc_hd__o21a_2
    assign o21bai_2_0_Y = ~((nor3_2_1_B | o32ai_2_0_B1) & (~xnor2_2_6_A));  // sky130_fd_sc_hd__o21bai_2_0 : sky130_fd_sc_hd__o21bai_2
    assign o221a_2_2_X = (or2_2_8_X | nor2_2_32_B)
                         & (nor2_2_32_Y | o221a_2_2_B2)
                         & o221a_2_2_C1;  // sky130_fd_sc_hd__o221a_2_2 : sky130_fd_sc_hd__o221a_2
    assign o31a_2_0_X = (o31a_2_0_A1 | o31a_2_0_A2 | nor3_2_1_Y)
                        & o31a_2_0_B1;  // sky130_fd_sc_hd__o31a_2_0 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_1_X = (or2_2_9_B | or3_2_9_A | o31a_2_1_A3)
                        & o31a_2_1_B1;  // sky130_fd_sc_hd__o31a_2_1 : sky130_fd_sc_hd__o31a_2
    assign o32a_2_2_A3 = ~(or2_2_9_B | o32a_2_2_B1);  // sky130_fd_sc_hd__nor2_2_35 : sky130_fd_sc_hd__nor2_2
    assign o32a_2_2_B2 = ~(or2_2_9_X & o32a_2_2_A2);  // sky130_fd_sc_hd__nand2_2_28 : sky130_fd_sc_hd__nand2_2
    assign o32ai_2_0_Y = ~((o31a_2_0_A1 | o31a_2_0_A2 | and2_2_7_X) & (o32ai_2_0_B1 | or3b_2_0_A));  // sky130_fd_sc_hd__o32ai_2_0 : sky130_fd_sc_hd__o32ai_2
    assign or2_2_10_X = or2_2_10_A
                        | inv_2_7_A;  // sky130_fd_sc_hd__or2_2_10 : sky130_fd_sc_hd__or2_2
    assign or3_2_3_A = ~(nor2_2_8_A | or2_2_1_X);  // sky130_fd_sc_hd__nor2_2_8 : sky130_fd_sc_hd__nor2_2
    assign or3_2_5_A = ~(xor2_2_0_B | and3_2_2_B);  // sky130_fd_sc_hd__nor2_2_25 : sky130_fd_sc_hd__nor2_2
    assign or3_2_5_C = and3_2_2_A
                       & and3_2_2_B
                       & and3_2_2_C;  // sky130_fd_sc_hd__and3_2_2 : sky130_fd_sc_hd__and3_2
    assign or3_2_9_X = or3_2_9_A
                       | or3_2_9_B
                       | or3_2_9_C;  // sky130_fd_sc_hd__or3_2_9 : sky130_fd_sc_hd__or3_2
    assign xnor2_2_14_B = ~((inv_2_12_A & o31a_2_1_B1) | or3_2_9_A);  // sky130_fd_sc_hd__a21oi_2_16 : sky130_fd_sc_hd__a21oi_2
    assign xnor2_2_5_B = ~(xnor2_2_4_A ^ xor2_2_4_X);  // sky130_fd_sc_hd__xnor2_2_4 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_6_Y = ~(xnor2_2_6_A ^ a21o_2_6_X);  // sky130_fd_sc_hd__xnor2_2_6 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_8_B = ((~or4_2_4_C) | (~xor2_2_1_B))
                         & (nand2_2_2_Y | xor2_2_9_A);  // sky130_fd_sc_hd__o2bb2a_2_0 : sky130_fd_sc_hd__o2bb2a_2
    assign xor2_2_11_X = or4_2_4_C
                         ^ xor2_2_11_B;  // sky130_fd_sc_hd__xor2_2_11 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_1_X = or4_2_4_C
                        ^ xor2_2_1_B;  // sky130_fd_sc_hd__xor2_2_1 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_3_B = ~(nor2_2_8_A | nor2_2_0_B);  // sky130_fd_sc_hd__nor2_2_0 : sky130_fd_sc_hd__nor2_2
    assign xor2_2_9_X = xor2_2_9_A
                        ^ inv_2_5_A;  // sky130_fd_sc_hd__xor2_2_9 : sky130_fd_sc_hd__xor2_2
    assign and3_2_4_B = ~(or4_2_4_D & xnor2_2_5_B);  // sky130_fd_sc_hd__nand2_2_16 : sky130_fd_sc_hd__nand2_2
    assign inv_2_4_A = ~(or2_2_1_B | nor2_2_9_B);  // sky130_fd_sc_hd__nor2_2_9 : sky130_fd_sc_hd__nor2_2
    assign o211a_2_7_X = (and3_2_7_C | mux2_1_5_A1)
                         & a31o_2_8_X
                         & inv_2_5_Y;  // sky130_fd_sc_hd__o211a_2_7 : sky130_fd_sc_hd__o211a_2
    assign o21ai_2_4_Y = ~((inv_2_12_Y | o32a_2_2_B2) & a211o_2_3_X);  // sky130_fd_sc_hd__o21ai_2_4 : sky130_fd_sc_hd__o21ai_2
    assign o22ai_2_0_Y = ~((xor2_2_0_B | and3_2_2_B) & (a21oi_2_5_Y | a31o_2_7_X));  // sky130_fd_sc_hd__o22ai_2_0 : sky130_fd_sc_hd__o22ai_2
    assign o311a_2_1_X = (xor2_2_7_A | and3_2_7_C | mux2_1_5_A1)
                         & nand3_2_0_Y
                         & a21o_2_9_X;  // sky130_fd_sc_hd__o311a_2_1 : sky130_fd_sc_hd__o311a_2
    assign o32a_2_2_X = (inv_2_12_Y | o32a_2_2_A2 | o32a_2_2_A3)
                        & (o32a_2_2_B1 | o32a_2_2_B2);  // sky130_fd_sc_hd__o32a_2_2 : sky130_fd_sc_hd__o32a_2
    assign or2_2_0_B = (~xor2_2_3_B)
                       & nor2_2_9_B;  // sky130_fd_sc_hd__and2b_2_0 : sky130_fd_sc_hd__and2b_2
    assign or3_2_5_X = or3_2_5_A
                       | or3_2_5_B
                       | or3_2_5_C;  // sky130_fd_sc_hd__or3_2_5 : sky130_fd_sc_hd__or3_2
    assign xnor2_2_8_A = ~(or4_2_4_D ^ xnor2_2_5_B);  // sky130_fd_sc_hd__xnor2_2_5 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_20_B = ~(nand2_2_31_A & a22o_2_3_X);  // sky130_fd_sc_hd__nand2_2_31 : sky130_fd_sc_hd__nand2_2
    assign xor2_2_3_A = ~(xnor2_2_0_A ^ xor2_2_1_X);  // sky130_fd_sc_hd__xnor2_2_0 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_5_B = (xnor2_2_4_A & or3_2_5_B)
                        | a21oi_2_6_Y;  // sky130_fd_sc_hd__a21o_2_4 : sky130_fd_sc_hd__a21o_2

    assign a21o_2_8_A2 = ~(xnor2_2_8_A & xnor2_2_8_B);  // sky130_fd_sc_hd__nand2_2_18 : sky130_fd_sc_hd__nand2_2
    assign and2_2_2_A = ~(xor2_2_3_A & or2_2_0_B);  // sky130_fd_sc_hd__nand2_2_1 : sky130_fd_sc_hd__nand2_2
    assign and3_2_0_C = or2_2_1_X
                        & or2_2_0_B;  // sky130_fd_sc_hd__and2_2_0 : sky130_fd_sc_hd__and2_2
    assign and3_2_4_X = and3_2_4_A
                        & and3_2_4_B
                        & or3_2_5_X;  // sky130_fd_sc_hd__and3_2_4 : sky130_fd_sc_hd__and3_2
    assign inv_2_4_Y = ~inv_2_4_A;  // sky130_fd_sc_hd__inv_2_4 : sky130_fd_sc_hd__inv_2
    assign nand2_2_9_Y = ~(xor2_2_3_A & inv_2_4_A);  // sky130_fd_sc_hd__nand2_2_9 : sky130_fd_sc_hd__nand2_2
    assign nor2_2_19_Y = ~(xnor2_2_8_A | xnor2_2_8_B);  // sky130_fd_sc_hd__nor2_2_19 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_21_A = ~((and3_2_4_A & and3_2_4_B) | or3_2_5_X);  // sky130_fd_sc_hd__a21oi_2_4 : sky130_fd_sc_hd__a21oi_2
    assign nor2_2_5_A = ~(xor2_2_3_A & or3_2_3_A);  // sky130_fd_sc_hd__nand2_2_6 : sky130_fd_sc_hd__nand2_2
    assign or2_2_2_A = xor2_2_3_A
                       ^ xor2_2_3_B;  // sky130_fd_sc_hd__xor2_2_3 : sky130_fd_sc_hd__xor2_2
    assign or3_2_0_B = ~(xor2_2_3_A ^ xor2_2_3_B);  // sky130_fd_sc_hd__xnor2_2_2 : sky130_fd_sc_hd__xnor2_2
    assign or3_2_2_B = ~(nor2_2_4_Y | or2_2_0_B);  // sky130_fd_sc_hd__nor2_2_1 : sky130_fd_sc_hd__nor2_2
    assign xor2_2_2_A = (or4_2_4_B & xor2_2_0_X & xor2_2_1_X)
                        | (xor2_2_3_A & xor2_2_3_B);  // sky130_fd_sc_hd__a32o_2_0 : sky130_fd_sc_hd__a32o_2
    assign xor2_2_2_B = ~(xnor2_2_8_A ^ xnor2_2_8_B);  // sky130_fd_sc_hd__xnor2_2_8 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_6_B = (~and4bb_2_0_X)
                        & o22ai_2_0_Y;  // sky130_fd_sc_hd__and2b_2_5 : sky130_fd_sc_hd__and2b_2
    assign and3_2_1_C = ~(or2_2_1_X & or3_2_0_B);  // sky130_fd_sc_hd__nand2_2_0 : sky130_fd_sc_hd__nand2_2
    assign nand2_2_5_Y = ~(or3_2_0_B & or3_2_2_B);  // sky130_fd_sc_hd__nand2_2_5 : sky130_fd_sc_hd__nand2_2
    assign nor2_2_3_B = ~(or3_2_0_B | or3_2_2_B);  // sky130_fd_sc_hd__nor2_2_10 : sky130_fd_sc_hd__nor2_2
    assign or2_2_4_A = ~(xor2_2_2_A ^ xor2_2_2_B);  // sky130_fd_sc_hd__xnor2_2_9 : sky130_fd_sc_hd__xnor2_2
    assign or2_2_4_B = or2_2_2_A
                       | or2_2_0_B;  // sky130_fd_sc_hd__or2_2_0 : sky130_fd_sc_hd__or2_2
    assign or3_2_0_X = or3_2_3_A
                       | or3_2_0_B
                       | or3_2_2_B;  // sky130_fd_sc_hd__or3_2_0 : sky130_fd_sc_hd__or3_2
    assign or3_2_2_C = ~(or3_2_0_B | inv_2_4_A);  // sky130_fd_sc_hd__nor2_2_2 : sky130_fd_sc_hd__nor2_2
    assign or3_2_3_B = xor2_2_2_A
                       ^ xor2_2_2_B;  // sky130_fd_sc_hd__xor2_2_2 : sky130_fd_sc_hd__xor2_2
    assign or3_2_3_C = or2_2_2_A
                       | or3_2_2_B;  // sky130_fd_sc_hd__or2_2_2 : sky130_fd_sc_hd__or2_2
    assign xor2_2_8_A = (xor2_2_2_A & a21o_2_8_A2)
                        | nor2_2_19_Y;  // sky130_fd_sc_hd__a21o_2_8 : sky130_fd_sc_hd__a21o_2
    assign xor2_2_8_B = ~(nor2_2_21_A | and3_2_4_X);  // sky130_fd_sc_hd__nor2_2_21 : sky130_fd_sc_hd__nor2_2
    assign a31o_2_0_X = (or3_2_3_B & and2_2_2_A & and3_2_1_C)
                        | and3_2_0_C;  // sky130_fd_sc_hd__a31o_2_0 : sky130_fd_sc_hd__a31o_2
    assign and2_2_2_X = and2_2_2_A
                        & and3_2_1_C;  // sky130_fd_sc_hd__and2_2_2 : sky130_fd_sc_hd__and2_2
    assign and3_2_0_X = or2_2_4_A
                        & or3_2_0_B
                        & and3_2_0_C;  // sky130_fd_sc_hd__and3_2_0 : sky130_fd_sc_hd__and3_2
    assign and3_2_1_X = or2_2_4_A
                        & inv_2_4_Y
                        & and3_2_1_C;  // sky130_fd_sc_hd__and3_2_1 : sky130_fd_sc_hd__and3_2
    assign inv_2_0_Y = ~or3_2_3_C;  // sky130_fd_sc_hd__inv_2_0 : sky130_fd_sc_hd__inv_2
    assign mux2_1_4_S = ~((~and3_2_0_C) & or2_2_4_B);  // sky130_fd_sc_hd__nand2b_2_0 : sky130_fd_sc_hd__nand2b_2
    assign nor2_2_26_Y = ~(nor2_2_5_A | or2_2_4_A);  // sky130_fd_sc_hd__nor2_2_26 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_3_Y = ~(or3_2_3_B | nor2_2_3_B);  // sky130_fd_sc_hd__nor2_2_3 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_5_Y = ~(nor2_2_5_A | or3_2_3_B);  // sky130_fd_sc_hd__nor2_2_5 : sky130_fd_sc_hd__nor2_2
    assign o21a_2_3_A2 = ~(or2_2_4_A & nand2_2_5_Y);  // sky130_fd_sc_hd__nand2_2_11 : sky130_fd_sc_hd__nand2_2
    assign o31ai_2_1_Y = ~((or3_2_3_A | or3_2_3_B | or2_2_2_A) & nor2_2_5_A);  // sky130_fd_sc_hd__o31ai_2_1 : sky130_fd_sc_hd__o31ai_2
    assign o32a_2_0_A3 = ~((or2_2_4_A & and3_2_0_C) | or3_2_0_X);  // sky130_fd_sc_hd__a21oi_2_1 : sky130_fd_sc_hd__a21oi_2
    assign o32a_2_1_A3 = ~(or2_2_4_A | or3_2_0_X);  // sky130_fd_sc_hd__nor2_2_13 : sky130_fd_sc_hd__nor2_2
    assign or2_2_3_X = or2_2_4_A
                       | or3_2_2_B;  // sky130_fd_sc_hd__or2_2_3 : sky130_fd_sc_hd__or2_2
    assign or2_2_4_X = or2_2_4_A
                       | or2_2_4_B;  // sky130_fd_sc_hd__or2_2_4 : sky130_fd_sc_hd__or2_2
    assign or2_2_6_B = (or3_2_3_B | inv_2_4_A)
                       & or2_2_4_B;  // sky130_fd_sc_hd__o21a_2_2 : sky130_fd_sc_hd__o21a_2
    assign or3_2_1_B = ~(or3_2_3_B | and2_2_2_A);  // sky130_fd_sc_hd__nor2_2_28 : sky130_fd_sc_hd__nor2_2
    assign or3_2_1_C = ~(or3_2_3_B | or2_2_4_B);  // sky130_fd_sc_hd__nor2_2_11 : sky130_fd_sc_hd__nor2_2
    assign or3_2_3_X = or3_2_3_A
                       | or3_2_3_B
                       | or3_2_3_C;  // sky130_fd_sc_hd__or3_2_3 : sky130_fd_sc_hd__or3_2
    assign or3_2_4_B = ~(or2_2_4_A | nor2_2_3_B);  // sky130_fd_sc_hd__nor2_2_12 : sky130_fd_sc_hd__nor2_2
    assign or3_2_4_C = (or3_2_3_A | or2_2_2_A)
                       & or2_2_4_A
                       & nor2_2_5_A;  // sky130_fd_sc_hd__o211a_2_1 : sky130_fd_sc_hd__o211a_2
    assign or4_2_0_A = xor2_2_8_A
                       ^ xor2_2_8_B;  // sky130_fd_sc_hd__xor2_2_8 : sky130_fd_sc_hd__xor2_2
    assign or4_2_0_C = or3_2_3_A
                       | or3_2_2_B
                       | or3_2_2_C;  // sky130_fd_sc_hd__or3_2_2 : sky130_fd_sc_hd__or3_2
    assign or4_2_0_D = (or3_2_3_A | or3_2_3_C)
                       & or3_2_3_B;  // sky130_fd_sc_hd__o21a_2_0 : sky130_fd_sc_hd__o21a_2
    assign xor2_2_6_A = (xor2_2_8_A & xor2_2_8_B)
                        | nor2_2_21_A;  // sky130_fd_sc_hd__a21o_2_5 : sky130_fd_sc_hd__a21o_2

    assign a211o_2_2_X = (or2_2_4_A & nand2_2_9_Y)
                         | or4_2_0_D
                         | or4_2_0_A;  // sky130_fd_sc_hd__a211o_2_2 : sky130_fd_sc_hd__a211o_2
    assign a22o_2_0_X = (nand2_2_5_Y & or3_2_4_B)
                        | (or3_2_3_C & or2_2_4_A);  // sky130_fd_sc_hd__a22o_2_0 : sky130_fd_sc_hd__a22o_2
    assign a31o_2_5_A3 = ~(or4_2_0_A & o31ai_2_1_Y);  // sky130_fd_sc_hd__nand2_2_10 : sky130_fd_sc_hd__nand2_2
    assign a32o_2_1_B2 = ~((or3_2_3_B & nor2_2_3_B) | or4_2_0_A);  // sky130_fd_sc_hd__a21oi_2_0 : sky130_fd_sc_hd__a21oi_2
    assign and3_2_3_B = (xor2_2_3_A & or4_2_0_A & or2_2_0_B)
                        | or3_2_4_B
                        | and3_2_1_X;  // sky130_fd_sc_hd__a311o_2_0 : sky130_fd_sc_hd__a311o_2
    assign and3_2_3_C = ~((or3_2_4_B | and3_2_1_X) & or4_2_0_A);  // sky130_fd_sc_hd__o21ai_2_0 : sky130_fd_sc_hd__o21ai_2
    assign mux2_1_1_X = or3_2_3_B ? or4_2_0_C : or3_2_0_X;  // sky130_fd_sc_hd__mux2_1_1 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_4_X = mux2_1_4_S ? or2_2_4_A : or3_2_4_B;  // sky130_fd_sc_hd__mux2_1_4 : sky130_fd_sc_hd__mux2_1
    assign nand2_2_3_Y = ~(or4_2_0_A & o21a_2_3_A2);  // sky130_fd_sc_hd__nand2_2_3 : sky130_fd_sc_hd__nand2_2
    assign o21a_2_1_X = (or3_2_3_B | and2_2_2_X)
                        & or2_2_4_X;  // sky130_fd_sc_hd__o21a_2_1 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_3_X = (or3_2_3_A | o21a_2_3_A2)
                        & or2_2_3_X;  // sky130_fd_sc_hd__o21a_2_3 : sky130_fd_sc_hd__o21a_2
    assign o21ai_2_2_Y = ~((or3_2_3_B | inv_2_0_Y) & or4_2_0_A);  // sky130_fd_sc_hd__o21ai_2_2 : sky130_fd_sc_hd__o21ai_2
    assign o21ba_2_0_X = (or2_2_4_A | nand2_2_9_Y)
                         & (~nor2_2_5_Y);  // sky130_fd_sc_hd__o21ba_2_0 : sky130_fd_sc_hd__o21ba_2
    assign o22a_2_0_X = (or3_2_3_B | mux2_1_4_S)
                        & (or2_2_4_X | nor2_2_4_Y);  // sky130_fd_sc_hd__o22a_2_0 : sky130_fd_sc_hd__o22a_2
    assign o32a_2_1_B1 = ~(nor2_2_3_B | o21a_2_3_A2);  // sky130_fd_sc_hd__nor2_2_27 : sky130_fd_sc_hd__nor2_2
    assign o32a_2_1_B2 = ~((or2_2_4_A | or3_2_2_C | inv_2_0_Y) & or4_2_0_A);  // sky130_fd_sc_hd__o31ai_2_0 : sky130_fd_sc_hd__o31ai_2
    assign or2_2_5_A = xor2_2_6_A
                       ^ xor2_2_6_B;  // sky130_fd_sc_hd__xor2_2_6 : sky130_fd_sc_hd__xor2_2
    assign or2_2_6_X = or3_2_1_C
                       | or2_2_6_B;  // sky130_fd_sc_hd__or2_2_6 : sky130_fd_sc_hd__or2_2
    assign or3_2_1_X = or4_2_0_A
                       | or3_2_1_B
                       | or3_2_1_C;  // sky130_fd_sc_hd__or3_2_1 : sky130_fd_sc_hd__or3_2
    assign or3_2_4_X = or4_2_0_A
                       | or3_2_4_B
                       | or3_2_4_C;  // sky130_fd_sc_hd__or3_2_4 : sky130_fd_sc_hd__or3_2
    assign or4_2_0_B = ~(xor2_2_6_A ^ xor2_2_6_B);  // sky130_fd_sc_hd__xnor2_2_10 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_5_A = ~((xor2_2_6_A & o22ai_2_0_Y) | and4bb_2_0_X);  // sky130_fd_sc_hd__a21oi_2_7 : sky130_fd_sc_hd__a21oi_2
    assign a211o_2_1_X = (or4_2_0_A & or2_2_4_B)
                         | mux2_1_4_X
                         | or4_2_0_B;  // sky130_fd_sc_hd__a211o_2_1 : sky130_fd_sc_hd__a211o_2
    assign a21o_2_3_A2 = (or4_2_0_A & nor2_2_5_Y)
                         | (~a211o_2_2_X);  // sky130_fd_sc_hd__a21bo_2_1 : sky130_fd_sc_hd__a21bo_2
    assign a21oi_2_2_Y = ~((or2_2_5_A & o21ba_2_0_X) | or4_2_0_A);  // sky130_fd_sc_hd__a21oi_2_2 : sky130_fd_sc_hd__a21oi_2
    assign a31o_2_5_A2 = (or3_2_0_B & or2_2_3_X)
                         | (~a32o_2_1_B2);  // sky130_fd_sc_hd__a21bo_2_0 : sky130_fd_sc_hd__a21bo_2
    assign a32o_2_1_X = (or4_2_0_A & o21a_2_3_A2 & or2_2_4_X)
                        | (o22a_2_0_X & a32o_2_1_B2);  // sky130_fd_sc_hd__a32o_2_1 : sky130_fd_sc_hd__a32o_2
    assign and3_2_3_X = or4_2_0_B
                        & and3_2_3_B
                        & and3_2_3_C;  // sky130_fd_sc_hd__and3_2_3 : sky130_fd_sc_hd__and3_2
    assign mux2_1_0_X = or4_2_0_A ? a31o_2_0_X : o21a_2_3_X;  // sky130_fd_sc_hd__mux2_1_0 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_2_X = or4_2_0_A ? a22o_2_0_X : or2_2_6_X;  // sky130_fd_sc_hd__mux2_1_2 : sky130_fd_sc_hd__mux2_1
    assign nor2_2_20_A = ~(xor2_2_5_A | xor2_2_5_B);  // sky130_fd_sc_hd__nor2_2_18 : sky130_fd_sc_hd__nor2_2
    assign o221a_2_0_X = (or3_2_2_C | o21ai_2_2_Y)
                         & (o21a_2_1_X | or4_2_0_A)
                         & or4_2_0_B;  // sky130_fd_sc_hd__o221a_2_0 : sky130_fd_sc_hd__o221a_2
    assign o22ai_2_1_Y = ~((or2_2_4_A | nand2_2_5_Y) & (or3_2_3_X | or2_2_5_A));  // sky130_fd_sc_hd__o22ai_2_1 : sky130_fd_sc_hd__o22ai_2
    assign o311a_2_0_C1 = ~(or4_2_0_A & mux2_1_1_X);  // sky130_fd_sc_hd__nand2_2_12 : sky130_fd_sc_hd__nand2_2
    assign o32a_2_0_X = (or4_2_0_A | and3_2_0_X | o32a_2_0_A3)
                        & (o32a_2_1_B2 | nor2_2_3_Y);  // sky130_fd_sc_hd__o32a_2_0 : sky130_fd_sc_hd__o32a_2
    assign o32a_2_1_X = (or4_2_0_A | and3_2_0_X | o32a_2_1_A3)
                        & (o32a_2_1_B1 | o32a_2_1_B2);  // sky130_fd_sc_hd__o32a_2_1 : sky130_fd_sc_hd__o32a_2
    assign or2_2_5_X = or2_2_5_A
                       | or3_2_1_B;  // sky130_fd_sc_hd__or2_2_5 : sky130_fd_sc_hd__or2_2
    assign or3_2_7_A = ~(xor2_2_5_A ^ xor2_2_5_B);  // sky130_fd_sc_hd__xnor2_2_7 : sky130_fd_sc_hd__xnor2_2
    assign or3_2_7_B = (nand2_2_3_Y | or3_2_4_B)
                       & or4_2_0_B
                       & or3_2_1_X;  // sky130_fd_sc_hd__o211a_2_6 : sky130_fd_sc_hd__o211a_2
    assign or3_2_7_C = ~((nand2_2_3_Y & or3_2_4_X) | or4_2_0_B);  // sky130_fd_sc_hd__a21oi_2_3 : sky130_fd_sc_hd__a21oi_2
    assign or4_2_0_X = or4_2_0_A
                       | or4_2_0_B
                       | or4_2_0_C
                       | or4_2_0_D;  // sky130_fd_sc_hd__or4_2_0 : sky130_fd_sc_hd__or4_2
    assign xor2_2_5_X = xor2_2_5_A
                        ^ xor2_2_5_B;  // sky130_fd_sc_hd__xor2_2_5 : sky130_fd_sc_hd__xor2_2

    assign a211o_2_0_X = (or2_2_5_A & a32o_2_1_X)
                         | o221a_2_0_X
                         | or3_2_7_A;  // sky130_fd_sc_hd__a211o_2_0 : sky130_fd_sc_hd__a211o_2
    assign a21o_2_3_X = (or2_2_5_A & a21o_2_3_A2)
                        | and3_2_3_X;  // sky130_fd_sc_hd__a21o_2_3 : sky130_fd_sc_hd__a21o_2
    assign a221o_2_0_X = (or4_2_0_A & o22ai_2_1_Y)
                         | (or2_2_5_X & a21oi_2_2_Y)
                         | or3_2_7_A;  // sky130_fd_sc_hd__a221o_2_0 : sky130_fd_sc_hd__a221o_2
    assign a31o_2_5_X = (or2_2_5_A & a31o_2_5_A2 & a31o_2_5_A3)
                        | xor2_2_5_X;  // sky130_fd_sc_hd__a31o_2_5 : sky130_fd_sc_hd__a31o_2
    assign mux2_1_3_X = or2_2_5_A ? mux2_1_0_X : o32a_2_1_X;  // sky130_fd_sc_hd__mux2_1_3 : sky130_fd_sc_hd__mux2_1
    assign nor2_2_20_Y = ~(nor2_2_20_A | o211a_2_0_X);  // sky130_fd_sc_hd__nor2_2_20 : sky130_fd_sc_hd__nor2_2
    assign o211ai_2_0_Y = ~((or2_2_5_A | mux2_1_2_X) & a211o_2_1_X & xor2_2_5_X);  // sky130_fd_sc_hd__o211ai_2_0 : sky130_fd_sc_hd__o211ai_2
    assign o21ai_2_1_Y = ~((or2_2_5_A | o32a_2_0_X) & or4_2_0_X);  // sky130_fd_sc_hd__o21ai_2_1 : sky130_fd_sc_hd__o21ai_2
    assign o311a_2_0_X = (nor2_2_26_Y | or4_2_0_A | and3_2_0_X)
                         & or4_2_0_B
                         & o311a_2_0_C1;  // sky130_fd_sc_hd__o311a_2_0 : sky130_fd_sc_hd__o311a_2
    assign or3_2_7_X = or3_2_7_A
                       | or3_2_7_B
                       | or3_2_7_C;  // sky130_fd_sc_hd__or3_2_7 : sky130_fd_sc_hd__or3_2

    assign or4b_2_2_C = (xor2_2_5_X | mux2_1_3_X)
                        & a211o_2_0_X
                        & nor2_2_20_Y;  // sky130_fd_sc_hd__o211a_2_5 : sky130_fd_sc_hd__o211a_2
    assign or4b_2_3_A = (xor2_2_5_X | a21o_2_3_X)
                        & o211ai_2_0_Y
                        & nor2_2_20_Y;  // sky130_fd_sc_hd__o211a_2_3 : sky130_fd_sc_hd__o211a_2
    assign or4b_2_3_B = (o311a_2_0_X | a31o_2_5_X)
                        & nor2_2_20_Y
                        & or3_2_7_X;  // sky130_fd_sc_hd__o211a_2_2 : sky130_fd_sc_hd__o211a_2
    assign or4b_2_3_C = (xor2_2_5_X | o21ai_2_1_Y)
                        & a221o_2_0_X
                        & nor2_2_20_Y;  // sky130_fd_sc_hd__o211a_2_4 : sky130_fd_sc_hd__o211a_2

    assign nand4_2_1_D = (~or4b_2_3_A)
                         & (~or4b_2_2_C)
                         & or4b_2_3_C
                         & or4b_2_3_B;  // sky130_fd_sc_hd__and4bb_2_2 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_2_D = (~or4b_2_3_B)
                         & (~or4b_2_2_C)
                         & or4b_2_3_C
                         & or4b_2_3_A;  // sky130_fd_sc_hd__and4bb_2_3 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_3_D = (~or4b_2_2_C)
                         & (~or4b_2_3_C)
                         & or4b_2_3_B
                         & or4b_2_3_A;  // sky130_fd_sc_hd__and4bb_2_1 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_4_D = (~or4b_2_3_A)
                         & (~or4b_2_3_C)
                         & or4b_2_2_C
                         & or4b_2_3_B;  // sky130_fd_sc_hd__and4bb_2_7 : sky130_fd_sc_hd__and4bb_2
    assign nand4_2_5_D = (~or4b_2_2_C)
                         & or4b_2_3_C
                         & or4b_2_3_B
                         & or4b_2_3_A;  // sky130_fd_sc_hd__and4b_2_1 : sky130_fd_sc_hd__and4b_2
    assign nand4_2_6_D = (~or4b_2_3_B)
                         & (~or4b_2_3_C)
                         & or4b_2_2_C
                         & or4b_2_3_A;  // sky130_fd_sc_hd__and4bb_2_8 : sky130_fd_sc_hd__and4bb_2
    assign nor4_2_0_Y = ~(or4b_2_3_A | or4b_2_3_B | or4b_2_2_C | or4b_2_3_C);  // sky130_fd_sc_hd__nor4_2_0 : sky130_fd_sc_hd__nor4_2
    assign or4_2_1_C = or4b_2_3_A
                       | or4b_2_2_C
                       | or4b_2_3_C
                       | (~or4b_2_3_B);  // sky130_fd_sc_hd__or4b_2_0 : sky130_fd_sc_hd__or4b_2
    assign or4_2_2_C = or4b_2_3_A
                       | or4b_2_3_B
                       | or4b_2_2_C
                       | (~or4b_2_3_C);  // sky130_fd_sc_hd__or4b_2_2 : sky130_fd_sc_hd__or4b_2
    assign or4_2_3_C = or4b_2_3_B
                       | or4b_2_2_C
                       | or4b_2_3_C
                       | (~or4b_2_3_A);  // sky130_fd_sc_hd__or4b_2_1 : sky130_fd_sc_hd__or4b_2
    assign or4_2_5_C = or4b_2_3_A
                       | or4b_2_3_B
                       | or4b_2_3_C
                       | (~or4b_2_2_C);  // sky130_fd_sc_hd__or4b_2_3 : sky130_fd_sc_hd__or4b_2

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            or2_2_11_B <= 1'b0;
            or4_2_4_B <= 1'b0;
            or4_2_4_A <= 1'b0;
            or4_2_4_D <= 1'b0;
            or4_2_4_C <= 1'b0;
            or2_2_11_A <= 1'b0;
            xor2_2_0_B <= 1'b0;
            xor2_2_7_A <= 1'b0;
            xor2_2_9_A <= 1'b0;
            xor2_2_4_A <= 1'b0;
        end else begin
            or2_2_11_B <= or2_2_11_X;
            or4_2_4_B <= dfrtp_2_43_D;
            or4_2_4_A <= nor2_2_31_Y;
            or4_2_4_D <= dfrtp_2_45_D;
            or4_2_4_C <= xor2_2_11_X;
            or2_2_11_A <= a31o_2_13_X;
            xor2_2_0_B <= o211a_2_7_X;
            xor2_2_7_A <= mux2_1_5_X;
            xor2_2_9_A <= xor2_2_9_X;
            xor2_2_4_A <= o311a_2_1_X;
        end
    end

    always @(posedge clk) begin
        or2_2_8_B <= dfxtp_2_0_D;
        or2_2_9_A <= dfxtp_2_1_D;
        or3b_2_0_A <= dfxtp_2_2_D;
        or2_2_9_B <= dfxtp_2_3_D;
    end

endmodule
