// Auto-generated behavioral Verilog for module 'puzzle',
// translated from a sky130_fd_sc_hd gate-level SPICE netlist by netlist_to_verilog.py.
// Every standard-cell instance has been replaced by its equivalent boolean/
// behavioral expression; no gate-level primitives or cell libraries are needed
// to simulate this file. Power/ground/body nets and no-op cells (decap, diode)
// have been stripped since they carry no logic function.

module puzzle (
    input I,
    input clk,
    input enable,
    input rst_n,
    output reg success,
    output [7:0] O
);

    // ---- internal combinational nets (602) ----
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

    // ---- internal state (flip-flop) registers (91) ----
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

    // ---- tie-off constants (12) ----
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

    // ---- combinational logic (598 gates) ----
    assign nor4_2_0_Y = ~(or4b_2_3_A | or4b_2_3_B | or4b_2_2_C | or4b_2_3_C);  // nor4_2_0 : nor4_2
    assign or2_2_8_X = or2_2_9_B | or2_2_8_B;  // or2_2_8 : or2_2
    assign and4_2_1_A = (~nand4_2_1_C) & and2b_2_3_B;  // and2b_2_3 : and2b_2
    assign o31ai_2_1_Y = ~((or3_2_3_A | or3_2_3_B | or2_2_2_A) & nor2_2_5_A);  // o31ai_2_1 : o31ai_2
    assign a31o_2_17_X = (I & inv_2_7_A & nand4_2_4_D) | nand4_2_4_C;  // a31o_2_17 : a31o_2
    assign O[3] = or2_2_11_B & o31a_2_10_X & and3_2_25_C;  // and3_2_20 : and3_2
    assign o21a_2_27_A2 = ~(I & inv_2_7_A & nand4_2_12_C & nand4_2_12_D);  // nand4_2_12 : nand4_2
    assign or3_2_17_X = or3_2_17_A | or3_2_17_B | or3_2_17_C;  // or3_2_17 : or3_2
    assign a31o_2_9_X = (and4_2_3_C & inv_2_10_A & and4_2_4_D) | nor3_2_2_A;  // a31o_2_9 : a31o_2
    assign nor3b_2_0_B = ~(xor2_2_16_A ^ xor2_2_19_X);  // xnor2_2_24 : xnor2_2
    assign nand4_2_4_D = (~or4b_2_3_A) & (~or4b_2_3_C) & or4b_2_2_C & or4b_2_3_B;  // and4bb_2_7 : and4bb_2
    assign xnor2_2_13_Y = ~(xor2_2_17_B ^ a31o_2_15_X);  // xnor2_2_13 : xnor2_2
    assign nor3b_2_2_Y = ~(nor3_2_3_A | nor3_2_3_C | (~nor3_2_3_B));  // nor3b_2_2 : nor3b_2
    assign mux2_1_4_X = mux2_1_4_S ? or2_2_4_A : or3_2_4_B;  // mux2_1_4 : mux2_1
    assign xor2_2_8_A = (xor2_2_2_A & a21o_2_8_A2) | nor2_2_19_Y;  // a21o_2_8 : a21o_2
    assign dfrtp_2_43_D = ~((inv_2_7_A & inv_2_9_A) | a21oi_2_13_Y | xor2_2_11_B);  // a211oi_2_0 : a211oi_2
    assign nor4_2_1_Y = ~(or4_2_4_B | or4_2_4_A | or4_2_4_D | or4_2_4_C);  // nor4_2_1 : nor4_2
    assign a22oi_2_0_Y = ~((or3b_2_0_A & inv_2_13_Y) | (or2_2_9_X & nand2_2_29_Y));  // a22oi_2_0 : a22oi_2
    assign or2_2_9_X = or2_2_9_A | or2_2_9_B;  // or2_2_9 : or2_2
    assign o221a_2_0_X = (or3_2_2_C | o21ai_2_2_Y) & (o21a_2_1_X | or4_2_0_A) & or4_2_0_B;  // o221a_2_0 : o221a_2
    assign and4_2_1_D = (~nand4_2_2_C) & o21a_2_8_A1;  // and2b_2_4 : and2b_2
    assign and4_2_0_X = and4_2_0_A & and4_2_0_B & and4_2_0_C & and4_2_0_D;  // and4_2_0 : and4_2
    assign a31o_2_18_X = (I & inv_2_7_A & nor4_2_1_Y) | nand4_2_7_C;  // a31o_2_18 : a31o_2
    assign or4b_2_8_C = and3_2_10_A & and3_2_10_B & and4_2_4_B;  // and3_2_10 : and3_2
    assign O[4] = or2_2_11_B & o31a_2_5_X & and3_2_25_C;  // and3_2_21 : and3_2
    assign o21a_2_25_A2 = ~(I & inv_2_7_A & nand4_2_13_C & nand4_2_13_D);  // nand4_2_13 : nand4_2
    assign nor2_2_46_B = ~(a22o_2_4_B2 ^ xor2_2_17_X);  // xnor2_2_25 : xnor2_2
    assign nand4_2_6_D = (~or4b_2_3_B) & (~or4b_2_3_C) & or4b_2_2_C & or4b_2_3_A;  // and4bb_2_8 : and4bb_2
    assign xnor2_2_14_Y = ~(xor2_2_16_A ^ xnor2_2_14_B);  // xnor2_2_14 : xnor2_2
    assign nor3b_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | (~nor3_2_3_C));  // nor3b_2_3 : nor3b_2
    assign mux2_1_5_X = xor2_2_7_A ? mux2_1_5_A1 : and3_2_7_X;  // mux2_1_5 : mux2_1
    assign a21o_2_9_X = (xor2_2_9_A & inv_2_5_A) | xor2_2_4_A;  // a21o_2_9 : a21o_2
    assign nor3_2_3_A = ~((inv_2_22_Y & a32o_2_3_B1) | or4b_2_8_C | or4b_2_8_A);  // a211oi_2_1 : a211oi_2
    assign o221a_2_1_X = (xor2_2_16_A | or2_2_10_X) & (nor2_2_46_A | xnor2_2_21_Y) & o21ai_2_3_Y;  // o221a_2_1 : o221a_2
    assign xor2_2_6_B = (~and4bb_2_0_X) & o22ai_2_0_Y;  // and2b_2_5 : and2b_2
    assign a32o_2_1_B2 = ~((or3_2_3_B & nor2_2_3_B) | or4_2_0_A);  // a21oi_2_0 : a21oi_2
    assign and4_2_1_X = and4_2_1_A & and4_2_1_B & and4_2_1_C & and4_2_1_D;  // and4_2_1 : and4_2
    assign a31o_2_19_X = (I & inv_2_7_A & nand4_2_8_D) | nand4_2_8_C;  // a31o_2_19 : a31o_2
    assign o211a_2_0_X = (xor2_2_7_A | xor2_2_0_B) & xor2_2_9_A & xor2_2_4_A;  // o211a_2_0 : o211a_2
    assign O[5] = or2_2_11_B & o31a_2_8_X & and3_2_25_C;  // and3_2_22 : and3_2
    assign and3_2_11_X = and4_2_3_A & and4_2_3_B & inv_2_10_A;  // and3_2_11 : and3_2
    assign and3_2_25_C = ~(or2_2_8_B & or2_2_9_B & or2_2_9_A & or3b_2_0_A);  // nand4_2_14 : nand4_2
    assign nand4_2_9_D = (~or4_2_4_B) & (~or4_2_4_D) & or4_2_4_C & or4_2_4_A;  // and4bb_2_9 : and4bb_2
    assign a22o_2_9_A1 = ~(a22o_2_4_B2 ^ a22o_2_22_X);  // xnor2_2_15 : xnor2_2
    assign nor2_2_40_A = ~(xnor2_2_26_A ^ xnor2_2_26_B);  // xnor2_2_26 : xnor2_2
    assign or3_2_17_B = ~(nor3_2_3_B | nor3_2_3_C | (~nor3_2_3_A));  // nor3b_2_4 : nor3b_2
    assign mux2_1_6_X = inv_2_7_Y ? inv_2_8_Y : inv_2_9_A;  // mux2_1_6 : mux2_1
    assign or3_2_17_A = ~((or3b_2_0_A & or2_2_9_A) | or2_2_9_B | or2_2_8_B);  // a211oi_2_2 : a211oi_2
    assign o221a_2_2_X = (or2_2_8_X | nor2_2_32_B) & (nor2_2_32_Y | o221a_2_2_B2) & o221a_2_2_C1;  // o221a_2_2 : o221a_2
    assign or4_2_1_C = or4b_2_3_A | or4b_2_2_C | or4b_2_3_C | (~or4b_2_3_B);  // or4b_2_0 : or4b_2
    assign and2b_2_6_X = (~or2_2_9_B) & or3b_2_0_A;  // and2b_2_6 : and2b_2
    assign o32a_2_0_A3 = ~((or2_2_4_A & and3_2_0_C) | or3_2_0_X);  // a21oi_2_1 : a21oi_2
    assign inv_2_5_A = inv_2_9_A & inv_2_7_A & xor2_2_0_B & xor2_2_7_A;  // and4_2_2 : and4_2
    assign or3_2_4_C = (or3_2_3_A | or2_2_2_A) & or2_2_4_A & nor2_2_5_A;  // o211a_2_1 : o211a_2
    assign O[7] = or2_2_11_B & o31a_2_3_X & and3_2_25_C;  // and3_2_23 : and3_2
    assign and3_2_13_C = and3_2_12_A & and3_2_12_B & and3_2_12_C;  // and3_2_12 : and3_2
    assign xnor2_2_26_B = ~(xor2_2_20_A ^ xor2_2_17_B);  // xnor2_2_16 : xnor2_2
    assign o32a_2_2_A2 = ~(or2_2_8_B ^ and3_2_16_X);  // xnor2_2_27 : xnor2_2
    assign mux2_1_7_X = inv_2_8_A ? or2_2_7_X : mux2_1_7_A0;  // mux2_1_7 : mux2_1
    assign xnor2_2_8_B = ((~or4_2_4_C) | (~xor2_2_1_B)) & (nand2_2_2_Y | xor2_2_9_A);  // o2bb2a_2_0 : o2bb2a_2
    assign or4_2_3_C = or4b_2_3_B | or4b_2_2_C | or4b_2_3_C | (~or4b_2_3_A);  // or4b_2_1 : or4b_2
    assign xor2_2_20_X = xor2_2_20_A ^ xor2_2_20_B;  // xor2_2_20 : xor2_2
    assign o31a_2_0_A1 = (~or2_2_9_A) & or2_2_9_B;  // and2b_2_7 : and2b_2
    assign a21oi_2_2_Y = ~((or2_2_5_A & o21ba_2_0_X) | or4_2_0_A);  // a21oi_2_2 : a21oi_2
    assign and4_2_3_X = and4_2_3_A & and4_2_3_B & and4_2_3_C & nor3_2_2_Y;  // and4_2_3 : and4_2
    assign or4b_2_3_B = (o311a_2_0_X | a31o_2_5_X) & nor2_2_20_Y & or3_2_7_X;  // o211a_2_2 : o211a_2
    assign O[2] = or2_2_11_B & o31a_2_7_X & and3_2_25_C;  // and3_2_24 : and3_2
    assign and4b_2_3_D = and4_2_5_X & and4_2_6_X & and3_2_13_C;  // and3_2_13 : and3_2
    assign or2_2_10_X = or2_2_10_A | inv_2_7_A;  // or2_2_10 : or2_2
    assign xnor2_2_28_Y = ~(or2_2_9_A ^ or3b_2_0_A);  // xnor2_2_28 : xnor2_2
    assign xnor2_2_26_A = ~(xor2_2_14_B ^ xor2_2_19_A);  // xnor2_2_17 : xnor2_2
    assign mux2_1_8_X = inv_2_7_A ? mux2_1_8_A1 : mux2_1_8_A0;  // mux2_1_8 : mux2_1
    assign or4_2_2_C = or4b_2_3_A | or4b_2_3_B | or4b_2_2_C | (~or4b_2_3_C);  // or4b_2_2 : or4b_2
    assign xor2_2_10_X = or3_2_8_C ^ and4_2_4_X;  // xor2_2_10 : xor2_2
    assign and3_2_10_B = (~and4_2_3_A) & or3_2_8_A;  // and2b_2_8 : and2b_2
    assign or3_2_7_C = ~((nand2_2_3_Y & or3_2_4_X) | or4_2_0_B);  // a21oi_2_3 : a21oi_2
    assign and4_2_4_X = nor3_2_2_B & and4_2_4_B & inv_2_10_A & and4_2_4_D;  // and4_2_4 : and4_2
    assign mux2_1_4_S = ~((~and3_2_0_C) & or2_2_4_B);  // nand2b_2_0 : nand2b_2
    assign or4b_2_3_A = (xor2_2_5_X | a21o_2_3_X) & o211ai_2_0_Y & nor2_2_20_Y;  // o211a_2_3 : o211a_2
    assign O[0] = or2_2_11_B & o31a_2_9_X & and3_2_25_C;  // and3_2_25 : and3_2
    assign xor2_2_11_B = or4_2_4_B & or4_2_4_A & inv_2_7_A;  // and3_2_14 : and3_2
    assign o211ai_2_0_Y = ~((or2_2_5_A | mux2_1_2_X) & a211o_2_1_X & xor2_2_5_X);  // o211ai_2_0 : o211ai_2
    assign or2_2_11_X = or2_2_11_A | or2_2_11_B;  // or2_2_11 : or2_2
    assign xnor2_2_18_Y = ~(or3_2_9_X ^ xor2_2_15_X);  // xnor2_2_18 : xnor2_2
    assign mux2_1_9_X = inv_2_7_A ? mux2_1_9_A1 : mux2_1_9_A0;  // mux2_1_9 : mux2_1
    assign or4_2_0_X = or4_2_0_A | or4_2_0_B | or4_2_0_C | or4_2_0_D;  // or4_2_0 : or4_2
    assign or4_2_5_C = or4b_2_3_A | or4b_2_3_B | or4b_2_3_C | (~or4b_2_2_C);  // or4b_2_3 : or4b_2
    assign xor2_2_11_X = or4_2_4_C ^ xor2_2_11_B;  // xor2_2_11 : xor2_2
    assign and2b_2_9_X = (~and4_2_4_X) & and2b_2_9_B;  // and2b_2_9 : and2b_2
    assign nor2_2_21_A = ~((and3_2_4_A & and3_2_4_B) | or3_2_5_X);  // a21oi_2_4 : a21oi_2
    assign and4_2_5_X = and4_2_5_A & and4_2_5_B & and4_2_5_C & and4_2_5_D;  // and4_2_5 : and4_2
    assign nand2b_2_1_Y = ~((~o21a_2_4_A1) & o21a_2_4_A2);  // nand2b_2_1 : nand2b_2
    assign or4b_2_3_C = (xor2_2_5_X | o21ai_2_1_Y) & a221o_2_0_X & nor2_2_20_Y;  // o211a_2_4 : o211a_2
    assign o31a_2_2_A1 = or3b_2_0_A & or2_2_9_A & or2_2_9_B;  // and3_2_15 : and3_2
    assign or2_2_12_X = or2_2_12_A | or2_2_12_B;  // or2_2_12 : or2_2
    assign xnor2_2_19_Y = ~(xnor2_2_21_B ^ xor2_2_19_X);  // xnor2_2_19 : xnor2_2
    assign or4_2_6_B = ~inv_2_20_A;  // inv_2_20 : inv_2
    assign or4_2_1_X = or4_2_1_A | or4_2_1_B | or4_2_1_C | or4_2_1_D;  // or4_2_1 : or4_2
    assign or4_2_9_C = or4_2_4_B | or4_2_4_D | or4_2_4_C | (~or4_2_4_A);  // or4b_2_4 : or4b_2
    assign xor2_2_12_X = xor2_2_14_B ^ o31a_2_1_X;  // xor2_2_12 : xor2_2
    assign a21oi_2_5_Y = ~((xor2_2_0_B & xor2_2_4_A) | xor2_2_9_A);  // a21oi_2_5 : a21oi_2
    assign and4_2_6_X = and4_2_6_A & and4_2_6_B & and4_2_6_C & and4_2_6_D;  // and4_2_6 : and4_2
    assign nand2b_2_2_Y = ~((~and2b_2_3_B) & nand4_2_1_Y);  // nand2b_2_2 : nand2b_2
    assign or4b_2_2_C = (xor2_2_5_X | mux2_1_3_X) & a211o_2_0_X & nor2_2_20_Y;  // o211a_2_5 : o211a_2
    assign dfrtp_2_45_D = ~((inv_2_7_A & inv_2_9_A) | (and4_2_7_X & or4_2_4_D) | a41oi_2_0_Y);  // a221oi_2_0 : a221oi_2
    assign and3_2_16_X = or3b_2_0_A & or2_2_9_A & or2_2_9_B;  // and3_2_16 : and3_2
    assign inv_2_21_Y = ~or2_2_8_B;  // inv_2_21 : inv_2
    assign inv_2_10_Y = ~inv_2_10_A;  // inv_2_10 : inv_2
    assign and3_2_1_C = ~(or2_2_1_X & or3_2_0_B);  // nand2_2_0 : nand2_2
    assign or4_2_2_X = or4_2_2_A | or4_2_2_B | or4_2_2_C | or4_2_2_D;  // or4_2_2 : or4_2
    assign or4_2_8_C = or4_2_4_B | or4_2_4_A | or4_2_4_D | (~or4_2_4_C);  // or4b_2_5 : or4b_2
    assign xor2_2_13_X = or2_2_12_A ^ xor2_2_19_B;  // xor2_2_13 : xor2_2
    assign nand4_2_8_D = (~or4_2_4_D) & (~or4_2_4_C) & or4_2_4_A & or4_2_4_B;  // and4bb_2_10 : and4bb_2
    assign a21oi_2_6_Y = ~((xor2_2_4_A & xnor2_2_4_A) | or3_2_5_B);  // a21oi_2_6 : a21oi_2
    assign and4_2_7_X = or4_2_4_B & or4_2_4_A & or4_2_4_C & inv_2_7_A;  // and4_2_7 : and4_2
    assign nand2b_2_3_Y = ~((~o21a_2_8_A1) & o21a_2_8_A2);  // nand2b_2_3 : nand2b_2
    assign or3_2_7_B = (nand2_2_3_Y | or3_2_4_B) & or4_2_0_B & or3_2_1_X;  // o211a_2_6 : o211a_2
    assign and3_2_17_X = or3b_2_0_A & inv_2_14_Y & and3_2_17_C;  // and3_2_17 : and3_2
    assign a31o_2_5_A2 = (or3_2_0_B & or2_2_3_X) | (~a32o_2_1_B2);  // a21bo_2_0 : a21bo_2
    assign o31a_2_0_A2 = ~((nor3_2_1_C & o32ai_2_0_B1 & nand2b_2_8_Y) | and3b_2_0_C);  // a31oi_2_0 : a31oi_2
    assign o311a_2_0_X = (nor2_2_26_Y | or4_2_0_A | and3_2_0_X) & or4_2_0_B & o311a_2_0_C1;  // o311a_2_0 : o311a_2
    assign xor2_2_1_B = ~((xor2_2_0_B & xor2_2_7_X) | nor2_2_6_Y);  // a21oi_2_10 : a21oi_2
    assign inv_2_23_A = ~inv_2_11_A;  // inv_2_11 : inv_2
    assign inv_2_22_Y = ~success;  // inv_2_22 : inv_2
    assign and2_2_2_A = ~(xor2_2_3_A & or2_2_0_B);  // nand2_2_1 : nand2_2
    assign or4_2_3_X = or4_2_3_A | or4_2_3_B | or4_2_3_C | or4_2_3_D;  // or4_2_3 : or4_2
    assign o32a_2_0_X = (or4_2_0_A | and3_2_0_X | o32a_2_0_A3) & (o32a_2_1_B2 | nor2_2_3_Y);  // o32a_2_0 : o32a_2
    assign or4_2_7_C = or4_2_4_A | or4_2_4_D | or4_2_4_C | (~or4_2_4_B);  // or4b_2_6 : or4b_2
    assign xor2_2_14_X = xor2_2_16_A ^ xor2_2_14_B;  // xor2_2_14 : xor2_2
    assign nand4_2_12_D = (~or4_2_4_B) & (~or4_2_4_C) & or4_2_4_D & or4_2_4_A;  // and4bb_2_11 : and4bb_2
    assign xor2_2_5_A = ~((xor2_2_6_A & o22ai_2_0_Y) | and4bb_2_0_X);  // a21oi_2_7 : a21oi_2
    assign nand2b_2_4_Y = ~((~o21a_2_30_A1) & nand4_2_5_Y);  // nand2b_2_4 : nand2b_2
    assign o211a_2_7_X = (and3_2_7_C | mux2_1_5_A1) & a31o_2_8_X & inv_2_5_Y;  // o211a_2_7 : o211a_2
    assign O[1] = or2_2_11_B & o31a_2_6_X & and3_2_25_C;  // and3_2_18 : and3_2
    assign a21o_2_3_A2 = (or4_2_0_A & nor2_2_5_Y) | (~a211o_2_2_X);  // a21bo_2_1 : a21bo_2
    assign o311a_2_1_X = (xor2_2_7_A | and3_2_7_C | mux2_1_5_A1) & nand3_2_0_Y & a21o_2_9_X;  // o311a_2_1 : o311a_2
    assign nor2_2_30_B = ~((I & inv_2_7_A) | or3_2_8_A);  // a21oi_2_11 : a21oi_2
    assign inv_2_12_Y = ~inv_2_12_A;  // inv_2_12 : inv_2
    assign inv_2_23_Y = ~inv_2_23_A;  // inv_2_23 : inv_2
    assign nand2_2_2_Y = ~(xor2_2_7_A & xor2_2_0_B);  // nand2_2_2 : nand2_2
    assign or4_2_4_X = or4_2_4_A | or4_2_4_B | or4_2_4_C | or4_2_4_D;  // or4_2_4 : or4_2
    assign o32a_2_1_X = (or4_2_0_A | and3_2_0_X | o32a_2_1_A3) & (o32a_2_1_B1 | o32a_2_1_B2);  // o32a_2_1 : o32a_2
    assign or4_2_6_C = or4_2_4_B | or4_2_4_A | or4_2_4_C | (~or4_2_4_D);  // or4b_2_7 : or4b_2
    assign xor2_2_15_X = xor2_2_19_B ^ or2_2_9_X;  // xor2_2_15 : xor2_2
    assign o21ai_2_3_B1 = ~((I & nor2_2_40_A) | (~inv_2_7_A));  // a21boi_2_0 : a21boi_2
    assign nand4_2_13_D = (~or4_2_4_A) & (~or4_2_4_C) & or4_2_4_D & or4_2_4_B;  // and4bb_2_12 : and4bb_2
    assign and3b_2_0_C = ~((or3b_2_0_A & or2_2_9_A) | or2_2_8_B);  // a21oi_2_8 : a21oi_2
    assign dfrtp_2_4_D = ~((~o21a_2_5_A1) & o21a_2_5_A2);  // nand2b_2_5 : nand2b_2
    assign o211a_2_8_X = (inv_2_8_A | mux2_1_7_A0) & or2_2_7_X & inv_2_7_A;  // o211a_2_8 : o211a_2
    assign O[6] = or2_2_11_B & o31a_2_4_X & and3_2_25_C;  // and3_2_19 : and3_2
    assign o22a_2_0_X = (or3_2_3_B | mux2_1_4_S) & (or2_2_4_X | nor2_2_4_Y);  // o22a_2_0 : o22a_2
    assign and4_2_1_C = (~nand4_2_5_C) & o21a_2_30_A1;  // and2b_2_20 : and2b_2
    assign dfrtp_2_29_D = ~((inv_2_8_Y & mux2_1_7_A0) | mux2_1_6_X);  // a21oi_2_12 : a21oi_2
    assign nor3_2_3_C = ~or4b_2_8_X;  // inv_2_24 : inv_2
    assign inv_2_13_Y = ~or2_2_8_B;  // inv_2_13 : inv_2
    assign nand2_2_3_Y = ~(or4_2_0_A & o21a_2_3_A2);  // nand2_2_3 : nand2_2
    assign or4_2_5_X = or4_2_5_A | or4_2_5_B | or4_2_5_C | or4_2_5_D;  // or4_2_5 : or4_2
    assign or3_2_6_B = (~or2_2_8_B) & or2_2_9_B & or2_2_9_A & or3b_2_0_A;  // and4b_2_0 : and4b_2
    assign nor3_2_0_Y = ~(or3b_2_0_A | or2_2_9_A | or2_2_9_B);  // nor3_2_0 : nor3_2
    assign o32a_2_2_X = (inv_2_12_Y | o32a_2_2_A2 | o32a_2_2_A3) & (o32a_2_2_B1 | o32a_2_2_B2);  // o32a_2_2 : o32a_2
    assign or4b_2_8_X = or4b_2_8_A | success | or4b_2_8_C | (~a32o_2_3_B1);  // or4b_2_8 : or4b_2
    assign xor2_2_16_X = xor2_2_16_A ^ or2_2_12_B;  // xor2_2_16 : xor2_2
    assign dfxtp_2_1_D = ~((and3_2_25_C & xnor2_2_28_Y) | (~or2_2_11_B));  // a21boi_2_1 : a21boi_2
    assign nand4_2_10_D = (~or4_2_4_A) & (~or4_2_4_D) & or4_2_4_C & or4_2_4_B;  // and4bb_2_13 : and4bb_2
    assign or3_2_6_A = ~((or3b_2_0_A & or2_2_9_A) | or2_2_8_B);  // a21oi_2_9 : a21oi_2
    assign and3_2_4_A = ~((~xnor2_2_4_A) & xor2_2_4_X);  // nand2b_2_6 : nand2b_2
    assign o211a_2_9_X = (or2_2_9_A | or2_2_8_X) & o21a_2_15_A2 & o21ai_2_5_Y;  // o211a_2_9 : o211a_2
    assign a221o_2_0_X = (or4_2_0_A & o22ai_2_1_Y) | (or2_2_5_X & a21oi_2_2_Y) | or3_2_7_A;  // a221o_2_0 : a221o_2
    assign or3_2_16_A = (or2_2_9_A | or2_2_9_B) & (or3_2_6_A | or3_2_6_B);  // o22a_2_1 : o22a_2
    assign o21a_2_30_X = (o21a_2_30_A1 | nand4_2_5_Y) & a31o_2_25_X;  // o21a_2_30 : o21a_2
    assign dfrtp_2_25_D = (~and3_2_11_X) & a21o_2_10_X;  // and2b_2_10 : and2b_2
    assign and3_2_5_C = (~nand4_2_6_C) & o21a_2_18_A1;  // and2b_2_21 : and2b_2
    assign a21oi_2_13_Y = ~((or4_2_4_A & inv_2_7_A) | or4_2_4_B);  // a21oi_2_13 : a21oi_2
    assign inv_2_14_Y = ~or2_2_8_B;  // inv_2_14 : inv_2
    assign nor2_2_0_B = ~(or4_2_4_A & xor2_2_7_A);  // nand2_2_4 : nand2_2
    assign or4_2_6_X = or4_2_6_A | or4_2_6_B | or4_2_6_C | or4_2_6_D;  // or4_2_6 : or4_2
    assign nand4_2_5_D = (~or4b_2_2_C) & or4b_2_3_C & or4b_2_3_B & or4b_2_3_A;  // and4b_2_1 : and4b_2
    assign nor3_2_1_Y = ~(or2_2_9_B | nor3_2_1_B | nor3_2_1_C);  // nor3_2_1 : nor3_2
    assign o32a_2_3_X = (o32a_2_3_A1 | o32a_2_3_A2 | o32a_2_3_A3) & (or2_2_10_X | or2_2_12_A);  // o32a_2_3 : o32a_2
    assign xor2_2_17_X = xor2_2_19_A ^ xor2_2_17_B;  // xor2_2_17 : xor2_2
    assign dfxtp_2_0_D = ~((inv_2_21_Y & nand3_2_1_Y) | (~or2_2_11_B));  // a21boi_2_2 : a21boi_2
    assign and3_2_0_X = or2_2_4_A & or3_2_0_B & and3_2_0_C;  // and3_2_0 : and3_2
    assign a21o_2_6_A2 = ~((~or2_2_9_B) & or3b_2_0_A);  // nand2b_2_7 : nand2b_2
    assign o22a_2_2_X = (or2_2_8_B | and2_2_8_A) & (and2_2_8_B | nor3_2_1_B);  // o22a_2_2 : o22a_2
    assign a221o_2_1_X = (or4bb_2_0_X & mux2_1_12_A1) | (conb_1_2_HI & mux2_1_12_A0) | a22o_2_2_X;  // a221o_2_1 : a221o_2
    assign o21a_2_20_X = (inv_2_18_A | nor2_2_43_Y) & or4_2_7_X;  // o21a_2_20 : o21a_2
    assign and3_2_5_B = or4_2_5_A & or4_2_5_B;  // and2_2_10 : and2_2
    assign inv_2_7_A = (~or2_2_11_A) & enable;  // and2b_2_11 : and2b_2
    assign and3_2_5_A = (~nand4_2_4_C) & o21a_2_16_A1;  // and2b_2_22 : and2b_2
    assign a211o_2_0_X = (or2_2_5_A & a32o_2_1_X) | o221a_2_0_X | or3_2_7_A;  // a211o_2_0 : a211o_2
    assign o221a_2_2_B2 = ~((or3b_2_0_A & or2_2_8_B) | or2_2_9_B);  // a21oi_2_14 : a21oi_2
    assign inv_2_15_Y = ~or3b_2_0_A;  // inv_2_15 : inv_2
    assign nand2_2_5_Y = ~(or3_2_0_B & or3_2_2_B);  // nand2_2_5 : nand2_2
    assign or4_2_7_X = or4_2_7_A | or4_2_7_B | or4_2_7_C | or4_2_7_D;  // or4_2_7 : or4_2
    assign and4b_2_2_X = (~or4_2_4_D) & or4_2_4_C & or4_2_4_A & or4_2_4_B;  // and4b_2_2 : and4b_2
    assign buf_2_0_X = or4_2_4_X;  // buf_2_0 : buf_2
    assign inv_2_0_Y = ~or3_2_3_C;  // inv_2_0 : inv_2
    assign nor3_2_2_Y = ~(nor3_2_2_A | nor3_2_2_B | or3_2_8_X);  // nor3_2_2 : nor3_2
    assign xor2_2_18_X = xor2_2_19_A ^ o32a_2_2_X;  // xor2_2_18 : xor2_2
    assign dfxtp_2_2_D = ~((or3b_2_0_A & and3_2_25_C) | (~or2_2_11_B));  // a21boi_2_3 : a21boi_2
    assign and3_2_1_X = or2_2_4_A & inv_2_4_Y & and3_2_1_C;  // and3_2_1 : and3_2
    assign nand2b_2_8_Y = ~((~or2_2_8_B) & or2_2_9_B);  // nand2b_2_8 : nand2b_2
    assign o22a_2_3_X = (xor2_2_19_A | or2_2_10_X) & (o22a_2_3_B1 | o22a_2_3_B2);  // o22a_2_3 : o22a_2
    assign a221o_2_2_X = (inv_2_7_A & xor2_2_16_A) | (xor2_2_19_B & nor2_2_39_Y) | nor2_2_46_Y;  // a221o_2_2 : a221o_2
    assign o21a_2_21_X = (o21a_2_21_A1 | nand4_2_9_Y) & a31o_2_24_X;  // o21a_2_21 : o21a_2
    assign o21a_2_10_X = (and2b_2_3_B | nand4_2_1_Y) & a31o_2_3_X;  // o21a_2_10 : o21a_2
    assign and4_2_6_A = or4_2_9_A & or4_2_9_B;  // and2_2_11 : and2_2
    assign and4_2_6_B = (~nand4_2_7_C) & o21a_2_19_A1;  // and2b_2_23 : and2b_2
    assign and3_2_17_C = (~or2_2_9_B) & or2_2_9_A;  // and2b_2_12 : and2b_2
    assign a211o_2_1_X = (or4_2_0_A & or2_2_4_B) | mux2_1_4_X | or4_2_0_B;  // a211o_2_1 : a211o_2
    assign a22o_2_21_B2 = ~((or2_2_8_X & nor2_2_32_B) | mux2_1_20_X);  // a21oi_2_15 : a21oi_2
    assign or4_2_5_B = ~inv_2_16_A;  // inv_2_16 : inv_2
    assign nor2_2_5_A = ~(xor2_2_3_A & or3_2_3_A);  // nand2_2_6 : nand2_2
    assign or4_2_8_X = or4_2_8_A | or4_2_8_B | or4_2_8_C | or4_2_8_D;  // or4_2_8 : or4_2
    assign and4b_2_3_X = (~or2_2_11_B) & or2_2_11_A & and3_2_6_X & and4b_2_3_D;  // and4b_2_3 : and4b_2
    assign nor3_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | nor3_2_3_C);  // nor3_2_3 : nor3_2
    assign or4_2_1_B = ~inv_2_1_A;  // inv_2_1 : inv_2
    assign xor2_2_19_X = xor2_2_19_A ^ xor2_2_19_B;  // xor2_2_19 : xor2_2
    assign or3b_2_0_X = or3b_2_0_A | or2_2_9_B | (~or2_2_9_A);  // or3b_2_0 : or3b_2
    assign xor2_2_0_X = xor2_2_7_A ^ xor2_2_0_B;  // xor2_2_0 : xor2_2
    assign or3_2_5_C = and3_2_2_A & and3_2_2_B & and3_2_2_C;  // and3_2_2 : and3_2
    assign o32ai_2_0_B1 = ~((~or2_2_9_B) & or2_2_8_B);  // nand2b_2_9 : nand2b_2
    assign o22a_2_3_B2 = (inv_2_7_A & or2_2_12_A) | (nor2_2_34_Y & nor3b_2_0_B) | nor2_2_39_Y;  // a221o_2_3 : a221o_2
    assign o21a_2_22_X = (inv_2_19_A | nor2_2_44_Y) & or4_2_8_X;  // o21a_2_22 : o21a_2
    assign o21a_2_11_X = (or3_2_8_B | and3_2_11_X) & xnor2_2_11_B;  // o21a_2_11 : o21a_2
    assign and4_2_6_D = or4_2_7_A & or4_2_7_B;  // and2_2_12 : and2_2
    assign nor2_2_32_B = (~or2_2_9_A) & or3b_2_0_A;  // and2b_2_13 : and2b_2
    assign and4_2_6_C = (~nand4_2_8_C) & o21a_2_23_A1;  // and2b_2_24 : and2b_2
    assign a211o_2_2_X = (or2_2_4_A & nand2_2_9_Y) | or4_2_0_D | or4_2_0_A;  // a211o_2_2 : a211o_2
    assign xnor2_2_14_B = ~((inv_2_12_A & o31a_2_1_B1) | or3_2_9_A);  // a21oi_2_16 : a21oi_2
    assign o21bai_2_0_Y = ~((nor3_2_1_B | o32ai_2_0_B1) & (~xnor2_2_6_A));  // o21bai_2_0 : o21bai_2
    assign or4_2_9_B = ~inv_2_17_A;  // inv_2_17 : inv_2
    assign nor2_2_9_B = ~(nor2_2_8_A & nor2_2_0_B);  // nand2_2_7 : nand2_2
    assign or4_2_9_X = or4_2_9_A | or4_2_9_B | or4_2_9_C | or4_2_9_D;  // or4_2_9 : or4_2
    assign or4_2_2_B = ~inv_2_2_A;  // inv_2_2 : inv_2
    assign a41oi_2_0_Y = ~((or4_2_4_B & or4_2_4_A & or4_2_4_C & inv_2_7_A) | or4_2_4_D);  // a41oi_2_0 : a41oi_2
    assign xor2_2_1_X = or4_2_4_C ^ xor2_2_1_B;  // xor2_2_1 : xor2_2
    assign and3_2_3_X = or4_2_0_B & and3_2_3_B & and3_2_3_C;  // and3_2_3 : and3_2
    assign a221o_2_4_X = (inv_2_7_A & xor2_2_19_A) | (nor2_2_39_Y & xor2_2_14_B) | o21a_2_14_X;  // a221o_2_4 : a221o_2
    assign o21a_2_23_X = (o21a_2_23_A1 | nand4_2_8_Y) & a31o_2_19_X;  // o21a_2_23 : o21a_2
    assign o21a_2_12_X = (o21a_2_12_A1 | xnor2_2_11_B) & a31o_2_9_X;  // o21a_2_12 : o21a_2
    assign and4_2_5_B = or4_2_8_A & or4_2_8_B;  // and2_2_13 : and2_2
    assign o31a_2_2_A2 = (~or2_2_9_A) & or3b_2_0_A;  // and2b_2_14 : and2b_2
    assign and4_2_5_A = (~nand4_2_9_C) & o21a_2_21_A1;  // and2b_2_25 : and2b_2
    assign a211o_2_3_X = (or3b_2_0_A & or2_2_9_B) | inv_2_13_Y | o31a_2_1_A3;  // a211o_2_3 : a211o_2
    assign a22o_2_7_A1 = ~((or3b_2_0_A & and3_2_17_C) | or2_2_8_B);  // a21oi_2_17 : a21oi_2
    assign or4_2_7_B = ~inv_2_18_A;  // inv_2_18 : inv_2
    assign xnor2_2_0_A = ~(or4_2_4_B & xor2_2_0_X);  // nand2_2_8 : nand2_2
    assign or4_2_3_B = ~inv_2_3_A;  // inv_2_3 : inv_2
    assign mux2_1_20_X = or2_2_9_B ? or2_2_8_B : or2_2_9_A;  // mux2_1_20 : mux2_1
    assign or3_2_3_B = xor2_2_2_A ^ xor2_2_2_B;  // xor2_2_2 : xor2_2
    assign and3_2_4_X = and3_2_4_A & and3_2_4_B & or3_2_5_X;  // and3_2_4 : and3_2
    assign dfstp_2_0_D = (inv_2_7_A & a22o_2_4_B2) | (xor2_2_17_B & nor2_2_39_Y) | nor2_2_40_Y;  // a221o_2_5 : a221o_2
    assign o21a_2_24_X = (o21a_2_24_A1 | o21a_2_24_A2) & a31o_2_20_X;  // o21a_2_24 : o21a_2
    assign o21a_2_13_X = (inv_2_15_Y | o31a_2_2_A1) & inv_2_14_Y;  // o21a_2_13 : o21a_2
    assign and3_2_12_B = or4_2_6_A & or4_2_6_B;  // and2_2_14 : and2_2
    assign xor2_2_2_A = (or4_2_4_B & xor2_2_0_X & xor2_2_1_X) | (xor2_2_3_A & xor2_2_3_B);  // a32o_2_0 : a32o_2
    assign and4_2_5_D = (~nand4_2_10_C) & o21a_2_28_A1;  // and2b_2_26 : and2b_2
    assign o32a_2_2_B1 = (~or3_2_9_B) & nand2_2_29_Y;  // and2b_2_15 : and2b_2
    assign or3_2_15_A = (or2_2_9_A & or3_2_17_A) | or3_2_6_C | or3_2_6_B;  // a211o_2_4 : a211o_2
    assign or3_2_17_C = ~((nor3_2_3_B & nor3_2_3_C) | nor3_2_3_A);  // a21oi_2_18 : a21oi_2
    assign or4_2_8_B = ~inv_2_19_A;  // inv_2_19 : inv_2
    assign nand2_2_9_Y = ~(xor2_2_3_A & inv_2_4_A);  // nand2_2_9 : nand2_2
    assign or3_2_0_X = or3_2_3_A | or3_2_0_B | or3_2_2_B;  // or3_2_0 : or3_2
    assign inv_2_4_Y = ~inv_2_4_A;  // inv_2_4 : inv_2
    assign mux2_1_10_X = inv_2_7_A ? mux2_1_8_A0 : mux2_1_12_A1;  // mux2_1_10 : mux2_1
    assign or2_2_2_A = xor2_2_3_A ^ xor2_2_3_B;  // xor2_2_3 : xor2_2
    assign and3_2_6_C = and3_2_5_A & and3_2_5_B & and3_2_5_C;  // and3_2_5 : and3_2
    assign o21a_2_25_X = (o21a_2_25_A1 | o21a_2_25_A2) & a31o_2_21_X;  // o21a_2_25 : o21a_2
    assign o21a_2_14_X = (xor2_2_13_X | xor2_2_14_X) & o21a_2_14_B1;  // o21a_2_14 : o21a_2
    assign and2_2_15_X = inv_2_6_Y & and4_2_3_X;  // and2_2_15 : and2_2
    assign a32o_2_1_X = (or4_2_0_A & o21a_2_3_A2 & or2_2_4_X) | (o22a_2_0_X & a32o_2_1_B2);  // a32o_2_1 : a32o_2
    assign and3_2_12_C = (~nand4_2_13_C) & o21a_2_25_A1;  // and2b_2_27 : and2b_2
    assign and2b_2_16_X = (~inv_2_7_A) & or2_2_10_A;  // and2b_2_16 : and2b_2
    assign o21a_2_14_B1 = ~((xor2_2_13_X & xor2_2_14_X) | nor2_2_46_A);  // a21oi_2_19 : a21oi_2
    assign a22o_2_0_X = (nand2_2_5_Y & or3_2_4_B) | (or3_2_3_C & or2_2_4_A);  // a22o_2_0 : a22o_2
    assign or3_2_1_X = or4_2_0_A | or3_2_1_B | or3_2_1_C;  // or3_2_1 : or3_2
    assign inv_2_5_Y = ~inv_2_5_A;  // inv_2_5 : inv_2
    assign mux2_1_11_X = inv_2_7_A ? mux2_1_12_A0 : a22o_2_2_B2;  // mux2_1_11 : mux2_1
    assign xor2_2_4_X = xor2_2_4_A ^ xor2_2_7_X;  // xor2_2_4 : xor2_2
    assign and3_2_6_X = and4_2_1_X & and4_2_0_X & and3_2_6_C;  // and3_2_6 : and3_2
    assign o21a_2_15_X = (or2_2_9_A | o21a_2_15_A2) & o21ai_2_5_Y;  // o21a_2_15 : o21a_2
    assign o21a_2_26_X = (inv_2_20_A | nor2_2_45_Y) & or4_2_6_X;  // o21a_2_26 : o21a_2
    assign or2_2_10_A = or2_2_11_B & and3_2_25_C;  // and2_2_16 : and2_2
    assign a32o_2_2_X = (I & inv_2_7_A & and3_2_10_B) | (inv_2_10_Y & and4_2_3_A);  // a32o_2_2 : a32o_2
    assign and4_2_5_C = (~nand4_2_11_C) & o21a_2_24_A1;  // and2b_2_28 : and2b_2
    assign o31a_2_1_A3 = (~or3b_2_0_A) & or2_2_9_A;  // and2b_2_17 : and2b_2
    assign o31a_2_1_B1 = ~(or2_2_9_A & or2_2_8_B);  // nand2_2_30 : nand2_2
    assign a22o_2_1_X = (inv_2_7_Y & or2_2_7_A) | (o211a_2_8_X & inv_2_9_Y);  // a22o_2_1 : a22o_2
    assign or4_2_0_C = or3_2_3_A | or3_2_2_B | or3_2_2_C;  // or3_2_2 : or3_2
    assign inv_2_6_Y = ~inv_2_6_A;  // inv_2_6 : inv_2
    assign mux2_1_12_X = inv_2_7_A ? mux2_1_12_A1 : mux2_1_12_A0;  // mux2_1_12 : mux2_1
    assign and3_2_3_B = (xor2_2_3_A & or4_2_0_A & or2_2_0_B) | or3_2_4_B | and3_2_1_X;  // a311o_2_0 : a311o_2
    assign xor2_2_5_X = xor2_2_5_A ^ xor2_2_5_B;  // xor2_2_5 : xor2_2
    assign and3_2_7_X = inv_2_9_A & inv_2_7_A & and3_2_7_C;  // and3_2_7 : and3_2
    assign o21a_2_16_X = (o21a_2_16_A1 | nand4_2_4_Y) & a31o_2_17_X;  // o21a_2_16 : o21a_2
    assign o21a_2_27_X = (o21a_2_27_A1 | o21a_2_27_A2) & a31o_2_22_X;  // o21a_2_27 : o21a_2
    assign a32o_2_3_X = (inv_2_23_Y & and2_2_15_X & and4b_2_3_X) | (a32o_2_3_B1 & a32o_2_4_B2);  // a32o_2_3 : a32o_2
    assign and3_2_12_A = (~nand4_2_12_C) & o21a_2_27_A1;  // and2b_2_29 : and2b_2
    assign o32a_2_3_A1 = (~xor2_2_16_X) & nor2_2_34_Y;  // and2b_2_18 : and2b_2
    assign and2_2_8_B = ~(or2_2_9_B & or2_2_8_B);  // nand2_2_20 : nand2_2
    assign xor2_2_20_B = ~(nand2_2_31_A & a22o_2_3_X);  // nand2_2_31 : nand2_2
    assign a22o_2_2_X = (or4_2_4_X & a22o_2_2_A2) | (buf_2_0_X & a22o_2_2_B2);  // a22o_2_2 : a22o_2
    assign o31a_2_10_X = (o31a_2_9_A1 | a22o_2_13_X | a22o_2_17_X) & or3_2_15_X;  // o31a_2_10 : o31a_2
    assign or3_2_3_X = or3_2_3_A | or3_2_3_B | or3_2_3_C;  // or3_2_3 : or3_2
    assign inv_2_7_Y = ~inv_2_7_A;  // inv_2_7 : inv_2
    assign mux2_1_13_X = inv_2_7_A ? I : a22o_2_2_A2;  // mux2_1_13 : mux2_1
    assign o31a_2_0_B1 = (nor3_2_1_C & o32ai_2_0_B1 & nand2b_2_8_Y) | and2b_2_6_X | and3b_2_0_C;  // a311o_2_1 : a311o_2
    assign o31a_2_0_X = (o31a_2_0_A1 | o31a_2_0_A2 | nor3_2_1_Y) & o31a_2_0_B1;  // o31a_2_0 : o31a_2
    assign or2_2_5_A = xor2_2_6_A ^ xor2_2_6_B;  // xor2_2_6 : xor2_2
    assign and4_2_4_D = and4_2_3_A & and4_2_3_B & or3_2_8_B;  // and3_2_8 : and3_2
    assign o21a_2_28_X = (o21a_2_28_A1 | o21a_2_28_A2) & a31o_2_23_X;  // o21a_2_28 : o21a_2
    assign o21a_2_17_X = (inv_2_16_A | nor2_2_42_Y) & or4_2_5_X;  // o21a_2_17 : o21a_2
    assign a32o_2_4_X = (inv_2_23_A & and2_2_15_X & and4b_2_3_X) | (success & a32o_2_4_B2);  // a32o_2_4 : a32o_2
    assign and2b_2_19_X = (~or2_2_8_X) & o221a_2_2_C1;  // and2b_2_19 : and2b_2
    assign o31a_2_3_A3 = (xnor2_2_13_Y & or3_2_17_B) | (nor3b_2_3_Y & conb_1_0_LO);  // a22o_2_20 : a22o_2
    assign a31o_2_5_A3 = ~(or4_2_0_A & o31ai_2_1_Y);  // nand2_2_10 : nand2_2
    assign and3_2_2_A = ~(xor2_2_7_A & xor2_2_9_A);  // nand2_2_21 : nand2_2
    assign inv_2_12_A = ~(or2_2_9_B & o31a_2_1_A3);  // nand2_2_32 : nand2_2
    assign a22o_2_3_X = (or3_2_9_A & or2_2_9_X) | (o32a_2_2_A2 & or3b_2_0_X);  // a22o_2_3 : a22o_2
    assign or3_2_4_X = or4_2_0_A | or3_2_4_B | or3_2_4_C;  // or3_2_4 : or3_2
    assign inv_2_8_Y = ~inv_2_8_A;  // inv_2_8 : inv_2
    assign mux2_1_14_X = inv_2_7_A ? mux2_1_15_A0 : mux2_1_8_A1;  // mux2_1_14 : mux2_1
    assign o31a_2_1_X = (or2_2_9_B | or3_2_9_A | o31a_2_1_A3) & o31a_2_1_B1;  // o31a_2_1 : o31a_2
    assign xor2_2_7_X = xor2_2_7_A ^ xor2_2_9_A;  // xor2_2_7 : xor2_2
    assign inv_2_10_A = or3_2_8_A & I & inv_2_7_A;  // and3_2_9 : and3_2
    assign o21a_2_29_X = (inv_2_17_A | nor2_2_41_Y) & or4_2_9_X;  // o21a_2_29 : o21a_2
    assign o21a_2_18_X = (o21a_2_18_A1 | nand4_2_6_Y) & a31o_2_16_X;  // o21a_2_18 : o21a_2
    assign or4_2_0_D = (or3_2_3_A | or3_2_3_C) & or3_2_3_B;  // o21a_2_0 : o21a_2
    assign o31a_2_9_A2 = (o31a_2_2_X & nor3b_2_2_Y) | (nor3_2_3_Y & a22o_2_21_B2);  // a22o_2_21 : a22o_2
    assign o31a_2_9_A3 = (xnor2_2_14_Y & or3_2_17_B) | (nor3b_2_3_Y & o21bai_2_0_Y);  // a22o_2_10 : a22o_2
    assign o21a_2_3_A2 = ~(or2_2_4_A & nand2_2_5_Y);  // nand2_2_11 : nand2_2
    assign or4_2_9_D = ~(I & inv_2_7_A);  // nand2_2_33 : nand2_2
    assign and3_2_2_B = ~(xor2_2_4_A & xor2_2_7_X);  // nand2_2_22 : nand2_2
    assign a22o_2_4_X = (inv_2_7_A & xor2_2_20_A) | (nor2_2_39_Y & a22o_2_4_B2);  // a22o_2_4 : a22o_2
    assign o21a_2_4_A2 = ~(I & inv_2_7_A & nand4_2_0_C & nor4_2_0_Y);  // nand4_2_0 : nand4_2
    assign or3_2_5_X = or3_2_5_A | or3_2_5_B | or3_2_5_C;  // or3_2_5 : or3_2
    assign inv_2_9_Y = ~inv_2_9_A;  // inv_2_9 : inv_2
    assign xnor2_2_6_A = (~nor3_2_1_B) & and2_2_7_B & and3b_2_0_C;  // and3b_2_0 : and3b_2
    assign xor2_2_3_B = ~(nor2_2_8_A | nor2_2_0_B);  // nor2_2_0 : nor2_2
    assign mux2_1_15_X = inv_2_7_A ? mux2_1_16_A0 : mux2_1_15_A0;  // mux2_1_15 : mux2_1
    assign o31a_2_2_X = (o31a_2_2_A1 | o31a_2_2_A2 | o31a_2_2_A3) & inv_2_14_Y;  // o31a_2_2 : o31a_2
    assign nor2_2_40_Y = ~(nor2_2_40_A | nor2_2_46_A);  // nor2_2_40 : nor2_2
    assign or4_2_0_A = xor2_2_8_A ^ xor2_2_8_B;  // xor2_2_8 : xor2_2
    assign o21a_2_19_X = (o21a_2_19_A1 | nand4_2_7_Y) & a31o_2_18_X;  // o21a_2_19 : o21a_2
    assign o21a_2_1_X = (or3_2_3_B | and2_2_2_X) & or2_2_4_X;  // o21a_2_1 : o21a_2
    assign xor2_2_3_A = ~(xnor2_2_0_A ^ xor2_2_1_X);  // xnor2_2_0 : xnor2_2
    assign o31a_2_6_A3 = (xnor2_2_18_Y & or3_2_17_B) | (nor3b_2_3_Y & o31a_2_0_X);  // a22o_2_11 : a22o_2
    assign a22o_2_22_X = (or3b_2_0_A & or3_2_9_C) | (nand2_2_31_A & or2_2_9_B);  // a22o_2_22 : a22o_2
    assign o311a_2_0_C1 = ~(or4_2_0_A & mux2_1_1_X);  // nand2_2_12 : nand2_2
    assign mux2_1_5_A1 = ~(inv_2_9_A & inv_2_7_A);  // nand2_2_23 : nand2_2
    assign or4_2_5_D = ~(I & inv_2_7_A);  // nand2_2_34 : nand2_2
    assign a22o_2_5_X = (inv_2_7_A & xor2_2_14_B) | (xor2_2_20_A & nor2_2_39_Y);  // a22o_2_5 : a22o_2
    assign nand4_2_1_Y = ~(I & inv_2_7_A & nand4_2_1_C & nand4_2_1_D);  // nand4_2_1 : nand4_2
    assign a21o_2_10_X = (and4_2_3_A & inv_2_10_A) | and4_2_3_B;  // a21o_2_10 : a21o_2
    assign or3_2_6_X = or3_2_6_A | or3_2_6_B | or3_2_6_C;  // or3_2_6 : or3_2
    assign and3b_2_1_X = (~or2_2_8_B) & or2_2_9_B & or2_2_9_A;  // and3b_2_1 : and3b_2
    assign or3_2_2_B = ~(nor2_2_4_Y | or2_2_0_B);  // nor2_2_1 : nor2_2
    assign mux2_1_16_X = inv_2_7_A ? mux2_1_9_A0 : mux2_1_16_A0;  // mux2_1_16 : mux2_1
    assign dfrtp_2_70_D = ~((~o21a_2_27_A1) & o21a_2_27_A2);  // nand2b_2_20 : nand2b_2
    assign o31a_2_3_X = (o31a_2_9_A1 | a22o_2_6_X | o31a_2_3_A3) & or3_2_13_X;  // o31a_2_3 : o31a_2
    assign nor2_2_41_Y = ~(or4_2_9_C | or4_2_9_D);  // nor2_2_41 : nor2_2
    assign nor2_2_30_Y = ~(inv_2_10_A | nor2_2_30_B);  // nor2_2_30 : nor2_2
    assign xor2_2_9_X = xor2_2_9_A ^ inv_2_5_A;  // xor2_2_9 : xor2_2
    assign and3_2_0_C = or2_2_1_X & or2_2_0_B;  // and2_2_0 : and2_2
    assign or2_2_6_B = (or3_2_3_B | inv_2_4_A) & or2_2_4_B;  // o21a_2_2 : o21a_2
    assign nor2_2_8_A = ~(or4_2_4_B ^ xor2_2_0_X);  // xnor2_2_1 : xnor2_2
    assign o31a_2_5_A2 = (conb_1_4_LO & nor3b_2_2_Y) | (nor3_2_3_Y & o211a_2_9_X);  // a22o_2_12 : a22o_2
    assign or4_2_6_D = ~(I & inv_2_7_A);  // nand2_2_35 : nand2_2
    assign xnor2_2_11_B = ~(inv_2_10_A & and4_2_4_D);  // nand2_2_24 : nand2_2
    assign or4_2_3_D = ~(I & inv_2_7_A);  // nand2_2_13 : nand2_2
    assign or3_2_6_C = ~(or3b_2_0_A | or2_2_9_A | or2_2_9_B | (~or2_2_8_B));  // nor4b_2_0 : nor4b_2
    assign a22o_2_6_X = (conb_1_5_LO & nor3b_2_2_Y) | (nor3_2_3_Y & conb_1_3_LO);  // a22o_2_6 : a22o_2
    assign o21a_2_8_A2 = ~(I & inv_2_7_A & nand4_2_2_C & nand4_2_2_D);  // nand4_2_2 : nand4_2
    assign dfstp_2_2_D = (and2b_2_16_X & xnor2_2_19_Y) | a22o_2_5_X;  // a21o_2_11 : a21o_2
    assign or3_2_7_X = or3_2_7_A | or3_2_7_B | or3_2_7_C;  // or3_2_7 : or3_2
    assign and3b_2_2_X = (~or2_2_8_B) & nor2_2_32_B & or2_2_9_B;  // and3b_2_2 : and3b_2
    assign or3_2_2_C = ~(or3_2_0_B | inv_2_4_A);  // nor2_2_2 : nor2_2
    assign mux2_1_17_X = inv_2_7_A ? mux2_1_19_A0 : mux2_1_9_A1;  // mux2_1_17 : mux2_1
    assign dfrtp_2_64_D = ~((~o21a_2_28_A1) & o21a_2_28_A2);  // nand2b_2_21 : nand2b_2
    assign and2_2_7_B = ~((~or3b_2_0_A) & or2_2_9_B);  // nand2b_2_10 : nand2b_2
    assign o31a_2_4_X = (o31a_2_9_A1 | a22o_2_7_X | a22o_2_9_X) & or3_2_12_X;  // o31a_2_4 : o31a_2
    assign nor2_2_20_Y = ~(nor2_2_20_A | o211a_2_0_X);  // nor2_2_20 : nor2_2
    assign nor2_2_31_Y = ~(inv_2_9_A | nor2_2_31_B);  // nor2_2_31 : nor2_2
    assign nor2_2_42_Y = ~(or4_2_5_C | or4_2_5_D);  // nor2_2_42 : nor2_2
    assign or2_2_1_A = or4_2_4_A & xor2_2_7_A;  // and2_2_1 : and2_2
    assign o21a_2_3_X = (or3_2_3_A | o21a_2_3_A2) & or2_2_3_X;  // o21a_2_3 : o21a_2
    assign or3_2_0_B = ~(xor2_2_3_A ^ xor2_2_3_B);  // xnor2_2_2 : xnor2_2
    assign a22o_2_13_X = (a22o_2_13_A1 & nor3b_2_2_Y) | (nor3_2_3_Y & o221a_2_2_X);  // a22o_2_13 : a22o_2
    assign or4_2_7_D = ~(I & inv_2_7_A);  // nand2_2_36 : nand2_2
    assign or4b_2_8_A = ~(and4_2_3_A | and4_2_3_B | and4_2_3_C | (~nor3_2_2_Y));  // nor4b_2_1 : nor4b_2
    assign or4_2_1_D = ~(I & inv_2_7_A);  // nand2_2_14 : nand2_2
    assign mux2_1_7_A0 = ~(or2_2_7_A & I);  // nand2_2_25 : nand2_2
    assign a22o_2_7_X = (a22o_2_7_A1 & nor3b_2_2_Y) | (nor3_2_3_Y & o21a_2_15_X);  // a22o_2_7 : a22o_2
    assign o21a_2_5_A2 = ~(I & inv_2_7_A & nand4_2_3_C & nand4_2_3_D);  // nand4_2_3 : nand4_2
    assign o32a_2_3_A3 = (inv_2_7_A & xor2_2_19_B) | nor2_2_39_Y;  // a21o_2_12 : a21o_2
    assign or3_2_8_X = or3_2_8_A | or3_2_8_B | or3_2_8_C;  // or3_2_8 : or3_2
    assign o32a_2_3_A2 = (~inv_2_7_A) & nor2_2_40_A & xor2_2_16_X;  // and3b_2_3 : and3b_2
    assign nor2_2_3_Y = ~(or3_2_3_B | nor2_2_3_B);  // nor2_2_3 : nor2_2
    assign mux2_1_18_X = inv_2_7_A ? a22o_2_2_A2 : mux2_1_19_A1;  // mux2_1_18 : mux2_1
    assign nor2_2_46_A = ~((~inv_2_7_A) & or2_2_10_A);  // nand2b_2_22 : nand2b_2
    assign nand2_2_31_A = ~((~or2_2_9_A) & or3b_2_0_A);  // nand2b_2_11 : nand2b_2
    assign o31a_2_5_X = (o31a_2_9_A1 | o31a_2_5_A2 | a22o_2_8_X) & or3_2_17_X;  // o31a_2_5 : o31a_2
    assign nor2_2_3_B = ~(or3_2_0_B | or3_2_2_B);  // nor2_2_10 : nor2_2
    assign xor2_2_8_B = ~(nor2_2_21_A | and3_2_4_X);  // nor2_2_21 : nor2_2
    assign nor2_2_32_Y = ~(or2_2_8_B | nor2_2_32_B);  // nor2_2_32 : nor2_2
    assign nor2_2_43_Y = ~(or4_2_7_C | or4_2_7_D);  // nor2_2_43 : nor2_2
    assign and2_2_2_X = and2_2_2_A & and3_2_1_C;  // and2_2_2 : and2_2
    assign o21a_2_4_X = (o21a_2_4_A1 | o21a_2_4_A2) & a31o_2_1_X;  // o21a_2_4 : o21a_2
    assign and3_2_2_C = ~(xor2_2_0_B ^ xor2_2_4_A);  // xnor2_2_3 : xnor2_2
    assign o31a_2_8_A2 = (and3_2_17_X & nor3b_2_2_Y) | (nor3_2_3_Y & and3b_2_2_X);  // a22o_2_14 : a22o_2
    assign o21a_2_12_A1 = ~(and4_2_3_C & nor3_2_2_A);  // nand2_2_26 : nand2_2
    assign or4_2_2_D = ~(I & inv_2_7_A);  // nand2_2_15 : nand2_2
    assign or4_2_8_D = ~(I & inv_2_7_A);  // nand2_2_37 : nand2_2
    assign a22o_2_8_X = (xor2_2_12_X & or3_2_17_B) | (nor3b_2_3_Y & o32ai_2_0_Y);  // a22o_2_8 : a22o_2
    assign nand4_2_4_Y = ~(I & inv_2_7_A & nand4_2_4_C & nand4_2_4_D);  // nand4_2_4 : nand4_2
    assign a21o_2_13_X = (inv_2_16_A & nor2_2_42_Y) | or4_2_5_A;  // a21o_2_13 : a21o_2
    assign or3_2_9_X = or3_2_9_A | or3_2_9_B | or3_2_9_C;  // or3_2_9 : or3_2
    assign nor2_2_4_Y = ~(or2_2_1_A | or2_2_1_B);  // nor2_2_4 : nor2_2
    assign mux2_1_19_X = inv_2_7_A ? mux2_1_19_A1 : mux2_1_19_A0;  // mux2_1_19 : mux2_1
    assign a32o_2_4_B2 = ~((~or2_2_11_B) & or2_2_11_A);  // nand2b_2_23 : nand2b_2
    assign o221a_2_2_C1 = ~((~or3b_2_0_A) & or2_2_9_A);  // nand2b_2_12 : nand2b_2
    assign o31a_2_6_X = (o31a_2_9_A1 | o31a_2_6_A2 | o31a_2_6_A3) & or3_2_10_X;  // o31a_2_6 : o31a_2
    assign or3_2_1_C = ~(or3_2_3_B | or2_2_4_B);  // nor2_2_11 : nor2_2
    assign nor3_2_1_B = ~(or3b_2_0_A | or2_2_9_A);  // nor2_2_22 : nor2_2
    assign nor2_2_44_Y = ~(or4_2_8_C | or4_2_8_D);  // nor2_2_44 : nor2_2
    assign nor2_2_33_Y = ~(or3b_2_0_A | or2_2_9_A);  // nor2_2_33 : nor2_2
    assign o211a_2_10_X = (inv_2_15_Y | or2_2_9_B) & inv_2_14_Y & or2_2_9_A;  // o211a_2_10 : o211a_2
    assign and4_2_0_A = or4_2_1_A & or4_2_1_B;  // and2_2_3 : and2_2
    assign o21a_2_5_X = (o21a_2_5_A1 | o21a_2_5_A2) & a31o_2_4_X;  // o21a_2_5 : o21a_2
    assign xnor2_2_5_B = ~(xnor2_2_4_A ^ xor2_2_4_X);  // xnor2_2_4 : xnor2_2
    assign o31a_2_6_A2 = (o21a_2_13_X & nor3b_2_2_Y) | (nor3_2_3_Y & and3b_2_1_X);  // a22o_2_15 : a22o_2
    assign and3_2_4_B = ~(or4_2_4_D & xnor2_2_5_B);  // nand2_2_16 : nand2_2
    assign o21a_2_15_A2 = ~(or3b_2_0_A & or2_2_8_X);  // nand2_2_27 : nand2_2
    assign nand2_2_38_Y = ~(or2_2_12_A & or2_2_12_B);  // nand2_2_38 : nand2_2
    assign a22o_2_9_X = (a22o_2_9_A1 & or3_2_17_B) | (nor3b_2_3_Y & o22a_2_2_X);  // a22o_2_9 : a22o_2
    assign nand4_2_5_Y = ~(I & inv_2_7_A & nand4_2_5_C & nand4_2_5_D);  // nand4_2_5 : nand4_2
    assign a21o_2_14_X = (inv_2_18_A & nor2_2_43_Y) | or4_2_7_A;  // a21o_2_14 : a21o_2
    assign nor2_2_5_Y = ~(nor2_2_5_A | or3_2_3_B);  // nor2_2_5 : nor2_2
    assign dfrtp_2_58_D = ~((~o21a_2_18_A1) & nand4_2_6_Y);  // nand2b_2_13 : nand2b_2
    assign o31a_2_7_X = (o31a_2_9_A1 | o31a_2_7_A2 | o31a_2_7_A3) & or3_2_11_X;  // o31a_2_7 : o31a_2
    assign or3_2_4_B = ~(or2_2_4_A | nor2_2_3_B);  // nor2_2_12 : nor2_2
    assign nor2_2_23_Y = ~(or2_2_8_B | and2_2_8_A);  // nor2_2_23 : nor2_2
    assign nor2_2_45_Y = ~(or4_2_6_C | or4_2_6_D);  // nor2_2_45 : nor2_2
    assign nor2_2_34_Y = ~(inv_2_7_A | nor2_2_40_A);  // nor2_2_34 : nor2_2
    assign dfxtp_2_3_D = (or2_2_8_B | nand3_2_1_Y) & a21o_2_17_X & or2_2_11_B;  // o211a_2_11 : o211a_2
    assign and4_2_1_B = or4_2_2_A & or4_2_2_B;  // and2_2_4 : and2_2
    assign o21a_2_6_X = (inv_2_3_A | o21a_2_6_A2) & or4_2_3_X;  // o21a_2_6 : o21a_2
    assign xnor2_2_8_A = ~(or4_2_4_D ^ xnor2_2_5_B);  // xnor2_2_5 : xnor2_2
    assign o22ai_2_0_Y = ~((xor2_2_0_B | and3_2_2_B) & (a21oi_2_5_Y | a31o_2_7_X));  // o22ai_2_0 : o22ai_2
    assign o31a_2_7_A2 = (o211a_2_10_X & nor3b_2_2_Y) | (nor3_2_3_Y & and2b_2_19_X);  // a22o_2_16 : a22o_2
    assign a31o_2_0_X = (or3_2_3_B & and2_2_2_A & and3_2_1_C) | and3_2_0_C;  // a31o_2_0 : a31o_2
    assign xnor2_2_4_A = ~(xor2_2_0_B & xor2_2_9_A);  // nand2_2_17 : nand2_2
    assign o32a_2_2_B2 = ~(or2_2_9_X & o32a_2_2_A2);  // nand2_2_28 : nand2_2
    assign nand4_2_6_Y = ~(I & inv_2_7_A & nand4_2_6_C & nand4_2_6_D);  // nand4_2_6 : nand4_2
    assign a21o_2_15_X = (inv_2_19_A & nor2_2_44_Y) | or4_2_8_A;  // a21o_2_15 : a21o_2
    assign or2_2_4_B = or2_2_2_A | or2_2_0_B;  // or2_2_0 : or2_2
    assign nor2_2_6_Y = ~(xor2_2_0_B | xor2_2_9_A);  // nor2_2_6 : nor2_2
    assign dfrtp_2_57_D = ~((~o21a_2_19_A1) & nand4_2_7_Y);  // nand2b_2_14 : nand2b_2
    assign o31a_2_8_X = (o31a_2_9_A1 | o31a_2_8_A2 | o31a_2_8_A3) & or3_2_14_X;  // o31a_2_8 : o31a_2
    assign o32a_2_1_A3 = ~(or2_2_4_A | or3_2_0_X);  // nor2_2_13 : nor2_2
    assign nor2_2_46_Y = ~(nor2_2_46_A | nor2_2_46_B);  // nor2_2_46 : nor2_2
    assign nor2_2_24_Y = ~(or2_2_9_A | or2_2_8_B);  // nor2_2_24 : nor2_2
    assign o32a_2_2_A3 = ~(or2_2_9_B | o32a_2_2_B1);  // nor2_2_35 : nor2_2
    assign a31o_2_20_X = (I & inv_2_7_A & and4b_2_2_X) | nand4_2_11_C;  // a31o_2_20 : a31o_2
    assign and4_2_0_D = or4_2_3_A & or4_2_3_B;  // and2_2_5 : and2_2
    assign o21a_2_7_X = (inv_2_1_A | o21a_2_7_A2) & or4_2_1_X;  // o21a_2_7 : o21a_2
    assign xnor2_2_6_Y = ~(xnor2_2_6_A ^ a21o_2_6_X);  // xnor2_2_6 : xnor2_2
    assign o22ai_2_1_Y = ~((or2_2_4_A | nand2_2_5_Y) & (or3_2_3_X | or2_2_5_A));  // o22ai_2_1 : o22ai_2
    assign a22o_2_17_X = (xor2_2_18_X & or3_2_17_B) | (nor3b_2_3_Y & xnor2_2_6_Y);  // a22o_2_17 : a22o_2
    assign a31o_2_1_X = (I & inv_2_7_A & nor4_2_0_Y) | nand4_2_0_C;  // a31o_2_1 : a31o_2
    assign a21o_2_8_A2 = ~(xnor2_2_8_A & xnor2_2_8_B);  // nand2_2_18 : nand2_2
    assign nand2_2_29_Y = ~(or3b_2_0_A & or2_2_9_A);  // nand2_2_29 : nand2_2
    assign and3_2_3_C = ~((or3_2_4_B | and3_2_1_X) & or4_2_0_A);  // o21ai_2_0 : o21ai_2
    assign nand4_2_7_Y = ~(I & inv_2_7_A & nand4_2_7_C & nor4_2_1_Y);  // nand4_2_7 : nand4_2
    assign a21o_2_16_X = (inv_2_20_A & nor2_2_45_Y) | or4_2_6_A;  // a21o_2_16 : a21o_2
    assign a21o_2_0_X = (inv_2_1_A & o21a_2_7_A2) | or4_2_1_A;  // a21o_2_0 : a21o_2
    assign or2_2_1_X = or2_2_1_A | or2_2_1_B;  // or2_2_1 : or2_2
    assign or2_2_1_B = ~(or4_2_4_A | xor2_2_7_A);  // nor2_2_7 : nor2_2
    assign dfrtp_2_59_D = ~((~o21a_2_16_A1) & nand4_2_4_Y);  // nand2b_2_15 : nand2b_2
    assign o31a_2_9_X = (o31a_2_9_A1 | o31a_2_9_A2 | o31a_2_9_A3) & or3_2_16_X;  // o31a_2_9 : o31a_2
    assign o21a_2_6_A2 = ~(or4_2_3_C | or4_2_3_D);  // nor2_2_14 : nor2_2
    assign o31a_2_9_A1 = ~(or3_2_17_B | or3_2_17_C);  // nor2_2_47 : nor2_2
    assign or3_2_5_A = ~(xor2_2_0_B | and3_2_2_B);  // nor2_2_25 : nor2_2
    assign or3_2_9_A = ~(or3b_2_0_A | inv_2_13_Y);  // nor2_2_36 : nor2_2
    assign a31o_2_21_X = (I & inv_2_7_A & nand4_2_13_D) | nand4_2_13_C;  // a31o_2_21 : a31o_2
    assign and2b_2_9_B = (and4_2_4_B & inv_2_10_A & and4_2_4_D) | nor3_2_2_B;  // a31o_2_10 : a31o_2
    assign nor3_2_1_C = or3b_2_0_A & or2_2_9_A;  // and2_2_6 : and2_2
    assign o21a_2_8_X = (o21a_2_8_A1 | o21a_2_8_A2) & a31o_2_2_X;  // o21a_2_8 : o21a_2
    assign or3_2_7_A = ~(xor2_2_5_A ^ xor2_2_5_B);  // xnor2_2_7 : xnor2_2
    assign or3_2_10_X = or3_2_10_A | or3_2_17_B | or3_2_17_C;  // or3_2_10 : or3_2
    assign o31a_2_7_A3 = (xnor2_2_22_Y & or3_2_17_B) | (nor3b_2_3_Y & and2_2_8_X);  // a22o_2_18 : a22o_2
    assign a31o_2_2_X = (I & inv_2_7_A & nand4_2_2_D) | nand4_2_2_C;  // a31o_2_2 : a31o_2
    assign and2_2_8_A = ~(or3b_2_0_A & or2_2_9_A);  // nand2_2_19 : nand2_2
    assign and4bb_2_0_X = (~xor2_2_7_A) & (~xor2_2_0_B) & xor2_2_9_A & xor2_2_4_A;  // and4bb_2_0 : and4bb_2
    assign o21ai_2_1_Y = ~((or2_2_5_A | o32a_2_0_X) & or4_2_0_X);  // o21ai_2_1 : o21ai_2
    assign nand4_2_8_Y = ~(I & inv_2_7_A & nand4_2_8_C & nand4_2_8_D);  // nand4_2_8 : nand4_2
    assign a21o_2_17_X = (or2_2_9_A & or3b_2_0_A) | or2_2_9_B;  // a21o_2_17 : a21o_2
    assign a21o_2_1_X = (inv_2_2_A & o21a_2_9_A2) | or4_2_2_A;  // a21o_2_1 : a21o_2
    assign or3_2_3_C = or2_2_2_A | or3_2_2_B;  // or2_2_2 : or2_2
    assign or3_2_3_A = ~(nor2_2_8_A | or2_2_1_X);  // nor2_2_8 : nor2_2
    assign dfrtp_2_66_D = ~((~o21a_2_21_A1) & nand4_2_9_Y);  // nand2b_2_16 : nand2b_2
    assign or3_2_9_C = ~(or2_2_9_B | or2_2_8_B);  // nor2_2_37 : nor2_2
    assign nor2_2_26_Y = ~(nor2_2_5_A | or2_2_4_A);  // nor2_2_26 : nor2_2
    assign o21a_2_7_A2 = ~(or4_2_1_C | or4_2_1_D);  // nor2_2_15 : nor2_2
    assign nor3_2_3_B = ~(or4b_2_8_A | o21ba_2_1_X);  // nor2_2_48 : nor2_2
    assign and3_2_7_C = ~((~xor2_2_9_A) & xor2_2_4_A & xor2_2_0_B);  // nand3b_2_0 : nand3b_2
    assign a31o_2_22_X = (I & inv_2_7_A & nand4_2_12_D) | nand4_2_12_C;  // a31o_2_22 : a31o_2
    assign a31o_2_11_X = (inv_2_9_A & inv_2_7_A & mux2_1_7_X) | inv_2_6_A;  // a31o_2_11 : a31o_2
    assign and2_2_7_X = or2_2_9_A & and2_2_7_B;  // and2_2_7 : and2_2
    assign o21a_2_9_X = (inv_2_2_A | o21a_2_9_A2) & or4_2_2_X;  // o21a_2_9 : o21a_2
    assign xor2_2_2_B = ~(xnor2_2_8_A ^ xnor2_2_8_B);  // xnor2_2_8 : xnor2_2
    assign or3_2_11_X = or3_2_11_A | or3_2_17_B | or3_2_17_C;  // or3_2_11 : or3_2
    assign o31a_2_8_A3 = (xor2_2_20_X & or3_2_17_B) | (nor3b_2_3_Y & nor2_2_23_Y);  // a22o_2_19 : a22o_2
    assign a22o_2_13_A1 = ~((or3b_2_0_A & or2_2_9_B) | or2_2_8_B | and3_2_17_C | nor2_2_33_Y);  // a2111oi_2_0 : a2111oi_2
    assign a31o_2_3_X = (I & inv_2_7_A & nand4_2_1_D) | nand4_2_1_C;  // a31o_2_3 : a31o_2
    assign nand4_2_3_D = (~or4b_2_2_C) & (~or4b_2_3_C) & or4b_2_3_B & or4b_2_3_A;  // and4bb_2_1 : and4bb_2
    assign o21ai_2_2_Y = ~((or3_2_3_B | inv_2_0_Y) & or4_2_0_A);  // o21ai_2_2 : o21ai_2
    assign nand4_2_9_Y = ~(I & inv_2_7_A & nand4_2_9_C & nand4_2_9_D);  // nand4_2_9 : nand4_2
    assign a21o_2_18_X = (inv_2_17_A & nor2_2_41_Y) | or4_2_9_A;  // a21o_2_18 : a21o_2
    assign a21o_2_2_X = (inv_2_3_A & o21a_2_6_A2) | or4_2_3_A;  // a21o_2_2 : a21o_2
    assign or2_2_3_X = or2_2_4_A | or3_2_2_B;  // or2_2_3 : or2_2
    assign inv_2_4_A = ~(or2_2_1_B | nor2_2_9_B);  // nor2_2_9 : nor2_2
    assign dfrtp_2_63_D = ~((~o21a_2_23_A1) & nand4_2_8_Y);  // nand2b_2_17 : nand2b_2
    assign or3_2_9_B = ~(or3b_2_0_A | or2_2_9_A);  // nor2_2_38 : nor2_2
    assign o32a_2_1_B1 = ~(nor2_2_3_B | o21a_2_3_A2);  // nor2_2_27 : nor2_2
    assign o21a_2_9_A2 = ~(or4_2_2_C | or4_2_2_D);  // nor2_2_16 : nor2_2
    assign a31o_2_23_X = (I & inv_2_7_A & nand4_2_10_D) | nand4_2_10_C;  // a31o_2_23 : a31o_2
    assign a31o_2_12_X = (I & inv_2_7_A & a221o_2_1_X) | inv_2_11_A;  // a31o_2_12 : a31o_2
    assign and2_2_8_X = and2_2_8_A & and2_2_8_B;  // and2_2_8 : and2_2
    assign or2_2_4_A = ~(xor2_2_2_A ^ xor2_2_2_B);  // xnor2_2_9 : xnor2_2
    assign or3_2_12_X = or3_2_6_X | or3_2_17_B | or3_2_17_C;  // or3_2_12 : or3_2
    assign a31o_2_4_X = (I & inv_2_7_A & nand4_2_3_D) | nand4_2_3_C;  // a31o_2_4 : a31o_2
    assign nand4_2_1_D = (~or4b_2_3_A) & (~or4b_2_2_C) & or4b_2_3_C & or4b_2_3_B;  // and4bb_2_2 : and4bb_2
    assign o21ai_2_3_Y = ~((I | nor2_2_40_A) & o21ai_2_3_B1);  // o21ai_2_3 : o21ai_2
    assign a21o_2_3_X = (or2_2_5_A & a21o_2_3_A2) | and3_2_3_X;  // a21o_2_3 : a21o_2
    assign or2_2_4_X = or2_2_4_A | or2_2_4_B;  // or2_2_4 : or2_2
    assign dfrtp_2_67_D = ~((~o21a_2_24_A1) & o21a_2_24_A2);  // nand2b_2_18 : nand2b_2
    assign or3_2_5_B = ~(and3_2_2_A | and3_2_2_C);  // nor2_2_17 : nor2_2
    assign or3_2_1_B = ~(or3_2_3_B | and2_2_2_A);  // nor2_2_28 : nor2_2
    assign nor2_2_39_Y = ~(or2_2_10_A | inv_2_7_A);  // nor2_2_39 : nor2_2
    assign a31o_2_13_X = (inv_2_9_A & nor2_2_29_Y & inv_2_7_A) | or2_2_11_A;  // a31o_2_13 : a31o_2
    assign a31o_2_24_X = (I & inv_2_7_A & nand4_2_9_D) | nand4_2_9_C;  // a31o_2_24 : a31o_2
    assign and4_2_4_B = and4_2_3_C & nor3_2_2_A;  // and2_2_9 : and2_2
    assign or3_2_13_X = or3_2_13_A | or3_2_17_B | or3_2_17_C;  // or3_2_13 : or3_2
    assign a31o_2_5_X = (or2_2_5_A & a31o_2_5_A2 & a31o_2_5_A3) | xor2_2_5_X;  // a31o_2_5 : a31o_2
    assign xnor2_2_21_B = ~(or2_2_12_A ^ xor2_2_20_A);  // xnor2_2_20 : xnor2_2
    assign nand4_2_2_D = (~or4b_2_3_B) & (~or4b_2_2_C) & or4b_2_3_C & or4b_2_3_A;  // and4bb_2_3 : and4bb_2
    assign o21ai_2_4_Y = ~((inv_2_12_Y | o32a_2_2_B2) & a211o_2_3_X);  // o21ai_2_4 : o21ai_2
    assign nand3_2_0_Y = ~(xor2_2_9_A & xor2_2_4_A & inv_2_5_A);  // nand3_2_0 : nand3_2
    assign mux2_1_0_X = or4_2_0_A ? a31o_2_0_X : o21a_2_3_X;  // mux2_1_0 : mux2_1
    assign xor2_2_5_B = (xnor2_2_4_A & or3_2_5_B) | a21oi_2_6_Y;  // a21o_2_4 : a21o_2
    assign or2_2_5_X = or2_2_5_A | or3_2_1_B;  // or2_2_5 : or2_2
    assign dfrtp_2_68_D = ~((~o21a_2_25_A1) & o21a_2_25_A2);  // nand2b_2_19 : nand2b_2
    assign or2_2_0_B = (~xor2_2_3_B) & nor2_2_9_B;  // and2b_2_0 : and2b_2
    assign nor2_2_20_A = ~(xor2_2_5_A | xor2_2_5_B);  // nor2_2_18 : nor2_2
    assign nor2_2_29_Y = ~(xor2_2_7_A | and3_2_7_C);  // nor2_2_29 : nor2_2
    assign a31o_2_14_X = (and2b_2_16_X & nand2_2_38_Y & or2_2_12_X) | a22o_2_4_X;  // a31o_2_14 : a31o_2
    assign a31o_2_25_X = (I & inv_2_7_A & nand4_2_5_D) | nand4_2_5_C;  // a31o_2_25 : a31o_2
    assign or3_2_14_X = or3_2_14_A | or3_2_17_B | or3_2_17_C;  // or3_2_14 : or3_2
    assign or3_2_11_A = (or3b_2_0_A & or2_2_9_B & nor2_2_24_Y) | nor3_2_0_Y;  // a31o_2_6 : a31o_2
    assign or4_2_0_B = ~(xor2_2_6_A ^ xor2_2_6_B);  // xnor2_2_10 : xnor2_2
    assign xnor2_2_21_Y = ~(a22o_2_4_B2 ^ xnor2_2_21_B);  // xnor2_2_21 : xnor2_2
    assign or3_2_14_A = (~or2_2_9_B) & (~or2_2_8_B) & or3b_2_0_A & or2_2_9_A;  // and4bb_2_4 : and4bb_2
    assign o21ai_2_5_Y = ~((or2_2_9_A | or2_2_9_B) & or2_2_8_B);  // o21ai_2_5 : o21ai_2
    assign nand3_2_1_Y = ~(or2_2_9_B & or2_2_9_A & or3b_2_0_A);  // nand3_2_1 : nand3_2
    assign mux2_1_1_X = or3_2_3_B ? or4_2_0_C : or3_2_0_X;  // mux2_1_1 : mux2_1
    assign xor2_2_6_A = (xor2_2_8_A & xor2_2_8_B) | nor2_2_21_A;  // a21o_2_5 : a21o_2
    assign o32ai_2_0_Y = ~((o31a_2_0_A1 | o31a_2_0_A2 | and2_2_7_X) & (o32ai_2_0_B1 | or3b_2_0_A));  // o32ai_2_0 : o32ai_2
    assign or2_2_6_X = or3_2_1_C | or2_2_6_B;  // or2_2_6 : or2_2
    assign o21ba_2_0_X = (or2_2_4_A | nand2_2_9_Y) & (~nor2_2_5_Y);  // o21ba_2_0 : o21ba_2
    assign and4_2_0_B = (~nand4_2_0_C) & o21a_2_4_A1;  // and2b_2_1 : and2b_2
    assign or4bb_2_0_X = or4_2_4_A | or4_2_4_C | (~or4_2_4_D) | (~or4_2_4_B);  // or4bb_2_0 : or4bb_2
    assign nor2_2_19_Y = ~(xnor2_2_8_A | xnor2_2_8_B);  // nor2_2_19 : nor2_2
    assign a31o_2_15_X = (or2_2_9_B & inv_2_13_Y & nand2_2_29_Y) | a22oi_2_0_Y;  // a31o_2_15 : a31o_2
    assign o21a_2_28_A2 = ~(I & inv_2_7_A & nand4_2_10_C & nand4_2_10_D);  // nand4_2_10 : nand4_2
    assign or3_2_15_X = or3_2_15_A | or3_2_17_B | or3_2_17_C;  // or3_2_15 : or3_2
    assign a31o_2_7_X = (xor2_2_0_B & xor2_2_9_A & xor2_2_4_A) | or3_2_5_B;  // a31o_2_7 : a31o_2
    assign xnor2_2_22_Y = ~(or2_2_12_A ^ o21ai_2_4_Y);  // xnor2_2_22 : xnor2_2
    assign xnor2_2_11_Y = ~(and4_2_3_C ^ xnor2_2_11_B);  // xnor2_2_11 : xnor2_2
    assign and3_2_10_A = (~and4_2_3_B) & (~or3_2_8_C) & nor3_2_2_B & or3_2_8_B;  // and4bb_2_5 : and4bb_2
    assign o22a_2_3_B1 = ~(inv_2_7_A | nor3b_2_0_B | (~nor2_2_40_A));  // nor3b_2_0 : nor3b_2
    assign mux2_1_2_X = or4_2_0_A ? a22o_2_0_X : or2_2_6_X;  // mux2_1_2 : mux2_1
    assign a21o_2_6_X = (and2_2_7_B & a21o_2_6_A2) | or2_2_9_A;  // a21o_2_6 : a21o_2
    assign or2_2_7_X = or2_2_7_A | I;  // or2_2_7 : or2_2
    assign o21ba_2_1_X = (success | a32o_2_3_B1) & (~or4b_2_8_C);  // o21ba_2_1 : o21ba_2
    assign and4_2_0_C = (~nand4_2_3_C) & o21a_2_5_A1;  // and2b_2_2 : and2b_2
    assign o32a_2_1_B2 = ~((or2_2_4_A | or3_2_2_C | inv_2_0_Y) & or4_2_0_A);  // o31ai_2_0 : o31ai_2
    assign a31o_2_16_X = (I & inv_2_7_A & nand4_2_6_D) | nand4_2_6_C;  // a31o_2_16 : a31o_2
    assign o21a_2_24_A2 = ~(I & inv_2_7_A & nand4_2_11_C & and4b_2_2_X);  // nand4_2_11 : nand4_2
    assign or3_2_16_X = or3_2_16_A | or3_2_17_B | or3_2_17_C;  // or3_2_16 : or3_2
    assign a31o_2_8_X = (inv_2_9_A & inv_2_7_A & xor2_2_7_A) | xor2_2_0_B;  // a31o_2_8 : a31o_2
    assign or2_2_12_B = ~(a22o_2_4_B2 ^ xnor2_2_26_A);  // xnor2_2_23 : xnor2_2
    assign inv_2_9_A = (~or4_2_4_A) & (~or4_2_4_C) & or4_2_4_D & or4_2_4_B;  // and4bb_2_6 : and4bb_2
    assign nor2_2_31_B = ~(or4_2_4_A ^ inv_2_7_A);  // xnor2_2_12 : xnor2_2
    assign o31a_2_2_A3 = ~(or3b_2_0_A | or2_2_9_B | (~or2_2_9_A));  // nor3b_2_1 : nor3b_2
    assign mux2_1_3_X = or2_2_5_A ? mux2_1_0_X : o32a_2_1_X;  // mux2_1_3 : mux2_1
    assign or3_2_10_A = (or3b_2_0_A & nor2_2_24_Y) | or3_2_6_C;  // a21o_2_7 : a21o_2

    // ---- sequential logic (92 flip-flops) ----
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_9_C <= 1'b0;
        else
            nand4_2_9_C <= o21a_2_21_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_27_A1 <= 1'b0;
        else
            o21a_2_27_A1 <= dfrtp_2_70_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            success <= 1'b0;
        else
            success <= a32o_2_4_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_7_C <= 1'b0;
        else
            nand4_2_7_C <= o21a_2_19_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            a32o_2_3_B1 <= 1'b0;
        else
            a32o_2_3_B1 <= a32o_2_3_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_8_C <= 1'b0;
        else
            nand4_2_8_C <= o21a_2_23_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_9_A <= 1'b0;
        else
            or4_2_9_A <= a21o_2_18_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_19_A <= 1'b0;
        else
            xor2_2_19_A <= o22a_2_3_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or2_2_11_B <= 1'b0;
        else
            or2_2_11_B <= or2_2_11_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_20_A <= 1'b0;
        else
            inv_2_20_A <= o21a_2_26_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_19_B <= 1'b0;
        else
            xor2_2_19_B <= a221o_2_2_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_9_A0 <= 1'b0;
        else
            mux2_1_9_A0 <= mux2_1_9_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_13_C <= 1'b0;
        else
            nand4_2_13_C <= o21a_2_25_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_18_A <= 1'b0;
        else
            inv_2_18_A <= o21a_2_20_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_5_A <= 1'b0;
        else
            or4_2_5_A <= a21o_2_13_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_8_A1 <= 1'b0;
        else
            mux2_1_8_A1 <= mux2_1_14_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            a22o_2_2_A2 <= 1'b0;
        else
            a22o_2_2_A2 <= mux2_1_13_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_12_C <= 1'b0;
        else
            nand4_2_12_C <= o21a_2_27_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_23_A1 <= 1'b0;
        else
            o21a_2_23_A1 <= dfrtp_2_63_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            and4_2_3_C <= 1'b0;
        else
            and4_2_3_C <= xnor2_2_11_Y;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_15_A0 <= 1'b0;
        else
            mux2_1_15_A0 <= mux2_1_15_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_19_A1 <= 1'b0;
        else
            mux2_1_19_A1 <= mux2_1_18_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_11_C <= 1'b0;
        else
            nand4_2_11_C <= o21a_2_24_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_28_A1 <= 1'b0;
        else
            o21a_2_28_A1 <= dfrtp_2_64_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_5_C <= 1'b0;
        else
            nand4_2_5_C <= o21a_2_30_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_30_A1 <= 1'b0;
        else
            o21a_2_30_A1 <= nand2b_2_4_Y;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nor3_2_2_A <= 1'b0;
        else
            nor3_2_2_A <= o21a_2_12_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_4_B <= 1'b0;
        else
            or4_2_4_B <= dfrtp_2_43_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_9_A1 <= 1'b0;
        else
            mux2_1_9_A1 <= mux2_1_17_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_19_A <= 1'b0;
        else
            inv_2_19_A <= o21a_2_22_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_17_A <= 1'b0;
        else
            inv_2_17_A <= o21a_2_29_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_16_A <= 1'b0;
        else
            inv_2_16_A <= o21a_2_17_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or3_2_8_C <= 1'b0;
        else
            or3_2_8_C <= xor2_2_10_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            and2b_2_3_B <= 1'b0;
        else
            and2b_2_3_B <= nand2b_2_2_Y;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_12_A1 <= 1'b0;
        else
            mux2_1_12_A1 <= mux2_1_10_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_21_A1 <= 1'b0;
        else
            o21a_2_21_A1 <= dfrtp_2_66_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_7_A <= 1'b0;
        else
            or4_2_7_A <= a21o_2_14_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_6_C <= 1'b0;
        else
            nand4_2_6_C <= o21a_2_18_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_4_A <= 1'b0;
        else
            or4_2_4_A <= nor2_2_31_Y;
    end

    always @(posedge clk) begin
        or2_2_8_B <= dfxtp_2_0_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or3_2_8_A <= 1'b0;
        else
            or3_2_8_A <= nor2_2_30_Y;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_8_A1 <= 1'b0;
        else
            o21a_2_8_A1 <= nand2b_2_3_Y;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_8_A0 <= 1'b0;
        else
            mux2_1_8_A0 <= mux2_1_8_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_24_A1 <= 1'b0;
        else
            o21a_2_24_A1 <= dfrtp_2_67_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_4_C <= 1'b0;
        else
            nand4_2_4_C <= o21a_2_16_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_4_D <= 1'b0;
        else
            or4_2_4_D <= dfrtp_2_45_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_10_C <= 1'b0;
        else
            nand4_2_10_C <= o21a_2_28_X;
    end

    always @(posedge clk) begin
        or2_2_9_A <= dfxtp_2_1_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            and4_2_3_A <= 1'b0;
        else
            and4_2_3_A <= a32o_2_2_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_2_A <= 1'b0;
        else
            or4_2_2_A <= a21o_2_1_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_25_A1 <= 1'b0;
        else
            o21a_2_25_A1 <= dfrtp_2_68_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_19_A1 <= 1'b0;
        else
            o21a_2_19_A1 <= dfrtp_2_57_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_16_A0 <= 1'b0;
        else
            mux2_1_16_A0 <= mux2_1_16_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_4_C <= 1'b0;
        else
            or4_2_4_C <= xor2_2_11_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_8_A <= 1'b0;
        else
            or4_2_8_A <= a21o_2_15_X;
    end

    always @(posedge clk) begin
        or3b_2_0_A <= dfxtp_2_2_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            and4_2_3_B <= 1'b0;
        else
            and4_2_3_B <= dfrtp_2_25_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_4_A1 <= 1'b0;
        else
            o21a_2_4_A1 <= nand2b_2_1_Y;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or2_2_11_A <= 1'b0;
        else
            or2_2_11_A <= a31o_2_13_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_18_A1 <= 1'b0;
        else
            o21a_2_18_A1 <= dfrtp_2_58_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_12_A0 <= 1'b0;
        else
            mux2_1_12_A0 <= mux2_1_12_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_6_A <= 1'b0;
        else
            or4_2_6_A <= a21o_2_16_X;
    end

    always @(posedge clk) begin
        or2_2_9_B <= dfxtp_2_3_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_0_B <= 1'b0;
        else
            xor2_2_0_B <= o211a_2_7_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_14_B <= 1'b0;
        else
            xor2_2_14_B <= a221o_2_4_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or3_2_8_B <= 1'b0;
        else
            or3_2_8_B <= o21a_2_11_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_16_A1 <= 1'b0;
        else
            o21a_2_16_A1 <= dfrtp_2_59_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_11_A <= 1'b0;
        else
            inv_2_11_A <= a31o_2_12_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_7_A <= 1'b0;
        else
            xor2_2_7_A <= mux2_1_5_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            a22o_2_4_B2 <= 1'b0;
        else
            a22o_2_4_B2 <= a31o_2_14_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or2_2_7_A <= 1'b0;
        else
            or2_2_7_A <= a22o_2_1_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            a22o_2_2_B2 <= 1'b0;
        else
            a22o_2_2_B2 <= mux2_1_11_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_6_A <= 1'b0;
        else
            inv_2_6_A <= a31o_2_11_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_9_A <= 1'b0;
        else
            xor2_2_9_A <= xor2_2_9_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            mux2_1_19_A0 <= 1'b0;
        else
            mux2_1_19_A0 <= mux2_1_19_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_4_A <= 1'b0;
        else
            xor2_2_4_A <= o311a_2_1_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_8_A <= 1'b0;
        else
            inv_2_8_A <= dfrtp_2_29_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_17_B <= 1'b1;
        else
            xor2_2_17_B <= dfstp_2_0_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nor3_2_2_B <= 1'b0;
        else
            nor3_2_2_B <= and2b_2_9_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_16_A <= 1'b1;
        else
            xor2_2_16_A <= o221a_2_1_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_0_C <= 1'b0;
        else
            nand4_2_0_C <= o21a_2_4_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            xor2_2_20_A <= 1'b1;
        else
            xor2_2_20_A <= dfstp_2_2_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_1_A <= 1'b0;
        else
            inv_2_1_A <= o21a_2_7_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or2_2_12_A <= 1'b1;
        else
            or2_2_12_A <= o32a_2_3_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_1_A <= 1'b0;
        else
            or4_2_1_A <= a21o_2_0_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            or4_2_3_A <= 1'b0;
        else
            or4_2_3_A <= a21o_2_2_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            o21a_2_5_A1 <= 1'b0;
        else
            o21a_2_5_A1 <= dfrtp_2_4_D;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_2_C <= 1'b0;
        else
            nand4_2_2_C <= o21a_2_8_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_1_C <= 1'b0;
        else
            nand4_2_1_C <= o21a_2_10_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_2_A <= 1'b0;
        else
            inv_2_2_A <= o21a_2_9_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            nand4_2_3_C <= 1'b0;
        else
            nand4_2_3_C <= o21a_2_5_X;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            inv_2_3_A <= 1'b0;
        else
            inv_2_3_A <= o21a_2_6_X;
    end

endmodule
