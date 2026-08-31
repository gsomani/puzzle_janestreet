module puzzle_readable (
    input       I,
    input       clk,
    input       enable,
    input       rst_n,
    output reg  success,
    output      [7:0] O
);

    // wires
    wire a211o_2_0_X;
    wire a211o_2_1_X;
    wire a211o_2_2_X;
    wire a211o_2_3_X;
    wire a21o_2_0_X;
    wire a21o_2_10_X;
    wire a21o_2_13_X;
    wire a21o_2_14_X;
    wire a21o_2_15_X;
    wire a21o_2_16_X;
    wire a21o_2_17_X;
    wire a21o_2_18_X;
    wire a21o_2_1_X;
    wire a21o_2_2_X;
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
    wire a221o_2_1_X;
    wire a221o_2_2_X;
    wire a221o_2_4_X;
    wire a22o_2_0_X;
    wire a22o_2_13_A1;
    wire a22o_2_13_X;
    wire a22o_2_17_X;
    wire a22o_2_1_X;
    wire a22o_2_21_B2;
    wire a22o_2_22_X;
    wire a22o_2_2_X;
    wire a22o_2_3_X;
    wire a22o_2_4_X;
    wire a22o_2_5_X;
    wire a22o_2_6_X;
    wire a22o_2_7_A1;
    wire a22o_2_7_X;
    wire a22o_2_8_X;
    wire a22o_2_9_A1;
    wire a22o_2_9_X;
    wire a22oi_2_0_Y;
    wire a31o_2_0_X;
    wire a31o_2_11_X;
    wire a31o_2_12_X;
    wire a31o_2_13_X;
    wire a31o_2_14_X;
    wire a31o_2_15_X;
    wire a31o_2_16_X;
    wire a31o_2_17_X;
    wire a31o_2_18_X;
    wire a31o_2_19_X;
    wire a31o_2_1_X;
    wire a31o_2_20_X;
    wire a31o_2_21_X;
    wire a31o_2_22_X;
    wire a31o_2_23_X;
    wire a31o_2_24_X;
    wire a31o_2_25_X;
    wire a31o_2_2_X;
    wire a31o_2_3_X;
    wire a31o_2_4_X;
    wire a31o_2_5_A2;
    wire a31o_2_5_A3;
    wire a31o_2_5_X;
    wire a31o_2_7_X;
    wire a31o_2_8_X;
    wire a31o_2_9_X;
    wire a32o_2_1_B2;
    wire a32o_2_1_X;
    wire a32o_2_2_X;
    wire a32o_2_3_X;
    wire a32o_2_4_B2;
    wire a32o_2_4_X;
    wire a41oi_2_0_Y;
    wire and2_2_15_X;
    wire and2_2_2_A;
    wire and2_2_2_X;
    wire and2_2_7_B;
    wire and2_2_7_X;
    wire and2_2_8_A;
    wire and2_2_8_B;
    wire and2_2_8_X;
    wire and2b_2_16_X;
    wire and2b_2_19_X;
    wire and2b_2_6_X;
    wire and2b_2_9_B;
    wire and2b_2_9_X;
    wire and3_2_0_C;
    wire and3_2_0_X;
    wire and3_2_10_A;
    wire and3_2_10_B;
    wire and3_2_11_X;
    wire and3_2_12_A;
    wire and3_2_12_B;
    wire and3_2_12_C;
    wire and3_2_13_C;
    wire and3_2_16_X;
    wire and3_2_17_C;
    wire and3_2_17_X;
    wire and3_2_1_C;
    wire and3_2_1_X;
    wire and3_2_25_C;
    wire and3_2_2_A;
    wire and3_2_2_B;
    wire and3_2_2_C;
    wire and3_2_3_B;
    wire and3_2_3_C;
    wire and3_2_3_X;
    wire and3_2_4_A;
    wire and3_2_4_B;
    wire and3_2_4_X;
    wire and3_2_5_A;
    wire and3_2_5_B;
    wire and3_2_5_C;
    wire and3_2_6_C;
    wire and3_2_6_X;
    wire and3_2_7_C;
    wire and3_2_7_X;
    wire and3b_2_0_C;
    wire and3b_2_1_X;
    wire and3b_2_2_X;
    wire and4_2_0_A;
    wire and4_2_0_B;
    wire and4_2_0_C;
    wire and4_2_0_D;
    wire and4_2_0_X;
    wire and4_2_1_A;
    wire and4_2_1_B;
    wire and4_2_1_C;
    wire and4_2_1_D;
    wire and4_2_1_X;
    wire and4_2_3_X;
    wire and4_2_4_B;
    wire and4_2_4_D;
    wire and4_2_4_X;
    wire and4_2_5_A;
    wire and4_2_5_B;
    wire and4_2_5_C;
    wire and4_2_5_D;
    wire and4_2_5_X;
    wire and4_2_6_A;
    wire and4_2_6_B;
    wire and4_2_6_C;
    wire and4_2_6_D;
    wire and4_2_6_X;
    wire and4_2_7_X;
    wire and4b_2_2_X;
    wire and4b_2_3_D;
    wire and4b_2_3_X;
    wire and4bb_2_0_X;
    wire buf_2_0_X;
    wire conb_1_0_HI;
    wire conb_1_0_LO;
    wire conb_1_1_HI;
    wire conb_1_2_HI;
    wire conb_1_2_LO;
    wire conb_1_3_HI;
    wire conb_1_3_LO;
    wire conb_1_4_HI;
    wire conb_1_4_LO;
    wire conb_1_5_HI;
    wire conb_1_5_LO;
    wire dfrtp_2_25_D;
    wire dfrtp_2_29_D;
    wire dfrtp_2_43_D;
    wire dfrtp_2_45_D;
    wire dfrtp_2_4_D;
    wire dfrtp_2_57_D;
    wire dfrtp_2_58_D;
    wire dfrtp_2_59_D;
    wire dfrtp_2_63_D;
    wire dfrtp_2_64_D;
    wire dfrtp_2_66_D;
    wire dfrtp_2_67_D;
    wire dfrtp_2_68_D;
    wire dfrtp_2_70_D;
    wire dfstp_2_0_D;
    wire dfstp_2_2_D;
    wire dfxtp_2_0_D;
    wire dfxtp_2_1_D;
    wire dfxtp_2_2_D;
    wire dfxtp_2_3_D;
    wire inv_2_0_Y;
    wire inv_2_10_A;
    wire inv_2_10_Y;
    wire inv_2_12_A;
    wire inv_2_12_Y;
    wire inv_2_13_Y;
    wire inv_2_14_Y;
    wire inv_2_15_Y;
    wire inv_2_21_Y;
    wire inv_2_22_Y;
    wire inv_2_23_A;
    wire inv_2_23_Y;
    wire inv_2_4_A;
    wire inv_2_4_Y;
    wire inv_2_5_A;
    wire inv_2_5_Y;
    wire inv_2_6_Y;
    wire inv_2_7_A;
    wire inv_2_7_Y;
    wire inv_2_8_Y;
    wire inv_2_9_A;
    wire inv_2_9_Y;
    wire mux2_1_0_X;
    wire mux2_1_10_X;
    wire mux2_1_11_X;
    wire mux2_1_12_X;
    wire mux2_1_13_X;
    wire mux2_1_14_X;
    wire mux2_1_15_X;
    wire mux2_1_16_X;
    wire mux2_1_17_X;
    wire mux2_1_18_X;
    wire mux2_1_19_X;
    wire mux2_1_1_X;
    wire mux2_1_20_X;
    wire mux2_1_2_X;
    wire mux2_1_3_X;
    wire mux2_1_4_S;
    wire mux2_1_4_X;
    wire mux2_1_5_A1;
    wire mux2_1_5_X;
    wire mux2_1_6_X;
    wire mux2_1_7_A0;
    wire mux2_1_7_X;
    wire mux2_1_8_X;
    wire mux2_1_9_X;
    wire nand2_2_29_Y;
    wire nand2_2_2_Y;
    wire nand2_2_31_A;
    wire nand2_2_38_Y;
    wire nand2_2_3_Y;
    wire nand2_2_5_Y;
    wire nand2_2_9_Y;
    wire nand2b_2_1_Y;
    wire nand2b_2_2_Y;
    wire nand2b_2_3_Y;
    wire nand2b_2_4_Y;
    wire nand2b_2_8_Y;
    wire nand3_2_0_Y;
    wire nand3_2_1_Y;
    wire nand4_2_10_D;
    wire nand4_2_12_D;
    wire nand4_2_13_D;
    wire nand4_2_1_D;
    wire nand4_2_1_Y;
    wire nand4_2_2_D;
    wire nand4_2_3_D;
    wire nand4_2_4_D;
    wire nand4_2_4_Y;
    wire nand4_2_5_D;
    wire nand4_2_5_Y;
    wire nand4_2_6_D;
    wire nand4_2_6_Y;
    wire nand4_2_7_Y;
    wire nand4_2_8_D;
    wire nand4_2_8_Y;
    wire nand4_2_9_D;
    wire nand4_2_9_Y;
    wire nor2_2_0_B;
    wire nor2_2_19_Y;
    wire nor2_2_20_A;
    wire nor2_2_20_Y;
    wire nor2_2_21_A;
    wire nor2_2_23_Y;
    wire nor2_2_24_Y;
    wire nor2_2_26_Y;
    wire nor2_2_29_Y;
    wire nor2_2_30_B;
    wire nor2_2_30_Y;
    wire nor2_2_31_B;
    wire nor2_2_31_Y;
    wire nor2_2_32_B;
    wire nor2_2_32_Y;
    wire nor2_2_33_Y;
    wire nor2_2_34_Y;
    wire nor2_2_39_Y;
    wire nor2_2_3_B;
    wire nor2_2_3_Y;
    wire nor2_2_40_A;
    wire nor2_2_40_Y;
    wire nor2_2_41_Y;
    wire nor2_2_42_Y;
    wire nor2_2_43_Y;
    wire nor2_2_44_Y;
    wire nor2_2_45_Y;
    wire nor2_2_46_A;
    wire nor2_2_46_B;
    wire nor2_2_46_Y;
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
    wire nor3_2_2_Y;
    wire nor3_2_3_A;
    wire nor3_2_3_B;
    wire nor3_2_3_C;
    wire nor3_2_3_Y;
    wire nor3b_2_0_B;
    wire nor3b_2_2_Y;
    wire nor3b_2_3_Y;
    wire nor4_2_0_Y;
    wire nor4_2_1_Y;
    wire o211a_2_0_X;
    wire o211a_2_10_X;
    wire o211a_2_7_X;
    wire o211a_2_8_X;
    wire o211a_2_9_X;
    wire o211ai_2_0_Y;
    wire o21a_2_10_X;
    wire o21a_2_11_X;
    wire o21a_2_12_A1;
    wire o21a_2_12_X;
    wire o21a_2_13_X;
    wire o21a_2_14_B1;
    wire o21a_2_14_X;
    wire o21a_2_15_A2;
    wire o21a_2_15_X;
    wire o21a_2_16_X;
    wire o21a_2_17_X;
    wire o21a_2_18_X;
    wire o21a_2_19_X;
    wire o21a_2_1_X;
    wire o21a_2_20_X;
    wire o21a_2_21_X;
    wire o21a_2_22_X;
    wire o21a_2_23_X;
    wire o21a_2_24_A2;
    wire o21a_2_24_X;
    wire o21a_2_25_A2;
    wire o21a_2_25_X;
    wire o21a_2_26_X;
    wire o21a_2_27_A2;
    wire o21a_2_27_X;
    wire o21a_2_28_A2;
    wire o21a_2_28_X;
    wire o21a_2_29_X;
    wire o21a_2_30_X;
    wire o21a_2_3_A2;
    wire o21a_2_3_X;
    wire o21a_2_4_A2;
    wire o21a_2_4_X;
    wire o21a_2_5_A2;
    wire o21a_2_5_X;
    wire o21a_2_6_A2;
    wire o21a_2_6_X;
    wire o21a_2_7_A2;
    wire o21a_2_7_X;
    wire o21a_2_8_A2;
    wire o21a_2_8_X;
    wire o21a_2_9_A2;
    wire o21a_2_9_X;
    wire o21ai_2_1_Y;
    wire o21ai_2_2_Y;
    wire o21ai_2_3_B1;
    wire o21ai_2_3_Y;
    wire o21ai_2_4_Y;
    wire o21ai_2_5_Y;
    wire o21ba_2_0_X;
    wire o21ba_2_1_X;
    wire o21bai_2_0_Y;
    wire o221a_2_0_X;
    wire o221a_2_1_X;
    wire o221a_2_2_B2;
    wire o221a_2_2_C1;
    wire o221a_2_2_X;
    wire o22a_2_0_X;
    wire o22a_2_2_X;
    wire o22a_2_3_B1;
    wire o22a_2_3_B2;
    wire o22a_2_3_X;
    wire o22ai_2_0_Y;
    wire o22ai_2_1_Y;
    wire o311a_2_0_C1;
    wire o311a_2_0_X;
    wire o311a_2_1_X;
    wire o31a_2_0_A1;
    wire o31a_2_0_A2;
    wire o31a_2_0_B1;
    wire o31a_2_0_X;
    wire o31a_2_10_X;
    wire o31a_2_1_A3;
    wire o31a_2_1_B1;
    wire o31a_2_1_X;
    wire o31a_2_2_A1;
    wire o31a_2_2_A2;
    wire o31a_2_2_A3;
    wire o31a_2_2_X;
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
    wire o32a_2_2_X;
    wire o32a_2_3_A1;
    wire o32a_2_3_A2;
    wire o32a_2_3_A3;
    wire o32a_2_3_X;
    wire o32ai_2_0_B1;
    wire o32ai_2_0_Y;
    wire or2_2_0_B;
    wire or2_2_10_A;
    wire or2_2_10_X;
    wire or2_2_11_X;
    wire or2_2_12_B;
    wire or2_2_12_X;
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
    wire or2_2_7_X;
    wire or2_2_8_X;
    wire or2_2_9_X;
    wire or3_2_0_B;
    wire or3_2_0_X;
    wire or3_2_10_A;
    wire or3_2_10_X;
    wire or3_2_11_A;
    wire or3_2_11_X;
    wire or3_2_12_X;
    wire or3_2_13_A;
    wire or3_2_13_X;
    wire or3_2_14_A;
    wire or3_2_14_X;
    wire or3_2_15_A;
    wire or3_2_15_X;
    wire or3_2_16_A;
    wire or3_2_16_X;
    wire or3_2_17_A;
    wire or3_2_17_B;
    wire or3_2_17_C;
    wire or3_2_17_X;
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
    wire or3_2_6_X;
    wire or3_2_7_A;
    wire or3_2_7_B;
    wire or3_2_7_C;
    wire or3_2_7_X;
    wire or3_2_8_X;
    wire or3_2_9_A;
    wire or3_2_9_B;
    wire or3_2_9_C;
    wire or3_2_9_X;
    wire or3b_2_0_X;
    wire or4_2_0_A;
    wire or4_2_0_B;
    wire or4_2_0_C;
    wire or4_2_0_D;
    wire or4_2_0_X;
    wire or4_2_1_B;
    wire or4_2_1_C;
    wire or4_2_1_D;
    wire or4_2_1_X;
    wire or4_2_2_B;
    wire or4_2_2_C;
    wire or4_2_2_D;
    wire or4_2_2_X;
    wire or4_2_3_B;
    wire or4_2_3_C;
    wire or4_2_3_D;
    wire or4_2_3_X;
    wire or4_2_4_X;
    wire or4_2_5_B;
    wire or4_2_5_C;
    wire or4_2_5_D;
    wire or4_2_5_X;
    wire or4_2_6_B;
    wire or4_2_6_C;
    wire or4_2_6_D;
    wire or4_2_6_X;
    wire or4_2_7_B;
    wire or4_2_7_C;
    wire or4_2_7_D;
    wire or4_2_7_X;
    wire or4_2_8_B;
    wire or4_2_8_C;
    wire or4_2_8_D;
    wire or4_2_8_X;
    wire or4_2_9_B;
    wire or4_2_9_C;
    wire or4_2_9_D;
    wire or4_2_9_X;
    wire or4b_2_2_C;
    wire or4b_2_3_A;
    wire or4b_2_3_B;
    wire or4b_2_3_C;
    wire or4b_2_8_A;
    wire or4b_2_8_C;
    wire or4b_2_8_X;
    wire or4bb_2_0_X;
    wire xnor2_2_0_A;
    wire xnor2_2_11_B;
    wire xnor2_2_11_Y;
    wire xnor2_2_13_Y;
    wire xnor2_2_14_B;
    wire xnor2_2_14_Y;
    wire xnor2_2_18_Y;
    wire xnor2_2_19_Y;
    wire xnor2_2_21_B;
    wire xnor2_2_21_Y;
    wire xnor2_2_22_Y;
    wire xnor2_2_26_A;
    wire xnor2_2_26_B;
    wire xnor2_2_28_Y;
    wire xnor2_2_4_A;
    wire xnor2_2_5_B;
    wire xnor2_2_6_A;
    wire xnor2_2_6_Y;
    wire xnor2_2_8_A;
    wire xnor2_2_8_B;
    wire xor2_2_0_X;
    wire xor2_2_10_X;
    wire xor2_2_11_B;
    wire xor2_2_11_X;
    wire xor2_2_12_X;
    wire xor2_2_13_X;
    wire xor2_2_14_X;
    wire xor2_2_15_X;
    wire xor2_2_16_X;
    wire xor2_2_17_X;
    wire xor2_2_18_X;
    wire xor2_2_19_X;
    wire xor2_2_1_B;
    wire xor2_2_1_X;
    wire xor2_2_20_B;
    wire xor2_2_20_X;
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

    // registers
    reg a22o_2_2_A2;
    reg a22o_2_2_B2;
    reg a22o_2_4_B2;
    reg a32o_2_3_B1;
    reg and2b_2_3_B;
    reg and4_2_3_A;
    reg and4_2_3_B;
    reg and4_2_3_C;
    reg inv_2_11_A;
    reg inv_2_16_A;
    reg inv_2_17_A;
    reg inv_2_18_A;
    reg inv_2_19_A;
    reg inv_2_1_A;
    reg inv_2_20_A;
    reg inv_2_2_A;
    reg inv_2_3_A;
    reg inv_2_6_A;
    reg inv_2_8_A;
    reg mux2_1_12_A0;
    reg mux2_1_12_A1;
    reg mux2_1_15_A0;
    reg mux2_1_16_A0;
    reg mux2_1_19_A0;
    reg mux2_1_19_A1;
    reg mux2_1_8_A0;
    reg mux2_1_8_A1;
    reg mux2_1_9_A0;
    reg mux2_1_9_A1;
    reg nand4_2_0_C;
    reg nand4_2_10_C;
    reg nand4_2_11_C;
    reg nand4_2_12_C;
    reg nand4_2_13_C;
    reg nand4_2_1_C;
    reg nand4_2_2_C;
    reg nand4_2_3_C;
    reg nand4_2_4_C;
    reg nand4_2_5_C;
    reg nand4_2_6_C;
    reg nand4_2_7_C;
    reg nand4_2_8_C;
    reg nand4_2_9_C;
    reg nor3_2_2_A;
    reg nor3_2_2_B;
    reg o21a_2_16_A1;
    reg o21a_2_18_A1;
    reg o21a_2_19_A1;
    reg o21a_2_21_A1;
    reg o21a_2_23_A1;
    reg o21a_2_24_A1;
    reg o21a_2_25_A1;
    reg o21a_2_27_A1;
    reg o21a_2_28_A1;
    reg o21a_2_30_A1;
    reg o21a_2_4_A1;
    reg o21a_2_5_A1;
    reg o21a_2_8_A1;
    reg or2_2_11_A;
    reg or2_2_11_B;
    reg or2_2_12_A;
    reg or2_2_7_A;
    reg or2_2_8_B;
    reg or2_2_9_A;
    reg or2_2_9_B;
    reg or3_2_8_A;
    reg or3_2_8_B;
    reg or3_2_8_C;
    reg or3b_2_0_A;
    reg or4_2_1_A;
    reg or4_2_2_A;
    reg or4_2_3_A;
    reg or4_2_4_A;
    reg or4_2_4_B;
    reg or4_2_4_C;
    reg or4_2_4_D;
    reg or4_2_5_A;
    reg or4_2_6_A;
    reg or4_2_7_A;
    reg or4_2_8_A;
    reg or4_2_9_A;
    reg xor2_2_0_B;
    reg xor2_2_14_B;
    reg xor2_2_16_A;
    reg xor2_2_17_B;
    reg xor2_2_19_A;
    reg xor2_2_19_B;
    reg xor2_2_20_A;
    reg xor2_2_4_A;
    reg xor2_2_7_A;
    reg xor2_2_9_A;

    assign conb_1_0_LO = 1'b0;
    assign conb_1_0_HI = 1'b1;
    assign or3_2_13_A = 1'b0;
    assign conb_1_1_HI = 1'b1;
    assign conb_1_2_LO = 1'b0;
    assign conb_1_2_HI = 1'b1;
    assign conb_1_3_LO = 1'b0;
    assign conb_1_3_HI = 1'b1;
    assign conb_1_4_LO = 1'b0;
    assign conb_1_4_HI = 1'b1;
    assign conb_1_5_LO = 1'b0;
    assign conb_1_5_HI = 1'b1;


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
    assign and3_2_10_A = (~and4_2_3_B)
                         & (~or3_2_8_C)
                         & nor3_2_2_B
                         & or3_2_8_B;  // sky130_fd_sc_hd__and4bb_2_5 : sky130_fd_sc_hd__and4bb_2
    assign and3_2_10_B = (~and4_2_3_A)
                         & or3_2_8_A;  // sky130_fd_sc_hd__and2b_2_8 : sky130_fd_sc_hd__and2b_2
    assign and3_2_12_A = (~nand4_2_12_C)
                         & o21a_2_27_A1;  // sky130_fd_sc_hd__and2b_2_29 : sky130_fd_sc_hd__and2b_2
    assign and3_2_12_C = (~nand4_2_13_C)
                         & o21a_2_25_A1;  // sky130_fd_sc_hd__and2b_2_27 : sky130_fd_sc_hd__and2b_2
    assign and3_2_16_X = or3b_2_0_A
                         & or2_2_9_A
                         & or2_2_9_B;  // sky130_fd_sc_hd__and3_2_16 : sky130_fd_sc_hd__and3_2
    assign and3_2_17_C = (~or2_2_9_B)
                         & or2_2_9_A;  // sky130_fd_sc_hd__and2b_2_12 : sky130_fd_sc_hd__and2b_2
    assign and3_2_25_C = ~(or2_2_8_B & or2_2_9_B & or2_2_9_A & or3b_2_0_A);  // sky130_fd_sc_hd__nand4_2_14 : sky130_fd_sc_hd__nand4_2
    assign and3_2_2_A = ~(xor2_2_7_A & xor2_2_9_A);  // sky130_fd_sc_hd__nand2_2_21 : sky130_fd_sc_hd__nand2_2
    assign and3_2_2_C = ~(xor2_2_0_B ^ xor2_2_4_A);  // sky130_fd_sc_hd__xnor2_2_3 : sky130_fd_sc_hd__xnor2_2
    assign and3_2_5_A = (~nand4_2_4_C)
                        & o21a_2_16_A1;  // sky130_fd_sc_hd__and2b_2_22 : sky130_fd_sc_hd__and2b_2
    assign and3_2_5_C = (~nand4_2_6_C)
                        & o21a_2_18_A1;  // sky130_fd_sc_hd__and2b_2_21 : sky130_fd_sc_hd__and2b_2
    assign and3_2_7_C = ~((~xor2_2_9_A) & xor2_2_4_A & xor2_2_0_B);  // sky130_fd_sc_hd__nand3b_2_0 : sky130_fd_sc_hd__nand3b_2
    assign and3b_2_0_C = ~((or3b_2_0_A & or2_2_9_A) | or2_2_8_B);  // sky130_fd_sc_hd__a21oi_2_8 : sky130_fd_sc_hd__a21oi_2
    assign and3b_2_1_X = (~or2_2_8_B)
                         & or2_2_9_B
                         & or2_2_9_A;  // sky130_fd_sc_hd__and3b_2_1 : sky130_fd_sc_hd__and3b_2
    assign and4_2_0_B = (~nand4_2_0_C)
                        & o21a_2_4_A1;  // sky130_fd_sc_hd__and2b_2_1 : sky130_fd_sc_hd__and2b_2
    assign and4_2_0_C = (~nand4_2_3_C)
                        & o21a_2_5_A1;  // sky130_fd_sc_hd__and2b_2_2 : sky130_fd_sc_hd__and2b_2
    assign and4_2_1_A = (~nand4_2_1_C)
                        & and2b_2_3_B;  // sky130_fd_sc_hd__and2b_2_3 : sky130_fd_sc_hd__and2b_2
    assign and4_2_1_C = (~nand4_2_5_C)
                        & o21a_2_30_A1;  // sky130_fd_sc_hd__and2b_2_20 : sky130_fd_sc_hd__and2b_2
    assign and4_2_1_D = (~nand4_2_2_C)
                        & o21a_2_8_A1;  // sky130_fd_sc_hd__and2b_2_4 : sky130_fd_sc_hd__and2b_2
    assign and4_2_4_B = and4_2_3_C
                        & nor3_2_2_A;  // sky130_fd_sc_hd__and2_2_9 : sky130_fd_sc_hd__and2_2
    assign and4_2_4_D = and4_2_3_A
                        & and4_2_3_B
                        & or3_2_8_B;  // sky130_fd_sc_hd__and3_2_8 : sky130_fd_sc_hd__and3_2
    assign and4_2_5_A = (~nand4_2_9_C)
                        & o21a_2_21_A1;  // sky130_fd_sc_hd__and2b_2_25 : sky130_fd_sc_hd__and2b_2
    assign and4_2_5_C = (~nand4_2_11_C)
                        & o21a_2_24_A1;  // sky130_fd_sc_hd__and2b_2_28 : sky130_fd_sc_hd__and2b_2
    assign and4_2_5_D = (~nand4_2_10_C)
                        & o21a_2_28_A1;  // sky130_fd_sc_hd__and2b_2_26 : sky130_fd_sc_hd__and2b_2
    assign and4_2_6_B = (~nand4_2_7_C)
                        & o21a_2_19_A1;  // sky130_fd_sc_hd__and2b_2_23 : sky130_fd_sc_hd__and2b_2
    assign and4_2_6_C = (~nand4_2_8_C)
                        & o21a_2_23_A1;  // sky130_fd_sc_hd__and2b_2_24 : sky130_fd_sc_hd__and2b_2
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
    assign inv_2_22_Y = ~success;  // sky130_fd_sc_hd__inv_2_22 : sky130_fd_sc_hd__inv_2
    assign inv_2_23_A = ~inv_2_11_A;  // sky130_fd_sc_hd__inv_2_11 : sky130_fd_sc_hd__inv_2
    assign inv_2_6_Y = ~inv_2_6_A;  // sky130_fd_sc_hd__inv_2_6 : sky130_fd_sc_hd__inv_2
    assign inv_2_7_A = (~or2_2_11_A)
                       & enable;  // sky130_fd_sc_hd__and2b_2_11 : sky130_fd_sc_hd__and2b_2
    assign inv_2_8_Y = ~inv_2_8_A;  // sky130_fd_sc_hd__inv_2_8 : sky130_fd_sc_hd__inv_2
    assign inv_2_9_A = (~or4_2_4_A)
                       & (~or4_2_4_C)
                       & or4_2_4_D
                       & or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_6 : sky130_fd_sc_hd__and4bb_2
    assign mux2_1_20_X = or2_2_9_B ? or2_2_8_B : or2_2_9_A;  // sky130_fd_sc_hd__mux2_1_20 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_7_A0 = ~(or2_2_7_A & I);  // sky130_fd_sc_hd__nand2_2_25 : sky130_fd_sc_hd__nand2_2
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
    assign o21a_2_12_A1 = ~(and4_2_3_C & nor3_2_2_A);  // sky130_fd_sc_hd__nand2_2_26 : sky130_fd_sc_hd__nand2_2
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
    assign or2_2_7_X = or2_2_7_A | I;  // sky130_fd_sc_hd__or2_2_7 : sky130_fd_sc_hd__or2_2
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
    assign or3_2_8_X = or3_2_8_A
                       | or3_2_8_B
                       | or3_2_8_C;  // sky130_fd_sc_hd__or3_2_8 : sky130_fd_sc_hd__or3_2
    assign or3_2_9_B = ~(or3b_2_0_A | or2_2_9_A);  // sky130_fd_sc_hd__nor2_2_38 : sky130_fd_sc_hd__nor2_2
    assign or3_2_9_C = ~(or2_2_9_B | or2_2_8_B);  // sky130_fd_sc_hd__nor2_2_37 : sky130_fd_sc_hd__nor2_2
    assign or3b_2_0_X = or3b_2_0_A
                        | or2_2_9_B
                        | (~or2_2_9_A);  // sky130_fd_sc_hd__or3b_2_0 : sky130_fd_sc_hd__or3b_2
    assign or4_2_1_B = ~inv_2_1_A;  // sky130_fd_sc_hd__inv_2_1 : sky130_fd_sc_hd__inv_2
    assign or4_2_2_B = ~inv_2_2_A;  // sky130_fd_sc_hd__inv_2_2 : sky130_fd_sc_hd__inv_2
    assign or4_2_3_B = ~inv_2_3_A;  // sky130_fd_sc_hd__inv_2_3 : sky130_fd_sc_hd__inv_2
    assign or4_2_4_X = or4_2_4_A
                       | or4_2_4_B
                       | or4_2_4_C
                       | or4_2_4_D;  // sky130_fd_sc_hd__or4_2_4 : sky130_fd_sc_hd__or4_2
    assign or4_2_5_B = ~inv_2_16_A;  // sky130_fd_sc_hd__inv_2_16 : sky130_fd_sc_hd__inv_2
    assign or4_2_6_B = ~inv_2_20_A;  // sky130_fd_sc_hd__inv_2_20 : sky130_fd_sc_hd__inv_2
    assign or4_2_6_C = or4_2_4_B
                       | or4_2_4_A
                       | or4_2_4_C
                       | (~or4_2_4_D);  // sky130_fd_sc_hd__or4b_2_7 : sky130_fd_sc_hd__or4b_2
    assign or4_2_7_B = ~inv_2_18_A;  // sky130_fd_sc_hd__inv_2_18 : sky130_fd_sc_hd__inv_2
    assign or4_2_7_C = or4_2_4_A
                       | or4_2_4_D
                       | or4_2_4_C
                       | (~or4_2_4_B);  // sky130_fd_sc_hd__or4b_2_6 : sky130_fd_sc_hd__or4b_2
    assign or4_2_8_B = ~inv_2_19_A;  // sky130_fd_sc_hd__inv_2_19 : sky130_fd_sc_hd__inv_2
    assign or4_2_8_C = or4_2_4_B
                       | or4_2_4_A
                       | or4_2_4_D
                       | (~or4_2_4_C);  // sky130_fd_sc_hd__or4b_2_5 : sky130_fd_sc_hd__or4b_2
    assign or4_2_9_B = ~inv_2_17_A;  // sky130_fd_sc_hd__inv_2_17 : sky130_fd_sc_hd__inv_2
    assign or4_2_9_C = or4_2_4_B
                       | or4_2_4_D
                       | or4_2_4_C
                       | (~or4_2_4_A);  // sky130_fd_sc_hd__or4b_2_4 : sky130_fd_sc_hd__or4b_2
    assign or4bb_2_0_X = or4_2_4_A
                         | or4_2_4_C
                         | (~or4_2_4_D)
                         | (~or4_2_4_B);  // sky130_fd_sc_hd__or4bb_2_0 : sky130_fd_sc_hd__or4bb_2
    assign xnor2_2_21_B = ~(or2_2_12_A ^ xor2_2_20_A);  // sky130_fd_sc_hd__xnor2_2_20 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_26_A = ~(xor2_2_14_B ^ xor2_2_19_A);  // sky130_fd_sc_hd__xnor2_2_17 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_26_B = ~(xor2_2_20_A ^ xor2_2_17_B);  // sky130_fd_sc_hd__xnor2_2_16 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_28_Y = ~(or2_2_9_A ^ or3b_2_0_A);  // sky130_fd_sc_hd__xnor2_2_28 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_4_A = ~(xor2_2_0_B & xor2_2_9_A);  // sky130_fd_sc_hd__nand2_2_17 : sky130_fd_sc_hd__nand2_2
    assign xor2_2_0_X = xor2_2_7_A
                        ^ xor2_2_0_B;  // sky130_fd_sc_hd__xor2_2_0 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_13_X = or2_2_12_A
                         ^ xor2_2_19_B;  // sky130_fd_sc_hd__xor2_2_13 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_14_X = xor2_2_16_A
                         ^ xor2_2_14_B;  // sky130_fd_sc_hd__xor2_2_14 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_17_X = xor2_2_19_A
                         ^ xor2_2_17_B;  // sky130_fd_sc_hd__xor2_2_17 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_19_X = xor2_2_19_A
                         ^ xor2_2_19_B;  // sky130_fd_sc_hd__xor2_2_19 : sky130_fd_sc_hd__xor2_2
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
    assign a31o_2_18_X = (I & inv_2_7_A & nor4_2_1_Y)
                         | nand4_2_7_C;  // sky130_fd_sc_hd__a31o_2_18 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_19_X = (I & inv_2_7_A & nand4_2_8_D)
                         | nand4_2_8_C;  // sky130_fd_sc_hd__a31o_2_19 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_20_X = (I & inv_2_7_A & and4b_2_2_X)
                         | nand4_2_11_C;  // sky130_fd_sc_hd__a31o_2_20 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_21_X = (I & inv_2_7_A & nand4_2_13_D)
                         | nand4_2_13_C;  // sky130_fd_sc_hd__a31o_2_21 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_22_X = (I & inv_2_7_A & nand4_2_12_D)
                         | nand4_2_12_C;  // sky130_fd_sc_hd__a31o_2_22 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_23_X = (I & inv_2_7_A & nand4_2_10_D)
                         | nand4_2_10_C;  // sky130_fd_sc_hd__a31o_2_23 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_24_X = (I & inv_2_7_A & nand4_2_9_D)
                         | nand4_2_9_C;  // sky130_fd_sc_hd__a31o_2_24 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_8_X = (inv_2_9_A & inv_2_7_A & xor2_2_7_A)
                        | xor2_2_0_B;  // sky130_fd_sc_hd__a31o_2_8 : sky130_fd_sc_hd__a31o_2
    assign a41oi_2_0_Y = ~((or4_2_4_B & or4_2_4_A & or4_2_4_C & inv_2_7_A) | or4_2_4_D);  // sky130_fd_sc_hd__a41oi_2_0 : sky130_fd_sc_hd__a41oi_2
    assign and2_2_7_X = or2_2_9_A
                        & and2_2_7_B;  // sky130_fd_sc_hd__and2_2_7 : sky130_fd_sc_hd__and2_2
    assign and2_2_8_X = and2_2_8_A
                        & and2_2_8_B;  // sky130_fd_sc_hd__and2_2_8 : sky130_fd_sc_hd__and2_2
    assign and2b_2_19_X = (~or2_2_8_X)
                          & o221a_2_2_C1;  // sky130_fd_sc_hd__and2b_2_19 : sky130_fd_sc_hd__and2b_2
    assign and3_2_12_B = or4_2_6_A
                         & or4_2_6_B;  // sky130_fd_sc_hd__and2_2_14 : sky130_fd_sc_hd__and2_2
    assign and3_2_17_X = or3b_2_0_A
                         & inv_2_14_Y
                         & and3_2_17_C;  // sky130_fd_sc_hd__and3_2_17 : sky130_fd_sc_hd__and3_2
    assign and3_2_2_B = ~(xor2_2_4_A & xor2_2_7_X);  // sky130_fd_sc_hd__nand2_2_22 : sky130_fd_sc_hd__nand2_2
    assign and3_2_5_B = or4_2_5_A
                        & or4_2_5_B;  // sky130_fd_sc_hd__and2_2_10 : sky130_fd_sc_hd__and2_2
    assign and3_2_7_X = inv_2_9_A
                        & inv_2_7_A
                        & and3_2_7_C;  // sky130_fd_sc_hd__and3_2_7 : sky130_fd_sc_hd__and3_2
    assign and3b_2_2_X = (~or2_2_8_B)
                         & nor2_2_32_B
                         & or2_2_9_B;  // sky130_fd_sc_hd__and3b_2_2 : sky130_fd_sc_hd__and3b_2
    assign and4_2_0_A = or4_2_1_A
                        & or4_2_1_B;  // sky130_fd_sc_hd__and2_2_3 : sky130_fd_sc_hd__and2_2
    assign and4_2_0_D = or4_2_3_A
                        & or4_2_3_B;  // sky130_fd_sc_hd__and2_2_5 : sky130_fd_sc_hd__and2_2
    assign and4_2_1_B = or4_2_2_A
                        & or4_2_2_B;  // sky130_fd_sc_hd__and2_2_4 : sky130_fd_sc_hd__and2_2
    assign and4_2_5_B = or4_2_8_A
                        & or4_2_8_B;  // sky130_fd_sc_hd__and2_2_13 : sky130_fd_sc_hd__and2_2
    assign and4_2_6_A = or4_2_9_A
                        & or4_2_9_B;  // sky130_fd_sc_hd__and2_2_11 : sky130_fd_sc_hd__and2_2
    assign and4_2_6_D = or4_2_7_A
                        & or4_2_7_B;  // sky130_fd_sc_hd__and2_2_12 : sky130_fd_sc_hd__and2_2
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
    assign inv_2_10_A = or3_2_8_A
                        & I
                        & inv_2_7_A;  // sky130_fd_sc_hd__and3_2_9 : sky130_fd_sc_hd__and3_2
    assign inv_2_12_A = ~(or2_2_9_B & o31a_2_1_A3);  // sky130_fd_sc_hd__nand2_2_32 : sky130_fd_sc_hd__nand2_2
    assign inv_2_23_Y = ~inv_2_23_A;  // sky130_fd_sc_hd__inv_2_23 : sky130_fd_sc_hd__inv_2
    assign inv_2_5_A = inv_2_9_A
                       & inv_2_7_A
                       & xor2_2_0_B
                       & xor2_2_7_A;  // sky130_fd_sc_hd__and4_2_2 : sky130_fd_sc_hd__and4_2
    assign inv_2_7_Y = ~inv_2_7_A;  // sky130_fd_sc_hd__inv_2_7 : sky130_fd_sc_hd__inv_2
    assign inv_2_9_Y = ~inv_2_9_A;  // sky130_fd_sc_hd__inv_2_9 : sky130_fd_sc_hd__inv_2
    assign mux2_1_10_X = inv_2_7_A ? mux2_1_8_A0 : mux2_1_12_A1;  // sky130_fd_sc_hd__mux2_1_10 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_11_X = inv_2_7_A ? mux2_1_12_A0 : a22o_2_2_B2;  // sky130_fd_sc_hd__mux2_1_11 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_12_X = inv_2_7_A ? mux2_1_12_A1 : mux2_1_12_A0;  // sky130_fd_sc_hd__mux2_1_12 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_13_X = inv_2_7_A ? I : a22o_2_2_A2;  // sky130_fd_sc_hd__mux2_1_13 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_14_X = inv_2_7_A ? mux2_1_15_A0 : mux2_1_8_A1;  // sky130_fd_sc_hd__mux2_1_14 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_15_X = inv_2_7_A ? mux2_1_16_A0 : mux2_1_15_A0;  // sky130_fd_sc_hd__mux2_1_15 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_16_X = inv_2_7_A ? mux2_1_9_A0 : mux2_1_16_A0;  // sky130_fd_sc_hd__mux2_1_16 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_17_X = inv_2_7_A ? mux2_1_19_A0 : mux2_1_9_A1;  // sky130_fd_sc_hd__mux2_1_17 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_18_X = inv_2_7_A ? a22o_2_2_A2 : mux2_1_19_A1;  // sky130_fd_sc_hd__mux2_1_18 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_19_X = inv_2_7_A ? mux2_1_19_A1 : mux2_1_19_A0;  // sky130_fd_sc_hd__mux2_1_19 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_5_A1 = ~(inv_2_9_A & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_23 : sky130_fd_sc_hd__nand2_2
    assign mux2_1_7_X = inv_2_8_A ? or2_2_7_X : mux2_1_7_A0;  // sky130_fd_sc_hd__mux2_1_7 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_8_X = inv_2_7_A ? mux2_1_8_A1 : mux2_1_8_A0;  // sky130_fd_sc_hd__mux2_1_8 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_9_X = inv_2_7_A ? mux2_1_9_A1 : mux2_1_9_A0;  // sky130_fd_sc_hd__mux2_1_9 : sky130_fd_sc_hd__mux2_1
    assign nand4_2_7_Y = ~(I & inv_2_7_A & nand4_2_7_C & nor4_2_1_Y);  // sky130_fd_sc_hd__nand4_2_7 : sky130_fd_sc_hd__nand4_2
    assign nand4_2_8_Y = ~(I & inv_2_7_A & nand4_2_8_C & nand4_2_8_D);  // sky130_fd_sc_hd__nand4_2_8 : sky130_fd_sc_hd__nand4_2
    assign nand4_2_9_Y = ~(I & inv_2_7_A & nand4_2_9_C & nand4_2_9_D);  // sky130_fd_sc_hd__nand4_2_9 : sky130_fd_sc_hd__nand4_2
    assign nor2_2_23_Y = ~(or2_2_8_B | and2_2_8_A);  // sky130_fd_sc_hd__nor2_2_23 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_29_Y = ~(xor2_2_7_A | and3_2_7_C);  // sky130_fd_sc_hd__nor2_2_29 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_30_B = ~((I & inv_2_7_A) | or3_2_8_A);  // sky130_fd_sc_hd__a21oi_2_11 : sky130_fd_sc_hd__a21oi_2
    assign nor2_2_31_B = ~(or4_2_4_A ^ inv_2_7_A);  // sky130_fd_sc_hd__xnor2_2_12 : sky130_fd_sc_hd__xnor2_2
    assign nor2_2_32_Y = ~(or2_2_8_B | nor2_2_32_B);  // sky130_fd_sc_hd__nor2_2_32 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_40_A = ~(xnor2_2_26_A ^ xnor2_2_26_B);  // sky130_fd_sc_hd__xnor2_2_26 : sky130_fd_sc_hd__xnor2_2
    assign nor2_2_46_B = ~(a22o_2_4_B2 ^ xor2_2_17_X);  // sky130_fd_sc_hd__xnor2_2_25 : sky130_fd_sc_hd__xnor2_2
    assign nor2_2_4_Y = ~(or2_2_1_A | or2_2_1_B);  // sky130_fd_sc_hd__nor2_2_4 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_8_A = ~(or4_2_4_B ^ xor2_2_0_X);  // sky130_fd_sc_hd__xnor2_2_1 : sky130_fd_sc_hd__xnor2_2
    assign nor3_2_1_Y = ~(or2_2_9_B | nor3_2_1_B | nor3_2_1_C);  // sky130_fd_sc_hd__nor3_2_1 : sky130_fd_sc_hd__nor3_2
    assign nor3_2_2_Y = ~(nor3_2_2_A | nor3_2_2_B | or3_2_8_X);  // sky130_fd_sc_hd__nor3_2_2 : sky130_fd_sc_hd__nor3_2
    assign nor3b_2_0_B = ~(xor2_2_16_A ^ xor2_2_19_X);  // sky130_fd_sc_hd__xnor2_2_24 : sky130_fd_sc_hd__xnor2_2
    assign o211a_2_10_X = (inv_2_15_Y | or2_2_9_B)
                          & inv_2_14_Y
                          & or2_2_9_A;  // sky130_fd_sc_hd__o211a_2_10 : sky130_fd_sc_hd__o211a_2
    assign o211a_2_8_X = (inv_2_8_A | mux2_1_7_A0)
                         & or2_2_7_X
                         & inv_2_7_A;  // sky130_fd_sc_hd__o211a_2_8 : sky130_fd_sc_hd__o211a_2
    assign o21a_2_13_X = (inv_2_15_Y | o31a_2_2_A1)
                         & inv_2_14_Y;  // sky130_fd_sc_hd__o21a_2_13 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_15_A2 = ~(or3b_2_0_A & or2_2_8_X);  // sky130_fd_sc_hd__nand2_2_27 : sky130_fd_sc_hd__nand2_2
    assign o21a_2_24_A2 = ~(I & inv_2_7_A & nand4_2_11_C & and4b_2_2_X);  // sky130_fd_sc_hd__nand4_2_11 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_25_A2 = ~(I & inv_2_7_A & nand4_2_13_C & nand4_2_13_D);  // sky130_fd_sc_hd__nand4_2_13 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_27_A2 = ~(I & inv_2_7_A & nand4_2_12_C & nand4_2_12_D);  // sky130_fd_sc_hd__nand4_2_12 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_28_A2 = ~(I & inv_2_7_A & nand4_2_10_C & nand4_2_10_D);  // sky130_fd_sc_hd__nand4_2_10 : sky130_fd_sc_hd__nand4_2
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
    assign or2_2_12_B = ~(a22o_2_4_B2 ^ xnor2_2_26_A);  // sky130_fd_sc_hd__xnor2_2_23 : sky130_fd_sc_hd__xnor2_2
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
    assign or4_2_1_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_14 : sky130_fd_sc_hd__nand2_2
    assign or4_2_2_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_15 : sky130_fd_sc_hd__nand2_2
    assign or4_2_3_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_13 : sky130_fd_sc_hd__nand2_2
    assign or4_2_5_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_34 : sky130_fd_sc_hd__nand2_2
    assign or4_2_6_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_35 : sky130_fd_sc_hd__nand2_2
    assign or4_2_7_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_36 : sky130_fd_sc_hd__nand2_2
    assign or4_2_8_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_37 : sky130_fd_sc_hd__nand2_2
    assign or4_2_9_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_33 : sky130_fd_sc_hd__nand2_2
    assign or4b_2_8_C = and3_2_10_A
                        & and3_2_10_B
                        & and4_2_4_B;  // sky130_fd_sc_hd__and3_2_10 : sky130_fd_sc_hd__and3_2
    assign xnor2_2_0_A = ~(or4_2_4_B & xor2_2_0_X);  // sky130_fd_sc_hd__nand2_2_8 : sky130_fd_sc_hd__nand2_2
    assign xnor2_2_19_Y = ~(xnor2_2_21_B ^ xor2_2_19_X);  // sky130_fd_sc_hd__xnor2_2_19 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_21_Y = ~(a22o_2_4_B2 ^ xnor2_2_21_B);  // sky130_fd_sc_hd__xnor2_2_21 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_6_A = (~nor3_2_1_B)
                         & and2_2_7_B
                         & and3b_2_0_C;  // sky130_fd_sc_hd__and3b_2_0 : sky130_fd_sc_hd__and3b_2
    assign xor2_2_11_B = or4_2_4_B
                         & or4_2_4_A
                         & inv_2_7_A;  // sky130_fd_sc_hd__and3_2_14 : sky130_fd_sc_hd__and3_2
    assign xor2_2_15_X = xor2_2_19_B
                         ^ or2_2_9_X;  // sky130_fd_sc_hd__xor2_2_15 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_1_B = ~((xor2_2_0_B & xor2_2_7_X) | nor2_2_6_Y);  // sky130_fd_sc_hd__a21oi_2_10 : sky130_fd_sc_hd__a21oi_2
    assign xor2_2_4_X = xor2_2_4_A
                        ^ xor2_2_7_X;  // sky130_fd_sc_hd__xor2_2_4 : sky130_fd_sc_hd__xor2_2

    assign a21o_2_10_X = (and4_2_3_A & inv_2_10_A)
                         | and4_2_3_B;  // sky130_fd_sc_hd__a21o_2_10 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_9_X = (xor2_2_9_A & inv_2_5_A)
                        | xor2_2_4_A;  // sky130_fd_sc_hd__a21o_2_9 : sky130_fd_sc_hd__a21o_2
    assign a21oi_2_6_Y = ~((xor2_2_4_A & xnor2_2_4_A) | or3_2_5_B);  // sky130_fd_sc_hd__a21oi_2_6 : sky130_fd_sc_hd__a21oi_2
    assign a22o_2_1_X = (inv_2_7_Y & or2_2_7_A)
                        | (o211a_2_8_X & inv_2_9_Y);  // sky130_fd_sc_hd__a22o_2_1 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_2_X = (or4_2_4_X & a22o_2_2_A2)
                        | (buf_2_0_X & a22o_2_2_B2);  // sky130_fd_sc_hd__a22o_2_2 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_3_X = (or3_2_9_A & or2_2_9_X)
                        | (o32a_2_2_A2 & or3b_2_0_X);  // sky130_fd_sc_hd__a22o_2_3 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_9_A1 = ~(a22o_2_4_B2 ^ a22o_2_22_X);  // sky130_fd_sc_hd__xnor2_2_15 : sky130_fd_sc_hd__xnor2_2
    assign a31o_2_11_X = (inv_2_9_A & inv_2_7_A & mux2_1_7_X)
                         | inv_2_6_A;  // sky130_fd_sc_hd__a31o_2_11 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_13_X = (inv_2_9_A & nor2_2_29_Y & inv_2_7_A)
                         | or2_2_11_A;  // sky130_fd_sc_hd__a31o_2_13 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_15_X = (or2_2_9_B & inv_2_13_Y & nand2_2_29_Y)
                         | a22oi_2_0_Y;  // sky130_fd_sc_hd__a31o_2_15 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_7_X = (xor2_2_0_B & xor2_2_9_A & xor2_2_4_A)
                        | or3_2_5_B;  // sky130_fd_sc_hd__a31o_2_7 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_9_X = (and4_2_3_C & inv_2_10_A & and4_2_4_D)
                        | nor3_2_2_A;  // sky130_fd_sc_hd__a31o_2_9 : sky130_fd_sc_hd__a31o_2
    assign and2b_2_16_X = (~inv_2_7_A)
                          & or2_2_10_A;  // sky130_fd_sc_hd__and2b_2_16 : sky130_fd_sc_hd__and2b_2
    assign and2b_2_9_B = (and4_2_4_B & inv_2_10_A & and4_2_4_D)
                         | nor3_2_2_B;  // sky130_fd_sc_hd__a31o_2_10 : sky130_fd_sc_hd__a31o_2
    assign and3_2_11_X = and4_2_3_A
                         & and4_2_3_B
                         & inv_2_10_A;  // sky130_fd_sc_hd__and3_2_11 : sky130_fd_sc_hd__and3_2
    assign and3_2_13_C = and3_2_12_A
                         & and3_2_12_B
                         & and3_2_12_C;  // sky130_fd_sc_hd__and3_2_12 : sky130_fd_sc_hd__and3_2
    assign and3_2_4_A = ~((~xnor2_2_4_A) & xor2_2_4_X);  // sky130_fd_sc_hd__nand2b_2_6 : sky130_fd_sc_hd__nand2b_2
    assign and3_2_6_C = and3_2_5_A
                        & and3_2_5_B
                        & and3_2_5_C;  // sky130_fd_sc_hd__and3_2_5 : sky130_fd_sc_hd__and3_2
    assign and4_2_0_X = and4_2_0_A
                        & and4_2_0_B
                        & and4_2_0_C
                        & and4_2_0_D;  // sky130_fd_sc_hd__and4_2_0 : sky130_fd_sc_hd__and4_2
    assign and4_2_1_X = and4_2_1_A
                        & and4_2_1_B
                        & and4_2_1_C
                        & and4_2_1_D;  // sky130_fd_sc_hd__and4_2_1 : sky130_fd_sc_hd__and4_2
    assign and4_2_3_X = and4_2_3_A
                        & and4_2_3_B
                        & and4_2_3_C
                        & nor3_2_2_Y;  // sky130_fd_sc_hd__and4_2_3 : sky130_fd_sc_hd__and4_2
    assign and4_2_4_X = nor3_2_2_B
                        & and4_2_4_B
                        & inv_2_10_A
                        & and4_2_4_D;  // sky130_fd_sc_hd__and4_2_4 : sky130_fd_sc_hd__and4_2
    assign and4_2_5_X = and4_2_5_A
                        & and4_2_5_B
                        & and4_2_5_C
                        & and4_2_5_D;  // sky130_fd_sc_hd__and4_2_5 : sky130_fd_sc_hd__and4_2
    assign and4_2_6_X = and4_2_6_A
                        & and4_2_6_B
                        & and4_2_6_C
                        & and4_2_6_D;  // sky130_fd_sc_hd__and4_2_6 : sky130_fd_sc_hd__and4_2
    assign dfrtp_2_43_D = ~((inv_2_7_A & inv_2_9_A) | a21oi_2_13_Y | xor2_2_11_B);  // sky130_fd_sc_hd__a211oi_2_0 : sky130_fd_sc_hd__a211oi_2
    assign dfrtp_2_45_D = ~((inv_2_7_A & inv_2_9_A) | (and4_2_7_X & or4_2_4_D) | a41oi_2_0_Y);  // sky130_fd_sc_hd__a221oi_2_0 : sky130_fd_sc_hd__a221oi_2
    assign dfrtp_2_57_D = ~((~o21a_2_19_A1) & nand4_2_7_Y);  // sky130_fd_sc_hd__nand2b_2_14 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_63_D = ~((~o21a_2_23_A1) & nand4_2_8_Y);  // sky130_fd_sc_hd__nand2b_2_17 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_64_D = ~((~o21a_2_28_A1) & o21a_2_28_A2);  // sky130_fd_sc_hd__nand2b_2_21 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_66_D = ~((~o21a_2_21_A1) & nand4_2_9_Y);  // sky130_fd_sc_hd__nand2b_2_16 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_67_D = ~((~o21a_2_24_A1) & o21a_2_24_A2);  // sky130_fd_sc_hd__nand2b_2_18 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_68_D = ~((~o21a_2_25_A1) & o21a_2_25_A2);  // sky130_fd_sc_hd__nand2b_2_19 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_70_D = ~((~o21a_2_27_A1) & o21a_2_27_A2);  // sky130_fd_sc_hd__nand2b_2_20 : sky130_fd_sc_hd__nand2b_2
    assign inv_2_10_Y = ~inv_2_10_A;  // sky130_fd_sc_hd__inv_2_10 : sky130_fd_sc_hd__inv_2
    assign inv_2_12_Y = ~inv_2_12_A;  // sky130_fd_sc_hd__inv_2_12 : sky130_fd_sc_hd__inv_2
    assign inv_2_5_Y = ~inv_2_5_A;  // sky130_fd_sc_hd__inv_2_5 : sky130_fd_sc_hd__inv_2
    assign mux2_1_5_X = xor2_2_7_A ? mux2_1_5_A1 : and3_2_7_X;  // sky130_fd_sc_hd__mux2_1_5 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_6_X = inv_2_7_Y ? inv_2_8_Y : inv_2_9_A;  // sky130_fd_sc_hd__mux2_1_6 : sky130_fd_sc_hd__mux2_1
    assign nand2_2_38_Y = ~(or2_2_12_A & or2_2_12_B);  // sky130_fd_sc_hd__nand2_2_38 : sky130_fd_sc_hd__nand2_2
    assign nand3_2_0_Y = ~(xor2_2_9_A & xor2_2_4_A & inv_2_5_A);  // sky130_fd_sc_hd__nand3_2_0 : sky130_fd_sc_hd__nand3_2
    assign nor2_2_30_Y = ~(inv_2_10_A | nor2_2_30_B);  // sky130_fd_sc_hd__nor2_2_30 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_31_Y = ~(inv_2_9_A | nor2_2_31_B);  // sky130_fd_sc_hd__nor2_2_31 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_34_Y = ~(inv_2_7_A | nor2_2_40_A);  // sky130_fd_sc_hd__nor2_2_34 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_39_Y = ~(or2_2_10_A | inv_2_7_A);  // sky130_fd_sc_hd__nor2_2_39 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_41_Y = ~(or4_2_9_C | or4_2_9_D);  // sky130_fd_sc_hd__nor2_2_41 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_43_Y = ~(or4_2_7_C | or4_2_7_D);  // sky130_fd_sc_hd__nor2_2_43 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_44_Y = ~(or4_2_8_C | or4_2_8_D);  // sky130_fd_sc_hd__nor2_2_44 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_45_Y = ~(or4_2_6_C | or4_2_6_D);  // sky130_fd_sc_hd__nor2_2_45 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_46_A = ~((~inv_2_7_A) & or2_2_10_A);  // sky130_fd_sc_hd__nand2b_2_22 : sky130_fd_sc_hd__nand2b_2
    assign nor2_2_9_B = ~(nor2_2_8_A & nor2_2_0_B);  // sky130_fd_sc_hd__nand2_2_7 : sky130_fd_sc_hd__nand2_2
    assign o211a_2_9_X = (or2_2_9_A | or2_2_8_X)
                         & o21a_2_15_A2
                         & o21ai_2_5_Y;  // sky130_fd_sc_hd__o211a_2_9 : sky130_fd_sc_hd__o211a_2
    assign o21a_2_15_X = (or2_2_9_A | o21a_2_15_A2)
                         & o21ai_2_5_Y;  // sky130_fd_sc_hd__o21a_2_15 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_19_X = (o21a_2_19_A1 | nand4_2_7_Y)
                         & a31o_2_18_X;  // sky130_fd_sc_hd__o21a_2_19 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_21_X = (o21a_2_21_A1 | nand4_2_9_Y)
                         & a31o_2_24_X;  // sky130_fd_sc_hd__o21a_2_21 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_23_X = (o21a_2_23_A1 | nand4_2_8_Y)
                         & a31o_2_19_X;  // sky130_fd_sc_hd__o21a_2_23 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_24_X = (o21a_2_24_A1 | o21a_2_24_A2)
                         & a31o_2_20_X;  // sky130_fd_sc_hd__o21a_2_24 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_25_X = (o21a_2_25_A1 | o21a_2_25_A2)
                         & a31o_2_21_X;  // sky130_fd_sc_hd__o21a_2_25 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_27_X = (o21a_2_27_A1 | o21a_2_27_A2)
                         & a31o_2_22_X;  // sky130_fd_sc_hd__o21a_2_27 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_28_X = (o21a_2_28_A1 | o21a_2_28_A2)
                         & a31o_2_23_X;  // sky130_fd_sc_hd__o21a_2_28 : sky130_fd_sc_hd__o21a_2
    assign o21ai_2_3_B1 = ~((I & nor2_2_40_A) | (~inv_2_7_A));  // sky130_fd_sc_hd__a21boi_2_0 : sky130_fd_sc_hd__a21boi_2
    assign o21ba_2_1_X = (success | a32o_2_3_B1)
                         & (~or4b_2_8_C);  // sky130_fd_sc_hd__o21ba_2_1 : sky130_fd_sc_hd__o21ba_2
    assign o21bai_2_0_Y = ~((nor3_2_1_B | o32ai_2_0_B1) & (~xnor2_2_6_A));  // sky130_fd_sc_hd__o21bai_2_0 : sky130_fd_sc_hd__o21bai_2
    assign o221a_2_2_X = (or2_2_8_X | nor2_2_32_B)
                         & (nor2_2_32_Y | o221a_2_2_B2)
                         & o221a_2_2_C1;  // sky130_fd_sc_hd__o221a_2_2 : sky130_fd_sc_hd__o221a_2
    assign o22a_2_3_B1 = ~(inv_2_7_A | nor3b_2_0_B | (~nor2_2_40_A));  // sky130_fd_sc_hd__nor3b_2_0 : sky130_fd_sc_hd__nor3b_2
    assign o31a_2_0_X = (o31a_2_0_A1 | o31a_2_0_A2 | nor3_2_1_Y)
                        & o31a_2_0_B1;  // sky130_fd_sc_hd__o31a_2_0 : sky130_fd_sc_hd__o31a_2
    assign o31a_2_1_X = (or2_2_9_B | or3_2_9_A | o31a_2_1_A3)
                        & o31a_2_1_B1;  // sky130_fd_sc_hd__o31a_2_1 : sky130_fd_sc_hd__o31a_2
    assign o32a_2_2_A3 = ~(or2_2_9_B | o32a_2_2_B1);  // sky130_fd_sc_hd__nor2_2_35 : sky130_fd_sc_hd__nor2_2
    assign o32a_2_2_B2 = ~(or2_2_9_X & o32a_2_2_A2);  // sky130_fd_sc_hd__nand2_2_28 : sky130_fd_sc_hd__nand2_2
    assign o32ai_2_0_Y = ~((o31a_2_0_A1 | o31a_2_0_A2 | and2_2_7_X) & (o32ai_2_0_B1 | or3b_2_0_A));  // sky130_fd_sc_hd__o32ai_2_0 : sky130_fd_sc_hd__o32ai_2
    assign or2_2_10_X = or2_2_10_A
                        | inv_2_7_A;  // sky130_fd_sc_hd__or2_2_10 : sky130_fd_sc_hd__or2_2
    assign or2_2_12_X = or2_2_12_A
                        | or2_2_12_B;  // sky130_fd_sc_hd__or2_2_12 : sky130_fd_sc_hd__or2_2
    assign or3_2_3_A = ~(nor2_2_8_A | or2_2_1_X);  // sky130_fd_sc_hd__nor2_2_8 : sky130_fd_sc_hd__nor2_2
    assign or3_2_5_A = ~(xor2_2_0_B | and3_2_2_B);  // sky130_fd_sc_hd__nor2_2_25 : sky130_fd_sc_hd__nor2_2
    assign or3_2_5_C = and3_2_2_A
                       & and3_2_2_B
                       & and3_2_2_C;  // sky130_fd_sc_hd__and3_2_2 : sky130_fd_sc_hd__and3_2
    assign or3_2_9_X = or3_2_9_A
                       | or3_2_9_B
                       | or3_2_9_C;  // sky130_fd_sc_hd__or3_2_9 : sky130_fd_sc_hd__or3_2
    assign or4_2_6_X = or4_2_6_A
                       | or4_2_6_B
                       | or4_2_6_C
                       | or4_2_6_D;  // sky130_fd_sc_hd__or4_2_6 : sky130_fd_sc_hd__or4_2
    assign or4_2_7_X = or4_2_7_A
                       | or4_2_7_B
                       | or4_2_7_C
                       | or4_2_7_D;  // sky130_fd_sc_hd__or4_2_7 : sky130_fd_sc_hd__or4_2
    assign or4_2_8_X = or4_2_8_A
                       | or4_2_8_B
                       | or4_2_8_C
                       | or4_2_8_D;  // sky130_fd_sc_hd__or4_2_8 : sky130_fd_sc_hd__or4_2
    assign or4_2_9_X = or4_2_9_A
                       | or4_2_9_B
                       | or4_2_9_C
                       | or4_2_9_D;  // sky130_fd_sc_hd__or4_2_9 : sky130_fd_sc_hd__or4_2
    assign or4b_2_8_A = ~(and4_2_3_A | and4_2_3_B | and4_2_3_C | (~nor3_2_2_Y));  // sky130_fd_sc_hd__nor4b_2_1 : sky130_fd_sc_hd__nor4b_2
    assign xnor2_2_11_B = ~(inv_2_10_A & and4_2_4_D);  // sky130_fd_sc_hd__nand2_2_24 : sky130_fd_sc_hd__nand2_2
    assign xnor2_2_14_B = ~((inv_2_12_A & o31a_2_1_B1) | or3_2_9_A);  // sky130_fd_sc_hd__a21oi_2_16 : sky130_fd_sc_hd__a21oi_2
    assign xnor2_2_5_B = ~(xnor2_2_4_A ^ xor2_2_4_X);  // sky130_fd_sc_hd__xnor2_2_4 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_6_Y = ~(xnor2_2_6_A ^ a21o_2_6_X);  // sky130_fd_sc_hd__xnor2_2_6 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_8_B = ((~or4_2_4_C) | (~xor2_2_1_B))
                         & (nand2_2_2_Y | xor2_2_9_A);  // sky130_fd_sc_hd__o2bb2a_2_0 : sky130_fd_sc_hd__o2bb2a_2
    assign xor2_2_11_X = or4_2_4_C
                         ^ xor2_2_11_B;  // sky130_fd_sc_hd__xor2_2_11 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_16_X = xor2_2_16_A
                         ^ or2_2_12_B;  // sky130_fd_sc_hd__xor2_2_16 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_1_X = or4_2_4_C
                        ^ xor2_2_1_B;  // sky130_fd_sc_hd__xor2_2_1 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_3_B = ~(nor2_2_8_A | nor2_2_0_B);  // sky130_fd_sc_hd__nor2_2_0 : sky130_fd_sc_hd__nor2_2
    assign xor2_2_9_X = xor2_2_9_A
                        ^ inv_2_5_A;  // sky130_fd_sc_hd__xor2_2_9 : sky130_fd_sc_hd__xor2_2

    assign a21o_2_14_X = (inv_2_18_A & nor2_2_43_Y)
                         | or4_2_7_A;  // sky130_fd_sc_hd__a21o_2_14 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_15_X = (inv_2_19_A & nor2_2_44_Y)
                         | or4_2_8_A;  // sky130_fd_sc_hd__a21o_2_15 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_16_X = (inv_2_20_A & nor2_2_45_Y)
                         | or4_2_6_A;  // sky130_fd_sc_hd__a21o_2_16 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_18_X = (inv_2_17_A & nor2_2_41_Y)
                         | or4_2_9_A;  // sky130_fd_sc_hd__a21o_2_18 : sky130_fd_sc_hd__a21o_2
    assign a221o_2_1_X = (or4bb_2_0_X & mux2_1_12_A1)
                         | (conb_1_2_HI & mux2_1_12_A0)
                         | a22o_2_2_X;  // sky130_fd_sc_hd__a221o_2_1 : sky130_fd_sc_hd__a221o_2
    assign a22o_2_4_X = (inv_2_7_A & xor2_2_20_A)
                        | (nor2_2_39_Y & a22o_2_4_B2);  // sky130_fd_sc_hd__a22o_2_4 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_5_X = (inv_2_7_A & xor2_2_14_B)
                        | (xor2_2_20_A & nor2_2_39_Y);  // sky130_fd_sc_hd__a22o_2_5 : sky130_fd_sc_hd__a22o_2
    assign a32o_2_2_X = (I & inv_2_7_A & and3_2_10_B)
                        | (inv_2_10_Y & and4_2_3_A);  // sky130_fd_sc_hd__a32o_2_2 : sky130_fd_sc_hd__a32o_2
    assign and2_2_15_X = inv_2_6_Y
                         & and4_2_3_X;  // sky130_fd_sc_hd__and2_2_15 : sky130_fd_sc_hd__and2_2
    assign and2b_2_9_X = (~and4_2_4_X)
                         & and2b_2_9_B;  // sky130_fd_sc_hd__and2b_2_9 : sky130_fd_sc_hd__and2b_2
    assign and3_2_4_B = ~(or4_2_4_D & xnor2_2_5_B);  // sky130_fd_sc_hd__nand2_2_16 : sky130_fd_sc_hd__nand2_2
    assign and3_2_6_X = and4_2_1_X
                        & and4_2_0_X
                        & and3_2_6_C;  // sky130_fd_sc_hd__and3_2_6 : sky130_fd_sc_hd__and3_2
    assign and4b_2_3_D = and4_2_5_X
                         & and4_2_6_X
                         & and3_2_13_C;  // sky130_fd_sc_hd__and3_2_13 : sky130_fd_sc_hd__and3_2
    assign dfrtp_2_25_D = (~and3_2_11_X)
                          & a21o_2_10_X;  // sky130_fd_sc_hd__and2b_2_10 : sky130_fd_sc_hd__and2b_2
    assign dfrtp_2_29_D = ~((inv_2_8_Y & mux2_1_7_A0) | mux2_1_6_X);  // sky130_fd_sc_hd__a21oi_2_12 : sky130_fd_sc_hd__a21oi_2
    assign inv_2_4_A = ~(or2_2_1_B | nor2_2_9_B);  // sky130_fd_sc_hd__nor2_2_9 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_40_Y = ~(nor2_2_40_A | nor2_2_46_A);  // sky130_fd_sc_hd__nor2_2_40 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_46_Y = ~(nor2_2_46_A | nor2_2_46_B);  // sky130_fd_sc_hd__nor2_2_46 : sky130_fd_sc_hd__nor2_2
    assign nor3_2_3_A = ~((inv_2_22_Y & a32o_2_3_B1) | or4b_2_8_C | or4b_2_8_A);  // sky130_fd_sc_hd__a211oi_2_1 : sky130_fd_sc_hd__a211oi_2
    assign nor3_2_3_B = ~(or4b_2_8_A | o21ba_2_1_X);  // sky130_fd_sc_hd__nor2_2_48 : sky130_fd_sc_hd__nor2_2
    assign o211a_2_7_X = (and3_2_7_C | mux2_1_5_A1)
                         & a31o_2_8_X
                         & inv_2_5_Y;  // sky130_fd_sc_hd__o211a_2_7 : sky130_fd_sc_hd__o211a_2
    assign o21a_2_11_X = (or3_2_8_B | and3_2_11_X)
                         & xnor2_2_11_B;  // sky130_fd_sc_hd__o21a_2_11 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_12_X = (o21a_2_12_A1 | xnor2_2_11_B)
                         & a31o_2_9_X;  // sky130_fd_sc_hd__o21a_2_12 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_14_B1 = ~((xor2_2_13_X & xor2_2_14_X) | nor2_2_46_A);  // sky130_fd_sc_hd__a21oi_2_19 : sky130_fd_sc_hd__a21oi_2
    assign o21a_2_20_X = (inv_2_18_A | nor2_2_43_Y)
                         & or4_2_7_X;  // sky130_fd_sc_hd__o21a_2_20 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_22_X = (inv_2_19_A | nor2_2_44_Y)
                         & or4_2_8_X;  // sky130_fd_sc_hd__o21a_2_22 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_26_X = (inv_2_20_A | nor2_2_45_Y)
                         & or4_2_6_X;  // sky130_fd_sc_hd__o21a_2_26 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_29_X = (inv_2_17_A | nor2_2_41_Y)
                         & or4_2_9_X;  // sky130_fd_sc_hd__o21a_2_29 : sky130_fd_sc_hd__o21a_2
    assign o21ai_2_3_Y = ~((I | nor2_2_40_A) & o21ai_2_3_B1);  // sky130_fd_sc_hd__o21ai_2_3 : sky130_fd_sc_hd__o21ai_2
    assign o21ai_2_4_Y = ~((inv_2_12_Y | o32a_2_2_B2) & a211o_2_3_X);  // sky130_fd_sc_hd__o21ai_2_4 : sky130_fd_sc_hd__o21ai_2
    assign o22a_2_3_B2 = (inv_2_7_A & or2_2_12_A)
                         | (nor2_2_34_Y & nor3b_2_0_B)
                         | nor2_2_39_Y;  // sky130_fd_sc_hd__a221o_2_3 : sky130_fd_sc_hd__a221o_2
    assign o22ai_2_0_Y = ~((xor2_2_0_B | and3_2_2_B) & (a21oi_2_5_Y | a31o_2_7_X));  // sky130_fd_sc_hd__o22ai_2_0 : sky130_fd_sc_hd__o22ai_2
    assign o311a_2_1_X = (xor2_2_7_A | and3_2_7_C | mux2_1_5_A1)
                         & nand3_2_0_Y
                         & a21o_2_9_X;  // sky130_fd_sc_hd__o311a_2_1 : sky130_fd_sc_hd__o311a_2
    assign o32a_2_2_X = (inv_2_12_Y | o32a_2_2_A2 | o32a_2_2_A3)
                        & (o32a_2_2_B1 | o32a_2_2_B2);  // sky130_fd_sc_hd__o32a_2_2 : sky130_fd_sc_hd__o32a_2
    assign o32a_2_3_A1 = (~xor2_2_16_X)
                         & nor2_2_34_Y;  // sky130_fd_sc_hd__and2b_2_18 : sky130_fd_sc_hd__and2b_2
    assign o32a_2_3_A2 = (~inv_2_7_A)
                         & nor2_2_40_A
                         & xor2_2_16_X;  // sky130_fd_sc_hd__and3b_2_3 : sky130_fd_sc_hd__and3b_2
    assign o32a_2_3_A3 = (inv_2_7_A & xor2_2_19_B)
                         | nor2_2_39_Y;  // sky130_fd_sc_hd__a21o_2_12 : sky130_fd_sc_hd__a21o_2
    assign or2_2_0_B = (~xor2_2_3_B)
                       & nor2_2_9_B;  // sky130_fd_sc_hd__and2b_2_0 : sky130_fd_sc_hd__and2b_2
    assign or3_2_5_X = or3_2_5_A
                       | or3_2_5_B
                       | or3_2_5_C;  // sky130_fd_sc_hd__or3_2_5 : sky130_fd_sc_hd__or3_2
    assign or4b_2_8_X = or4b_2_8_A
                        | success
                        | or4b_2_8_C
                        | (~a32o_2_3_B1);  // sky130_fd_sc_hd__or4b_2_8 : sky130_fd_sc_hd__or4b_2
    assign xnor2_2_11_Y = ~(and4_2_3_C ^ xnor2_2_11_B);  // sky130_fd_sc_hd__xnor2_2_11 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_13_Y = ~(xor2_2_17_B ^ a31o_2_15_X);  // sky130_fd_sc_hd__xnor2_2_13 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_14_Y = ~(xor2_2_16_A ^ xnor2_2_14_B);  // sky130_fd_sc_hd__xnor2_2_14 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_18_Y = ~(or3_2_9_X ^ xor2_2_15_X);  // sky130_fd_sc_hd__xnor2_2_18 : sky130_fd_sc_hd__xnor2_2
    assign xnor2_2_8_A = ~(or4_2_4_D ^ xnor2_2_5_B);  // sky130_fd_sc_hd__xnor2_2_5 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_10_X = or3_2_8_C
                         ^ and4_2_4_X;  // sky130_fd_sc_hd__xor2_2_10 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_12_X = xor2_2_14_B
                         ^ o31a_2_1_X;  // sky130_fd_sc_hd__xor2_2_12 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_20_B = ~(nand2_2_31_A & a22o_2_3_X);  // sky130_fd_sc_hd__nand2_2_31 : sky130_fd_sc_hd__nand2_2
    assign xor2_2_3_A = ~(xnor2_2_0_A ^ xor2_2_1_X);  // sky130_fd_sc_hd__xnor2_2_0 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_5_B = (xnor2_2_4_A & or3_2_5_B)
                        | a21oi_2_6_Y;  // sky130_fd_sc_hd__a21o_2_4 : sky130_fd_sc_hd__a21o_2

    assign a21o_2_8_A2 = ~(xnor2_2_8_A & xnor2_2_8_B);  // sky130_fd_sc_hd__nand2_2_18 : sky130_fd_sc_hd__nand2_2
    assign a221o_2_2_X = (inv_2_7_A & xor2_2_16_A)
                         | (xor2_2_19_B & nor2_2_39_Y)
                         | nor2_2_46_Y;  // sky130_fd_sc_hd__a221o_2_2 : sky130_fd_sc_hd__a221o_2
    assign a31o_2_12_X = (I & inv_2_7_A & a221o_2_1_X)
                         | inv_2_11_A;  // sky130_fd_sc_hd__a31o_2_12 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_14_X = (and2b_2_16_X & nand2_2_38_Y & or2_2_12_X)
                         | a22o_2_4_X;  // sky130_fd_sc_hd__a31o_2_14 : sky130_fd_sc_hd__a31o_2
    assign and2_2_2_A = ~(xor2_2_3_A & or2_2_0_B);  // sky130_fd_sc_hd__nand2_2_1 : sky130_fd_sc_hd__nand2_2
    assign and3_2_0_C = or2_2_1_X
                        & or2_2_0_B;  // sky130_fd_sc_hd__and2_2_0 : sky130_fd_sc_hd__and2_2
    assign and3_2_4_X = and3_2_4_A
                        & and3_2_4_B
                        & or3_2_5_X;  // sky130_fd_sc_hd__and3_2_4 : sky130_fd_sc_hd__and3_2
    assign and4b_2_3_X = (~or2_2_11_B)
                         & or2_2_11_A
                         & and3_2_6_X
                         & and4b_2_3_D;  // sky130_fd_sc_hd__and4b_2_3 : sky130_fd_sc_hd__and4b_2
    assign dfstp_2_0_D = (inv_2_7_A & a22o_2_4_B2)
                         | (xor2_2_17_B & nor2_2_39_Y)
                         | nor2_2_40_Y;  // sky130_fd_sc_hd__a221o_2_5 : sky130_fd_sc_hd__a221o_2
    assign dfstp_2_2_D = (and2b_2_16_X & xnor2_2_19_Y)
                         | a22o_2_5_X;  // sky130_fd_sc_hd__a21o_2_11 : sky130_fd_sc_hd__a21o_2
    assign inv_2_4_Y = ~inv_2_4_A;  // sky130_fd_sc_hd__inv_2_4 : sky130_fd_sc_hd__inv_2
    assign nand2_2_9_Y = ~(xor2_2_3_A & inv_2_4_A);  // sky130_fd_sc_hd__nand2_2_9 : sky130_fd_sc_hd__nand2_2
    assign nor2_2_19_Y = ~(xnor2_2_8_A | xnor2_2_8_B);  // sky130_fd_sc_hd__nor2_2_19 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_21_A = ~((and3_2_4_A & and3_2_4_B) | or3_2_5_X);  // sky130_fd_sc_hd__a21oi_2_4 : sky130_fd_sc_hd__a21oi_2
    assign nor2_2_5_A = ~(xor2_2_3_A & or3_2_3_A);  // sky130_fd_sc_hd__nand2_2_6 : sky130_fd_sc_hd__nand2_2
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
    assign or2_2_2_A = xor2_2_3_A
                       ^ xor2_2_3_B;  // sky130_fd_sc_hd__xor2_2_3 : sky130_fd_sc_hd__xor2_2
    assign or3_2_0_B = ~(xor2_2_3_A ^ xor2_2_3_B);  // sky130_fd_sc_hd__xnor2_2_2 : sky130_fd_sc_hd__xnor2_2
    assign or3_2_2_B = ~(nor2_2_4_Y | or2_2_0_B);  // sky130_fd_sc_hd__nor2_2_1 : sky130_fd_sc_hd__nor2_2
    assign xnor2_2_22_Y = ~(or2_2_12_A ^ o21ai_2_4_Y);  // sky130_fd_sc_hd__xnor2_2_22 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_18_X = xor2_2_19_A
                         ^ o32a_2_2_X;  // sky130_fd_sc_hd__xor2_2_18 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_20_X = xor2_2_20_A
                         ^ xor2_2_20_B;  // sky130_fd_sc_hd__xor2_2_20 : sky130_fd_sc_hd__xor2_2
    assign xor2_2_2_A = (or4_2_4_B & xor2_2_0_X & xor2_2_1_X)
                        | (xor2_2_3_A & xor2_2_3_B);  // sky130_fd_sc_hd__a32o_2_0 : sky130_fd_sc_hd__a32o_2
    assign xor2_2_2_B = ~(xnor2_2_8_A ^ xnor2_2_8_B);  // sky130_fd_sc_hd__xnor2_2_8 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_6_B = (~and4bb_2_0_X)
                        & o22ai_2_0_Y;  // sky130_fd_sc_hd__and2b_2_5 : sky130_fd_sc_hd__and2b_2

    assign a221o_2_4_X = (inv_2_7_A & xor2_2_19_A)
                         | (nor2_2_39_Y & xor2_2_14_B)
                         | o21a_2_14_X;  // sky130_fd_sc_hd__a221o_2_4 : sky130_fd_sc_hd__a221o_2
    assign a32o_2_3_X = (inv_2_23_Y & and2_2_15_X & and4b_2_3_X)
                        | (a32o_2_3_B1 & a32o_2_4_B2);  // sky130_fd_sc_hd__a32o_2_3 : sky130_fd_sc_hd__a32o_2
    assign a32o_2_4_X = (inv_2_23_A & and2_2_15_X & and4b_2_3_X)
                        | (success & a32o_2_4_B2);  // sky130_fd_sc_hd__a32o_2_4 : sky130_fd_sc_hd__a32o_2
    assign and3_2_1_C = ~(or2_2_1_X & or3_2_0_B);  // sky130_fd_sc_hd__nand2_2_0 : sky130_fd_sc_hd__nand2_2
    assign nand2_2_5_Y = ~(or3_2_0_B & or3_2_2_B);  // sky130_fd_sc_hd__nand2_2_5 : sky130_fd_sc_hd__nand2_2
    assign nor2_2_3_B = ~(or3_2_0_B | or3_2_2_B);  // sky130_fd_sc_hd__nor2_2_10 : sky130_fd_sc_hd__nor2_2
    assign nor3_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | nor3_2_3_C);  // sky130_fd_sc_hd__nor3_2_3 : sky130_fd_sc_hd__nor3_2
    assign nor3b_2_2_Y = ~(nor3_2_3_A | nor3_2_3_C | (~nor3_2_3_B));  // sky130_fd_sc_hd__nor3b_2_2 : sky130_fd_sc_hd__nor3b_2
    assign nor3b_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | (~nor3_2_3_C));  // sky130_fd_sc_hd__nor3b_2_3 : sky130_fd_sc_hd__nor3b_2
    assign or2_2_4_A = ~(xor2_2_2_A ^ xor2_2_2_B);  // sky130_fd_sc_hd__xnor2_2_9 : sky130_fd_sc_hd__xnor2_2
    assign or2_2_4_B = or2_2_2_A
                       | or2_2_0_B;  // sky130_fd_sc_hd__or2_2_0 : sky130_fd_sc_hd__or2_2
    assign or3_2_0_X = or3_2_3_A
                       | or3_2_0_B
                       | or3_2_2_B;  // sky130_fd_sc_hd__or3_2_0 : sky130_fd_sc_hd__or3_2
    assign or3_2_17_B = ~(nor3_2_3_B | nor3_2_3_C | (~nor3_2_3_A));  // sky130_fd_sc_hd__nor3b_2_4 : sky130_fd_sc_hd__nor3b_2
    assign or3_2_17_C = ~((nor3_2_3_B & nor3_2_3_C) | nor3_2_3_A);  // sky130_fd_sc_hd__a21oi_2_18 : sky130_fd_sc_hd__a21oi_2
    assign or3_2_2_C = ~(or3_2_0_B | inv_2_4_A);  // sky130_fd_sc_hd__nor2_2_2 : sky130_fd_sc_hd__nor2_2
    assign or3_2_3_B = xor2_2_2_A
                       ^ xor2_2_2_B;  // sky130_fd_sc_hd__xor2_2_2 : sky130_fd_sc_hd__xor2_2
    assign or3_2_3_C = or2_2_2_A
                       | or3_2_2_B;  // sky130_fd_sc_hd__or2_2_2 : sky130_fd_sc_hd__or2_2
    assign xor2_2_8_A = (xor2_2_2_A & a21o_2_8_A2)
                        | nor2_2_19_Y;  // sky130_fd_sc_hd__a21o_2_8 : sky130_fd_sc_hd__a21o_2
    assign xor2_2_8_B = ~(nor2_2_21_A | and3_2_4_X);  // sky130_fd_sc_hd__nor2_2_21 : sky130_fd_sc_hd__nor2_2

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
    assign o31ai_2_1_Y = ~((or3_2_3_A | or3_2_3_B | or2_2_2_A) & nor2_2_5_A);  // sky130_fd_sc_hd__o31ai_2_1 : sky130_fd_sc_hd__o31ai_2
    assign o32a_2_0_A3 = ~((or2_2_4_A & and3_2_0_C) | or3_2_0_X);  // sky130_fd_sc_hd__a21oi_2_1 : sky130_fd_sc_hd__a21oi_2
    assign o32a_2_1_A3 = ~(or2_2_4_A | or3_2_0_X);  // sky130_fd_sc_hd__nor2_2_13 : sky130_fd_sc_hd__nor2_2
    assign or2_2_3_X = or2_2_4_A
                       | or3_2_2_B;  // sky130_fd_sc_hd__or2_2_3 : sky130_fd_sc_hd__or2_2
    assign or2_2_4_X = or2_2_4_A
                       | or2_2_4_B;  // sky130_fd_sc_hd__or2_2_4 : sky130_fd_sc_hd__or2_2
    assign or2_2_6_B = (or3_2_3_B | inv_2_4_A)
                       & or2_2_4_B;  // sky130_fd_sc_hd__o21a_2_2 : sky130_fd_sc_hd__o21a_2
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

    assign a31o_2_16_X = (I & inv_2_7_A & nand4_2_6_D)
                         | nand4_2_6_C;  // sky130_fd_sc_hd__a31o_2_16 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_17_X = (I & inv_2_7_A & nand4_2_4_D)
                         | nand4_2_4_C;  // sky130_fd_sc_hd__a31o_2_17 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_1_X = (I & inv_2_7_A & nor4_2_0_Y)
                        | nand4_2_0_C;  // sky130_fd_sc_hd__a31o_2_1 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_25_X = (I & inv_2_7_A & nand4_2_5_D)
                         | nand4_2_5_C;  // sky130_fd_sc_hd__a31o_2_25 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_2_X = (I & inv_2_7_A & nand4_2_2_D)
                        | nand4_2_2_C;  // sky130_fd_sc_hd__a31o_2_2 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_3_X = (I & inv_2_7_A & nand4_2_1_D)
                        | nand4_2_1_C;  // sky130_fd_sc_hd__a31o_2_3 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_4_X = (I & inv_2_7_A & nand4_2_3_D)
                        | nand4_2_3_C;  // sky130_fd_sc_hd__a31o_2_4 : sky130_fd_sc_hd__a31o_2
    assign nand4_2_1_Y = ~(I & inv_2_7_A & nand4_2_1_C & nand4_2_1_D);  // sky130_fd_sc_hd__nand4_2_1 : sky130_fd_sc_hd__nand4_2
    assign nand4_2_4_Y = ~(I & inv_2_7_A & nand4_2_4_C & nand4_2_4_D);  // sky130_fd_sc_hd__nand4_2_4 : sky130_fd_sc_hd__nand4_2
    assign nand4_2_5_Y = ~(I & inv_2_7_A & nand4_2_5_C & nand4_2_5_D);  // sky130_fd_sc_hd__nand4_2_5 : sky130_fd_sc_hd__nand4_2
    assign nand4_2_6_Y = ~(I & inv_2_7_A & nand4_2_6_C & nand4_2_6_D);  // sky130_fd_sc_hd__nand4_2_6 : sky130_fd_sc_hd__nand4_2
    assign nor2_2_42_Y = ~(or4_2_5_C | or4_2_5_D);  // sky130_fd_sc_hd__nor2_2_42 : sky130_fd_sc_hd__nor2_2
    assign o21a_2_4_A2 = ~(I & inv_2_7_A & nand4_2_0_C & nor4_2_0_Y);  // sky130_fd_sc_hd__nand4_2_0 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_5_A2 = ~(I & inv_2_7_A & nand4_2_3_C & nand4_2_3_D);  // sky130_fd_sc_hd__nand4_2_3 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_6_A2 = ~(or4_2_3_C | or4_2_3_D);  // sky130_fd_sc_hd__nor2_2_14 : sky130_fd_sc_hd__nor2_2
    assign o21a_2_7_A2 = ~(or4_2_1_C | or4_2_1_D);  // sky130_fd_sc_hd__nor2_2_15 : sky130_fd_sc_hd__nor2_2
    assign o21a_2_8_A2 = ~(I & inv_2_7_A & nand4_2_2_C & nand4_2_2_D);  // sky130_fd_sc_hd__nand4_2_2 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_9_A2 = ~(or4_2_2_C | or4_2_2_D);  // sky130_fd_sc_hd__nor2_2_16 : sky130_fd_sc_hd__nor2_2
    assign or4_2_1_X = or4_2_1_A
                       | or4_2_1_B
                       | or4_2_1_C
                       | or4_2_1_D;  // sky130_fd_sc_hd__or4_2_1 : sky130_fd_sc_hd__or4_2
    assign or4_2_2_X = or4_2_2_A
                       | or4_2_2_B
                       | or4_2_2_C
                       | or4_2_2_D;  // sky130_fd_sc_hd__or4_2_2 : sky130_fd_sc_hd__or4_2
    assign or4_2_3_X = or4_2_3_A
                       | or4_2_3_B
                       | or4_2_3_C
                       | or4_2_3_D;  // sky130_fd_sc_hd__or4_2_3 : sky130_fd_sc_hd__or4_2
    assign or4_2_5_X = or4_2_5_A
                       | or4_2_5_B
                       | or4_2_5_C
                       | or4_2_5_D;  // sky130_fd_sc_hd__or4_2_5 : sky130_fd_sc_hd__or4_2

    assign a21o_2_0_X = (inv_2_1_A & o21a_2_7_A2)
                        | or4_2_1_A;  // sky130_fd_sc_hd__a21o_2_0 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_13_X = (inv_2_16_A & nor2_2_42_Y)
                         | or4_2_5_A;  // sky130_fd_sc_hd__a21o_2_13 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_1_X = (inv_2_2_A & o21a_2_9_A2)
                        | or4_2_2_A;  // sky130_fd_sc_hd__a21o_2_1 : sky130_fd_sc_hd__a21o_2
    assign a21o_2_2_X = (inv_2_3_A & o21a_2_6_A2)
                        | or4_2_3_A;  // sky130_fd_sc_hd__a21o_2_2 : sky130_fd_sc_hd__a21o_2
    assign dfrtp_2_4_D = ~((~o21a_2_5_A1) & o21a_2_5_A2);  // sky130_fd_sc_hd__nand2b_2_5 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_58_D = ~((~o21a_2_18_A1) & nand4_2_6_Y);  // sky130_fd_sc_hd__nand2b_2_13 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_59_D = ~((~o21a_2_16_A1) & nand4_2_4_Y);  // sky130_fd_sc_hd__nand2b_2_15 : sky130_fd_sc_hd__nand2b_2
    assign nand2b_2_1_Y = ~((~o21a_2_4_A1) & o21a_2_4_A2);  // sky130_fd_sc_hd__nand2b_2_1 : sky130_fd_sc_hd__nand2b_2
    assign nand2b_2_2_Y = ~((~and2b_2_3_B) & nand4_2_1_Y);  // sky130_fd_sc_hd__nand2b_2_2 : sky130_fd_sc_hd__nand2b_2
    assign nand2b_2_3_Y = ~((~o21a_2_8_A1) & o21a_2_8_A2);  // sky130_fd_sc_hd__nand2b_2_3 : sky130_fd_sc_hd__nand2b_2
    assign nand2b_2_4_Y = ~((~o21a_2_30_A1) & nand4_2_5_Y);  // sky130_fd_sc_hd__nand2b_2_4 : sky130_fd_sc_hd__nand2b_2
    assign o21a_2_10_X = (and2b_2_3_B | nand4_2_1_Y)
                         & a31o_2_3_X;  // sky130_fd_sc_hd__o21a_2_10 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_16_X = (o21a_2_16_A1 | nand4_2_4_Y)
                         & a31o_2_17_X;  // sky130_fd_sc_hd__o21a_2_16 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_17_X = (inv_2_16_A | nor2_2_42_Y)
                         & or4_2_5_X;  // sky130_fd_sc_hd__o21a_2_17 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_18_X = (o21a_2_18_A1 | nand4_2_6_Y)
                         & a31o_2_16_X;  // sky130_fd_sc_hd__o21a_2_18 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_30_X = (o21a_2_30_A1 | nand4_2_5_Y)
                         & a31o_2_25_X;  // sky130_fd_sc_hd__o21a_2_30 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_4_X = (o21a_2_4_A1 | o21a_2_4_A2)
                        & a31o_2_1_X;  // sky130_fd_sc_hd__o21a_2_4 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_5_X = (o21a_2_5_A1 | o21a_2_5_A2)
                        & a31o_2_4_X;  // sky130_fd_sc_hd__o21a_2_5 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_6_X = (inv_2_3_A | o21a_2_6_A2)
                        & or4_2_3_X;  // sky130_fd_sc_hd__o21a_2_6 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_7_X = (inv_2_1_A | o21a_2_7_A2)
                        & or4_2_1_X;  // sky130_fd_sc_hd__o21a_2_7 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_8_X = (o21a_2_8_A1 | o21a_2_8_A2)
                        & a31o_2_2_X;  // sky130_fd_sc_hd__o21a_2_8 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_9_X = (inv_2_2_A | o21a_2_9_A2)
                        & or4_2_2_X;  // sky130_fd_sc_hd__o21a_2_9 : sky130_fd_sc_hd__o21a_2

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            nand4_2_9_C <= 1'b0;
            o21a_2_27_A1 <= 1'b0;
            success <= 1'b0;
            nand4_2_7_C <= 1'b0;
            a32o_2_3_B1 <= 1'b0;
            nand4_2_8_C <= 1'b0;
            or4_2_9_A <= 1'b0;
            xor2_2_19_A <= 1'b0;
            or2_2_11_B <= 1'b0;
            inv_2_20_A <= 1'b0;
            xor2_2_19_B <= 1'b0;
            mux2_1_9_A0 <= 1'b0;
            nand4_2_13_C <= 1'b0;
            inv_2_18_A <= 1'b0;
            or4_2_5_A <= 1'b0;
            mux2_1_8_A1 <= 1'b0;
            a22o_2_2_A2 <= 1'b0;
            nand4_2_12_C <= 1'b0;
            o21a_2_23_A1 <= 1'b0;
            and4_2_3_C <= 1'b0;
            mux2_1_15_A0 <= 1'b0;
            mux2_1_19_A1 <= 1'b0;
            nand4_2_11_C <= 1'b0;
            o21a_2_28_A1 <= 1'b0;
            nand4_2_5_C <= 1'b0;
            o21a_2_30_A1 <= 1'b0;
            nor3_2_2_A <= 1'b0;
            or4_2_4_B <= 1'b0;
            mux2_1_9_A1 <= 1'b0;
            inv_2_19_A <= 1'b0;
            inv_2_17_A <= 1'b0;
            inv_2_16_A <= 1'b0;
            or3_2_8_C <= 1'b0;
            and2b_2_3_B <= 1'b0;
            mux2_1_12_A1 <= 1'b0;
            o21a_2_21_A1 <= 1'b0;
            or4_2_7_A <= 1'b0;
            nand4_2_6_C <= 1'b0;
            or4_2_4_A <= 1'b0;
            or3_2_8_A <= 1'b0;
            o21a_2_8_A1 <= 1'b0;
            mux2_1_8_A0 <= 1'b0;
            o21a_2_24_A1 <= 1'b0;
            nand4_2_4_C <= 1'b0;
            or4_2_4_D <= 1'b0;
            nand4_2_10_C <= 1'b0;
            and4_2_3_A <= 1'b0;
            or4_2_2_A <= 1'b0;
            o21a_2_25_A1 <= 1'b0;
            o21a_2_19_A1 <= 1'b0;
            mux2_1_16_A0 <= 1'b0;
            or4_2_4_C <= 1'b0;
            or4_2_8_A <= 1'b0;
            and4_2_3_B <= 1'b0;
            o21a_2_4_A1 <= 1'b0;
            or2_2_11_A <= 1'b0;
            o21a_2_18_A1 <= 1'b0;
            mux2_1_12_A0 <= 1'b0;
            or4_2_6_A <= 1'b0;
            xor2_2_0_B <= 1'b0;
            xor2_2_14_B <= 1'b0;
            or3_2_8_B <= 1'b0;
            o21a_2_16_A1 <= 1'b0;
            inv_2_11_A <= 1'b0;
            xor2_2_7_A <= 1'b0;
            a22o_2_4_B2 <= 1'b0;
            or2_2_7_A <= 1'b0;
            a22o_2_2_B2 <= 1'b0;
            inv_2_6_A <= 1'b0;
            xor2_2_9_A <= 1'b0;
            mux2_1_19_A0 <= 1'b0;
            xor2_2_4_A <= 1'b0;
            inv_2_8_A <= 1'b0;
            nor3_2_2_B <= 1'b0;
            nand4_2_0_C <= 1'b0;
            inv_2_1_A <= 1'b0;
            or4_2_1_A <= 1'b0;
            or4_2_3_A <= 1'b0;
            o21a_2_5_A1 <= 1'b0;
            nand4_2_2_C <= 1'b0;
            nand4_2_1_C <= 1'b0;
            inv_2_2_A <= 1'b0;
            nand4_2_3_C <= 1'b0;
            inv_2_3_A <= 1'b0;
        end else begin
            nand4_2_9_C <= o21a_2_21_X;
            o21a_2_27_A1 <= dfrtp_2_70_D;
            success <= a32o_2_4_X;
            nand4_2_7_C <= o21a_2_19_X;
            a32o_2_3_B1 <= a32o_2_3_X;
            nand4_2_8_C <= o21a_2_23_X;
            or4_2_9_A <= a21o_2_18_X;
            xor2_2_19_A <= o22a_2_3_X;
            or2_2_11_B <= or2_2_11_X;
            inv_2_20_A <= o21a_2_26_X;
            xor2_2_19_B <= a221o_2_2_X;
            mux2_1_9_A0 <= mux2_1_9_X;
            nand4_2_13_C <= o21a_2_25_X;
            inv_2_18_A <= o21a_2_20_X;
            or4_2_5_A <= a21o_2_13_X;
            mux2_1_8_A1 <= mux2_1_14_X;
            a22o_2_2_A2 <= mux2_1_13_X;
            nand4_2_12_C <= o21a_2_27_X;
            o21a_2_23_A1 <= dfrtp_2_63_D;
            and4_2_3_C <= xnor2_2_11_Y;
            mux2_1_15_A0 <= mux2_1_15_X;
            mux2_1_19_A1 <= mux2_1_18_X;
            nand4_2_11_C <= o21a_2_24_X;
            o21a_2_28_A1 <= dfrtp_2_64_D;
            nand4_2_5_C <= o21a_2_30_X;
            o21a_2_30_A1 <= nand2b_2_4_Y;
            nor3_2_2_A <= o21a_2_12_X;
            or4_2_4_B <= dfrtp_2_43_D;
            mux2_1_9_A1 <= mux2_1_17_X;
            inv_2_19_A <= o21a_2_22_X;
            inv_2_17_A <= o21a_2_29_X;
            inv_2_16_A <= o21a_2_17_X;
            or3_2_8_C <= xor2_2_10_X;
            and2b_2_3_B <= nand2b_2_2_Y;
            mux2_1_12_A1 <= mux2_1_10_X;
            o21a_2_21_A1 <= dfrtp_2_66_D;
            or4_2_7_A <= a21o_2_14_X;
            nand4_2_6_C <= o21a_2_18_X;
            or4_2_4_A <= nor2_2_31_Y;
            or3_2_8_A <= nor2_2_30_Y;
            o21a_2_8_A1 <= nand2b_2_3_Y;
            mux2_1_8_A0 <= mux2_1_8_X;
            o21a_2_24_A1 <= dfrtp_2_67_D;
            nand4_2_4_C <= o21a_2_16_X;
            or4_2_4_D <= dfrtp_2_45_D;
            nand4_2_10_C <= o21a_2_28_X;
            and4_2_3_A <= a32o_2_2_X;
            or4_2_2_A <= a21o_2_1_X;
            o21a_2_25_A1 <= dfrtp_2_68_D;
            o21a_2_19_A1 <= dfrtp_2_57_D;
            mux2_1_16_A0 <= mux2_1_16_X;
            or4_2_4_C <= xor2_2_11_X;
            or4_2_8_A <= a21o_2_15_X;
            and4_2_3_B <= dfrtp_2_25_D;
            o21a_2_4_A1 <= nand2b_2_1_Y;
            or2_2_11_A <= a31o_2_13_X;
            o21a_2_18_A1 <= dfrtp_2_58_D;
            mux2_1_12_A0 <= mux2_1_12_X;
            or4_2_6_A <= a21o_2_16_X;
            xor2_2_0_B <= o211a_2_7_X;
            xor2_2_14_B <= a221o_2_4_X;
            or3_2_8_B <= o21a_2_11_X;
            o21a_2_16_A1 <= dfrtp_2_59_D;
            inv_2_11_A <= a31o_2_12_X;
            xor2_2_7_A <= mux2_1_5_X;
            a22o_2_4_B2 <= a31o_2_14_X;
            or2_2_7_A <= a22o_2_1_X;
            a22o_2_2_B2 <= mux2_1_11_X;
            inv_2_6_A <= a31o_2_11_X;
            xor2_2_9_A <= xor2_2_9_X;
            mux2_1_19_A0 <= mux2_1_19_X;
            xor2_2_4_A <= o311a_2_1_X;
            inv_2_8_A <= dfrtp_2_29_D;
            nor3_2_2_B <= and2b_2_9_X;
            nand4_2_0_C <= o21a_2_4_X;
            inv_2_1_A <= o21a_2_7_X;
            or4_2_1_A <= a21o_2_0_X;
            or4_2_3_A <= a21o_2_2_X;
            o21a_2_5_A1 <= dfrtp_2_4_D;
            nand4_2_2_C <= o21a_2_8_X;
            nand4_2_1_C <= o21a_2_10_X;
            inv_2_2_A <= o21a_2_9_X;
            nand4_2_3_C <= o21a_2_5_X;
            inv_2_3_A <= o21a_2_6_X;
        end
    end

    always @(posedge clk) begin
        or2_2_8_B <= dfxtp_2_0_D;
        or2_2_9_A <= dfxtp_2_1_D;
        or3b_2_0_A <= dfxtp_2_2_D;
        or2_2_9_B <= dfxtp_2_3_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            xor2_2_17_B <= 1'b1;
            xor2_2_16_A <= 1'b1;
            xor2_2_20_A <= 1'b1;
            or2_2_12_A <= 1'b1;
        end else begin
            xor2_2_17_B <= dfstp_2_0_D;
            xor2_2_16_A <= o221a_2_1_X;
            xor2_2_20_A <= dfstp_2_2_D;
            or2_2_12_A <= o32a_2_3_X;
        end
    end

endmodule
