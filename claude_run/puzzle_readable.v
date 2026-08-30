module puzzle (
    input       I,
    input       clk,
    input       enable,
    input       rst_n,
    output reg  success,
    output      [7:0] O
);

    // wires
    wire sky130_fd_sc_hd__a211o_2_0_X;
    wire sky130_fd_sc_hd__a211o_2_1_X;
    wire sky130_fd_sc_hd__a211o_2_2_X;
    wire sky130_fd_sc_hd__a211o_2_3_X;

    wire sky130_fd_sc_hd__a21o_2_0_X;
    wire sky130_fd_sc_hd__a21o_2_10_X;
    wire sky130_fd_sc_hd__a21o_2_13_X;
    wire sky130_fd_sc_hd__a21o_2_14_X;
    wire sky130_fd_sc_hd__a21o_2_15_X;
    wire sky130_fd_sc_hd__a21o_2_16_X;
    wire sky130_fd_sc_hd__a21o_2_17_X;
    wire sky130_fd_sc_hd__a21o_2_18_X;
    wire sky130_fd_sc_hd__a21o_2_1_X;
    wire sky130_fd_sc_hd__a21o_2_2_X;
    wire sky130_fd_sc_hd__a21o_2_3_A2;
    wire sky130_fd_sc_hd__a21o_2_3_X;
    wire sky130_fd_sc_hd__a21o_2_6_A2;
    wire sky130_fd_sc_hd__a21o_2_6_X;
    wire sky130_fd_sc_hd__a21o_2_8_A2;
    wire sky130_fd_sc_hd__a21o_2_9_X;

    wire sky130_fd_sc_hd__a21oi_2_13_Y;
    wire sky130_fd_sc_hd__a21oi_2_2_Y;
    wire sky130_fd_sc_hd__a21oi_2_5_Y;
    wire sky130_fd_sc_hd__a21oi_2_6_Y;

    wire sky130_fd_sc_hd__a221o_2_0_X;
    wire sky130_fd_sc_hd__a221o_2_1_X;
    wire sky130_fd_sc_hd__a221o_2_2_X;
    wire sky130_fd_sc_hd__a221o_2_4_X;

    wire sky130_fd_sc_hd__a22o_2_0_X;
    wire sky130_fd_sc_hd__a22o_2_13_A1;
    wire sky130_fd_sc_hd__a22o_2_13_X;
    wire sky130_fd_sc_hd__a22o_2_17_X;
    wire sky130_fd_sc_hd__a22o_2_1_X;
    wire sky130_fd_sc_hd__a22o_2_21_B2;
    wire sky130_fd_sc_hd__a22o_2_22_X;
    wire sky130_fd_sc_hd__a22o_2_2_X;
    wire sky130_fd_sc_hd__a22o_2_3_X;
    wire sky130_fd_sc_hd__a22o_2_4_X;
    wire sky130_fd_sc_hd__a22o_2_5_X;
    wire sky130_fd_sc_hd__a22o_2_6_X;
    wire sky130_fd_sc_hd__a22o_2_7_A1;
    wire sky130_fd_sc_hd__a22o_2_7_X;
    wire sky130_fd_sc_hd__a22o_2_8_X;
    wire sky130_fd_sc_hd__a22o_2_9_A1;
    wire sky130_fd_sc_hd__a22o_2_9_X;

    wire sky130_fd_sc_hd__a22oi_2_0_Y;

    wire sky130_fd_sc_hd__a31o_2_0_X;
    wire sky130_fd_sc_hd__a31o_2_11_X;
    wire sky130_fd_sc_hd__a31o_2_12_X;
    wire sky130_fd_sc_hd__a31o_2_13_X;
    wire sky130_fd_sc_hd__a31o_2_14_X;
    wire sky130_fd_sc_hd__a31o_2_15_X;
    wire sky130_fd_sc_hd__a31o_2_16_X;
    wire sky130_fd_sc_hd__a31o_2_17_X;
    wire sky130_fd_sc_hd__a31o_2_18_X;
    wire sky130_fd_sc_hd__a31o_2_19_X;
    wire sky130_fd_sc_hd__a31o_2_1_X;
    wire sky130_fd_sc_hd__a31o_2_20_X;
    wire sky130_fd_sc_hd__a31o_2_21_X;
    wire sky130_fd_sc_hd__a31o_2_22_X;
    wire sky130_fd_sc_hd__a31o_2_23_X;
    wire sky130_fd_sc_hd__a31o_2_24_X;
    wire sky130_fd_sc_hd__a31o_2_25_X;
    wire sky130_fd_sc_hd__a31o_2_2_X;
    wire sky130_fd_sc_hd__a31o_2_3_X;
    wire sky130_fd_sc_hd__a31o_2_4_X;
    wire sky130_fd_sc_hd__a31o_2_5_A2;
    wire sky130_fd_sc_hd__a31o_2_5_A3;
    wire sky130_fd_sc_hd__a31o_2_5_X;
    wire sky130_fd_sc_hd__a31o_2_7_X;
    wire sky130_fd_sc_hd__a31o_2_8_X;
    wire sky130_fd_sc_hd__a31o_2_9_X;

    wire sky130_fd_sc_hd__a32o_2_1_B2;
    wire sky130_fd_sc_hd__a32o_2_1_X;
    wire sky130_fd_sc_hd__a32o_2_2_X;
    wire sky130_fd_sc_hd__a32o_2_3_X;
    wire sky130_fd_sc_hd__a32o_2_4_B2;
    wire sky130_fd_sc_hd__a32o_2_4_X;

    wire sky130_fd_sc_hd__a41oi_2_0_Y;

    wire sky130_fd_sc_hd__and2_2_15_X;
    wire sky130_fd_sc_hd__and2_2_2_A;
    wire sky130_fd_sc_hd__and2_2_2_X;
    wire sky130_fd_sc_hd__and2_2_7_B;
    wire sky130_fd_sc_hd__and2_2_7_X;
    wire sky130_fd_sc_hd__and2_2_8_A;
    wire sky130_fd_sc_hd__and2_2_8_B;
    wire sky130_fd_sc_hd__and2_2_8_X;

    wire sky130_fd_sc_hd__and2b_2_16_X;
    wire sky130_fd_sc_hd__and2b_2_19_X;
    wire sky130_fd_sc_hd__and2b_2_6_X;
    wire sky130_fd_sc_hd__and2b_2_9_B;
    wire sky130_fd_sc_hd__and2b_2_9_X;

    wire sky130_fd_sc_hd__and3_2_0_C;
    wire sky130_fd_sc_hd__and3_2_0_X;
    wire sky130_fd_sc_hd__and3_2_10_A;
    wire sky130_fd_sc_hd__and3_2_10_B;
    wire sky130_fd_sc_hd__and3_2_11_X;
    wire sky130_fd_sc_hd__and3_2_12_A;
    wire sky130_fd_sc_hd__and3_2_12_B;
    wire sky130_fd_sc_hd__and3_2_12_C;
    wire sky130_fd_sc_hd__and3_2_13_C;
    wire sky130_fd_sc_hd__and3_2_16_X;
    wire sky130_fd_sc_hd__and3_2_17_C;
    wire sky130_fd_sc_hd__and3_2_17_X;
    wire sky130_fd_sc_hd__and3_2_1_C;
    wire sky130_fd_sc_hd__and3_2_1_X;
    wire sky130_fd_sc_hd__and3_2_25_C;
    wire sky130_fd_sc_hd__and3_2_2_A;
    wire sky130_fd_sc_hd__and3_2_2_B;
    wire sky130_fd_sc_hd__and3_2_2_C;
    wire sky130_fd_sc_hd__and3_2_3_B;
    wire sky130_fd_sc_hd__and3_2_3_C;
    wire sky130_fd_sc_hd__and3_2_3_X;
    wire sky130_fd_sc_hd__and3_2_4_A;
    wire sky130_fd_sc_hd__and3_2_4_B;
    wire sky130_fd_sc_hd__and3_2_4_X;
    wire sky130_fd_sc_hd__and3_2_5_A;
    wire sky130_fd_sc_hd__and3_2_5_B;
    wire sky130_fd_sc_hd__and3_2_5_C;
    wire sky130_fd_sc_hd__and3_2_6_C;
    wire sky130_fd_sc_hd__and3_2_6_X;
    wire sky130_fd_sc_hd__and3_2_7_C;
    wire sky130_fd_sc_hd__and3_2_7_X;

    wire sky130_fd_sc_hd__and3b_2_0_C;
    wire sky130_fd_sc_hd__and3b_2_1_X;
    wire sky130_fd_sc_hd__and3b_2_2_X;

    wire sky130_fd_sc_hd__and4_2_0_A;
    wire sky130_fd_sc_hd__and4_2_0_B;
    wire sky130_fd_sc_hd__and4_2_0_C;
    wire sky130_fd_sc_hd__and4_2_0_D;
    wire sky130_fd_sc_hd__and4_2_0_X;
    wire sky130_fd_sc_hd__and4_2_1_A;
    wire sky130_fd_sc_hd__and4_2_1_B;
    wire sky130_fd_sc_hd__and4_2_1_C;
    wire sky130_fd_sc_hd__and4_2_1_D;
    wire sky130_fd_sc_hd__and4_2_1_X;
    wire sky130_fd_sc_hd__and4_2_3_X;
    wire sky130_fd_sc_hd__and4_2_4_B;
    wire sky130_fd_sc_hd__and4_2_4_D;
    wire sky130_fd_sc_hd__and4_2_4_X;
    wire sky130_fd_sc_hd__and4_2_5_A;
    wire sky130_fd_sc_hd__and4_2_5_B;
    wire sky130_fd_sc_hd__and4_2_5_C;
    wire sky130_fd_sc_hd__and4_2_5_D;
    wire sky130_fd_sc_hd__and4_2_5_X;
    wire sky130_fd_sc_hd__and4_2_6_A;
    wire sky130_fd_sc_hd__and4_2_6_B;
    wire sky130_fd_sc_hd__and4_2_6_C;
    wire sky130_fd_sc_hd__and4_2_6_D;
    wire sky130_fd_sc_hd__and4_2_6_X;
    wire sky130_fd_sc_hd__and4_2_7_X;

    wire sky130_fd_sc_hd__and4b_2_2_X;
    wire sky130_fd_sc_hd__and4b_2_3_D;
    wire sky130_fd_sc_hd__and4b_2_3_X;

    wire sky130_fd_sc_hd__and4bb_2_0_X;

    wire sky130_fd_sc_hd__buf_2_0_X;

    wire sky130_fd_sc_hd__clkbuf_4_0_X;
    wire sky130_fd_sc_hd__clkbuf_4_10_X;
    wire sky130_fd_sc_hd__clkbuf_4_11_X;
    wire sky130_fd_sc_hd__clkbuf_4_12_X;
    wire sky130_fd_sc_hd__clkbuf_4_13_X;
    wire sky130_fd_sc_hd__clkbuf_4_14_X;
    wire sky130_fd_sc_hd__clkbuf_4_1_X;
    wire sky130_fd_sc_hd__clkbuf_4_2_X;
    wire sky130_fd_sc_hd__clkbuf_4_3_X;
    wire sky130_fd_sc_hd__clkbuf_4_4_X;
    wire sky130_fd_sc_hd__clkbuf_4_5_X;
    wire sky130_fd_sc_hd__clkbuf_4_6_X;
    wire sky130_fd_sc_hd__clkbuf_4_7_X;
    wire sky130_fd_sc_hd__clkbuf_4_8_X;
    wire sky130_fd_sc_hd__clkbuf_4_9_A;
    wire sky130_fd_sc_hd__clkbuf_4_9_X;

    wire sky130_fd_sc_hd__clkbuf_8_0_X;
    wire sky130_fd_sc_hd__clkbuf_8_10_X;
    wire sky130_fd_sc_hd__clkbuf_8_11_X;
    wire sky130_fd_sc_hd__clkbuf_8_1_X;
    wire sky130_fd_sc_hd__clkbuf_8_2_X;
    wire sky130_fd_sc_hd__clkbuf_8_3_X;
    wire sky130_fd_sc_hd__clkbuf_8_4_X;
    wire sky130_fd_sc_hd__clkbuf_8_5_X;
    wire sky130_fd_sc_hd__clkbuf_8_6_X;
    wire sky130_fd_sc_hd__clkbuf_8_7_X;
    wire sky130_fd_sc_hd__clkbuf_8_8_X;
    wire sky130_fd_sc_hd__clkbuf_8_9_A;
    wire sky130_fd_sc_hd__clkbuf_8_9_X;

    wire sky130_fd_sc_hd__conb_1_0_HI;
    wire sky130_fd_sc_hd__conb_1_0_LO;
    wire sky130_fd_sc_hd__conb_1_1_HI;
    wire sky130_fd_sc_hd__conb_1_2_HI;
    wire sky130_fd_sc_hd__conb_1_2_LO;
    wire sky130_fd_sc_hd__conb_1_3_HI;
    wire sky130_fd_sc_hd__conb_1_3_LO;
    wire sky130_fd_sc_hd__conb_1_4_HI;
    wire sky130_fd_sc_hd__conb_1_4_LO;
    wire sky130_fd_sc_hd__conb_1_5_HI;
    wire sky130_fd_sc_hd__conb_1_5_LO;

    wire sky130_fd_sc_hd__dfrtp_2_25_D;
    wire sky130_fd_sc_hd__dfrtp_2_29_D;
    wire sky130_fd_sc_hd__dfrtp_2_43_D;
    wire sky130_fd_sc_hd__dfrtp_2_45_D;
    wire sky130_fd_sc_hd__dfrtp_2_4_D;
    wire sky130_fd_sc_hd__dfrtp_2_57_D;
    wire sky130_fd_sc_hd__dfrtp_2_58_D;
    wire sky130_fd_sc_hd__dfrtp_2_59_D;
    wire sky130_fd_sc_hd__dfrtp_2_63_D;
    wire sky130_fd_sc_hd__dfrtp_2_64_D;
    wire sky130_fd_sc_hd__dfrtp_2_66_D;
    wire sky130_fd_sc_hd__dfrtp_2_67_D;
    wire sky130_fd_sc_hd__dfrtp_2_68_D;
    wire sky130_fd_sc_hd__dfrtp_2_70_D;
    wire sky130_fd_sc_hd__dfrtp_2_8_CLK;

    wire sky130_fd_sc_hd__dfstp_2_0_D;
    wire sky130_fd_sc_hd__dfstp_2_2_D;

    wire sky130_fd_sc_hd__dfxtp_2_0_D;
    wire sky130_fd_sc_hd__dfxtp_2_1_D;
    wire sky130_fd_sc_hd__dfxtp_2_2_CLK;
    wire sky130_fd_sc_hd__dfxtp_2_2_D;
    wire sky130_fd_sc_hd__dfxtp_2_3_CLK;
    wire sky130_fd_sc_hd__dfxtp_2_3_D;

    wire sky130_fd_sc_hd__inv_2_0_Y;
    wire sky130_fd_sc_hd__inv_2_10_A;
    wire sky130_fd_sc_hd__inv_2_10_Y;
    wire sky130_fd_sc_hd__inv_2_12_A;
    wire sky130_fd_sc_hd__inv_2_12_Y;
    wire sky130_fd_sc_hd__inv_2_13_Y;
    wire sky130_fd_sc_hd__inv_2_14_Y;
    wire sky130_fd_sc_hd__inv_2_15_Y;
    wire sky130_fd_sc_hd__inv_2_21_Y;
    wire sky130_fd_sc_hd__inv_2_22_Y;
    wire sky130_fd_sc_hd__inv_2_23_A;
    wire sky130_fd_sc_hd__inv_2_23_Y;
    wire sky130_fd_sc_hd__inv_2_4_A;
    wire sky130_fd_sc_hd__inv_2_4_Y;
    wire sky130_fd_sc_hd__inv_2_5_A;
    wire sky130_fd_sc_hd__inv_2_5_Y;
    wire sky130_fd_sc_hd__inv_2_6_Y;
    wire sky130_fd_sc_hd__inv_2_7_A;
    wire sky130_fd_sc_hd__inv_2_7_Y;
    wire sky130_fd_sc_hd__inv_2_8_Y;
    wire sky130_fd_sc_hd__inv_2_9_A;
    wire sky130_fd_sc_hd__inv_2_9_Y;

    wire sky130_fd_sc_hd__mux2_1_0_X;
    wire sky130_fd_sc_hd__mux2_1_10_X;
    wire sky130_fd_sc_hd__mux2_1_11_X;
    wire sky130_fd_sc_hd__mux2_1_12_X;
    wire sky130_fd_sc_hd__mux2_1_13_X;
    wire sky130_fd_sc_hd__mux2_1_14_X;
    wire sky130_fd_sc_hd__mux2_1_15_X;
    wire sky130_fd_sc_hd__mux2_1_16_X;
    wire sky130_fd_sc_hd__mux2_1_17_X;
    wire sky130_fd_sc_hd__mux2_1_18_X;
    wire sky130_fd_sc_hd__mux2_1_19_X;
    wire sky130_fd_sc_hd__mux2_1_1_X;
    wire sky130_fd_sc_hd__mux2_1_20_X;
    wire sky130_fd_sc_hd__mux2_1_2_X;
    wire sky130_fd_sc_hd__mux2_1_3_X;
    wire sky130_fd_sc_hd__mux2_1_4_S;
    wire sky130_fd_sc_hd__mux2_1_4_X;
    wire sky130_fd_sc_hd__mux2_1_5_A1;
    wire sky130_fd_sc_hd__mux2_1_5_X;
    wire sky130_fd_sc_hd__mux2_1_6_X;
    wire sky130_fd_sc_hd__mux2_1_7_A0;
    wire sky130_fd_sc_hd__mux2_1_7_X;
    wire sky130_fd_sc_hd__mux2_1_8_X;
    wire sky130_fd_sc_hd__mux2_1_9_X;

    wire sky130_fd_sc_hd__nand2_2_29_Y;
    wire sky130_fd_sc_hd__nand2_2_2_Y;
    wire sky130_fd_sc_hd__nand2_2_31_A;
    wire sky130_fd_sc_hd__nand2_2_38_Y;
    wire sky130_fd_sc_hd__nand2_2_3_Y;
    wire sky130_fd_sc_hd__nand2_2_5_Y;
    wire sky130_fd_sc_hd__nand2_2_9_Y;

    wire sky130_fd_sc_hd__nand2b_2_1_Y;
    wire sky130_fd_sc_hd__nand2b_2_2_Y;
    wire sky130_fd_sc_hd__nand2b_2_3_Y;
    wire sky130_fd_sc_hd__nand2b_2_4_Y;
    wire sky130_fd_sc_hd__nand2b_2_8_Y;

    wire sky130_fd_sc_hd__nand3_2_0_Y;
    wire sky130_fd_sc_hd__nand3_2_1_Y;

    wire sky130_fd_sc_hd__nand4_2_10_D;
    wire sky130_fd_sc_hd__nand4_2_12_D;
    wire sky130_fd_sc_hd__nand4_2_13_D;
    wire sky130_fd_sc_hd__nand4_2_1_D;
    wire sky130_fd_sc_hd__nand4_2_1_Y;
    wire sky130_fd_sc_hd__nand4_2_2_D;
    wire sky130_fd_sc_hd__nand4_2_3_D;
    wire sky130_fd_sc_hd__nand4_2_4_D;
    wire sky130_fd_sc_hd__nand4_2_4_Y;
    wire sky130_fd_sc_hd__nand4_2_5_D;
    wire sky130_fd_sc_hd__nand4_2_5_Y;
    wire sky130_fd_sc_hd__nand4_2_6_D;
    wire sky130_fd_sc_hd__nand4_2_6_Y;
    wire sky130_fd_sc_hd__nand4_2_7_Y;
    wire sky130_fd_sc_hd__nand4_2_8_D;
    wire sky130_fd_sc_hd__nand4_2_8_Y;
    wire sky130_fd_sc_hd__nand4_2_9_D;
    wire sky130_fd_sc_hd__nand4_2_9_Y;

    wire sky130_fd_sc_hd__nor2_2_0_B;
    wire sky130_fd_sc_hd__nor2_2_19_Y;
    wire sky130_fd_sc_hd__nor2_2_20_A;
    wire sky130_fd_sc_hd__nor2_2_20_Y;
    wire sky130_fd_sc_hd__nor2_2_21_A;
    wire sky130_fd_sc_hd__nor2_2_23_Y;
    wire sky130_fd_sc_hd__nor2_2_24_Y;
    wire sky130_fd_sc_hd__nor2_2_26_Y;
    wire sky130_fd_sc_hd__nor2_2_29_Y;
    wire sky130_fd_sc_hd__nor2_2_30_B;
    wire sky130_fd_sc_hd__nor2_2_30_Y;
    wire sky130_fd_sc_hd__nor2_2_31_B;
    wire sky130_fd_sc_hd__nor2_2_31_Y;
    wire sky130_fd_sc_hd__nor2_2_32_B;
    wire sky130_fd_sc_hd__nor2_2_32_Y;
    wire sky130_fd_sc_hd__nor2_2_33_Y;
    wire sky130_fd_sc_hd__nor2_2_34_Y;
    wire sky130_fd_sc_hd__nor2_2_39_Y;
    wire sky130_fd_sc_hd__nor2_2_3_B;
    wire sky130_fd_sc_hd__nor2_2_3_Y;
    wire sky130_fd_sc_hd__nor2_2_40_A;
    wire sky130_fd_sc_hd__nor2_2_40_Y;
    wire sky130_fd_sc_hd__nor2_2_41_Y;
    wire sky130_fd_sc_hd__nor2_2_42_Y;
    wire sky130_fd_sc_hd__nor2_2_43_Y;
    wire sky130_fd_sc_hd__nor2_2_44_Y;
    wire sky130_fd_sc_hd__nor2_2_45_Y;
    wire sky130_fd_sc_hd__nor2_2_46_A;
    wire sky130_fd_sc_hd__nor2_2_46_B;
    wire sky130_fd_sc_hd__nor2_2_46_Y;
    wire sky130_fd_sc_hd__nor2_2_4_Y;
    wire sky130_fd_sc_hd__nor2_2_5_A;
    wire sky130_fd_sc_hd__nor2_2_5_Y;
    wire sky130_fd_sc_hd__nor2_2_6_Y;
    wire sky130_fd_sc_hd__nor2_2_8_A;
    wire sky130_fd_sc_hd__nor2_2_9_B;

    wire sky130_fd_sc_hd__nor3_2_0_Y;
    wire sky130_fd_sc_hd__nor3_2_1_B;
    wire sky130_fd_sc_hd__nor3_2_1_C;
    wire sky130_fd_sc_hd__nor3_2_1_Y;
    wire sky130_fd_sc_hd__nor3_2_2_Y;
    wire sky130_fd_sc_hd__nor3_2_3_A;
    wire sky130_fd_sc_hd__nor3_2_3_B;
    wire sky130_fd_sc_hd__nor3_2_3_C;
    wire sky130_fd_sc_hd__nor3_2_3_Y;

    wire sky130_fd_sc_hd__nor3b_2_0_B;
    wire sky130_fd_sc_hd__nor3b_2_2_Y;
    wire sky130_fd_sc_hd__nor3b_2_3_Y;

    wire sky130_fd_sc_hd__nor4_2_0_Y;
    wire sky130_fd_sc_hd__nor4_2_1_Y;

    wire sky130_fd_sc_hd__o211a_2_0_X;
    wire sky130_fd_sc_hd__o211a_2_10_X;
    wire sky130_fd_sc_hd__o211a_2_7_X;
    wire sky130_fd_sc_hd__o211a_2_8_X;
    wire sky130_fd_sc_hd__o211a_2_9_X;

    wire sky130_fd_sc_hd__o211ai_2_0_Y;

    wire sky130_fd_sc_hd__o21a_2_10_X;
    wire sky130_fd_sc_hd__o21a_2_11_X;
    wire sky130_fd_sc_hd__o21a_2_12_A1;
    wire sky130_fd_sc_hd__o21a_2_12_X;
    wire sky130_fd_sc_hd__o21a_2_13_X;
    wire sky130_fd_sc_hd__o21a_2_14_B1;
    wire sky130_fd_sc_hd__o21a_2_14_X;
    wire sky130_fd_sc_hd__o21a_2_15_A2;
    wire sky130_fd_sc_hd__o21a_2_15_X;
    wire sky130_fd_sc_hd__o21a_2_16_X;
    wire sky130_fd_sc_hd__o21a_2_17_X;
    wire sky130_fd_sc_hd__o21a_2_18_X;
    wire sky130_fd_sc_hd__o21a_2_19_X;
    wire sky130_fd_sc_hd__o21a_2_1_X;
    wire sky130_fd_sc_hd__o21a_2_20_X;
    wire sky130_fd_sc_hd__o21a_2_21_X;
    wire sky130_fd_sc_hd__o21a_2_22_X;
    wire sky130_fd_sc_hd__o21a_2_23_X;
    wire sky130_fd_sc_hd__o21a_2_24_A2;
    wire sky130_fd_sc_hd__o21a_2_24_X;
    wire sky130_fd_sc_hd__o21a_2_25_A2;
    wire sky130_fd_sc_hd__o21a_2_25_X;
    wire sky130_fd_sc_hd__o21a_2_26_X;
    wire sky130_fd_sc_hd__o21a_2_27_A2;
    wire sky130_fd_sc_hd__o21a_2_27_X;
    wire sky130_fd_sc_hd__o21a_2_28_A2;
    wire sky130_fd_sc_hd__o21a_2_28_X;
    wire sky130_fd_sc_hd__o21a_2_29_X;
    wire sky130_fd_sc_hd__o21a_2_30_X;
    wire sky130_fd_sc_hd__o21a_2_3_A2;
    wire sky130_fd_sc_hd__o21a_2_3_X;
    wire sky130_fd_sc_hd__o21a_2_4_A2;
    wire sky130_fd_sc_hd__o21a_2_4_X;
    wire sky130_fd_sc_hd__o21a_2_5_A2;
    wire sky130_fd_sc_hd__o21a_2_5_X;
    wire sky130_fd_sc_hd__o21a_2_6_A2;
    wire sky130_fd_sc_hd__o21a_2_6_X;
    wire sky130_fd_sc_hd__o21a_2_7_A2;
    wire sky130_fd_sc_hd__o21a_2_7_X;
    wire sky130_fd_sc_hd__o21a_2_8_A2;
    wire sky130_fd_sc_hd__o21a_2_8_X;
    wire sky130_fd_sc_hd__o21a_2_9_A2;
    wire sky130_fd_sc_hd__o21a_2_9_X;

    wire sky130_fd_sc_hd__o21ai_2_1_Y;
    wire sky130_fd_sc_hd__o21ai_2_2_Y;
    wire sky130_fd_sc_hd__o21ai_2_3_B1;
    wire sky130_fd_sc_hd__o21ai_2_3_Y;
    wire sky130_fd_sc_hd__o21ai_2_4_Y;
    wire sky130_fd_sc_hd__o21ai_2_5_Y;

    wire sky130_fd_sc_hd__o21ba_2_0_X;
    wire sky130_fd_sc_hd__o21ba_2_1_X;

    wire sky130_fd_sc_hd__o21bai_2_0_Y;

    wire sky130_fd_sc_hd__o221a_2_0_X;
    wire sky130_fd_sc_hd__o221a_2_1_X;
    wire sky130_fd_sc_hd__o221a_2_2_B2;
    wire sky130_fd_sc_hd__o221a_2_2_C1;
    wire sky130_fd_sc_hd__o221a_2_2_X;

    wire sky130_fd_sc_hd__o22a_2_0_X;
    wire sky130_fd_sc_hd__o22a_2_2_X;
    wire sky130_fd_sc_hd__o22a_2_3_B1;
    wire sky130_fd_sc_hd__o22a_2_3_B2;
    wire sky130_fd_sc_hd__o22a_2_3_X;

    wire sky130_fd_sc_hd__o22ai_2_0_Y;
    wire sky130_fd_sc_hd__o22ai_2_1_Y;

    wire sky130_fd_sc_hd__o311a_2_0_C1;
    wire sky130_fd_sc_hd__o311a_2_0_X;
    wire sky130_fd_sc_hd__o311a_2_1_X;

    wire sky130_fd_sc_hd__o31a_2_0_A1;
    wire sky130_fd_sc_hd__o31a_2_0_A2;
    wire sky130_fd_sc_hd__o31a_2_0_B1;
    wire sky130_fd_sc_hd__o31a_2_0_X;
    wire sky130_fd_sc_hd__o31a_2_10_X;
    wire sky130_fd_sc_hd__o31a_2_1_A3;
    wire sky130_fd_sc_hd__o31a_2_1_B1;
    wire sky130_fd_sc_hd__o31a_2_1_X;
    wire sky130_fd_sc_hd__o31a_2_2_A1;
    wire sky130_fd_sc_hd__o31a_2_2_A2;
    wire sky130_fd_sc_hd__o31a_2_2_A3;
    wire sky130_fd_sc_hd__o31a_2_2_X;
    wire sky130_fd_sc_hd__o31a_2_3_A3;
    wire sky130_fd_sc_hd__o31a_2_3_X;
    wire sky130_fd_sc_hd__o31a_2_4_X;
    wire sky130_fd_sc_hd__o31a_2_5_A2;
    wire sky130_fd_sc_hd__o31a_2_5_X;
    wire sky130_fd_sc_hd__o31a_2_6_A2;
    wire sky130_fd_sc_hd__o31a_2_6_A3;
    wire sky130_fd_sc_hd__o31a_2_6_X;
    wire sky130_fd_sc_hd__o31a_2_7_A2;
    wire sky130_fd_sc_hd__o31a_2_7_A3;
    wire sky130_fd_sc_hd__o31a_2_7_X;
    wire sky130_fd_sc_hd__o31a_2_8_A2;
    wire sky130_fd_sc_hd__o31a_2_8_A3;
    wire sky130_fd_sc_hd__o31a_2_8_X;
    wire sky130_fd_sc_hd__o31a_2_9_A1;
    wire sky130_fd_sc_hd__o31a_2_9_A2;
    wire sky130_fd_sc_hd__o31a_2_9_A3;
    wire sky130_fd_sc_hd__o31a_2_9_X;

    wire sky130_fd_sc_hd__o31ai_2_1_Y;

    wire sky130_fd_sc_hd__o32a_2_0_A3;
    wire sky130_fd_sc_hd__o32a_2_0_X;
    wire sky130_fd_sc_hd__o32a_2_1_A3;
    wire sky130_fd_sc_hd__o32a_2_1_B1;
    wire sky130_fd_sc_hd__o32a_2_1_B2;
    wire sky130_fd_sc_hd__o32a_2_1_X;
    wire sky130_fd_sc_hd__o32a_2_2_A2;
    wire sky130_fd_sc_hd__o32a_2_2_A3;
    wire sky130_fd_sc_hd__o32a_2_2_B1;
    wire sky130_fd_sc_hd__o32a_2_2_B2;
    wire sky130_fd_sc_hd__o32a_2_2_X;
    wire sky130_fd_sc_hd__o32a_2_3_A1;
    wire sky130_fd_sc_hd__o32a_2_3_A2;
    wire sky130_fd_sc_hd__o32a_2_3_A3;
    wire sky130_fd_sc_hd__o32a_2_3_X;

    wire sky130_fd_sc_hd__o32ai_2_0_B1;
    wire sky130_fd_sc_hd__o32ai_2_0_Y;

    wire sky130_fd_sc_hd__or2_2_0_B;
    wire sky130_fd_sc_hd__or2_2_10_A;
    wire sky130_fd_sc_hd__or2_2_10_X;
    wire sky130_fd_sc_hd__or2_2_11_X;
    wire sky130_fd_sc_hd__or2_2_12_B;
    wire sky130_fd_sc_hd__or2_2_12_X;
    wire sky130_fd_sc_hd__or2_2_1_A;
    wire sky130_fd_sc_hd__or2_2_1_B;
    wire sky130_fd_sc_hd__or2_2_1_X;
    wire sky130_fd_sc_hd__or2_2_2_A;
    wire sky130_fd_sc_hd__or2_2_3_X;
    wire sky130_fd_sc_hd__or2_2_4_A;
    wire sky130_fd_sc_hd__or2_2_4_B;
    wire sky130_fd_sc_hd__or2_2_4_X;
    wire sky130_fd_sc_hd__or2_2_5_A;
    wire sky130_fd_sc_hd__or2_2_5_X;
    wire sky130_fd_sc_hd__or2_2_6_B;
    wire sky130_fd_sc_hd__or2_2_6_X;
    wire sky130_fd_sc_hd__or2_2_7_X;
    wire sky130_fd_sc_hd__or2_2_8_X;
    wire sky130_fd_sc_hd__or2_2_9_X;

    wire sky130_fd_sc_hd__or3_2_0_B;
    wire sky130_fd_sc_hd__or3_2_0_X;
    wire sky130_fd_sc_hd__or3_2_10_A;
    wire sky130_fd_sc_hd__or3_2_10_X;
    wire sky130_fd_sc_hd__or3_2_11_A;
    wire sky130_fd_sc_hd__or3_2_11_X;
    wire sky130_fd_sc_hd__or3_2_12_X;
    wire sky130_fd_sc_hd__or3_2_13_A;
    wire sky130_fd_sc_hd__or3_2_13_X;
    wire sky130_fd_sc_hd__or3_2_14_A;
    wire sky130_fd_sc_hd__or3_2_14_X;
    wire sky130_fd_sc_hd__or3_2_15_A;
    wire sky130_fd_sc_hd__or3_2_15_X;
    wire sky130_fd_sc_hd__or3_2_16_A;
    wire sky130_fd_sc_hd__or3_2_16_X;
    wire sky130_fd_sc_hd__or3_2_17_A;
    wire sky130_fd_sc_hd__or3_2_17_B;
    wire sky130_fd_sc_hd__or3_2_17_C;
    wire sky130_fd_sc_hd__or3_2_17_X;
    wire sky130_fd_sc_hd__or3_2_1_B;
    wire sky130_fd_sc_hd__or3_2_1_C;
    wire sky130_fd_sc_hd__or3_2_1_X;
    wire sky130_fd_sc_hd__or3_2_2_B;
    wire sky130_fd_sc_hd__or3_2_2_C;
    wire sky130_fd_sc_hd__or3_2_3_A;
    wire sky130_fd_sc_hd__or3_2_3_B;
    wire sky130_fd_sc_hd__or3_2_3_C;
    wire sky130_fd_sc_hd__or3_2_3_X;
    wire sky130_fd_sc_hd__or3_2_4_B;
    wire sky130_fd_sc_hd__or3_2_4_C;
    wire sky130_fd_sc_hd__or3_2_4_X;
    wire sky130_fd_sc_hd__or3_2_5_A;
    wire sky130_fd_sc_hd__or3_2_5_B;
    wire sky130_fd_sc_hd__or3_2_5_C;
    wire sky130_fd_sc_hd__or3_2_5_X;
    wire sky130_fd_sc_hd__or3_2_6_A;
    wire sky130_fd_sc_hd__or3_2_6_B;
    wire sky130_fd_sc_hd__or3_2_6_C;
    wire sky130_fd_sc_hd__or3_2_6_X;
    wire sky130_fd_sc_hd__or3_2_7_A;
    wire sky130_fd_sc_hd__or3_2_7_B;
    wire sky130_fd_sc_hd__or3_2_7_C;
    wire sky130_fd_sc_hd__or3_2_7_X;
    wire sky130_fd_sc_hd__or3_2_8_X;
    wire sky130_fd_sc_hd__or3_2_9_A;
    wire sky130_fd_sc_hd__or3_2_9_B;
    wire sky130_fd_sc_hd__or3_2_9_C;
    wire sky130_fd_sc_hd__or3_2_9_X;

    wire sky130_fd_sc_hd__or3b_2_0_X;

    wire sky130_fd_sc_hd__or4_2_0_A;
    wire sky130_fd_sc_hd__or4_2_0_B;
    wire sky130_fd_sc_hd__or4_2_0_C;
    wire sky130_fd_sc_hd__or4_2_0_D;
    wire sky130_fd_sc_hd__or4_2_0_X;
    wire sky130_fd_sc_hd__or4_2_1_B;
    wire sky130_fd_sc_hd__or4_2_1_C;
    wire sky130_fd_sc_hd__or4_2_1_D;
    wire sky130_fd_sc_hd__or4_2_1_X;
    wire sky130_fd_sc_hd__or4_2_2_B;
    wire sky130_fd_sc_hd__or4_2_2_C;
    wire sky130_fd_sc_hd__or4_2_2_D;
    wire sky130_fd_sc_hd__or4_2_2_X;
    wire sky130_fd_sc_hd__or4_2_3_B;
    wire sky130_fd_sc_hd__or4_2_3_C;
    wire sky130_fd_sc_hd__or4_2_3_D;
    wire sky130_fd_sc_hd__or4_2_3_X;
    wire sky130_fd_sc_hd__or4_2_4_X;
    wire sky130_fd_sc_hd__or4_2_5_B;
    wire sky130_fd_sc_hd__or4_2_5_C;
    wire sky130_fd_sc_hd__or4_2_5_D;
    wire sky130_fd_sc_hd__or4_2_5_X;
    wire sky130_fd_sc_hd__or4_2_6_B;
    wire sky130_fd_sc_hd__or4_2_6_C;
    wire sky130_fd_sc_hd__or4_2_6_D;
    wire sky130_fd_sc_hd__or4_2_6_X;
    wire sky130_fd_sc_hd__or4_2_7_B;
    wire sky130_fd_sc_hd__or4_2_7_C;
    wire sky130_fd_sc_hd__or4_2_7_D;
    wire sky130_fd_sc_hd__or4_2_7_X;
    wire sky130_fd_sc_hd__or4_2_8_B;
    wire sky130_fd_sc_hd__or4_2_8_C;
    wire sky130_fd_sc_hd__or4_2_8_D;
    wire sky130_fd_sc_hd__or4_2_8_X;
    wire sky130_fd_sc_hd__or4_2_9_B;
    wire sky130_fd_sc_hd__or4_2_9_C;
    wire sky130_fd_sc_hd__or4_2_9_D;
    wire sky130_fd_sc_hd__or4_2_9_X;

    wire sky130_fd_sc_hd__or4b_2_2_C;
    wire sky130_fd_sc_hd__or4b_2_3_A;
    wire sky130_fd_sc_hd__or4b_2_3_B;
    wire sky130_fd_sc_hd__or4b_2_3_C;
    wire sky130_fd_sc_hd__or4b_2_8_A;
    wire sky130_fd_sc_hd__or4b_2_8_C;
    wire sky130_fd_sc_hd__or4b_2_8_X;

    wire sky130_fd_sc_hd__or4bb_2_0_X;

    wire sky130_fd_sc_hd__xnor2_2_0_A;
    wire sky130_fd_sc_hd__xnor2_2_11_B;
    wire sky130_fd_sc_hd__xnor2_2_11_Y;
    wire sky130_fd_sc_hd__xnor2_2_13_Y;
    wire sky130_fd_sc_hd__xnor2_2_14_B;
    wire sky130_fd_sc_hd__xnor2_2_14_Y;
    wire sky130_fd_sc_hd__xnor2_2_18_Y;
    wire sky130_fd_sc_hd__xnor2_2_19_Y;
    wire sky130_fd_sc_hd__xnor2_2_21_B;
    wire sky130_fd_sc_hd__xnor2_2_21_Y;
    wire sky130_fd_sc_hd__xnor2_2_22_Y;
    wire sky130_fd_sc_hd__xnor2_2_26_A;
    wire sky130_fd_sc_hd__xnor2_2_26_B;
    wire sky130_fd_sc_hd__xnor2_2_28_Y;
    wire sky130_fd_sc_hd__xnor2_2_4_A;
    wire sky130_fd_sc_hd__xnor2_2_5_B;
    wire sky130_fd_sc_hd__xnor2_2_6_A;
    wire sky130_fd_sc_hd__xnor2_2_6_Y;
    wire sky130_fd_sc_hd__xnor2_2_8_A;
    wire sky130_fd_sc_hd__xnor2_2_8_B;

    wire sky130_fd_sc_hd__xor2_2_0_X;
    wire sky130_fd_sc_hd__xor2_2_10_X;
    wire sky130_fd_sc_hd__xor2_2_11_B;
    wire sky130_fd_sc_hd__xor2_2_11_X;
    wire sky130_fd_sc_hd__xor2_2_12_X;
    wire sky130_fd_sc_hd__xor2_2_13_X;
    wire sky130_fd_sc_hd__xor2_2_14_X;
    wire sky130_fd_sc_hd__xor2_2_15_X;
    wire sky130_fd_sc_hd__xor2_2_16_X;
    wire sky130_fd_sc_hd__xor2_2_17_X;
    wire sky130_fd_sc_hd__xor2_2_18_X;
    wire sky130_fd_sc_hd__xor2_2_19_X;
    wire sky130_fd_sc_hd__xor2_2_1_B;
    wire sky130_fd_sc_hd__xor2_2_1_X;
    wire sky130_fd_sc_hd__xor2_2_20_B;
    wire sky130_fd_sc_hd__xor2_2_20_X;
    wire sky130_fd_sc_hd__xor2_2_2_A;
    wire sky130_fd_sc_hd__xor2_2_2_B;
    wire sky130_fd_sc_hd__xor2_2_3_A;
    wire sky130_fd_sc_hd__xor2_2_3_B;
    wire sky130_fd_sc_hd__xor2_2_4_X;
    wire sky130_fd_sc_hd__xor2_2_5_A;
    wire sky130_fd_sc_hd__xor2_2_5_B;
    wire sky130_fd_sc_hd__xor2_2_5_X;
    wire sky130_fd_sc_hd__xor2_2_6_A;
    wire sky130_fd_sc_hd__xor2_2_6_B;
    wire sky130_fd_sc_hd__xor2_2_7_X;
    wire sky130_fd_sc_hd__xor2_2_8_A;
    wire sky130_fd_sc_hd__xor2_2_8_B;
    wire sky130_fd_sc_hd__xor2_2_9_X;

    // registers
    reg sky130_fd_sc_hd__a22o_2_2_A2;
    reg sky130_fd_sc_hd__a22o_2_2_B2;
    reg sky130_fd_sc_hd__a22o_2_4_B2;

    reg sky130_fd_sc_hd__a32o_2_3_B1;

    reg sky130_fd_sc_hd__and2b_2_3_B;

    reg sky130_fd_sc_hd__and4_2_3_A;
    reg sky130_fd_sc_hd__and4_2_3_B;
    reg sky130_fd_sc_hd__and4_2_3_C;

    reg sky130_fd_sc_hd__inv_2_11_A;
    reg sky130_fd_sc_hd__inv_2_16_A;
    reg sky130_fd_sc_hd__inv_2_17_A;
    reg sky130_fd_sc_hd__inv_2_18_A;
    reg sky130_fd_sc_hd__inv_2_19_A;
    reg sky130_fd_sc_hd__inv_2_1_A;
    reg sky130_fd_sc_hd__inv_2_20_A;
    reg sky130_fd_sc_hd__inv_2_2_A;
    reg sky130_fd_sc_hd__inv_2_3_A;
    reg sky130_fd_sc_hd__inv_2_6_A;
    reg sky130_fd_sc_hd__inv_2_8_A;

    reg sky130_fd_sc_hd__mux2_1_12_A0;
    reg sky130_fd_sc_hd__mux2_1_12_A1;
    reg sky130_fd_sc_hd__mux2_1_15_A0;
    reg sky130_fd_sc_hd__mux2_1_16_A0;
    reg sky130_fd_sc_hd__mux2_1_19_A0;
    reg sky130_fd_sc_hd__mux2_1_19_A1;
    reg sky130_fd_sc_hd__mux2_1_8_A0;
    reg sky130_fd_sc_hd__mux2_1_8_A1;
    reg sky130_fd_sc_hd__mux2_1_9_A0;
    reg sky130_fd_sc_hd__mux2_1_9_A1;

    reg sky130_fd_sc_hd__nand4_2_0_C;
    reg sky130_fd_sc_hd__nand4_2_10_C;
    reg sky130_fd_sc_hd__nand4_2_11_C;
    reg sky130_fd_sc_hd__nand4_2_12_C;
    reg sky130_fd_sc_hd__nand4_2_13_C;
    reg sky130_fd_sc_hd__nand4_2_1_C;
    reg sky130_fd_sc_hd__nand4_2_2_C;
    reg sky130_fd_sc_hd__nand4_2_3_C;
    reg sky130_fd_sc_hd__nand4_2_4_C;
    reg sky130_fd_sc_hd__nand4_2_5_C;
    reg sky130_fd_sc_hd__nand4_2_6_C;
    reg sky130_fd_sc_hd__nand4_2_7_C;
    reg sky130_fd_sc_hd__nand4_2_8_C;
    reg sky130_fd_sc_hd__nand4_2_9_C;

    reg sky130_fd_sc_hd__nor3_2_2_A;
    reg sky130_fd_sc_hd__nor3_2_2_B;

    reg sky130_fd_sc_hd__o21a_2_16_A1;
    reg sky130_fd_sc_hd__o21a_2_18_A1;
    reg sky130_fd_sc_hd__o21a_2_19_A1;
    reg sky130_fd_sc_hd__o21a_2_21_A1;
    reg sky130_fd_sc_hd__o21a_2_23_A1;
    reg sky130_fd_sc_hd__o21a_2_24_A1;
    reg sky130_fd_sc_hd__o21a_2_25_A1;
    reg sky130_fd_sc_hd__o21a_2_27_A1;
    reg sky130_fd_sc_hd__o21a_2_28_A1;
    reg sky130_fd_sc_hd__o21a_2_30_A1;
    reg sky130_fd_sc_hd__o21a_2_4_A1;
    reg sky130_fd_sc_hd__o21a_2_5_A1;
    reg sky130_fd_sc_hd__o21a_2_8_A1;

    reg sky130_fd_sc_hd__or2_2_11_A;
    reg sky130_fd_sc_hd__or2_2_11_B;
    reg sky130_fd_sc_hd__or2_2_12_A;
    reg sky130_fd_sc_hd__or2_2_7_A;
    reg sky130_fd_sc_hd__or2_2_8_B;
    reg sky130_fd_sc_hd__or2_2_9_A;
    reg sky130_fd_sc_hd__or2_2_9_B;

    reg sky130_fd_sc_hd__or3_2_8_A;
    reg sky130_fd_sc_hd__or3_2_8_B;
    reg sky130_fd_sc_hd__or3_2_8_C;

    reg sky130_fd_sc_hd__or3b_2_0_A;

    reg sky130_fd_sc_hd__or4_2_1_A;
    reg sky130_fd_sc_hd__or4_2_2_A;
    reg sky130_fd_sc_hd__or4_2_3_A;
    reg sky130_fd_sc_hd__or4_2_4_A;
    reg sky130_fd_sc_hd__or4_2_4_B;
    reg sky130_fd_sc_hd__or4_2_4_C;
    reg sky130_fd_sc_hd__or4_2_4_D;
    reg sky130_fd_sc_hd__or4_2_5_A;
    reg sky130_fd_sc_hd__or4_2_6_A;
    reg sky130_fd_sc_hd__or4_2_7_A;
    reg sky130_fd_sc_hd__or4_2_8_A;
    reg sky130_fd_sc_hd__or4_2_9_A;

    reg sky130_fd_sc_hd__xor2_2_0_B;
    reg sky130_fd_sc_hd__xor2_2_14_B;
    reg sky130_fd_sc_hd__xor2_2_16_A;
    reg sky130_fd_sc_hd__xor2_2_17_B;
    reg sky130_fd_sc_hd__xor2_2_19_A;
    reg sky130_fd_sc_hd__xor2_2_19_B;
    reg sky130_fd_sc_hd__xor2_2_20_A;
    reg sky130_fd_sc_hd__xor2_2_4_A;
    reg sky130_fd_sc_hd__xor2_2_7_A;
    reg sky130_fd_sc_hd__xor2_2_9_A;

    assign sky130_fd_sc_hd__conb_1_0_LO = 1'b0;
    assign sky130_fd_sc_hd__conb_1_0_HI = 1'b1;
    assign sky130_fd_sc_hd__or3_2_13_A = 1'b0;
    assign sky130_fd_sc_hd__conb_1_1_HI = 1'b1;
    assign sky130_fd_sc_hd__conb_1_2_LO = 1'b0;
    assign sky130_fd_sc_hd__conb_1_2_HI = 1'b1;
    assign sky130_fd_sc_hd__conb_1_3_LO = 1'b0;
    assign sky130_fd_sc_hd__conb_1_3_HI = 1'b1;
    assign sky130_fd_sc_hd__conb_1_4_LO = 1'b0;
    assign sky130_fd_sc_hd__conb_1_4_HI = 1'b1;
    assign sky130_fd_sc_hd__conb_1_5_LO = 1'b0;
    assign sky130_fd_sc_hd__conb_1_5_HI = 1'b1;


    assign sky130_fd_sc_hd__a21o_2_17_X = (sky130_fd_sc_hd__or2_2_9_A & sky130_fd_sc_hd__or3b_2_0_A)
                                          | sky130_fd_sc_hd__or2_2_9_B;  // sky130_fd_sc_hd__a21o_2_17 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_6_A2 = ~((~sky130_fd_sc_hd__or2_2_9_B) & sky130_fd_sc_hd__or3b_2_0_A);  // sky130_fd_sc_hd__nand2b_2_7 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__a21oi_2_5_Y = ~((sky130_fd_sc_hd__xor2_2_0_B & sky130_fd_sc_hd__xor2_2_4_A) | sky130_fd_sc_hd__xor2_2_9_A);  // sky130_fd_sc_hd__a21oi_2_5 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__a32o_2_4_B2 = ~((~sky130_fd_sc_hd__or2_2_11_B) & sky130_fd_sc_hd__or2_2_11_A);  // sky130_fd_sc_hd__nand2b_2_23 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__and2_2_7_B = ~((~sky130_fd_sc_hd__or3b_2_0_A) & sky130_fd_sc_hd__or2_2_9_B);  // sky130_fd_sc_hd__nand2b_2_10 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__and2_2_8_A = ~(sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_A);  // sky130_fd_sc_hd__nand2_2_19 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__and2_2_8_B = ~(sky130_fd_sc_hd__or2_2_9_B & sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__nand2_2_20 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__and2b_2_6_X = (~sky130_fd_sc_hd__or2_2_9_B)
                                          & sky130_fd_sc_hd__or3b_2_0_A;  // sky130_fd_sc_hd__and2b_2_6 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_10_A = (~sky130_fd_sc_hd__and4_2_3_B)
                                          & (~sky130_fd_sc_hd__or3_2_8_C)
                                          & sky130_fd_sc_hd__nor3_2_2_B
                                          & sky130_fd_sc_hd__or3_2_8_B;  // sky130_fd_sc_hd__and4bb_2_5 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__and3_2_10_B = (~sky130_fd_sc_hd__and4_2_3_A)
                                          & sky130_fd_sc_hd__or3_2_8_A;  // sky130_fd_sc_hd__and2b_2_8 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_12_A = (~sky130_fd_sc_hd__nand4_2_12_C)
                                          & sky130_fd_sc_hd__o21a_2_27_A1;  // sky130_fd_sc_hd__and2b_2_29 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_12_C = (~sky130_fd_sc_hd__nand4_2_13_C)
                                          & sky130_fd_sc_hd__o21a_2_25_A1;  // sky130_fd_sc_hd__and2b_2_27 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_16_X = sky130_fd_sc_hd__or3b_2_0_A
                                          & sky130_fd_sc_hd__or2_2_9_A
                                          & sky130_fd_sc_hd__or2_2_9_B;  // sky130_fd_sc_hd__and3_2_16 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and3_2_17_C = (~sky130_fd_sc_hd__or2_2_9_B)
                                          & sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__and2b_2_12 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_25_C = ~(sky130_fd_sc_hd__or2_2_8_B & sky130_fd_sc_hd__or2_2_9_B & sky130_fd_sc_hd__or2_2_9_A & sky130_fd_sc_hd__or3b_2_0_A);  // sky130_fd_sc_hd__nand4_2_14 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__and3_2_2_A = ~(sky130_fd_sc_hd__xor2_2_7_A & sky130_fd_sc_hd__xor2_2_9_A);  // sky130_fd_sc_hd__nand2_2_21 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__and3_2_2_C = ~(sky130_fd_sc_hd__xor2_2_0_B ^ sky130_fd_sc_hd__xor2_2_4_A);  // sky130_fd_sc_hd__xnor2_2_3 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__and3_2_5_A = (~sky130_fd_sc_hd__nand4_2_4_C)
                                         & sky130_fd_sc_hd__o21a_2_16_A1;  // sky130_fd_sc_hd__and2b_2_22 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_5_C = (~sky130_fd_sc_hd__nand4_2_6_C)
                                         & sky130_fd_sc_hd__o21a_2_18_A1;  // sky130_fd_sc_hd__and2b_2_21 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_7_C = ~((~sky130_fd_sc_hd__xor2_2_9_A) & sky130_fd_sc_hd__xor2_2_4_A & sky130_fd_sc_hd__xor2_2_0_B);  // sky130_fd_sc_hd__nand3b_2_0 : sky130_fd_sc_hd__nand3b_2
    assign sky130_fd_sc_hd__and3b_2_0_C = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_A) | sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__a21oi_2_8 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__and3b_2_1_X = (~sky130_fd_sc_hd__or2_2_8_B)
                                          & sky130_fd_sc_hd__or2_2_9_B
                                          & sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__and3b_2_1 : sky130_fd_sc_hd__and3b_2
    assign sky130_fd_sc_hd__and4_2_0_B = (~sky130_fd_sc_hd__nand4_2_0_C)
                                         & sky130_fd_sc_hd__o21a_2_4_A1;  // sky130_fd_sc_hd__and2b_2_1 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_0_C = (~sky130_fd_sc_hd__nand4_2_3_C)
                                         & sky130_fd_sc_hd__o21a_2_5_A1;  // sky130_fd_sc_hd__and2b_2_2 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_1_A = (~sky130_fd_sc_hd__nand4_2_1_C)
                                         & sky130_fd_sc_hd__and2b_2_3_B;  // sky130_fd_sc_hd__and2b_2_3 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_1_C = (~sky130_fd_sc_hd__nand4_2_5_C)
                                         & sky130_fd_sc_hd__o21a_2_30_A1;  // sky130_fd_sc_hd__and2b_2_20 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_1_D = (~sky130_fd_sc_hd__nand4_2_2_C)
                                         & sky130_fd_sc_hd__o21a_2_8_A1;  // sky130_fd_sc_hd__and2b_2_4 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_4_B = sky130_fd_sc_hd__and4_2_3_C
                                         & sky130_fd_sc_hd__nor3_2_2_A;  // sky130_fd_sc_hd__and2_2_9 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and4_2_4_D = sky130_fd_sc_hd__and4_2_3_A
                                         & sky130_fd_sc_hd__and4_2_3_B
                                         & sky130_fd_sc_hd__or3_2_8_B;  // sky130_fd_sc_hd__and3_2_8 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and4_2_5_A = (~sky130_fd_sc_hd__nand4_2_9_C)
                                         & sky130_fd_sc_hd__o21a_2_21_A1;  // sky130_fd_sc_hd__and2b_2_25 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_5_C = (~sky130_fd_sc_hd__nand4_2_11_C)
                                         & sky130_fd_sc_hd__o21a_2_24_A1;  // sky130_fd_sc_hd__and2b_2_28 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_5_D = (~sky130_fd_sc_hd__nand4_2_10_C)
                                         & sky130_fd_sc_hd__o21a_2_28_A1;  // sky130_fd_sc_hd__and2b_2_26 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_6_B = (~sky130_fd_sc_hd__nand4_2_7_C)
                                         & sky130_fd_sc_hd__o21a_2_19_A1;  // sky130_fd_sc_hd__and2b_2_23 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4_2_6_C = (~sky130_fd_sc_hd__nand4_2_8_C)
                                         & sky130_fd_sc_hd__o21a_2_23_A1;  // sky130_fd_sc_hd__and2b_2_24 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and4b_2_2_X = (~sky130_fd_sc_hd__or4_2_4_D)
                                          & sky130_fd_sc_hd__or4_2_4_C
                                          & sky130_fd_sc_hd__or4_2_4_A
                                          & sky130_fd_sc_hd__or4_2_4_B;  // sky130_fd_sc_hd__and4b_2_2 : sky130_fd_sc_hd__and4b_2
    assign sky130_fd_sc_hd__and4bb_2_0_X = (~sky130_fd_sc_hd__xor2_2_7_A)
                                           & (~sky130_fd_sc_hd__xor2_2_0_B)
                                           & sky130_fd_sc_hd__xor2_2_9_A
                                           & sky130_fd_sc_hd__xor2_2_4_A;  // sky130_fd_sc_hd__and4bb_2_0 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__clkbuf_8_9_A = clk;  // sky130_fd_sc_hd__clkbuf_16_0 : sky130_fd_sc_hd__clkbuf_16
    assign sky130_fd_sc_hd__inv_2_13_Y = ~sky130_fd_sc_hd__or2_2_8_B;  // sky130_fd_sc_hd__inv_2_13 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_14_Y = ~sky130_fd_sc_hd__or2_2_8_B;  // sky130_fd_sc_hd__inv_2_14 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_15_Y = ~sky130_fd_sc_hd__or3b_2_0_A;  // sky130_fd_sc_hd__inv_2_15 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_21_Y = ~sky130_fd_sc_hd__or2_2_8_B;  // sky130_fd_sc_hd__inv_2_21 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_22_Y = ~success;  // sky130_fd_sc_hd__inv_2_22 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_23_A = ~sky130_fd_sc_hd__inv_2_11_A;  // sky130_fd_sc_hd__inv_2_11 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_6_Y = ~sky130_fd_sc_hd__inv_2_6_A;  // sky130_fd_sc_hd__inv_2_6 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_7_A = (~sky130_fd_sc_hd__or2_2_11_A)
                                        & enable;  // sky130_fd_sc_hd__and2b_2_11 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__inv_2_8_Y = ~sky130_fd_sc_hd__inv_2_8_A;  // sky130_fd_sc_hd__inv_2_8 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_9_A = (~sky130_fd_sc_hd__or4_2_4_A)
                                        & (~sky130_fd_sc_hd__or4_2_4_C)
                                        & sky130_fd_sc_hd__or4_2_4_D
                                        & sky130_fd_sc_hd__or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_6 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__mux2_1_20_X = sky130_fd_sc_hd__or2_2_9_B ? sky130_fd_sc_hd__or2_2_8_B : sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__mux2_1_20 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_7_A0 = ~(sky130_fd_sc_hd__or2_2_7_A & I);  // sky130_fd_sc_hd__nand2_2_25 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nand2_2_29_Y = ~(sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_A);  // sky130_fd_sc_hd__nand2_2_29 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nand2_2_2_Y = ~(sky130_fd_sc_hd__xor2_2_7_A & sky130_fd_sc_hd__xor2_2_0_B);  // sky130_fd_sc_hd__nand2_2_2 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nand2_2_31_A = ~((~sky130_fd_sc_hd__or2_2_9_A) & sky130_fd_sc_hd__or3b_2_0_A);  // sky130_fd_sc_hd__nand2b_2_11 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nand2b_2_8_Y = ~((~sky130_fd_sc_hd__or2_2_8_B) & sky130_fd_sc_hd__or2_2_9_B);  // sky130_fd_sc_hd__nand2b_2_8 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nand3_2_1_Y = ~(sky130_fd_sc_hd__or2_2_9_B & sky130_fd_sc_hd__or2_2_9_A & sky130_fd_sc_hd__or3b_2_0_A);  // sky130_fd_sc_hd__nand3_2_1 : sky130_fd_sc_hd__nand3_2
    assign sky130_fd_sc_hd__nand4_2_10_D = (~sky130_fd_sc_hd__or4_2_4_A)
                                           & (~sky130_fd_sc_hd__or4_2_4_D)
                                           & sky130_fd_sc_hd__or4_2_4_C
                                           & sky130_fd_sc_hd__or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_13 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_12_D = (~sky130_fd_sc_hd__or4_2_4_B)
                                           & (~sky130_fd_sc_hd__or4_2_4_C)
                                           & sky130_fd_sc_hd__or4_2_4_D
                                           & sky130_fd_sc_hd__or4_2_4_A;  // sky130_fd_sc_hd__and4bb_2_11 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_13_D = (~sky130_fd_sc_hd__or4_2_4_A)
                                           & (~sky130_fd_sc_hd__or4_2_4_C)
                                           & sky130_fd_sc_hd__or4_2_4_D
                                           & sky130_fd_sc_hd__or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_12 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_8_D = (~sky130_fd_sc_hd__or4_2_4_D)
                                          & (~sky130_fd_sc_hd__or4_2_4_C)
                                          & sky130_fd_sc_hd__or4_2_4_A
                                          & sky130_fd_sc_hd__or4_2_4_B;  // sky130_fd_sc_hd__and4bb_2_10 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_9_D = (~sky130_fd_sc_hd__or4_2_4_B)
                                          & (~sky130_fd_sc_hd__or4_2_4_D)
                                          & sky130_fd_sc_hd__or4_2_4_C
                                          & sky130_fd_sc_hd__or4_2_4_A;  // sky130_fd_sc_hd__and4bb_2_9 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nor2_2_0_B = ~(sky130_fd_sc_hd__or4_2_4_A & sky130_fd_sc_hd__xor2_2_7_A);  // sky130_fd_sc_hd__nand2_2_4 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nor2_2_24_Y = ~(sky130_fd_sc_hd__or2_2_9_A | sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__nor2_2_24 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_32_B = (~sky130_fd_sc_hd__or2_2_9_A)
                                          & sky130_fd_sc_hd__or3b_2_0_A;  // sky130_fd_sc_hd__and2b_2_13 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__nor2_2_33_Y = ~(sky130_fd_sc_hd__or3b_2_0_A | sky130_fd_sc_hd__or2_2_9_A);  // sky130_fd_sc_hd__nor2_2_33 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_6_Y = ~(sky130_fd_sc_hd__xor2_2_0_B | sky130_fd_sc_hd__xor2_2_9_A);  // sky130_fd_sc_hd__nor2_2_6 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor3_2_0_Y = ~(sky130_fd_sc_hd__or3b_2_0_A | sky130_fd_sc_hd__or2_2_9_A | sky130_fd_sc_hd__or2_2_9_B);  // sky130_fd_sc_hd__nor3_2_0 : sky130_fd_sc_hd__nor3_2
    assign sky130_fd_sc_hd__nor3_2_1_B = ~(sky130_fd_sc_hd__or3b_2_0_A | sky130_fd_sc_hd__or2_2_9_A);  // sky130_fd_sc_hd__nor2_2_22 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor3_2_1_C = sky130_fd_sc_hd__or3b_2_0_A
                                         & sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__and2_2_6 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__nor4_2_1_Y = ~(sky130_fd_sc_hd__or4_2_4_B | sky130_fd_sc_hd__or4_2_4_A | sky130_fd_sc_hd__or4_2_4_D | sky130_fd_sc_hd__or4_2_4_C);  // sky130_fd_sc_hd__nor4_2_1 : sky130_fd_sc_hd__nor4_2
    assign sky130_fd_sc_hd__o211a_2_0_X = (sky130_fd_sc_hd__xor2_2_7_A | sky130_fd_sc_hd__xor2_2_0_B)
                                          & sky130_fd_sc_hd__xor2_2_9_A
                                          & sky130_fd_sc_hd__xor2_2_4_A;  // sky130_fd_sc_hd__o211a_2_0 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__o21a_2_12_A1 = ~(sky130_fd_sc_hd__and4_2_3_C & sky130_fd_sc_hd__nor3_2_2_A);  // sky130_fd_sc_hd__nand2_2_26 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o21ai_2_5_Y = ~((sky130_fd_sc_hd__or2_2_9_A | sky130_fd_sc_hd__or2_2_9_B) & sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__o21ai_2_5 : sky130_fd_sc_hd__o21ai_2
    assign sky130_fd_sc_hd__o221a_2_2_B2 = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_8_B) | sky130_fd_sc_hd__or2_2_9_B);  // sky130_fd_sc_hd__a21oi_2_14 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__o221a_2_2_C1 = ~((~sky130_fd_sc_hd__or3b_2_0_A) & sky130_fd_sc_hd__or2_2_9_A);  // sky130_fd_sc_hd__nand2b_2_12 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__o31a_2_0_A1 = (~sky130_fd_sc_hd__or2_2_9_A)
                                          & sky130_fd_sc_hd__or2_2_9_B;  // sky130_fd_sc_hd__and2b_2_7 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__o31a_2_1_A3 = (~sky130_fd_sc_hd__or3b_2_0_A)
                                          & sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__and2b_2_17 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__o31a_2_1_B1 = ~(sky130_fd_sc_hd__or2_2_9_A & sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__nand2_2_30 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o31a_2_2_A1 = sky130_fd_sc_hd__or3b_2_0_A
                                          & sky130_fd_sc_hd__or2_2_9_A
                                          & sky130_fd_sc_hd__or2_2_9_B;  // sky130_fd_sc_hd__and3_2_15 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__o31a_2_2_A2 = (~sky130_fd_sc_hd__or2_2_9_A)
                                          & sky130_fd_sc_hd__or3b_2_0_A;  // sky130_fd_sc_hd__and2b_2_14 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__o31a_2_2_A3 = ~(sky130_fd_sc_hd__or3b_2_0_A | sky130_fd_sc_hd__or2_2_9_B | (~sky130_fd_sc_hd__or2_2_9_A));  // sky130_fd_sc_hd__nor3b_2_1 : sky130_fd_sc_hd__nor3b_2
    assign sky130_fd_sc_hd__o32ai_2_0_B1 = ~((~sky130_fd_sc_hd__or2_2_9_B) & sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__nand2b_2_9 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__or2_2_11_X = sky130_fd_sc_hd__or2_2_11_A
                                         | sky130_fd_sc_hd__or2_2_11_B;  // sky130_fd_sc_hd__or2_2_11 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or2_2_1_A = sky130_fd_sc_hd__or4_2_4_A
                                        & sky130_fd_sc_hd__xor2_2_7_A;  // sky130_fd_sc_hd__and2_2_1 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__or2_2_1_B = ~(sky130_fd_sc_hd__or4_2_4_A | sky130_fd_sc_hd__xor2_2_7_A);  // sky130_fd_sc_hd__nor2_2_7 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or2_2_7_X = sky130_fd_sc_hd__or2_2_7_A
                                        | I;  // sky130_fd_sc_hd__or2_2_7 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or2_2_8_X = sky130_fd_sc_hd__or2_2_9_B
                                        | sky130_fd_sc_hd__or2_2_8_B;  // sky130_fd_sc_hd__or2_2_8 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or2_2_9_X = sky130_fd_sc_hd__or2_2_9_A
                                        | sky130_fd_sc_hd__or2_2_9_B;  // sky130_fd_sc_hd__or2_2_9 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or3_2_14_A = (~sky130_fd_sc_hd__or2_2_9_B)
                                         & (~sky130_fd_sc_hd__or2_2_8_B)
                                         & sky130_fd_sc_hd__or3b_2_0_A
                                         & sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__and4bb_2_4 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__or3_2_17_A = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_A) | sky130_fd_sc_hd__or2_2_9_B | sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__a211oi_2_2 : sky130_fd_sc_hd__a211oi_2
    assign sky130_fd_sc_hd__or3_2_6_A = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_A) | sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__a21oi_2_9 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__or3_2_6_B = (~sky130_fd_sc_hd__or2_2_8_B)
                                        & sky130_fd_sc_hd__or2_2_9_B
                                        & sky130_fd_sc_hd__or2_2_9_A
                                        & sky130_fd_sc_hd__or3b_2_0_A;  // sky130_fd_sc_hd__and4b_2_0 : sky130_fd_sc_hd__and4b_2
    assign sky130_fd_sc_hd__or3_2_6_C = ~(sky130_fd_sc_hd__or3b_2_0_A | sky130_fd_sc_hd__or2_2_9_A | sky130_fd_sc_hd__or2_2_9_B | (~sky130_fd_sc_hd__or2_2_8_B));  // sky130_fd_sc_hd__nor4b_2_0 : sky130_fd_sc_hd__nor4b_2
    assign sky130_fd_sc_hd__or3_2_8_X = sky130_fd_sc_hd__or3_2_8_A
                                        | sky130_fd_sc_hd__or3_2_8_B
                                        | sky130_fd_sc_hd__or3_2_8_C;  // sky130_fd_sc_hd__or3_2_8 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_9_B = ~(sky130_fd_sc_hd__or3b_2_0_A | sky130_fd_sc_hd__or2_2_9_A);  // sky130_fd_sc_hd__nor2_2_38 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_9_C = ~(sky130_fd_sc_hd__or2_2_9_B | sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__nor2_2_37 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3b_2_0_X = sky130_fd_sc_hd__or3b_2_0_A
                                         | sky130_fd_sc_hd__or2_2_9_B
                                         | (~sky130_fd_sc_hd__or2_2_9_A);  // sky130_fd_sc_hd__or3b_2_0 : sky130_fd_sc_hd__or3b_2
    assign sky130_fd_sc_hd__or4_2_1_B = ~sky130_fd_sc_hd__inv_2_1_A;  // sky130_fd_sc_hd__inv_2_1 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_2_B = ~sky130_fd_sc_hd__inv_2_2_A;  // sky130_fd_sc_hd__inv_2_2 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_3_B = ~sky130_fd_sc_hd__inv_2_3_A;  // sky130_fd_sc_hd__inv_2_3 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_4_X = sky130_fd_sc_hd__or4_2_4_A
                                        | sky130_fd_sc_hd__or4_2_4_B
                                        | sky130_fd_sc_hd__or4_2_4_C
                                        | sky130_fd_sc_hd__or4_2_4_D;  // sky130_fd_sc_hd__or4_2_4 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4_2_5_B = ~sky130_fd_sc_hd__inv_2_16_A;  // sky130_fd_sc_hd__inv_2_16 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_6_B = ~sky130_fd_sc_hd__inv_2_20_A;  // sky130_fd_sc_hd__inv_2_20 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_6_C = sky130_fd_sc_hd__or4_2_4_B
                                        | sky130_fd_sc_hd__or4_2_4_A
                                        | sky130_fd_sc_hd__or4_2_4_C
                                        | (~sky130_fd_sc_hd__or4_2_4_D);  // sky130_fd_sc_hd__or4b_2_7 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__or4_2_7_B = ~sky130_fd_sc_hd__inv_2_18_A;  // sky130_fd_sc_hd__inv_2_18 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_7_C = sky130_fd_sc_hd__or4_2_4_A
                                        | sky130_fd_sc_hd__or4_2_4_D
                                        | sky130_fd_sc_hd__or4_2_4_C
                                        | (~sky130_fd_sc_hd__or4_2_4_B);  // sky130_fd_sc_hd__or4b_2_6 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__or4_2_8_B = ~sky130_fd_sc_hd__inv_2_19_A;  // sky130_fd_sc_hd__inv_2_19 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_8_C = sky130_fd_sc_hd__or4_2_4_B
                                        | sky130_fd_sc_hd__or4_2_4_A
                                        | sky130_fd_sc_hd__or4_2_4_D
                                        | (~sky130_fd_sc_hd__or4_2_4_C);  // sky130_fd_sc_hd__or4b_2_5 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__or4_2_9_B = ~sky130_fd_sc_hd__inv_2_17_A;  // sky130_fd_sc_hd__inv_2_17 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__or4_2_9_C = sky130_fd_sc_hd__or4_2_4_B
                                        | sky130_fd_sc_hd__or4_2_4_D
                                        | sky130_fd_sc_hd__or4_2_4_C
                                        | (~sky130_fd_sc_hd__or4_2_4_A);  // sky130_fd_sc_hd__or4b_2_4 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__or4bb_2_0_X = sky130_fd_sc_hd__or4_2_4_A
                                          | sky130_fd_sc_hd__or4_2_4_C
                                          | (~sky130_fd_sc_hd__or4_2_4_D)
                                          | (~sky130_fd_sc_hd__or4_2_4_B);  // sky130_fd_sc_hd__or4bb_2_0 : sky130_fd_sc_hd__or4bb_2
    assign sky130_fd_sc_hd__xnor2_2_21_B = ~(sky130_fd_sc_hd__or2_2_12_A ^ sky130_fd_sc_hd__xor2_2_20_A);  // sky130_fd_sc_hd__xnor2_2_20 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_26_A = ~(sky130_fd_sc_hd__xor2_2_14_B ^ sky130_fd_sc_hd__xor2_2_19_A);  // sky130_fd_sc_hd__xnor2_2_17 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_26_B = ~(sky130_fd_sc_hd__xor2_2_20_A ^ sky130_fd_sc_hd__xor2_2_17_B);  // sky130_fd_sc_hd__xnor2_2_16 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_28_Y = ~(sky130_fd_sc_hd__or2_2_9_A ^ sky130_fd_sc_hd__or3b_2_0_A);  // sky130_fd_sc_hd__xnor2_2_28 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_4_A = ~(sky130_fd_sc_hd__xor2_2_0_B & sky130_fd_sc_hd__xor2_2_9_A);  // sky130_fd_sc_hd__nand2_2_17 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__xor2_2_0_X = sky130_fd_sc_hd__xor2_2_7_A
                                         ^ sky130_fd_sc_hd__xor2_2_0_B;  // sky130_fd_sc_hd__xor2_2_0 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_13_X = sky130_fd_sc_hd__or2_2_12_A
                                          ^ sky130_fd_sc_hd__xor2_2_19_B;  // sky130_fd_sc_hd__xor2_2_13 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_14_X = sky130_fd_sc_hd__xor2_2_16_A
                                          ^ sky130_fd_sc_hd__xor2_2_14_B;  // sky130_fd_sc_hd__xor2_2_14 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_17_X = sky130_fd_sc_hd__xor2_2_19_A
                                          ^ sky130_fd_sc_hd__xor2_2_17_B;  // sky130_fd_sc_hd__xor2_2_17 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_19_X = sky130_fd_sc_hd__xor2_2_19_A
                                          ^ sky130_fd_sc_hd__xor2_2_19_B;  // sky130_fd_sc_hd__xor2_2_19 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_7_X = sky130_fd_sc_hd__xor2_2_7_A
                                         ^ sky130_fd_sc_hd__xor2_2_9_A;  // sky130_fd_sc_hd__xor2_2_7 : sky130_fd_sc_hd__xor2_2

    assign sky130_fd_sc_hd__a211o_2_3_X = (sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_B)
                                          | sky130_fd_sc_hd__inv_2_13_Y
                                          | sky130_fd_sc_hd__o31a_2_1_A3;  // sky130_fd_sc_hd__a211o_2_3 : sky130_fd_sc_hd__a211o_2
    assign sky130_fd_sc_hd__a21o_2_6_X = (sky130_fd_sc_hd__and2_2_7_B & sky130_fd_sc_hd__a21o_2_6_A2)
                                         | sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__a21o_2_6 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21oi_2_13_Y = ~((sky130_fd_sc_hd__or4_2_4_A & sky130_fd_sc_hd__inv_2_7_A) | sky130_fd_sc_hd__or4_2_4_B);  // sky130_fd_sc_hd__a21oi_2_13 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__a22o_2_13_A1 = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_B) | sky130_fd_sc_hd__or2_2_8_B | sky130_fd_sc_hd__and3_2_17_C | sky130_fd_sc_hd__nor2_2_33_Y);  // sky130_fd_sc_hd__a2111oi_2_0 : sky130_fd_sc_hd__a2111oi_2
    assign sky130_fd_sc_hd__a22o_2_21_B2 = ~((sky130_fd_sc_hd__or2_2_8_X & sky130_fd_sc_hd__nor2_2_32_B) | sky130_fd_sc_hd__mux2_1_20_X);  // sky130_fd_sc_hd__a21oi_2_15 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__a22o_2_22_X = (sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or3_2_9_C)
                                          | (sky130_fd_sc_hd__nand2_2_31_A & sky130_fd_sc_hd__or2_2_9_B);  // sky130_fd_sc_hd__a22o_2_22 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_7_A1 = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__and3_2_17_C) | sky130_fd_sc_hd__or2_2_8_B);  // sky130_fd_sc_hd__a21oi_2_17 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__a22oi_2_0_Y = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__inv_2_13_Y) | (sky130_fd_sc_hd__or2_2_9_X & sky130_fd_sc_hd__nand2_2_29_Y));  // sky130_fd_sc_hd__a22oi_2_0 : sky130_fd_sc_hd__a22oi_2
    assign sky130_fd_sc_hd__a31o_2_18_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nor4_2_1_Y)
                                          | sky130_fd_sc_hd__nand4_2_7_C;  // sky130_fd_sc_hd__a31o_2_18 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_19_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_8_D)
                                          | sky130_fd_sc_hd__nand4_2_8_C;  // sky130_fd_sc_hd__a31o_2_19 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_20_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__and4b_2_2_X)
                                          | sky130_fd_sc_hd__nand4_2_11_C;  // sky130_fd_sc_hd__a31o_2_20 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_21_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_13_D)
                                          | sky130_fd_sc_hd__nand4_2_13_C;  // sky130_fd_sc_hd__a31o_2_21 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_22_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_12_D)
                                          | sky130_fd_sc_hd__nand4_2_12_C;  // sky130_fd_sc_hd__a31o_2_22 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_23_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_10_D)
                                          | sky130_fd_sc_hd__nand4_2_10_C;  // sky130_fd_sc_hd__a31o_2_23 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_24_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_9_D)
                                          | sky130_fd_sc_hd__nand4_2_9_C;  // sky130_fd_sc_hd__a31o_2_24 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_8_X = (sky130_fd_sc_hd__inv_2_9_A & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__xor2_2_7_A)
                                         | sky130_fd_sc_hd__xor2_2_0_B;  // sky130_fd_sc_hd__a31o_2_8 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a41oi_2_0_Y = ~((sky130_fd_sc_hd__or4_2_4_B & sky130_fd_sc_hd__or4_2_4_A & sky130_fd_sc_hd__or4_2_4_C & sky130_fd_sc_hd__inv_2_7_A) | sky130_fd_sc_hd__or4_2_4_D);  // sky130_fd_sc_hd__a41oi_2_0 : sky130_fd_sc_hd__a41oi_2
    assign sky130_fd_sc_hd__and2_2_7_X = sky130_fd_sc_hd__or2_2_9_A
                                         & sky130_fd_sc_hd__and2_2_7_B;  // sky130_fd_sc_hd__and2_2_7 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and2_2_8_X = sky130_fd_sc_hd__and2_2_8_A
                                         & sky130_fd_sc_hd__and2_2_8_B;  // sky130_fd_sc_hd__and2_2_8 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and2b_2_19_X = (~sky130_fd_sc_hd__or2_2_8_X)
                                           & sky130_fd_sc_hd__o221a_2_2_C1;  // sky130_fd_sc_hd__and2b_2_19 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_12_B = sky130_fd_sc_hd__or4_2_6_A
                                          & sky130_fd_sc_hd__or4_2_6_B;  // sky130_fd_sc_hd__and2_2_14 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and3_2_17_X = sky130_fd_sc_hd__or3b_2_0_A
                                          & sky130_fd_sc_hd__inv_2_14_Y
                                          & sky130_fd_sc_hd__and3_2_17_C;  // sky130_fd_sc_hd__and3_2_17 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and3_2_2_B = ~(sky130_fd_sc_hd__xor2_2_4_A & sky130_fd_sc_hd__xor2_2_7_X);  // sky130_fd_sc_hd__nand2_2_22 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__and3_2_5_B = sky130_fd_sc_hd__or4_2_5_A
                                         & sky130_fd_sc_hd__or4_2_5_B;  // sky130_fd_sc_hd__and2_2_10 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and3_2_7_X = sky130_fd_sc_hd__inv_2_9_A
                                         & sky130_fd_sc_hd__inv_2_7_A
                                         & sky130_fd_sc_hd__and3_2_7_C;  // sky130_fd_sc_hd__and3_2_7 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and3b_2_2_X = (~sky130_fd_sc_hd__or2_2_8_B)
                                          & sky130_fd_sc_hd__nor2_2_32_B
                                          & sky130_fd_sc_hd__or2_2_9_B;  // sky130_fd_sc_hd__and3b_2_2 : sky130_fd_sc_hd__and3b_2
    assign sky130_fd_sc_hd__and4_2_0_A = sky130_fd_sc_hd__or4_2_1_A
                                         & sky130_fd_sc_hd__or4_2_1_B;  // sky130_fd_sc_hd__and2_2_3 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and4_2_0_D = sky130_fd_sc_hd__or4_2_3_A
                                         & sky130_fd_sc_hd__or4_2_3_B;  // sky130_fd_sc_hd__and2_2_5 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and4_2_1_B = sky130_fd_sc_hd__or4_2_2_A
                                         & sky130_fd_sc_hd__or4_2_2_B;  // sky130_fd_sc_hd__and2_2_4 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and4_2_5_B = sky130_fd_sc_hd__or4_2_8_A
                                         & sky130_fd_sc_hd__or4_2_8_B;  // sky130_fd_sc_hd__and2_2_13 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and4_2_6_A = sky130_fd_sc_hd__or4_2_9_A
                                         & sky130_fd_sc_hd__or4_2_9_B;  // sky130_fd_sc_hd__and2_2_11 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and4_2_6_D = sky130_fd_sc_hd__or4_2_7_A
                                         & sky130_fd_sc_hd__or4_2_7_B;  // sky130_fd_sc_hd__and2_2_12 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and4_2_7_X = sky130_fd_sc_hd__or4_2_4_B
                                         & sky130_fd_sc_hd__or4_2_4_A
                                         & sky130_fd_sc_hd__or4_2_4_C
                                         & sky130_fd_sc_hd__inv_2_7_A;  // sky130_fd_sc_hd__and4_2_7 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__buf_2_0_X = sky130_fd_sc_hd__or4_2_4_X;  // sky130_fd_sc_hd__buf_2_0 : sky130_fd_sc_hd__buf_2
    assign sky130_fd_sc_hd__clkbuf_4_9_A = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_13 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_0_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_0 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_10_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_10 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_11_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_11 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_1_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_1 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_2_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_2 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_3_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_3 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_4_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_4 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_5_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_5 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_6_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_6 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_7_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_7 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_8_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_8 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__clkbuf_8_9_X = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_9 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__dfrtp_2_8_CLK = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_15 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__dfxtp_2_0_D = ~((sky130_fd_sc_hd__inv_2_21_Y & sky130_fd_sc_hd__nand3_2_1_Y) | (~sky130_fd_sc_hd__or2_2_11_B));  // sky130_fd_sc_hd__a21boi_2_2 : sky130_fd_sc_hd__a21boi_2
    assign sky130_fd_sc_hd__dfxtp_2_1_D = ~((sky130_fd_sc_hd__and3_2_25_C & sky130_fd_sc_hd__xnor2_2_28_Y) | (~sky130_fd_sc_hd__or2_2_11_B));  // sky130_fd_sc_hd__a21boi_2_1 : sky130_fd_sc_hd__a21boi_2
    assign sky130_fd_sc_hd__dfxtp_2_2_CLK = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_12 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__dfxtp_2_2_D = ~((sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__and3_2_25_C) | (~sky130_fd_sc_hd__or2_2_11_B));  // sky130_fd_sc_hd__a21boi_2_3 : sky130_fd_sc_hd__a21boi_2
    assign sky130_fd_sc_hd__dfxtp_2_3_CLK = sky130_fd_sc_hd__clkbuf_8_9_A;  // sky130_fd_sc_hd__clkbuf_8_14 : sky130_fd_sc_hd__clkbuf_8
    assign sky130_fd_sc_hd__dfxtp_2_3_D = (sky130_fd_sc_hd__or2_2_8_B | sky130_fd_sc_hd__nand3_2_1_Y)
                                          & sky130_fd_sc_hd__a21o_2_17_X
                                          & sky130_fd_sc_hd__or2_2_11_B;  // sky130_fd_sc_hd__o211a_2_11 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__inv_2_10_A = sky130_fd_sc_hd__or3_2_8_A
                                         & I
                                         & sky130_fd_sc_hd__inv_2_7_A;  // sky130_fd_sc_hd__and3_2_9 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__inv_2_12_A = ~(sky130_fd_sc_hd__or2_2_9_B & sky130_fd_sc_hd__o31a_2_1_A3);  // sky130_fd_sc_hd__nand2_2_32 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__inv_2_23_Y = ~sky130_fd_sc_hd__inv_2_23_A;  // sky130_fd_sc_hd__inv_2_23 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_5_A = sky130_fd_sc_hd__inv_2_9_A
                                        & sky130_fd_sc_hd__inv_2_7_A
                                        & sky130_fd_sc_hd__xor2_2_0_B
                                        & sky130_fd_sc_hd__xor2_2_7_A;  // sky130_fd_sc_hd__and4_2_2 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__inv_2_7_Y = ~sky130_fd_sc_hd__inv_2_7_A;  // sky130_fd_sc_hd__inv_2_7 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_9_Y = ~sky130_fd_sc_hd__inv_2_9_A;  // sky130_fd_sc_hd__inv_2_9 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__mux2_1_10_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_8_A0 : sky130_fd_sc_hd__mux2_1_12_A1;  // sky130_fd_sc_hd__mux2_1_10 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_11_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_12_A0 : sky130_fd_sc_hd__a22o_2_2_B2;  // sky130_fd_sc_hd__mux2_1_11 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_12_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_12_A1 : sky130_fd_sc_hd__mux2_1_12_A0;  // sky130_fd_sc_hd__mux2_1_12 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_13_X = sky130_fd_sc_hd__inv_2_7_A ? I : sky130_fd_sc_hd__a22o_2_2_A2;  // sky130_fd_sc_hd__mux2_1_13 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_14_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_15_A0 : sky130_fd_sc_hd__mux2_1_8_A1;  // sky130_fd_sc_hd__mux2_1_14 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_15_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_16_A0 : sky130_fd_sc_hd__mux2_1_15_A0;  // sky130_fd_sc_hd__mux2_1_15 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_16_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_9_A0 : sky130_fd_sc_hd__mux2_1_16_A0;  // sky130_fd_sc_hd__mux2_1_16 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_17_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_19_A0 : sky130_fd_sc_hd__mux2_1_9_A1;  // sky130_fd_sc_hd__mux2_1_17 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_18_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__a22o_2_2_A2 : sky130_fd_sc_hd__mux2_1_19_A1;  // sky130_fd_sc_hd__mux2_1_18 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_19_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_19_A1 : sky130_fd_sc_hd__mux2_1_19_A0;  // sky130_fd_sc_hd__mux2_1_19 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_5_A1 = ~(sky130_fd_sc_hd__inv_2_9_A & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_23 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__mux2_1_7_X = sky130_fd_sc_hd__inv_2_8_A ? sky130_fd_sc_hd__or2_2_7_X : sky130_fd_sc_hd__mux2_1_7_A0;  // sky130_fd_sc_hd__mux2_1_7 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_8_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_8_A1 : sky130_fd_sc_hd__mux2_1_8_A0;  // sky130_fd_sc_hd__mux2_1_8 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_9_X = sky130_fd_sc_hd__inv_2_7_A ? sky130_fd_sc_hd__mux2_1_9_A1 : sky130_fd_sc_hd__mux2_1_9_A0;  // sky130_fd_sc_hd__mux2_1_9 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__nand4_2_7_Y = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_7_C & sky130_fd_sc_hd__nor4_2_1_Y);  // sky130_fd_sc_hd__nand4_2_7 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__nand4_2_8_Y = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_8_C & sky130_fd_sc_hd__nand4_2_8_D);  // sky130_fd_sc_hd__nand4_2_8 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__nand4_2_9_Y = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_9_C & sky130_fd_sc_hd__nand4_2_9_D);  // sky130_fd_sc_hd__nand4_2_9 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__nor2_2_23_Y = ~(sky130_fd_sc_hd__or2_2_8_B | sky130_fd_sc_hd__and2_2_8_A);  // sky130_fd_sc_hd__nor2_2_23 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_29_Y = ~(sky130_fd_sc_hd__xor2_2_7_A | sky130_fd_sc_hd__and3_2_7_C);  // sky130_fd_sc_hd__nor2_2_29 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_30_B = ~((I & sky130_fd_sc_hd__inv_2_7_A) | sky130_fd_sc_hd__or3_2_8_A);  // sky130_fd_sc_hd__a21oi_2_11 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__nor2_2_31_B = ~(sky130_fd_sc_hd__or4_2_4_A ^ sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__xnor2_2_12 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__nor2_2_32_Y = ~(sky130_fd_sc_hd__or2_2_8_B | sky130_fd_sc_hd__nor2_2_32_B);  // sky130_fd_sc_hd__nor2_2_32 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_40_A = ~(sky130_fd_sc_hd__xnor2_2_26_A ^ sky130_fd_sc_hd__xnor2_2_26_B);  // sky130_fd_sc_hd__xnor2_2_26 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__nor2_2_46_B = ~(sky130_fd_sc_hd__a22o_2_4_B2 ^ sky130_fd_sc_hd__xor2_2_17_X);  // sky130_fd_sc_hd__xnor2_2_25 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__nor2_2_4_Y = ~(sky130_fd_sc_hd__or2_2_1_A | sky130_fd_sc_hd__or2_2_1_B);  // sky130_fd_sc_hd__nor2_2_4 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_8_A = ~(sky130_fd_sc_hd__or4_2_4_B ^ sky130_fd_sc_hd__xor2_2_0_X);  // sky130_fd_sc_hd__xnor2_2_1 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__nor3_2_1_Y = ~(sky130_fd_sc_hd__or2_2_9_B | sky130_fd_sc_hd__nor3_2_1_B | sky130_fd_sc_hd__nor3_2_1_C);  // sky130_fd_sc_hd__nor3_2_1 : sky130_fd_sc_hd__nor3_2
    assign sky130_fd_sc_hd__nor3_2_2_Y = ~(sky130_fd_sc_hd__nor3_2_2_A | sky130_fd_sc_hd__nor3_2_2_B | sky130_fd_sc_hd__or3_2_8_X);  // sky130_fd_sc_hd__nor3_2_2 : sky130_fd_sc_hd__nor3_2
    assign sky130_fd_sc_hd__nor3b_2_0_B = ~(sky130_fd_sc_hd__xor2_2_16_A ^ sky130_fd_sc_hd__xor2_2_19_X);  // sky130_fd_sc_hd__xnor2_2_24 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__o211a_2_10_X = (sky130_fd_sc_hd__inv_2_15_Y | sky130_fd_sc_hd__or2_2_9_B)
                                           & sky130_fd_sc_hd__inv_2_14_Y
                                           & sky130_fd_sc_hd__or2_2_9_A;  // sky130_fd_sc_hd__o211a_2_10 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__o211a_2_8_X = (sky130_fd_sc_hd__inv_2_8_A | sky130_fd_sc_hd__mux2_1_7_A0)
                                          & sky130_fd_sc_hd__or2_2_7_X
                                          & sky130_fd_sc_hd__inv_2_7_A;  // sky130_fd_sc_hd__o211a_2_8 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__o21a_2_13_X = (sky130_fd_sc_hd__inv_2_15_Y | sky130_fd_sc_hd__o31a_2_2_A1)
                                          & sky130_fd_sc_hd__inv_2_14_Y;  // sky130_fd_sc_hd__o21a_2_13 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_15_A2 = ~(sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_8_X);  // sky130_fd_sc_hd__nand2_2_27 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o21a_2_24_A2 = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_11_C & sky130_fd_sc_hd__and4b_2_2_X);  // sky130_fd_sc_hd__nand4_2_11 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__o21a_2_25_A2 = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_13_C & sky130_fd_sc_hd__nand4_2_13_D);  // sky130_fd_sc_hd__nand4_2_13 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__o21a_2_27_A2 = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_12_C & sky130_fd_sc_hd__nand4_2_12_D);  // sky130_fd_sc_hd__nand4_2_12 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__o21a_2_28_A2 = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_10_C & sky130_fd_sc_hd__nand4_2_10_D);  // sky130_fd_sc_hd__nand4_2_10 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__o22a_2_2_X = (sky130_fd_sc_hd__or2_2_8_B | sky130_fd_sc_hd__and2_2_8_A)
                                         & (sky130_fd_sc_hd__and2_2_8_B | sky130_fd_sc_hd__nor3_2_1_B);  // sky130_fd_sc_hd__o22a_2_2 : sky130_fd_sc_hd__o22a_2
    assign sky130_fd_sc_hd__o31a_2_0_A2 = ~((sky130_fd_sc_hd__nor3_2_1_C & sky130_fd_sc_hd__o32ai_2_0_B1 & sky130_fd_sc_hd__nand2b_2_8_Y) | sky130_fd_sc_hd__and3b_2_0_C);  // sky130_fd_sc_hd__a31oi_2_0 : sky130_fd_sc_hd__a31oi_2
    assign sky130_fd_sc_hd__o31a_2_0_B1 = (sky130_fd_sc_hd__nor3_2_1_C & sky130_fd_sc_hd__o32ai_2_0_B1 & sky130_fd_sc_hd__nand2b_2_8_Y)
                                          | sky130_fd_sc_hd__and2b_2_6_X
                                          | sky130_fd_sc_hd__and3b_2_0_C;  // sky130_fd_sc_hd__a311o_2_1 : sky130_fd_sc_hd__a311o_2
    assign sky130_fd_sc_hd__o31a_2_2_X = (sky130_fd_sc_hd__o31a_2_2_A1 | sky130_fd_sc_hd__o31a_2_2_A2 | sky130_fd_sc_hd__o31a_2_2_A3)
                                         & sky130_fd_sc_hd__inv_2_14_Y;  // sky130_fd_sc_hd__o31a_2_2 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o32a_2_2_A2 = ~(sky130_fd_sc_hd__or2_2_8_B ^ sky130_fd_sc_hd__and3_2_16_X);  // sky130_fd_sc_hd__xnor2_2_27 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__o32a_2_2_B1 = (~sky130_fd_sc_hd__or3_2_9_B)
                                          & sky130_fd_sc_hd__nand2_2_29_Y;  // sky130_fd_sc_hd__and2b_2_15 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__or2_2_10_A = sky130_fd_sc_hd__or2_2_11_B
                                         & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and2_2_16 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__or2_2_12_B = ~(sky130_fd_sc_hd__a22o_2_4_B2 ^ sky130_fd_sc_hd__xnor2_2_26_A);  // sky130_fd_sc_hd__xnor2_2_23 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__or2_2_1_X = sky130_fd_sc_hd__or2_2_1_A
                                        | sky130_fd_sc_hd__or2_2_1_B;  // sky130_fd_sc_hd__or2_2_1 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or3_2_10_A = (sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__nor2_2_24_Y)
                                         | sky130_fd_sc_hd__or3_2_6_C;  // sky130_fd_sc_hd__a21o_2_7 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__or3_2_11_A = (sky130_fd_sc_hd__or3b_2_0_A & sky130_fd_sc_hd__or2_2_9_B & sky130_fd_sc_hd__nor2_2_24_Y)
                                         | sky130_fd_sc_hd__nor3_2_0_Y;  // sky130_fd_sc_hd__a31o_2_6 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__or3_2_15_A = (sky130_fd_sc_hd__or2_2_9_A & sky130_fd_sc_hd__or3_2_17_A)
                                         | sky130_fd_sc_hd__or3_2_6_C
                                         | sky130_fd_sc_hd__or3_2_6_B;  // sky130_fd_sc_hd__a211o_2_4 : sky130_fd_sc_hd__a211o_2
    assign sky130_fd_sc_hd__or3_2_16_A = (sky130_fd_sc_hd__or2_2_9_A | sky130_fd_sc_hd__or2_2_9_B)
                                         & (sky130_fd_sc_hd__or3_2_6_A | sky130_fd_sc_hd__or3_2_6_B);  // sky130_fd_sc_hd__o22a_2_1 : sky130_fd_sc_hd__o22a_2
    assign sky130_fd_sc_hd__or3_2_5_B = ~(sky130_fd_sc_hd__and3_2_2_A | sky130_fd_sc_hd__and3_2_2_C);  // sky130_fd_sc_hd__nor2_2_17 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_6_X = sky130_fd_sc_hd__or3_2_6_A
                                        | sky130_fd_sc_hd__or3_2_6_B
                                        | sky130_fd_sc_hd__or3_2_6_C;  // sky130_fd_sc_hd__or3_2_6 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_9_A = ~(sky130_fd_sc_hd__or3b_2_0_A | sky130_fd_sc_hd__inv_2_13_Y);  // sky130_fd_sc_hd__nor2_2_36 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or4_2_1_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_14 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4_2_2_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_15 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4_2_3_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_13 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4_2_5_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_34 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4_2_6_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_35 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4_2_7_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_36 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4_2_8_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_37 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4_2_9_D = ~(I & sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_33 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__or4b_2_8_C = sky130_fd_sc_hd__and3_2_10_A
                                         & sky130_fd_sc_hd__and3_2_10_B
                                         & sky130_fd_sc_hd__and4_2_4_B;  // sky130_fd_sc_hd__and3_2_10 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__xnor2_2_0_A = ~(sky130_fd_sc_hd__or4_2_4_B & sky130_fd_sc_hd__xor2_2_0_X);  // sky130_fd_sc_hd__nand2_2_8 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__xnor2_2_19_Y = ~(sky130_fd_sc_hd__xnor2_2_21_B ^ sky130_fd_sc_hd__xor2_2_19_X);  // sky130_fd_sc_hd__xnor2_2_19 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_21_Y = ~(sky130_fd_sc_hd__a22o_2_4_B2 ^ sky130_fd_sc_hd__xnor2_2_21_B);  // sky130_fd_sc_hd__xnor2_2_21 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_6_A = (~sky130_fd_sc_hd__nor3_2_1_B)
                                          & sky130_fd_sc_hd__and2_2_7_B
                                          & sky130_fd_sc_hd__and3b_2_0_C;  // sky130_fd_sc_hd__and3b_2_0 : sky130_fd_sc_hd__and3b_2
    assign sky130_fd_sc_hd__xor2_2_11_B = sky130_fd_sc_hd__or4_2_4_B
                                          & sky130_fd_sc_hd__or4_2_4_A
                                          & sky130_fd_sc_hd__inv_2_7_A;  // sky130_fd_sc_hd__and3_2_14 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__xor2_2_15_X = sky130_fd_sc_hd__xor2_2_19_B
                                          ^ sky130_fd_sc_hd__or2_2_9_X;  // sky130_fd_sc_hd__xor2_2_15 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_1_B = ~((sky130_fd_sc_hd__xor2_2_0_B & sky130_fd_sc_hd__xor2_2_7_X) | sky130_fd_sc_hd__nor2_2_6_Y);  // sky130_fd_sc_hd__a21oi_2_10 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__xor2_2_4_X = sky130_fd_sc_hd__xor2_2_4_A
                                         ^ sky130_fd_sc_hd__xor2_2_7_X;  // sky130_fd_sc_hd__xor2_2_4 : sky130_fd_sc_hd__xor2_2

    assign sky130_fd_sc_hd__a21o_2_10_X = (sky130_fd_sc_hd__and4_2_3_A & sky130_fd_sc_hd__inv_2_10_A)
                                          | sky130_fd_sc_hd__and4_2_3_B;  // sky130_fd_sc_hd__a21o_2_10 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_9_X = (sky130_fd_sc_hd__xor2_2_9_A & sky130_fd_sc_hd__inv_2_5_A)
                                         | sky130_fd_sc_hd__xor2_2_4_A;  // sky130_fd_sc_hd__a21o_2_9 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21oi_2_6_Y = ~((sky130_fd_sc_hd__xor2_2_4_A & sky130_fd_sc_hd__xnor2_2_4_A) | sky130_fd_sc_hd__or3_2_5_B);  // sky130_fd_sc_hd__a21oi_2_6 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__a22o_2_1_X = (sky130_fd_sc_hd__inv_2_7_Y & sky130_fd_sc_hd__or2_2_7_A)
                                         | (sky130_fd_sc_hd__o211a_2_8_X & sky130_fd_sc_hd__inv_2_9_Y);  // sky130_fd_sc_hd__a22o_2_1 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_2_X = (sky130_fd_sc_hd__or4_2_4_X & sky130_fd_sc_hd__a22o_2_2_A2)
                                         | (sky130_fd_sc_hd__buf_2_0_X & sky130_fd_sc_hd__a22o_2_2_B2);  // sky130_fd_sc_hd__a22o_2_2 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_3_X = (sky130_fd_sc_hd__or3_2_9_A & sky130_fd_sc_hd__or2_2_9_X)
                                         | (sky130_fd_sc_hd__o32a_2_2_A2 & sky130_fd_sc_hd__or3b_2_0_X);  // sky130_fd_sc_hd__a22o_2_3 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_9_A1 = ~(sky130_fd_sc_hd__a22o_2_4_B2 ^ sky130_fd_sc_hd__a22o_2_22_X);  // sky130_fd_sc_hd__xnor2_2_15 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__a31o_2_11_X = (sky130_fd_sc_hd__inv_2_9_A & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__mux2_1_7_X)
                                          | sky130_fd_sc_hd__inv_2_6_A;  // sky130_fd_sc_hd__a31o_2_11 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_13_X = (sky130_fd_sc_hd__inv_2_9_A & sky130_fd_sc_hd__nor2_2_29_Y & sky130_fd_sc_hd__inv_2_7_A)
                                          | sky130_fd_sc_hd__or2_2_11_A;  // sky130_fd_sc_hd__a31o_2_13 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_15_X = (sky130_fd_sc_hd__or2_2_9_B & sky130_fd_sc_hd__inv_2_13_Y & sky130_fd_sc_hd__nand2_2_29_Y)
                                          | sky130_fd_sc_hd__a22oi_2_0_Y;  // sky130_fd_sc_hd__a31o_2_15 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_7_X = (sky130_fd_sc_hd__xor2_2_0_B & sky130_fd_sc_hd__xor2_2_9_A & sky130_fd_sc_hd__xor2_2_4_A)
                                         | sky130_fd_sc_hd__or3_2_5_B;  // sky130_fd_sc_hd__a31o_2_7 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_9_X = (sky130_fd_sc_hd__and4_2_3_C & sky130_fd_sc_hd__inv_2_10_A & sky130_fd_sc_hd__and4_2_4_D)
                                         | sky130_fd_sc_hd__nor3_2_2_A;  // sky130_fd_sc_hd__a31o_2_9 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__and2b_2_16_X = (~sky130_fd_sc_hd__inv_2_7_A)
                                           & sky130_fd_sc_hd__or2_2_10_A;  // sky130_fd_sc_hd__and2b_2_16 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and2b_2_9_B = (sky130_fd_sc_hd__and4_2_4_B & sky130_fd_sc_hd__inv_2_10_A & sky130_fd_sc_hd__and4_2_4_D)
                                          | sky130_fd_sc_hd__nor3_2_2_B;  // sky130_fd_sc_hd__a31o_2_10 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__and3_2_11_X = sky130_fd_sc_hd__and4_2_3_A
                                          & sky130_fd_sc_hd__and4_2_3_B
                                          & sky130_fd_sc_hd__inv_2_10_A;  // sky130_fd_sc_hd__and3_2_11 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and3_2_13_C = sky130_fd_sc_hd__and3_2_12_A
                                          & sky130_fd_sc_hd__and3_2_12_B
                                          & sky130_fd_sc_hd__and3_2_12_C;  // sky130_fd_sc_hd__and3_2_12 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and3_2_4_A = ~((~sky130_fd_sc_hd__xnor2_2_4_A) & sky130_fd_sc_hd__xor2_2_4_X);  // sky130_fd_sc_hd__nand2b_2_6 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__and3_2_6_C = sky130_fd_sc_hd__and3_2_5_A
                                         & sky130_fd_sc_hd__and3_2_5_B
                                         & sky130_fd_sc_hd__and3_2_5_C;  // sky130_fd_sc_hd__and3_2_5 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and4_2_0_X = sky130_fd_sc_hd__and4_2_0_A
                                         & sky130_fd_sc_hd__and4_2_0_B
                                         & sky130_fd_sc_hd__and4_2_0_C
                                         & sky130_fd_sc_hd__and4_2_0_D;  // sky130_fd_sc_hd__and4_2_0 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__and4_2_1_X = sky130_fd_sc_hd__and4_2_1_A
                                         & sky130_fd_sc_hd__and4_2_1_B
                                         & sky130_fd_sc_hd__and4_2_1_C
                                         & sky130_fd_sc_hd__and4_2_1_D;  // sky130_fd_sc_hd__and4_2_1 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__and4_2_3_X = sky130_fd_sc_hd__and4_2_3_A
                                         & sky130_fd_sc_hd__and4_2_3_B
                                         & sky130_fd_sc_hd__and4_2_3_C
                                         & sky130_fd_sc_hd__nor3_2_2_Y;  // sky130_fd_sc_hd__and4_2_3 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__and4_2_4_X = sky130_fd_sc_hd__nor3_2_2_B
                                         & sky130_fd_sc_hd__and4_2_4_B
                                         & sky130_fd_sc_hd__inv_2_10_A
                                         & sky130_fd_sc_hd__and4_2_4_D;  // sky130_fd_sc_hd__and4_2_4 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__and4_2_5_X = sky130_fd_sc_hd__and4_2_5_A
                                         & sky130_fd_sc_hd__and4_2_5_B
                                         & sky130_fd_sc_hd__and4_2_5_C
                                         & sky130_fd_sc_hd__and4_2_5_D;  // sky130_fd_sc_hd__and4_2_5 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__and4_2_6_X = sky130_fd_sc_hd__and4_2_6_A
                                         & sky130_fd_sc_hd__and4_2_6_B
                                         & sky130_fd_sc_hd__and4_2_6_C
                                         & sky130_fd_sc_hd__and4_2_6_D;  // sky130_fd_sc_hd__and4_2_6 : sky130_fd_sc_hd__and4_2
    assign sky130_fd_sc_hd__clkbuf_4_0_X = sky130_fd_sc_hd__clkbuf_8_1_X;  // sky130_fd_sc_hd__clkbuf_4_0 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_10_X = sky130_fd_sc_hd__clkbuf_8_9_X;  // sky130_fd_sc_hd__clkbuf_4_10 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_11_X = sky130_fd_sc_hd__clkbuf_8_11_X;  // sky130_fd_sc_hd__clkbuf_4_11 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_12_X = sky130_fd_sc_hd__clkbuf_8_10_X;  // sky130_fd_sc_hd__clkbuf_4_12 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_13_X = sky130_fd_sc_hd__dfxtp_2_2_CLK;  // sky130_fd_sc_hd__clkbuf_4_13 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_14_X = sky130_fd_sc_hd__dfrtp_2_8_CLK;  // sky130_fd_sc_hd__clkbuf_4_14 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_1_X = sky130_fd_sc_hd__clkbuf_8_0_X;  // sky130_fd_sc_hd__clkbuf_4_1 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_2_X = sky130_fd_sc_hd__clkbuf_8_4_X;  // sky130_fd_sc_hd__clkbuf_4_2 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_3_X = sky130_fd_sc_hd__clkbuf_8_3_X;  // sky130_fd_sc_hd__clkbuf_4_3 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_4_X = sky130_fd_sc_hd__clkbuf_8_2_X;  // sky130_fd_sc_hd__clkbuf_4_4 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_5_X = sky130_fd_sc_hd__clkbuf_8_5_X;  // sky130_fd_sc_hd__clkbuf_4_5 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_6_X = sky130_fd_sc_hd__clkbuf_8_6_X;  // sky130_fd_sc_hd__clkbuf_4_6 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_7_X = sky130_fd_sc_hd__clkbuf_8_7_X;  // sky130_fd_sc_hd__clkbuf_4_7 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_8_X = sky130_fd_sc_hd__clkbuf_8_8_X;  // sky130_fd_sc_hd__clkbuf_4_8 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__clkbuf_4_9_X = sky130_fd_sc_hd__clkbuf_4_9_A;  // sky130_fd_sc_hd__clkbuf_4_9 : sky130_fd_sc_hd__clkbuf_4
    assign sky130_fd_sc_hd__dfrtp_2_43_D = ~((sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__inv_2_9_A) | sky130_fd_sc_hd__a21oi_2_13_Y | sky130_fd_sc_hd__xor2_2_11_B);  // sky130_fd_sc_hd__a211oi_2_0 : sky130_fd_sc_hd__a211oi_2
    assign sky130_fd_sc_hd__dfrtp_2_45_D = ~((sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__inv_2_9_A) | (sky130_fd_sc_hd__and4_2_7_X & sky130_fd_sc_hd__or4_2_4_D) | sky130_fd_sc_hd__a41oi_2_0_Y);  // sky130_fd_sc_hd__a221oi_2_0 : sky130_fd_sc_hd__a221oi_2
    assign sky130_fd_sc_hd__dfrtp_2_57_D = ~((~sky130_fd_sc_hd__o21a_2_19_A1) & sky130_fd_sc_hd__nand4_2_7_Y);  // sky130_fd_sc_hd__nand2b_2_14 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_63_D = ~((~sky130_fd_sc_hd__o21a_2_23_A1) & sky130_fd_sc_hd__nand4_2_8_Y);  // sky130_fd_sc_hd__nand2b_2_17 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_64_D = ~((~sky130_fd_sc_hd__o21a_2_28_A1) & sky130_fd_sc_hd__o21a_2_28_A2);  // sky130_fd_sc_hd__nand2b_2_21 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_66_D = ~((~sky130_fd_sc_hd__o21a_2_21_A1) & sky130_fd_sc_hd__nand4_2_9_Y);  // sky130_fd_sc_hd__nand2b_2_16 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_67_D = ~((~sky130_fd_sc_hd__o21a_2_24_A1) & sky130_fd_sc_hd__o21a_2_24_A2);  // sky130_fd_sc_hd__nand2b_2_18 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_68_D = ~((~sky130_fd_sc_hd__o21a_2_25_A1) & sky130_fd_sc_hd__o21a_2_25_A2);  // sky130_fd_sc_hd__nand2b_2_19 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_70_D = ~((~sky130_fd_sc_hd__o21a_2_27_A1) & sky130_fd_sc_hd__o21a_2_27_A2);  // sky130_fd_sc_hd__nand2b_2_20 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__inv_2_10_Y = ~sky130_fd_sc_hd__inv_2_10_A;  // sky130_fd_sc_hd__inv_2_10 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_12_Y = ~sky130_fd_sc_hd__inv_2_12_A;  // sky130_fd_sc_hd__inv_2_12 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__inv_2_5_Y = ~sky130_fd_sc_hd__inv_2_5_A;  // sky130_fd_sc_hd__inv_2_5 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__mux2_1_5_X = sky130_fd_sc_hd__xor2_2_7_A ? sky130_fd_sc_hd__mux2_1_5_A1 : sky130_fd_sc_hd__and3_2_7_X;  // sky130_fd_sc_hd__mux2_1_5 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_6_X = sky130_fd_sc_hd__inv_2_7_Y ? sky130_fd_sc_hd__inv_2_8_Y : sky130_fd_sc_hd__inv_2_9_A;  // sky130_fd_sc_hd__mux2_1_6 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__nand2_2_38_Y = ~(sky130_fd_sc_hd__or2_2_12_A & sky130_fd_sc_hd__or2_2_12_B);  // sky130_fd_sc_hd__nand2_2_38 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nand3_2_0_Y = ~(sky130_fd_sc_hd__xor2_2_9_A & sky130_fd_sc_hd__xor2_2_4_A & sky130_fd_sc_hd__inv_2_5_A);  // sky130_fd_sc_hd__nand3_2_0 : sky130_fd_sc_hd__nand3_2
    assign sky130_fd_sc_hd__nor2_2_30_Y = ~(sky130_fd_sc_hd__inv_2_10_A | sky130_fd_sc_hd__nor2_2_30_B);  // sky130_fd_sc_hd__nor2_2_30 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_31_Y = ~(sky130_fd_sc_hd__inv_2_9_A | sky130_fd_sc_hd__nor2_2_31_B);  // sky130_fd_sc_hd__nor2_2_31 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_34_Y = ~(sky130_fd_sc_hd__inv_2_7_A | sky130_fd_sc_hd__nor2_2_40_A);  // sky130_fd_sc_hd__nor2_2_34 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_39_Y = ~(sky130_fd_sc_hd__or2_2_10_A | sky130_fd_sc_hd__inv_2_7_A);  // sky130_fd_sc_hd__nor2_2_39 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_41_Y = ~(sky130_fd_sc_hd__or4_2_9_C | sky130_fd_sc_hd__or4_2_9_D);  // sky130_fd_sc_hd__nor2_2_41 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_43_Y = ~(sky130_fd_sc_hd__or4_2_7_C | sky130_fd_sc_hd__or4_2_7_D);  // sky130_fd_sc_hd__nor2_2_43 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_44_Y = ~(sky130_fd_sc_hd__or4_2_8_C | sky130_fd_sc_hd__or4_2_8_D);  // sky130_fd_sc_hd__nor2_2_44 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_45_Y = ~(sky130_fd_sc_hd__or4_2_6_C | sky130_fd_sc_hd__or4_2_6_D);  // sky130_fd_sc_hd__nor2_2_45 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_46_A = ~((~sky130_fd_sc_hd__inv_2_7_A) & sky130_fd_sc_hd__or2_2_10_A);  // sky130_fd_sc_hd__nand2b_2_22 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nor2_2_9_B = ~(sky130_fd_sc_hd__nor2_2_8_A & sky130_fd_sc_hd__nor2_2_0_B);  // sky130_fd_sc_hd__nand2_2_7 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o211a_2_9_X = (sky130_fd_sc_hd__or2_2_9_A | sky130_fd_sc_hd__or2_2_8_X)
                                          & sky130_fd_sc_hd__o21a_2_15_A2
                                          & sky130_fd_sc_hd__o21ai_2_5_Y;  // sky130_fd_sc_hd__o211a_2_9 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__o21a_2_15_X = (sky130_fd_sc_hd__or2_2_9_A | sky130_fd_sc_hd__o21a_2_15_A2)
                                          & sky130_fd_sc_hd__o21ai_2_5_Y;  // sky130_fd_sc_hd__o21a_2_15 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_19_X = (sky130_fd_sc_hd__o21a_2_19_A1 | sky130_fd_sc_hd__nand4_2_7_Y)
                                          & sky130_fd_sc_hd__a31o_2_18_X;  // sky130_fd_sc_hd__o21a_2_19 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_21_X = (sky130_fd_sc_hd__o21a_2_21_A1 | sky130_fd_sc_hd__nand4_2_9_Y)
                                          & sky130_fd_sc_hd__a31o_2_24_X;  // sky130_fd_sc_hd__o21a_2_21 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_23_X = (sky130_fd_sc_hd__o21a_2_23_A1 | sky130_fd_sc_hd__nand4_2_8_Y)
                                          & sky130_fd_sc_hd__a31o_2_19_X;  // sky130_fd_sc_hd__o21a_2_23 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_24_X = (sky130_fd_sc_hd__o21a_2_24_A1 | sky130_fd_sc_hd__o21a_2_24_A2)
                                          & sky130_fd_sc_hd__a31o_2_20_X;  // sky130_fd_sc_hd__o21a_2_24 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_25_X = (sky130_fd_sc_hd__o21a_2_25_A1 | sky130_fd_sc_hd__o21a_2_25_A2)
                                          & sky130_fd_sc_hd__a31o_2_21_X;  // sky130_fd_sc_hd__o21a_2_25 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_27_X = (sky130_fd_sc_hd__o21a_2_27_A1 | sky130_fd_sc_hd__o21a_2_27_A2)
                                          & sky130_fd_sc_hd__a31o_2_22_X;  // sky130_fd_sc_hd__o21a_2_27 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_28_X = (sky130_fd_sc_hd__o21a_2_28_A1 | sky130_fd_sc_hd__o21a_2_28_A2)
                                          & sky130_fd_sc_hd__a31o_2_23_X;  // sky130_fd_sc_hd__o21a_2_28 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21ai_2_3_B1 = ~((I & sky130_fd_sc_hd__nor2_2_40_A) | (~sky130_fd_sc_hd__inv_2_7_A));  // sky130_fd_sc_hd__a21boi_2_0 : sky130_fd_sc_hd__a21boi_2
    assign sky130_fd_sc_hd__o21ba_2_1_X = (success | sky130_fd_sc_hd__a32o_2_3_B1)
                                          & (~sky130_fd_sc_hd__or4b_2_8_C);  // sky130_fd_sc_hd__o21ba_2_1 : sky130_fd_sc_hd__o21ba_2
    assign sky130_fd_sc_hd__o21bai_2_0_Y = ~((sky130_fd_sc_hd__nor3_2_1_B | sky130_fd_sc_hd__o32ai_2_0_B1) & (~sky130_fd_sc_hd__xnor2_2_6_A));  // sky130_fd_sc_hd__o21bai_2_0 : sky130_fd_sc_hd__o21bai_2
    assign sky130_fd_sc_hd__o221a_2_2_X = (sky130_fd_sc_hd__or2_2_8_X | sky130_fd_sc_hd__nor2_2_32_B)
                                          & (sky130_fd_sc_hd__nor2_2_32_Y | sky130_fd_sc_hd__o221a_2_2_B2)
                                          & sky130_fd_sc_hd__o221a_2_2_C1;  // sky130_fd_sc_hd__o221a_2_2 : sky130_fd_sc_hd__o221a_2
    assign sky130_fd_sc_hd__o22a_2_3_B1 = ~(sky130_fd_sc_hd__inv_2_7_A | sky130_fd_sc_hd__nor3b_2_0_B | (~sky130_fd_sc_hd__nor2_2_40_A));  // sky130_fd_sc_hd__nor3b_2_0 : sky130_fd_sc_hd__nor3b_2
    assign sky130_fd_sc_hd__o31a_2_0_X = (sky130_fd_sc_hd__o31a_2_0_A1 | sky130_fd_sc_hd__o31a_2_0_A2 | sky130_fd_sc_hd__nor3_2_1_Y)
                                         & sky130_fd_sc_hd__o31a_2_0_B1;  // sky130_fd_sc_hd__o31a_2_0 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_1_X = (sky130_fd_sc_hd__or2_2_9_B | sky130_fd_sc_hd__or3_2_9_A | sky130_fd_sc_hd__o31a_2_1_A3)
                                         & sky130_fd_sc_hd__o31a_2_1_B1;  // sky130_fd_sc_hd__o31a_2_1 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o32a_2_2_A3 = ~(sky130_fd_sc_hd__or2_2_9_B | sky130_fd_sc_hd__o32a_2_2_B1);  // sky130_fd_sc_hd__nor2_2_35 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o32a_2_2_B2 = ~(sky130_fd_sc_hd__or2_2_9_X & sky130_fd_sc_hd__o32a_2_2_A2);  // sky130_fd_sc_hd__nand2_2_28 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o32ai_2_0_Y = ~((sky130_fd_sc_hd__o31a_2_0_A1 | sky130_fd_sc_hd__o31a_2_0_A2 | sky130_fd_sc_hd__and2_2_7_X) & (sky130_fd_sc_hd__o32ai_2_0_B1 | sky130_fd_sc_hd__or3b_2_0_A));  // sky130_fd_sc_hd__o32ai_2_0 : sky130_fd_sc_hd__o32ai_2
    assign sky130_fd_sc_hd__or2_2_10_X = sky130_fd_sc_hd__or2_2_10_A
                                         | sky130_fd_sc_hd__inv_2_7_A;  // sky130_fd_sc_hd__or2_2_10 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or2_2_12_X = sky130_fd_sc_hd__or2_2_12_A
                                         | sky130_fd_sc_hd__or2_2_12_B;  // sky130_fd_sc_hd__or2_2_12 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or3_2_3_A = ~(sky130_fd_sc_hd__nor2_2_8_A | sky130_fd_sc_hd__or2_2_1_X);  // sky130_fd_sc_hd__nor2_2_8 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_5_A = ~(sky130_fd_sc_hd__xor2_2_0_B | sky130_fd_sc_hd__and3_2_2_B);  // sky130_fd_sc_hd__nor2_2_25 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_5_C = sky130_fd_sc_hd__and3_2_2_A
                                        & sky130_fd_sc_hd__and3_2_2_B
                                        & sky130_fd_sc_hd__and3_2_2_C;  // sky130_fd_sc_hd__and3_2_2 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__or3_2_9_X = sky130_fd_sc_hd__or3_2_9_A
                                        | sky130_fd_sc_hd__or3_2_9_B
                                        | sky130_fd_sc_hd__or3_2_9_C;  // sky130_fd_sc_hd__or3_2_9 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or4_2_6_X = sky130_fd_sc_hd__or4_2_6_A
                                        | sky130_fd_sc_hd__or4_2_6_B
                                        | sky130_fd_sc_hd__or4_2_6_C
                                        | sky130_fd_sc_hd__or4_2_6_D;  // sky130_fd_sc_hd__or4_2_6 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4_2_7_X = sky130_fd_sc_hd__or4_2_7_A
                                        | sky130_fd_sc_hd__or4_2_7_B
                                        | sky130_fd_sc_hd__or4_2_7_C
                                        | sky130_fd_sc_hd__or4_2_7_D;  // sky130_fd_sc_hd__or4_2_7 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4_2_8_X = sky130_fd_sc_hd__or4_2_8_A
                                        | sky130_fd_sc_hd__or4_2_8_B
                                        | sky130_fd_sc_hd__or4_2_8_C
                                        | sky130_fd_sc_hd__or4_2_8_D;  // sky130_fd_sc_hd__or4_2_8 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4_2_9_X = sky130_fd_sc_hd__or4_2_9_A
                                        | sky130_fd_sc_hd__or4_2_9_B
                                        | sky130_fd_sc_hd__or4_2_9_C
                                        | sky130_fd_sc_hd__or4_2_9_D;  // sky130_fd_sc_hd__or4_2_9 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4b_2_8_A = ~(sky130_fd_sc_hd__and4_2_3_A | sky130_fd_sc_hd__and4_2_3_B | sky130_fd_sc_hd__and4_2_3_C | (~sky130_fd_sc_hd__nor3_2_2_Y));  // sky130_fd_sc_hd__nor4b_2_1 : sky130_fd_sc_hd__nor4b_2
    assign sky130_fd_sc_hd__xnor2_2_11_B = ~(sky130_fd_sc_hd__inv_2_10_A & sky130_fd_sc_hd__and4_2_4_D);  // sky130_fd_sc_hd__nand2_2_24 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__xnor2_2_14_B = ~((sky130_fd_sc_hd__inv_2_12_A & sky130_fd_sc_hd__o31a_2_1_B1) | sky130_fd_sc_hd__or3_2_9_A);  // sky130_fd_sc_hd__a21oi_2_16 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__xnor2_2_5_B = ~(sky130_fd_sc_hd__xnor2_2_4_A ^ sky130_fd_sc_hd__xor2_2_4_X);  // sky130_fd_sc_hd__xnor2_2_4 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_6_Y = ~(sky130_fd_sc_hd__xnor2_2_6_A ^ sky130_fd_sc_hd__a21o_2_6_X);  // sky130_fd_sc_hd__xnor2_2_6 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_8_B = ((~sky130_fd_sc_hd__or4_2_4_C) | (~sky130_fd_sc_hd__xor2_2_1_B))
                                          & (sky130_fd_sc_hd__nand2_2_2_Y | sky130_fd_sc_hd__xor2_2_9_A);  // sky130_fd_sc_hd__o2bb2a_2_0 : sky130_fd_sc_hd__o2bb2a_2
    assign sky130_fd_sc_hd__xor2_2_11_X = sky130_fd_sc_hd__or4_2_4_C
                                          ^ sky130_fd_sc_hd__xor2_2_11_B;  // sky130_fd_sc_hd__xor2_2_11 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_16_X = sky130_fd_sc_hd__xor2_2_16_A
                                          ^ sky130_fd_sc_hd__or2_2_12_B;  // sky130_fd_sc_hd__xor2_2_16 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_1_X = sky130_fd_sc_hd__or4_2_4_C
                                         ^ sky130_fd_sc_hd__xor2_2_1_B;  // sky130_fd_sc_hd__xor2_2_1 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_3_B = ~(sky130_fd_sc_hd__nor2_2_8_A | sky130_fd_sc_hd__nor2_2_0_B);  // sky130_fd_sc_hd__nor2_2_0 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__xor2_2_9_X = sky130_fd_sc_hd__xor2_2_9_A
                                         ^ sky130_fd_sc_hd__inv_2_5_A;  // sky130_fd_sc_hd__xor2_2_9 : sky130_fd_sc_hd__xor2_2

    assign sky130_fd_sc_hd__a21o_2_14_X = (sky130_fd_sc_hd__inv_2_18_A & sky130_fd_sc_hd__nor2_2_43_Y)
                                          | sky130_fd_sc_hd__or4_2_7_A;  // sky130_fd_sc_hd__a21o_2_14 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_15_X = (sky130_fd_sc_hd__inv_2_19_A & sky130_fd_sc_hd__nor2_2_44_Y)
                                          | sky130_fd_sc_hd__or4_2_8_A;  // sky130_fd_sc_hd__a21o_2_15 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_16_X = (sky130_fd_sc_hd__inv_2_20_A & sky130_fd_sc_hd__nor2_2_45_Y)
                                          | sky130_fd_sc_hd__or4_2_6_A;  // sky130_fd_sc_hd__a21o_2_16 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_18_X = (sky130_fd_sc_hd__inv_2_17_A & sky130_fd_sc_hd__nor2_2_41_Y)
                                          | sky130_fd_sc_hd__or4_2_9_A;  // sky130_fd_sc_hd__a21o_2_18 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a221o_2_1_X = (sky130_fd_sc_hd__or4bb_2_0_X & sky130_fd_sc_hd__mux2_1_12_A1)
                                          | (sky130_fd_sc_hd__conb_1_2_HI & sky130_fd_sc_hd__mux2_1_12_A0)
                                          | sky130_fd_sc_hd__a22o_2_2_X;  // sky130_fd_sc_hd__a221o_2_1 : sky130_fd_sc_hd__a221o_2
    assign sky130_fd_sc_hd__a22o_2_4_X = (sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__xor2_2_20_A)
                                         | (sky130_fd_sc_hd__nor2_2_39_Y & sky130_fd_sc_hd__a22o_2_4_B2);  // sky130_fd_sc_hd__a22o_2_4 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_5_X = (sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__xor2_2_14_B)
                                         | (sky130_fd_sc_hd__xor2_2_20_A & sky130_fd_sc_hd__nor2_2_39_Y);  // sky130_fd_sc_hd__a22o_2_5 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a32o_2_2_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__and3_2_10_B)
                                         | (sky130_fd_sc_hd__inv_2_10_Y & sky130_fd_sc_hd__and4_2_3_A);  // sky130_fd_sc_hd__a32o_2_2 : sky130_fd_sc_hd__a32o_2
    assign sky130_fd_sc_hd__and2_2_15_X = sky130_fd_sc_hd__inv_2_6_Y
                                          & sky130_fd_sc_hd__and4_2_3_X;  // sky130_fd_sc_hd__and2_2_15 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and2b_2_9_X = (~sky130_fd_sc_hd__and4_2_4_X)
                                          & sky130_fd_sc_hd__and2b_2_9_B;  // sky130_fd_sc_hd__and2b_2_9 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__and3_2_4_B = ~(sky130_fd_sc_hd__or4_2_4_D & sky130_fd_sc_hd__xnor2_2_5_B);  // sky130_fd_sc_hd__nand2_2_16 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__and3_2_6_X = sky130_fd_sc_hd__and4_2_1_X
                                         & sky130_fd_sc_hd__and4_2_0_X
                                         & sky130_fd_sc_hd__and3_2_6_C;  // sky130_fd_sc_hd__and3_2_6 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and4b_2_3_D = sky130_fd_sc_hd__and4_2_5_X
                                          & sky130_fd_sc_hd__and4_2_6_X
                                          & sky130_fd_sc_hd__and3_2_13_C;  // sky130_fd_sc_hd__and3_2_13 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__dfrtp_2_25_D = (~sky130_fd_sc_hd__and3_2_11_X)
                                           & sky130_fd_sc_hd__a21o_2_10_X;  // sky130_fd_sc_hd__and2b_2_10 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__dfrtp_2_29_D = ~((sky130_fd_sc_hd__inv_2_8_Y & sky130_fd_sc_hd__mux2_1_7_A0) | sky130_fd_sc_hd__mux2_1_6_X);  // sky130_fd_sc_hd__a21oi_2_12 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__inv_2_4_A = ~(sky130_fd_sc_hd__or2_2_1_B | sky130_fd_sc_hd__nor2_2_9_B);  // sky130_fd_sc_hd__nor2_2_9 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_40_Y = ~(sky130_fd_sc_hd__nor2_2_40_A | sky130_fd_sc_hd__nor2_2_46_A);  // sky130_fd_sc_hd__nor2_2_40 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_46_Y = ~(sky130_fd_sc_hd__nor2_2_46_A | sky130_fd_sc_hd__nor2_2_46_B);  // sky130_fd_sc_hd__nor2_2_46 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor3_2_3_A = ~((sky130_fd_sc_hd__inv_2_22_Y & sky130_fd_sc_hd__a32o_2_3_B1) | sky130_fd_sc_hd__or4b_2_8_C | sky130_fd_sc_hd__or4b_2_8_A);  // sky130_fd_sc_hd__a211oi_2_1 : sky130_fd_sc_hd__a211oi_2
    assign sky130_fd_sc_hd__nor3_2_3_B = ~(sky130_fd_sc_hd__or4b_2_8_A | sky130_fd_sc_hd__o21ba_2_1_X);  // sky130_fd_sc_hd__nor2_2_48 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o211a_2_7_X = (sky130_fd_sc_hd__and3_2_7_C | sky130_fd_sc_hd__mux2_1_5_A1)
                                          & sky130_fd_sc_hd__a31o_2_8_X
                                          & sky130_fd_sc_hd__inv_2_5_Y;  // sky130_fd_sc_hd__o211a_2_7 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__o21a_2_11_X = (sky130_fd_sc_hd__or3_2_8_B | sky130_fd_sc_hd__and3_2_11_X)
                                          & sky130_fd_sc_hd__xnor2_2_11_B;  // sky130_fd_sc_hd__o21a_2_11 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_12_X = (sky130_fd_sc_hd__o21a_2_12_A1 | sky130_fd_sc_hd__xnor2_2_11_B)
                                          & sky130_fd_sc_hd__a31o_2_9_X;  // sky130_fd_sc_hd__o21a_2_12 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_14_B1 = ~((sky130_fd_sc_hd__xor2_2_13_X & sky130_fd_sc_hd__xor2_2_14_X) | sky130_fd_sc_hd__nor2_2_46_A);  // sky130_fd_sc_hd__a21oi_2_19 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__o21a_2_20_X = (sky130_fd_sc_hd__inv_2_18_A | sky130_fd_sc_hd__nor2_2_43_Y)
                                          & sky130_fd_sc_hd__or4_2_7_X;  // sky130_fd_sc_hd__o21a_2_20 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_22_X = (sky130_fd_sc_hd__inv_2_19_A | sky130_fd_sc_hd__nor2_2_44_Y)
                                          & sky130_fd_sc_hd__or4_2_8_X;  // sky130_fd_sc_hd__o21a_2_22 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_26_X = (sky130_fd_sc_hd__inv_2_20_A | sky130_fd_sc_hd__nor2_2_45_Y)
                                          & sky130_fd_sc_hd__or4_2_6_X;  // sky130_fd_sc_hd__o21a_2_26 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_29_X = (sky130_fd_sc_hd__inv_2_17_A | sky130_fd_sc_hd__nor2_2_41_Y)
                                          & sky130_fd_sc_hd__or4_2_9_X;  // sky130_fd_sc_hd__o21a_2_29 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21ai_2_3_Y = ~((I | sky130_fd_sc_hd__nor2_2_40_A) & sky130_fd_sc_hd__o21ai_2_3_B1);  // sky130_fd_sc_hd__o21ai_2_3 : sky130_fd_sc_hd__o21ai_2
    assign sky130_fd_sc_hd__o21ai_2_4_Y = ~((sky130_fd_sc_hd__inv_2_12_Y | sky130_fd_sc_hd__o32a_2_2_B2) & sky130_fd_sc_hd__a211o_2_3_X);  // sky130_fd_sc_hd__o21ai_2_4 : sky130_fd_sc_hd__o21ai_2
    assign sky130_fd_sc_hd__o22a_2_3_B2 = (sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__or2_2_12_A)
                                          | (sky130_fd_sc_hd__nor2_2_34_Y & sky130_fd_sc_hd__nor3b_2_0_B)
                                          | sky130_fd_sc_hd__nor2_2_39_Y;  // sky130_fd_sc_hd__a221o_2_3 : sky130_fd_sc_hd__a221o_2
    assign sky130_fd_sc_hd__o22ai_2_0_Y = ~((sky130_fd_sc_hd__xor2_2_0_B | sky130_fd_sc_hd__and3_2_2_B) & (sky130_fd_sc_hd__a21oi_2_5_Y | sky130_fd_sc_hd__a31o_2_7_X));  // sky130_fd_sc_hd__o22ai_2_0 : sky130_fd_sc_hd__o22ai_2
    assign sky130_fd_sc_hd__o311a_2_1_X = (sky130_fd_sc_hd__xor2_2_7_A | sky130_fd_sc_hd__and3_2_7_C | sky130_fd_sc_hd__mux2_1_5_A1)
                                          & sky130_fd_sc_hd__nand3_2_0_Y
                                          & sky130_fd_sc_hd__a21o_2_9_X;  // sky130_fd_sc_hd__o311a_2_1 : sky130_fd_sc_hd__o311a_2
    assign sky130_fd_sc_hd__o32a_2_2_X = (sky130_fd_sc_hd__inv_2_12_Y | sky130_fd_sc_hd__o32a_2_2_A2 | sky130_fd_sc_hd__o32a_2_2_A3)
                                         & (sky130_fd_sc_hd__o32a_2_2_B1 | sky130_fd_sc_hd__o32a_2_2_B2);  // sky130_fd_sc_hd__o32a_2_2 : sky130_fd_sc_hd__o32a_2
    assign sky130_fd_sc_hd__o32a_2_3_A1 = (~sky130_fd_sc_hd__xor2_2_16_X)
                                          & sky130_fd_sc_hd__nor2_2_34_Y;  // sky130_fd_sc_hd__and2b_2_18 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__o32a_2_3_A2 = (~sky130_fd_sc_hd__inv_2_7_A)
                                          & sky130_fd_sc_hd__nor2_2_40_A
                                          & sky130_fd_sc_hd__xor2_2_16_X;  // sky130_fd_sc_hd__and3b_2_3 : sky130_fd_sc_hd__and3b_2
    assign sky130_fd_sc_hd__o32a_2_3_A3 = (sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__xor2_2_19_B)
                                          | sky130_fd_sc_hd__nor2_2_39_Y;  // sky130_fd_sc_hd__a21o_2_12 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__or2_2_0_B = (~sky130_fd_sc_hd__xor2_2_3_B)
                                        & sky130_fd_sc_hd__nor2_2_9_B;  // sky130_fd_sc_hd__and2b_2_0 : sky130_fd_sc_hd__and2b_2
    assign sky130_fd_sc_hd__or3_2_5_X = sky130_fd_sc_hd__or3_2_5_A
                                        | sky130_fd_sc_hd__or3_2_5_B
                                        | sky130_fd_sc_hd__or3_2_5_C;  // sky130_fd_sc_hd__or3_2_5 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or4b_2_8_X = sky130_fd_sc_hd__or4b_2_8_A
                                         | success
                                         | sky130_fd_sc_hd__or4b_2_8_C
                                         | (~sky130_fd_sc_hd__a32o_2_3_B1);  // sky130_fd_sc_hd__or4b_2_8 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__xnor2_2_11_Y = ~(sky130_fd_sc_hd__and4_2_3_C ^ sky130_fd_sc_hd__xnor2_2_11_B);  // sky130_fd_sc_hd__xnor2_2_11 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_13_Y = ~(sky130_fd_sc_hd__xor2_2_17_B ^ sky130_fd_sc_hd__a31o_2_15_X);  // sky130_fd_sc_hd__xnor2_2_13 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_14_Y = ~(sky130_fd_sc_hd__xor2_2_16_A ^ sky130_fd_sc_hd__xnor2_2_14_B);  // sky130_fd_sc_hd__xnor2_2_14 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_18_Y = ~(sky130_fd_sc_hd__or3_2_9_X ^ sky130_fd_sc_hd__xor2_2_15_X);  // sky130_fd_sc_hd__xnor2_2_18 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xnor2_2_8_A = ~(sky130_fd_sc_hd__or4_2_4_D ^ sky130_fd_sc_hd__xnor2_2_5_B);  // sky130_fd_sc_hd__xnor2_2_5 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xor2_2_10_X = sky130_fd_sc_hd__or3_2_8_C
                                          ^ sky130_fd_sc_hd__and4_2_4_X;  // sky130_fd_sc_hd__xor2_2_10 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_12_X = sky130_fd_sc_hd__xor2_2_14_B
                                          ^ sky130_fd_sc_hd__o31a_2_1_X;  // sky130_fd_sc_hd__xor2_2_12 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_20_B = ~(sky130_fd_sc_hd__nand2_2_31_A & sky130_fd_sc_hd__a22o_2_3_X);  // sky130_fd_sc_hd__nand2_2_31 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__xor2_2_3_A = ~(sky130_fd_sc_hd__xnor2_2_0_A ^ sky130_fd_sc_hd__xor2_2_1_X);  // sky130_fd_sc_hd__xnor2_2_0 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xor2_2_5_B = (sky130_fd_sc_hd__xnor2_2_4_A & sky130_fd_sc_hd__or3_2_5_B)
                                         | sky130_fd_sc_hd__a21oi_2_6_Y;  // sky130_fd_sc_hd__a21o_2_4 : sky130_fd_sc_hd__a21o_2

    assign sky130_fd_sc_hd__a21o_2_8_A2 = ~(sky130_fd_sc_hd__xnor2_2_8_A & sky130_fd_sc_hd__xnor2_2_8_B);  // sky130_fd_sc_hd__nand2_2_18 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__a221o_2_2_X = (sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__xor2_2_16_A)
                                          | (sky130_fd_sc_hd__xor2_2_19_B & sky130_fd_sc_hd__nor2_2_39_Y)
                                          | sky130_fd_sc_hd__nor2_2_46_Y;  // sky130_fd_sc_hd__a221o_2_2 : sky130_fd_sc_hd__a221o_2
    assign sky130_fd_sc_hd__a31o_2_12_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__a221o_2_1_X)
                                          | sky130_fd_sc_hd__inv_2_11_A;  // sky130_fd_sc_hd__a31o_2_12 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_14_X = (sky130_fd_sc_hd__and2b_2_16_X & sky130_fd_sc_hd__nand2_2_38_Y & sky130_fd_sc_hd__or2_2_12_X)
                                          | sky130_fd_sc_hd__a22o_2_4_X;  // sky130_fd_sc_hd__a31o_2_14 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__and2_2_2_A = ~(sky130_fd_sc_hd__xor2_2_3_A & sky130_fd_sc_hd__or2_2_0_B);  // sky130_fd_sc_hd__nand2_2_1 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__and3_2_0_C = sky130_fd_sc_hd__or2_2_1_X
                                         & sky130_fd_sc_hd__or2_2_0_B;  // sky130_fd_sc_hd__and2_2_0 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and3_2_4_X = sky130_fd_sc_hd__and3_2_4_A
                                         & sky130_fd_sc_hd__and3_2_4_B
                                         & sky130_fd_sc_hd__or3_2_5_X;  // sky130_fd_sc_hd__and3_2_4 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and4b_2_3_X = (~sky130_fd_sc_hd__or2_2_11_B)
                                          & sky130_fd_sc_hd__or2_2_11_A
                                          & sky130_fd_sc_hd__and3_2_6_X
                                          & sky130_fd_sc_hd__and4b_2_3_D;  // sky130_fd_sc_hd__and4b_2_3 : sky130_fd_sc_hd__and4b_2
    assign sky130_fd_sc_hd__dfstp_2_0_D = (sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__a22o_2_4_B2)
                                          | (sky130_fd_sc_hd__xor2_2_17_B & sky130_fd_sc_hd__nor2_2_39_Y)
                                          | sky130_fd_sc_hd__nor2_2_40_Y;  // sky130_fd_sc_hd__a221o_2_5 : sky130_fd_sc_hd__a221o_2
    assign sky130_fd_sc_hd__dfstp_2_2_D = (sky130_fd_sc_hd__and2b_2_16_X & sky130_fd_sc_hd__xnor2_2_19_Y)
                                          | sky130_fd_sc_hd__a22o_2_5_X;  // sky130_fd_sc_hd__a21o_2_11 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__inv_2_4_Y = ~sky130_fd_sc_hd__inv_2_4_A;  // sky130_fd_sc_hd__inv_2_4 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__nand2_2_9_Y = ~(sky130_fd_sc_hd__xor2_2_3_A & sky130_fd_sc_hd__inv_2_4_A);  // sky130_fd_sc_hd__nand2_2_9 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nor2_2_19_Y = ~(sky130_fd_sc_hd__xnor2_2_8_A | sky130_fd_sc_hd__xnor2_2_8_B);  // sky130_fd_sc_hd__nor2_2_19 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_21_A = ~((sky130_fd_sc_hd__and3_2_4_A & sky130_fd_sc_hd__and3_2_4_B) | sky130_fd_sc_hd__or3_2_5_X);  // sky130_fd_sc_hd__a21oi_2_4 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__nor2_2_5_A = ~(sky130_fd_sc_hd__xor2_2_3_A & sky130_fd_sc_hd__or3_2_3_A);  // sky130_fd_sc_hd__nand2_2_6 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nor3_2_3_C = ~sky130_fd_sc_hd__or4b_2_8_X;  // sky130_fd_sc_hd__inv_2_24 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__o21a_2_14_X = (sky130_fd_sc_hd__xor2_2_13_X | sky130_fd_sc_hd__xor2_2_14_X)
                                          & sky130_fd_sc_hd__o21a_2_14_B1;  // sky130_fd_sc_hd__o21a_2_14 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o221a_2_1_X = (sky130_fd_sc_hd__xor2_2_16_A | sky130_fd_sc_hd__or2_2_10_X)
                                          & (sky130_fd_sc_hd__nor2_2_46_A | sky130_fd_sc_hd__xnor2_2_21_Y)
                                          & sky130_fd_sc_hd__o21ai_2_3_Y;  // sky130_fd_sc_hd__o221a_2_1 : sky130_fd_sc_hd__o221a_2
    assign sky130_fd_sc_hd__o22a_2_3_X = (sky130_fd_sc_hd__xor2_2_19_A | sky130_fd_sc_hd__or2_2_10_X)
                                         & (sky130_fd_sc_hd__o22a_2_3_B1 | sky130_fd_sc_hd__o22a_2_3_B2);  // sky130_fd_sc_hd__o22a_2_3 : sky130_fd_sc_hd__o22a_2
    assign sky130_fd_sc_hd__o32a_2_3_X = (sky130_fd_sc_hd__o32a_2_3_A1 | sky130_fd_sc_hd__o32a_2_3_A2 | sky130_fd_sc_hd__o32a_2_3_A3)
                                         & (sky130_fd_sc_hd__or2_2_10_X | sky130_fd_sc_hd__or2_2_12_A);  // sky130_fd_sc_hd__o32a_2_3 : sky130_fd_sc_hd__o32a_2
    assign sky130_fd_sc_hd__or2_2_2_A = sky130_fd_sc_hd__xor2_2_3_A
                                        ^ sky130_fd_sc_hd__xor2_2_3_B;  // sky130_fd_sc_hd__xor2_2_3 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__or3_2_0_B = ~(sky130_fd_sc_hd__xor2_2_3_A ^ sky130_fd_sc_hd__xor2_2_3_B);  // sky130_fd_sc_hd__xnor2_2_2 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__or3_2_2_B = ~(sky130_fd_sc_hd__nor2_2_4_Y | sky130_fd_sc_hd__or2_2_0_B);  // sky130_fd_sc_hd__nor2_2_1 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__xnor2_2_22_Y = ~(sky130_fd_sc_hd__or2_2_12_A ^ sky130_fd_sc_hd__o21ai_2_4_Y);  // sky130_fd_sc_hd__xnor2_2_22 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xor2_2_18_X = sky130_fd_sc_hd__xor2_2_19_A
                                          ^ sky130_fd_sc_hd__o32a_2_2_X;  // sky130_fd_sc_hd__xor2_2_18 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_20_X = sky130_fd_sc_hd__xor2_2_20_A
                                          ^ sky130_fd_sc_hd__xor2_2_20_B;  // sky130_fd_sc_hd__xor2_2_20 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__xor2_2_2_A = (sky130_fd_sc_hd__or4_2_4_B & sky130_fd_sc_hd__xor2_2_0_X & sky130_fd_sc_hd__xor2_2_1_X)
                                         | (sky130_fd_sc_hd__xor2_2_3_A & sky130_fd_sc_hd__xor2_2_3_B);  // sky130_fd_sc_hd__a32o_2_0 : sky130_fd_sc_hd__a32o_2
    assign sky130_fd_sc_hd__xor2_2_2_B = ~(sky130_fd_sc_hd__xnor2_2_8_A ^ sky130_fd_sc_hd__xnor2_2_8_B);  // sky130_fd_sc_hd__xnor2_2_8 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xor2_2_6_B = (~sky130_fd_sc_hd__and4bb_2_0_X)
                                         & sky130_fd_sc_hd__o22ai_2_0_Y;  // sky130_fd_sc_hd__and2b_2_5 : sky130_fd_sc_hd__and2b_2

    assign sky130_fd_sc_hd__a221o_2_4_X = (sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__xor2_2_19_A)
                                          | (sky130_fd_sc_hd__nor2_2_39_Y & sky130_fd_sc_hd__xor2_2_14_B)
                                          | sky130_fd_sc_hd__o21a_2_14_X;  // sky130_fd_sc_hd__a221o_2_4 : sky130_fd_sc_hd__a221o_2
    assign sky130_fd_sc_hd__a32o_2_3_X = (sky130_fd_sc_hd__inv_2_23_Y & sky130_fd_sc_hd__and2_2_15_X & sky130_fd_sc_hd__and4b_2_3_X)
                                         | (sky130_fd_sc_hd__a32o_2_3_B1 & sky130_fd_sc_hd__a32o_2_4_B2);  // sky130_fd_sc_hd__a32o_2_3 : sky130_fd_sc_hd__a32o_2
    assign sky130_fd_sc_hd__a32o_2_4_X = (sky130_fd_sc_hd__inv_2_23_A & sky130_fd_sc_hd__and2_2_15_X & sky130_fd_sc_hd__and4b_2_3_X)
                                         | (success & sky130_fd_sc_hd__a32o_2_4_B2);  // sky130_fd_sc_hd__a32o_2_4 : sky130_fd_sc_hd__a32o_2
    assign sky130_fd_sc_hd__and3_2_1_C = ~(sky130_fd_sc_hd__or2_2_1_X & sky130_fd_sc_hd__or3_2_0_B);  // sky130_fd_sc_hd__nand2_2_0 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nand2_2_5_Y = ~(sky130_fd_sc_hd__or3_2_0_B & sky130_fd_sc_hd__or3_2_2_B);  // sky130_fd_sc_hd__nand2_2_5 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__nor2_2_3_B = ~(sky130_fd_sc_hd__or3_2_0_B | sky130_fd_sc_hd__or3_2_2_B);  // sky130_fd_sc_hd__nor2_2_10 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor3_2_3_Y = ~(sky130_fd_sc_hd__nor3_2_3_A | sky130_fd_sc_hd__nor3_2_3_B | sky130_fd_sc_hd__nor3_2_3_C);  // sky130_fd_sc_hd__nor3_2_3 : sky130_fd_sc_hd__nor3_2
    assign sky130_fd_sc_hd__nor3b_2_2_Y = ~(sky130_fd_sc_hd__nor3_2_3_A | sky130_fd_sc_hd__nor3_2_3_C | (~sky130_fd_sc_hd__nor3_2_3_B));  // sky130_fd_sc_hd__nor3b_2_2 : sky130_fd_sc_hd__nor3b_2
    assign sky130_fd_sc_hd__nor3b_2_3_Y = ~(sky130_fd_sc_hd__nor3_2_3_A | sky130_fd_sc_hd__nor3_2_3_B | (~sky130_fd_sc_hd__nor3_2_3_C));  // sky130_fd_sc_hd__nor3b_2_3 : sky130_fd_sc_hd__nor3b_2
    assign sky130_fd_sc_hd__or2_2_4_A = ~(sky130_fd_sc_hd__xor2_2_2_A ^ sky130_fd_sc_hd__xor2_2_2_B);  // sky130_fd_sc_hd__xnor2_2_9 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__or2_2_4_B = sky130_fd_sc_hd__or2_2_2_A
                                        | sky130_fd_sc_hd__or2_2_0_B;  // sky130_fd_sc_hd__or2_2_0 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or3_2_0_X = sky130_fd_sc_hd__or3_2_3_A
                                        | sky130_fd_sc_hd__or3_2_0_B
                                        | sky130_fd_sc_hd__or3_2_2_B;  // sky130_fd_sc_hd__or3_2_0 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_17_B = ~(sky130_fd_sc_hd__nor3_2_3_B | sky130_fd_sc_hd__nor3_2_3_C | (~sky130_fd_sc_hd__nor3_2_3_A));  // sky130_fd_sc_hd__nor3b_2_4 : sky130_fd_sc_hd__nor3b_2
    assign sky130_fd_sc_hd__or3_2_17_C = ~((sky130_fd_sc_hd__nor3_2_3_B & sky130_fd_sc_hd__nor3_2_3_C) | sky130_fd_sc_hd__nor3_2_3_A);  // sky130_fd_sc_hd__a21oi_2_18 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__or3_2_2_C = ~(sky130_fd_sc_hd__or3_2_0_B | sky130_fd_sc_hd__inv_2_4_A);  // sky130_fd_sc_hd__nor2_2_2 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_3_B = sky130_fd_sc_hd__xor2_2_2_A
                                        ^ sky130_fd_sc_hd__xor2_2_2_B;  // sky130_fd_sc_hd__xor2_2_2 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__or3_2_3_C = sky130_fd_sc_hd__or2_2_2_A
                                        | sky130_fd_sc_hd__or3_2_2_B;  // sky130_fd_sc_hd__or2_2_2 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__xor2_2_8_A = (sky130_fd_sc_hd__xor2_2_2_A & sky130_fd_sc_hd__a21o_2_8_A2)
                                         | sky130_fd_sc_hd__nor2_2_19_Y;  // sky130_fd_sc_hd__a21o_2_8 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__xor2_2_8_B = ~(sky130_fd_sc_hd__nor2_2_21_A | sky130_fd_sc_hd__and3_2_4_X);  // sky130_fd_sc_hd__nor2_2_21 : sky130_fd_sc_hd__nor2_2

    assign sky130_fd_sc_hd__a22o_2_13_X = (sky130_fd_sc_hd__a22o_2_13_A1 & sky130_fd_sc_hd__nor3b_2_2_Y)
                                          | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__o221a_2_2_X);  // sky130_fd_sc_hd__a22o_2_13 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_17_X = (sky130_fd_sc_hd__xor2_2_18_X & sky130_fd_sc_hd__or3_2_17_B)
                                          | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__xnor2_2_6_Y);  // sky130_fd_sc_hd__a22o_2_17 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_6_X = (sky130_fd_sc_hd__conb_1_5_LO & sky130_fd_sc_hd__nor3b_2_2_Y)
                                         | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__conb_1_3_LO);  // sky130_fd_sc_hd__a22o_2_6 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_7_X = (sky130_fd_sc_hd__a22o_2_7_A1 & sky130_fd_sc_hd__nor3b_2_2_Y)
                                         | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__o21a_2_15_X);  // sky130_fd_sc_hd__a22o_2_7 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_8_X = (sky130_fd_sc_hd__xor2_2_12_X & sky130_fd_sc_hd__or3_2_17_B)
                                         | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__o32ai_2_0_Y);  // sky130_fd_sc_hd__a22o_2_8 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a22o_2_9_X = (sky130_fd_sc_hd__a22o_2_9_A1 & sky130_fd_sc_hd__or3_2_17_B)
                                         | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__o22a_2_2_X);  // sky130_fd_sc_hd__a22o_2_9 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a31o_2_0_X = (sky130_fd_sc_hd__or3_2_3_B & sky130_fd_sc_hd__and2_2_2_A & sky130_fd_sc_hd__and3_2_1_C)
                                         | sky130_fd_sc_hd__and3_2_0_C;  // sky130_fd_sc_hd__a31o_2_0 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__and2_2_2_X = sky130_fd_sc_hd__and2_2_2_A
                                         & sky130_fd_sc_hd__and3_2_1_C;  // sky130_fd_sc_hd__and2_2_2 : sky130_fd_sc_hd__and2_2
    assign sky130_fd_sc_hd__and3_2_0_X = sky130_fd_sc_hd__or2_2_4_A
                                         & sky130_fd_sc_hd__or3_2_0_B
                                         & sky130_fd_sc_hd__and3_2_0_C;  // sky130_fd_sc_hd__and3_2_0 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__and3_2_1_X = sky130_fd_sc_hd__or2_2_4_A
                                         & sky130_fd_sc_hd__inv_2_4_Y
                                         & sky130_fd_sc_hd__and3_2_1_C;  // sky130_fd_sc_hd__and3_2_1 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__inv_2_0_Y = ~sky130_fd_sc_hd__or3_2_3_C;  // sky130_fd_sc_hd__inv_2_0 : sky130_fd_sc_hd__inv_2
    assign sky130_fd_sc_hd__mux2_1_4_S = ~((~sky130_fd_sc_hd__and3_2_0_C) & sky130_fd_sc_hd__or2_2_4_B);  // sky130_fd_sc_hd__nand2b_2_0 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nor2_2_26_Y = ~(sky130_fd_sc_hd__nor2_2_5_A | sky130_fd_sc_hd__or2_2_4_A);  // sky130_fd_sc_hd__nor2_2_26 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_3_Y = ~(sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__nor2_2_3_B);  // sky130_fd_sc_hd__nor2_2_3 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__nor2_2_5_Y = ~(sky130_fd_sc_hd__nor2_2_5_A | sky130_fd_sc_hd__or3_2_3_B);  // sky130_fd_sc_hd__nor2_2_5 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o21a_2_3_A2 = ~(sky130_fd_sc_hd__or2_2_4_A & sky130_fd_sc_hd__nand2_2_5_Y);  // sky130_fd_sc_hd__nand2_2_11 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o31a_2_3_A3 = (sky130_fd_sc_hd__xnor2_2_13_Y & sky130_fd_sc_hd__or3_2_17_B)
                                          | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__conb_1_0_LO);  // sky130_fd_sc_hd__a22o_2_20 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_5_A2 = (sky130_fd_sc_hd__conb_1_4_LO & sky130_fd_sc_hd__nor3b_2_2_Y)
                                          | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__o211a_2_9_X);  // sky130_fd_sc_hd__a22o_2_12 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_6_A2 = (sky130_fd_sc_hd__o21a_2_13_X & sky130_fd_sc_hd__nor3b_2_2_Y)
                                          | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__and3b_2_1_X);  // sky130_fd_sc_hd__a22o_2_15 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_6_A3 = (sky130_fd_sc_hd__xnor2_2_18_Y & sky130_fd_sc_hd__or3_2_17_B)
                                          | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__o31a_2_0_X);  // sky130_fd_sc_hd__a22o_2_11 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_7_A2 = (sky130_fd_sc_hd__o211a_2_10_X & sky130_fd_sc_hd__nor3b_2_2_Y)
                                          | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__and2b_2_19_X);  // sky130_fd_sc_hd__a22o_2_16 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_7_A3 = (sky130_fd_sc_hd__xnor2_2_22_Y & sky130_fd_sc_hd__or3_2_17_B)
                                          | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__and2_2_8_X);  // sky130_fd_sc_hd__a22o_2_18 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_8_A2 = (sky130_fd_sc_hd__and3_2_17_X & sky130_fd_sc_hd__nor3b_2_2_Y)
                                          | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__and3b_2_2_X);  // sky130_fd_sc_hd__a22o_2_14 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_8_A3 = (sky130_fd_sc_hd__xor2_2_20_X & sky130_fd_sc_hd__or3_2_17_B)
                                          | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__nor2_2_23_Y);  // sky130_fd_sc_hd__a22o_2_19 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_9_A1 = ~(sky130_fd_sc_hd__or3_2_17_B | sky130_fd_sc_hd__or3_2_17_C);  // sky130_fd_sc_hd__nor2_2_47 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o31a_2_9_A2 = (sky130_fd_sc_hd__o31a_2_2_X & sky130_fd_sc_hd__nor3b_2_2_Y)
                                          | (sky130_fd_sc_hd__nor3_2_3_Y & sky130_fd_sc_hd__a22o_2_21_B2);  // sky130_fd_sc_hd__a22o_2_21 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31a_2_9_A3 = (sky130_fd_sc_hd__xnor2_2_14_Y & sky130_fd_sc_hd__or3_2_17_B)
                                          | (sky130_fd_sc_hd__nor3b_2_3_Y & sky130_fd_sc_hd__o21bai_2_0_Y);  // sky130_fd_sc_hd__a22o_2_10 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__o31ai_2_1_Y = ~((sky130_fd_sc_hd__or3_2_3_A | sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__or2_2_2_A) & sky130_fd_sc_hd__nor2_2_5_A);  // sky130_fd_sc_hd__o31ai_2_1 : sky130_fd_sc_hd__o31ai_2
    assign sky130_fd_sc_hd__o32a_2_0_A3 = ~((sky130_fd_sc_hd__or2_2_4_A & sky130_fd_sc_hd__and3_2_0_C) | sky130_fd_sc_hd__or3_2_0_X);  // sky130_fd_sc_hd__a21oi_2_1 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__o32a_2_1_A3 = ~(sky130_fd_sc_hd__or2_2_4_A | sky130_fd_sc_hd__or3_2_0_X);  // sky130_fd_sc_hd__nor2_2_13 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or2_2_3_X = sky130_fd_sc_hd__or2_2_4_A
                                        | sky130_fd_sc_hd__or3_2_2_B;  // sky130_fd_sc_hd__or2_2_3 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or2_2_4_X = sky130_fd_sc_hd__or2_2_4_A
                                        | sky130_fd_sc_hd__or2_2_4_B;  // sky130_fd_sc_hd__or2_2_4 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or2_2_6_B = (sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__inv_2_4_A)
                                        & sky130_fd_sc_hd__or2_2_4_B;  // sky130_fd_sc_hd__o21a_2_2 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__or3_2_10_X = sky130_fd_sc_hd__or3_2_10_A
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_10 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_11_X = sky130_fd_sc_hd__or3_2_11_A
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_11 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_12_X = sky130_fd_sc_hd__or3_2_6_X
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_12 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_13_X = sky130_fd_sc_hd__or3_2_13_A
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_13 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_14_X = sky130_fd_sc_hd__or3_2_14_A
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_14 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_15_X = sky130_fd_sc_hd__or3_2_15_A
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_15 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_16_X = sky130_fd_sc_hd__or3_2_16_A
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_16 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_17_X = sky130_fd_sc_hd__or3_2_17_A
                                         | sky130_fd_sc_hd__or3_2_17_B
                                         | sky130_fd_sc_hd__or3_2_17_C;  // sky130_fd_sc_hd__or3_2_17 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_1_B = ~(sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__and2_2_2_A);  // sky130_fd_sc_hd__nor2_2_28 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_1_C = ~(sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__or2_2_4_B);  // sky130_fd_sc_hd__nor2_2_11 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_3_X = sky130_fd_sc_hd__or3_2_3_A
                                        | sky130_fd_sc_hd__or3_2_3_B
                                        | sky130_fd_sc_hd__or3_2_3_C;  // sky130_fd_sc_hd__or3_2_3 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_4_B = ~(sky130_fd_sc_hd__or2_2_4_A | sky130_fd_sc_hd__nor2_2_3_B);  // sky130_fd_sc_hd__nor2_2_12 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or3_2_4_C = (sky130_fd_sc_hd__or3_2_3_A | sky130_fd_sc_hd__or2_2_2_A)
                                        & sky130_fd_sc_hd__or2_2_4_A
                                        & sky130_fd_sc_hd__nor2_2_5_A;  // sky130_fd_sc_hd__o211a_2_1 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__or4_2_0_A = sky130_fd_sc_hd__xor2_2_8_A
                                        ^ sky130_fd_sc_hd__xor2_2_8_B;  // sky130_fd_sc_hd__xor2_2_8 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__or4_2_0_C = sky130_fd_sc_hd__or3_2_3_A
                                        | sky130_fd_sc_hd__or3_2_2_B
                                        | sky130_fd_sc_hd__or3_2_2_C;  // sky130_fd_sc_hd__or3_2_2 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or4_2_0_D = (sky130_fd_sc_hd__or3_2_3_A | sky130_fd_sc_hd__or3_2_3_C)
                                        & sky130_fd_sc_hd__or3_2_3_B;  // sky130_fd_sc_hd__o21a_2_0 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__xor2_2_6_A = (sky130_fd_sc_hd__xor2_2_8_A & sky130_fd_sc_hd__xor2_2_8_B)
                                         | sky130_fd_sc_hd__nor2_2_21_A;  // sky130_fd_sc_hd__a21o_2_5 : sky130_fd_sc_hd__a21o_2

    assign sky130_fd_sc_hd__a211o_2_2_X = (sky130_fd_sc_hd__or2_2_4_A & sky130_fd_sc_hd__nand2_2_9_Y)
                                          | sky130_fd_sc_hd__or4_2_0_D
                                          | sky130_fd_sc_hd__or4_2_0_A;  // sky130_fd_sc_hd__a211o_2_2 : sky130_fd_sc_hd__a211o_2
    assign sky130_fd_sc_hd__a22o_2_0_X = (sky130_fd_sc_hd__nand2_2_5_Y & sky130_fd_sc_hd__or3_2_4_B)
                                         | (sky130_fd_sc_hd__or3_2_3_C & sky130_fd_sc_hd__or2_2_4_A);  // sky130_fd_sc_hd__a22o_2_0 : sky130_fd_sc_hd__a22o_2
    assign sky130_fd_sc_hd__a31o_2_5_A3 = ~(sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__o31ai_2_1_Y);  // sky130_fd_sc_hd__nand2_2_10 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__a32o_2_1_B2 = ~((sky130_fd_sc_hd__or3_2_3_B & sky130_fd_sc_hd__nor2_2_3_B) | sky130_fd_sc_hd__or4_2_0_A);  // sky130_fd_sc_hd__a21oi_2_0 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__and3_2_3_B = (sky130_fd_sc_hd__xor2_2_3_A & sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__or2_2_0_B)
                                         | sky130_fd_sc_hd__or3_2_4_B
                                         | sky130_fd_sc_hd__and3_2_1_X;  // sky130_fd_sc_hd__a311o_2_0 : sky130_fd_sc_hd__a311o_2
    assign sky130_fd_sc_hd__and3_2_3_C = ~((sky130_fd_sc_hd__or3_2_4_B | sky130_fd_sc_hd__and3_2_1_X) & sky130_fd_sc_hd__or4_2_0_A);  // sky130_fd_sc_hd__o21ai_2_0 : sky130_fd_sc_hd__o21ai_2
    assign sky130_fd_sc_hd__mux2_1_1_X = sky130_fd_sc_hd__or3_2_3_B ? sky130_fd_sc_hd__or4_2_0_C : sky130_fd_sc_hd__or3_2_0_X;  // sky130_fd_sc_hd__mux2_1_1 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_4_X = sky130_fd_sc_hd__mux2_1_4_S ? sky130_fd_sc_hd__or2_2_4_A : sky130_fd_sc_hd__or3_2_4_B;  // sky130_fd_sc_hd__mux2_1_4 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__nand2_2_3_Y = ~(sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__o21a_2_3_A2);  // sky130_fd_sc_hd__nand2_2_3 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o21a_2_1_X = (sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__and2_2_2_X)
                                         & sky130_fd_sc_hd__or2_2_4_X;  // sky130_fd_sc_hd__o21a_2_1 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_3_X = (sky130_fd_sc_hd__or3_2_3_A | sky130_fd_sc_hd__o21a_2_3_A2)
                                         & sky130_fd_sc_hd__or2_2_3_X;  // sky130_fd_sc_hd__o21a_2_3 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21ai_2_2_Y = ~((sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__inv_2_0_Y) & sky130_fd_sc_hd__or4_2_0_A);  // sky130_fd_sc_hd__o21ai_2_2 : sky130_fd_sc_hd__o21ai_2
    assign sky130_fd_sc_hd__o21ba_2_0_X = (sky130_fd_sc_hd__or2_2_4_A | sky130_fd_sc_hd__nand2_2_9_Y)
                                          & (~sky130_fd_sc_hd__nor2_2_5_Y);  // sky130_fd_sc_hd__o21ba_2_0 : sky130_fd_sc_hd__o21ba_2
    assign sky130_fd_sc_hd__o22a_2_0_X = (sky130_fd_sc_hd__or3_2_3_B | sky130_fd_sc_hd__mux2_1_4_S)
                                         & (sky130_fd_sc_hd__or2_2_4_X | sky130_fd_sc_hd__nor2_2_4_Y);  // sky130_fd_sc_hd__o22a_2_0 : sky130_fd_sc_hd__o22a_2
    assign sky130_fd_sc_hd__o31a_2_10_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__a22o_2_13_X | sky130_fd_sc_hd__a22o_2_17_X)
                                          & sky130_fd_sc_hd__or3_2_15_X;  // sky130_fd_sc_hd__o31a_2_10 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_3_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__a22o_2_6_X | sky130_fd_sc_hd__o31a_2_3_A3)
                                         & sky130_fd_sc_hd__or3_2_13_X;  // sky130_fd_sc_hd__o31a_2_3 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_4_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__a22o_2_7_X | sky130_fd_sc_hd__a22o_2_9_X)
                                         & sky130_fd_sc_hd__or3_2_12_X;  // sky130_fd_sc_hd__o31a_2_4 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_5_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__o31a_2_5_A2 | sky130_fd_sc_hd__a22o_2_8_X)
                                         & sky130_fd_sc_hd__or3_2_17_X;  // sky130_fd_sc_hd__o31a_2_5 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_6_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__o31a_2_6_A2 | sky130_fd_sc_hd__o31a_2_6_A3)
                                         & sky130_fd_sc_hd__or3_2_10_X;  // sky130_fd_sc_hd__o31a_2_6 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_7_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__o31a_2_7_A2 | sky130_fd_sc_hd__o31a_2_7_A3)
                                         & sky130_fd_sc_hd__or3_2_11_X;  // sky130_fd_sc_hd__o31a_2_7 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_8_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__o31a_2_8_A2 | sky130_fd_sc_hd__o31a_2_8_A3)
                                         & sky130_fd_sc_hd__or3_2_14_X;  // sky130_fd_sc_hd__o31a_2_8 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o31a_2_9_X = (sky130_fd_sc_hd__o31a_2_9_A1 | sky130_fd_sc_hd__o31a_2_9_A2 | sky130_fd_sc_hd__o31a_2_9_A3)
                                         & sky130_fd_sc_hd__or3_2_16_X;  // sky130_fd_sc_hd__o31a_2_9 : sky130_fd_sc_hd__o31a_2
    assign sky130_fd_sc_hd__o32a_2_1_B1 = ~(sky130_fd_sc_hd__nor2_2_3_B | sky130_fd_sc_hd__o21a_2_3_A2);  // sky130_fd_sc_hd__nor2_2_27 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o32a_2_1_B2 = ~((sky130_fd_sc_hd__or2_2_4_A | sky130_fd_sc_hd__or3_2_2_C | sky130_fd_sc_hd__inv_2_0_Y) & sky130_fd_sc_hd__or4_2_0_A);  // sky130_fd_sc_hd__o31ai_2_0 : sky130_fd_sc_hd__o31ai_2
    assign sky130_fd_sc_hd__or2_2_5_A = sky130_fd_sc_hd__xor2_2_6_A
                                        ^ sky130_fd_sc_hd__xor2_2_6_B;  // sky130_fd_sc_hd__xor2_2_6 : sky130_fd_sc_hd__xor2_2
    assign sky130_fd_sc_hd__or2_2_6_X = sky130_fd_sc_hd__or3_2_1_C
                                        | sky130_fd_sc_hd__or2_2_6_B;  // sky130_fd_sc_hd__or2_2_6 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or3_2_1_X = sky130_fd_sc_hd__or4_2_0_A
                                        | sky130_fd_sc_hd__or3_2_1_B
                                        | sky130_fd_sc_hd__or3_2_1_C;  // sky130_fd_sc_hd__or3_2_1 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or3_2_4_X = sky130_fd_sc_hd__or4_2_0_A
                                        | sky130_fd_sc_hd__or3_2_4_B
                                        | sky130_fd_sc_hd__or3_2_4_C;  // sky130_fd_sc_hd__or3_2_4 : sky130_fd_sc_hd__or3_2
    assign sky130_fd_sc_hd__or4_2_0_B = ~(sky130_fd_sc_hd__xor2_2_6_A ^ sky130_fd_sc_hd__xor2_2_6_B);  // sky130_fd_sc_hd__xnor2_2_10 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__xor2_2_5_A = ~((sky130_fd_sc_hd__xor2_2_6_A & sky130_fd_sc_hd__o22ai_2_0_Y) | sky130_fd_sc_hd__and4bb_2_0_X);  // sky130_fd_sc_hd__a21oi_2_7 : sky130_fd_sc_hd__a21oi_2

    assign O[0] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_9_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_25 : sky130_fd_sc_hd__and3_2
    assign O[1] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_6_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_18 : sky130_fd_sc_hd__and3_2
    assign O[2] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_7_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_24 : sky130_fd_sc_hd__and3_2
    assign O[3] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_10_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_20 : sky130_fd_sc_hd__and3_2
    assign O[4] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_5_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_21 : sky130_fd_sc_hd__and3_2
    assign O[5] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_8_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_22 : sky130_fd_sc_hd__and3_2
    assign O[6] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_4_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_19 : sky130_fd_sc_hd__and3_2
    assign O[7] = sky130_fd_sc_hd__or2_2_11_B
                  & sky130_fd_sc_hd__o31a_2_3_X
                  & sky130_fd_sc_hd__and3_2_25_C;  // sky130_fd_sc_hd__and3_2_23 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__a211o_2_1_X = (sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__or2_2_4_B)
                                          | sky130_fd_sc_hd__mux2_1_4_X
                                          | sky130_fd_sc_hd__or4_2_0_B;  // sky130_fd_sc_hd__a211o_2_1 : sky130_fd_sc_hd__a211o_2
    assign sky130_fd_sc_hd__a21o_2_3_A2 = (sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__nor2_2_5_Y)
                                          | (~sky130_fd_sc_hd__a211o_2_2_X);  // sky130_fd_sc_hd__a21bo_2_1 : sky130_fd_sc_hd__a21bo_2
    assign sky130_fd_sc_hd__a21oi_2_2_Y = ~((sky130_fd_sc_hd__or2_2_5_A & sky130_fd_sc_hd__o21ba_2_0_X) | sky130_fd_sc_hd__or4_2_0_A);  // sky130_fd_sc_hd__a21oi_2_2 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__a31o_2_5_A2 = (sky130_fd_sc_hd__or3_2_0_B & sky130_fd_sc_hd__or2_2_3_X)
                                          | (~sky130_fd_sc_hd__a32o_2_1_B2);  // sky130_fd_sc_hd__a21bo_2_0 : sky130_fd_sc_hd__a21bo_2
    assign sky130_fd_sc_hd__a32o_2_1_X = (sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__o21a_2_3_A2 & sky130_fd_sc_hd__or2_2_4_X)
                                         | (sky130_fd_sc_hd__o22a_2_0_X & sky130_fd_sc_hd__a32o_2_1_B2);  // sky130_fd_sc_hd__a32o_2_1 : sky130_fd_sc_hd__a32o_2
    assign sky130_fd_sc_hd__and3_2_3_X = sky130_fd_sc_hd__or4_2_0_B
                                         & sky130_fd_sc_hd__and3_2_3_B
                                         & sky130_fd_sc_hd__and3_2_3_C;  // sky130_fd_sc_hd__and3_2_3 : sky130_fd_sc_hd__and3_2
    assign sky130_fd_sc_hd__mux2_1_0_X = sky130_fd_sc_hd__or4_2_0_A ? sky130_fd_sc_hd__a31o_2_0_X : sky130_fd_sc_hd__o21a_2_3_X;  // sky130_fd_sc_hd__mux2_1_0 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__mux2_1_2_X = sky130_fd_sc_hd__or4_2_0_A ? sky130_fd_sc_hd__a22o_2_0_X : sky130_fd_sc_hd__or2_2_6_X;  // sky130_fd_sc_hd__mux2_1_2 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__nor2_2_20_A = ~(sky130_fd_sc_hd__xor2_2_5_A | sky130_fd_sc_hd__xor2_2_5_B);  // sky130_fd_sc_hd__nor2_2_18 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o221a_2_0_X = (sky130_fd_sc_hd__or3_2_2_C | sky130_fd_sc_hd__o21ai_2_2_Y)
                                          & (sky130_fd_sc_hd__o21a_2_1_X | sky130_fd_sc_hd__or4_2_0_A)
                                          & sky130_fd_sc_hd__or4_2_0_B;  // sky130_fd_sc_hd__o221a_2_0 : sky130_fd_sc_hd__o221a_2
    assign sky130_fd_sc_hd__o22ai_2_1_Y = ~((sky130_fd_sc_hd__or2_2_4_A | sky130_fd_sc_hd__nand2_2_5_Y) & (sky130_fd_sc_hd__or3_2_3_X | sky130_fd_sc_hd__or2_2_5_A));  // sky130_fd_sc_hd__o22ai_2_1 : sky130_fd_sc_hd__o22ai_2
    assign sky130_fd_sc_hd__o311a_2_0_C1 = ~(sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__mux2_1_1_X);  // sky130_fd_sc_hd__nand2_2_12 : sky130_fd_sc_hd__nand2_2
    assign sky130_fd_sc_hd__o32a_2_0_X = (sky130_fd_sc_hd__or4_2_0_A | sky130_fd_sc_hd__and3_2_0_X | sky130_fd_sc_hd__o32a_2_0_A3)
                                         & (sky130_fd_sc_hd__o32a_2_1_B2 | sky130_fd_sc_hd__nor2_2_3_Y);  // sky130_fd_sc_hd__o32a_2_0 : sky130_fd_sc_hd__o32a_2
    assign sky130_fd_sc_hd__o32a_2_1_X = (sky130_fd_sc_hd__or4_2_0_A | sky130_fd_sc_hd__and3_2_0_X | sky130_fd_sc_hd__o32a_2_1_A3)
                                         & (sky130_fd_sc_hd__o32a_2_1_B1 | sky130_fd_sc_hd__o32a_2_1_B2);  // sky130_fd_sc_hd__o32a_2_1 : sky130_fd_sc_hd__o32a_2
    assign sky130_fd_sc_hd__or2_2_5_X = sky130_fd_sc_hd__or2_2_5_A
                                        | sky130_fd_sc_hd__or3_2_1_B;  // sky130_fd_sc_hd__or2_2_5 : sky130_fd_sc_hd__or2_2
    assign sky130_fd_sc_hd__or3_2_7_A = ~(sky130_fd_sc_hd__xor2_2_5_A ^ sky130_fd_sc_hd__xor2_2_5_B);  // sky130_fd_sc_hd__xnor2_2_7 : sky130_fd_sc_hd__xnor2_2
    assign sky130_fd_sc_hd__or3_2_7_B = (sky130_fd_sc_hd__nand2_2_3_Y | sky130_fd_sc_hd__or3_2_4_B)
                                        & sky130_fd_sc_hd__or4_2_0_B
                                        & sky130_fd_sc_hd__or3_2_1_X;  // sky130_fd_sc_hd__o211a_2_6 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__or3_2_7_C = ~((sky130_fd_sc_hd__nand2_2_3_Y & sky130_fd_sc_hd__or3_2_4_X) | sky130_fd_sc_hd__or4_2_0_B);  // sky130_fd_sc_hd__a21oi_2_3 : sky130_fd_sc_hd__a21oi_2
    assign sky130_fd_sc_hd__or4_2_0_X = sky130_fd_sc_hd__or4_2_0_A
                                        | sky130_fd_sc_hd__or4_2_0_B
                                        | sky130_fd_sc_hd__or4_2_0_C
                                        | sky130_fd_sc_hd__or4_2_0_D;  // sky130_fd_sc_hd__or4_2_0 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__xor2_2_5_X = sky130_fd_sc_hd__xor2_2_5_A
                                         ^ sky130_fd_sc_hd__xor2_2_5_B;  // sky130_fd_sc_hd__xor2_2_5 : sky130_fd_sc_hd__xor2_2

    assign sky130_fd_sc_hd__a211o_2_0_X = (sky130_fd_sc_hd__or2_2_5_A & sky130_fd_sc_hd__a32o_2_1_X)
                                          | sky130_fd_sc_hd__o221a_2_0_X
                                          | sky130_fd_sc_hd__or3_2_7_A;  // sky130_fd_sc_hd__a211o_2_0 : sky130_fd_sc_hd__a211o_2
    assign sky130_fd_sc_hd__a21o_2_3_X = (sky130_fd_sc_hd__or2_2_5_A & sky130_fd_sc_hd__a21o_2_3_A2)
                                         | sky130_fd_sc_hd__and3_2_3_X;  // sky130_fd_sc_hd__a21o_2_3 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a221o_2_0_X = (sky130_fd_sc_hd__or4_2_0_A & sky130_fd_sc_hd__o22ai_2_1_Y)
                                          | (sky130_fd_sc_hd__or2_2_5_X & sky130_fd_sc_hd__a21oi_2_2_Y)
                                          | sky130_fd_sc_hd__or3_2_7_A;  // sky130_fd_sc_hd__a221o_2_0 : sky130_fd_sc_hd__a221o_2
    assign sky130_fd_sc_hd__a31o_2_5_X = (sky130_fd_sc_hd__or2_2_5_A & sky130_fd_sc_hd__a31o_2_5_A2 & sky130_fd_sc_hd__a31o_2_5_A3)
                                         | sky130_fd_sc_hd__xor2_2_5_X;  // sky130_fd_sc_hd__a31o_2_5 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__mux2_1_3_X = sky130_fd_sc_hd__or2_2_5_A ? sky130_fd_sc_hd__mux2_1_0_X : sky130_fd_sc_hd__o32a_2_1_X;  // sky130_fd_sc_hd__mux2_1_3 : sky130_fd_sc_hd__mux2_1
    assign sky130_fd_sc_hd__nor2_2_20_Y = ~(sky130_fd_sc_hd__nor2_2_20_A | sky130_fd_sc_hd__o211a_2_0_X);  // sky130_fd_sc_hd__nor2_2_20 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o211ai_2_0_Y = ~((sky130_fd_sc_hd__or2_2_5_A | sky130_fd_sc_hd__mux2_1_2_X) & sky130_fd_sc_hd__a211o_2_1_X & sky130_fd_sc_hd__xor2_2_5_X);  // sky130_fd_sc_hd__o211ai_2_0 : sky130_fd_sc_hd__o211ai_2
    assign sky130_fd_sc_hd__o21ai_2_1_Y = ~((sky130_fd_sc_hd__or2_2_5_A | sky130_fd_sc_hd__o32a_2_0_X) & sky130_fd_sc_hd__or4_2_0_X);  // sky130_fd_sc_hd__o21ai_2_1 : sky130_fd_sc_hd__o21ai_2
    assign sky130_fd_sc_hd__o311a_2_0_X = (sky130_fd_sc_hd__nor2_2_26_Y | sky130_fd_sc_hd__or4_2_0_A | sky130_fd_sc_hd__and3_2_0_X)
                                          & sky130_fd_sc_hd__or4_2_0_B
                                          & sky130_fd_sc_hd__o311a_2_0_C1;  // sky130_fd_sc_hd__o311a_2_0 : sky130_fd_sc_hd__o311a_2
    assign sky130_fd_sc_hd__or3_2_7_X = sky130_fd_sc_hd__or3_2_7_A
                                        | sky130_fd_sc_hd__or3_2_7_B
                                        | sky130_fd_sc_hd__or3_2_7_C;  // sky130_fd_sc_hd__or3_2_7 : sky130_fd_sc_hd__or3_2

    assign sky130_fd_sc_hd__or4b_2_2_C = (sky130_fd_sc_hd__xor2_2_5_X | sky130_fd_sc_hd__mux2_1_3_X)
                                         & sky130_fd_sc_hd__a211o_2_0_X
                                         & sky130_fd_sc_hd__nor2_2_20_Y;  // sky130_fd_sc_hd__o211a_2_5 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__or4b_2_3_A = (sky130_fd_sc_hd__xor2_2_5_X | sky130_fd_sc_hd__a21o_2_3_X)
                                         & sky130_fd_sc_hd__o211ai_2_0_Y
                                         & sky130_fd_sc_hd__nor2_2_20_Y;  // sky130_fd_sc_hd__o211a_2_3 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__or4b_2_3_B = (sky130_fd_sc_hd__o311a_2_0_X | sky130_fd_sc_hd__a31o_2_5_X)
                                         & sky130_fd_sc_hd__nor2_2_20_Y
                                         & sky130_fd_sc_hd__or3_2_7_X;  // sky130_fd_sc_hd__o211a_2_2 : sky130_fd_sc_hd__o211a_2
    assign sky130_fd_sc_hd__or4b_2_3_C = (sky130_fd_sc_hd__xor2_2_5_X | sky130_fd_sc_hd__o21ai_2_1_Y)
                                         & sky130_fd_sc_hd__a221o_2_0_X
                                         & sky130_fd_sc_hd__nor2_2_20_Y;  // sky130_fd_sc_hd__o211a_2_4 : sky130_fd_sc_hd__o211a_2

    assign sky130_fd_sc_hd__nand4_2_1_D = (~sky130_fd_sc_hd__or4b_2_3_A)
                                          & (~sky130_fd_sc_hd__or4b_2_2_C)
                                          & sky130_fd_sc_hd__or4b_2_3_C
                                          & sky130_fd_sc_hd__or4b_2_3_B;  // sky130_fd_sc_hd__and4bb_2_2 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_2_D = (~sky130_fd_sc_hd__or4b_2_3_B)
                                          & (~sky130_fd_sc_hd__or4b_2_2_C)
                                          & sky130_fd_sc_hd__or4b_2_3_C
                                          & sky130_fd_sc_hd__or4b_2_3_A;  // sky130_fd_sc_hd__and4bb_2_3 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_3_D = (~sky130_fd_sc_hd__or4b_2_2_C)
                                          & (~sky130_fd_sc_hd__or4b_2_3_C)
                                          & sky130_fd_sc_hd__or4b_2_3_B
                                          & sky130_fd_sc_hd__or4b_2_3_A;  // sky130_fd_sc_hd__and4bb_2_1 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_4_D = (~sky130_fd_sc_hd__or4b_2_3_A)
                                          & (~sky130_fd_sc_hd__or4b_2_3_C)
                                          & sky130_fd_sc_hd__or4b_2_2_C
                                          & sky130_fd_sc_hd__or4b_2_3_B;  // sky130_fd_sc_hd__and4bb_2_7 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nand4_2_5_D = (~sky130_fd_sc_hd__or4b_2_2_C)
                                          & sky130_fd_sc_hd__or4b_2_3_C
                                          & sky130_fd_sc_hd__or4b_2_3_B
                                          & sky130_fd_sc_hd__or4b_2_3_A;  // sky130_fd_sc_hd__and4b_2_1 : sky130_fd_sc_hd__and4b_2
    assign sky130_fd_sc_hd__nand4_2_6_D = (~sky130_fd_sc_hd__or4b_2_3_B)
                                          & (~sky130_fd_sc_hd__or4b_2_3_C)
                                          & sky130_fd_sc_hd__or4b_2_2_C
                                          & sky130_fd_sc_hd__or4b_2_3_A;  // sky130_fd_sc_hd__and4bb_2_8 : sky130_fd_sc_hd__and4bb_2
    assign sky130_fd_sc_hd__nor4_2_0_Y = ~(sky130_fd_sc_hd__or4b_2_3_A | sky130_fd_sc_hd__or4b_2_3_B | sky130_fd_sc_hd__or4b_2_2_C | sky130_fd_sc_hd__or4b_2_3_C);  // sky130_fd_sc_hd__nor4_2_0 : sky130_fd_sc_hd__nor4_2
    assign sky130_fd_sc_hd__or4_2_1_C = sky130_fd_sc_hd__or4b_2_3_A
                                        | sky130_fd_sc_hd__or4b_2_2_C
                                        | sky130_fd_sc_hd__or4b_2_3_C
                                        | (~sky130_fd_sc_hd__or4b_2_3_B);  // sky130_fd_sc_hd__or4b_2_0 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__or4_2_2_C = sky130_fd_sc_hd__or4b_2_3_A
                                        | sky130_fd_sc_hd__or4b_2_3_B
                                        | sky130_fd_sc_hd__or4b_2_2_C
                                        | (~sky130_fd_sc_hd__or4b_2_3_C);  // sky130_fd_sc_hd__or4b_2_2 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__or4_2_3_C = sky130_fd_sc_hd__or4b_2_3_B
                                        | sky130_fd_sc_hd__or4b_2_2_C
                                        | sky130_fd_sc_hd__or4b_2_3_C
                                        | (~sky130_fd_sc_hd__or4b_2_3_A);  // sky130_fd_sc_hd__or4b_2_1 : sky130_fd_sc_hd__or4b_2
    assign sky130_fd_sc_hd__or4_2_5_C = sky130_fd_sc_hd__or4b_2_3_A
                                        | sky130_fd_sc_hd__or4b_2_3_B
                                        | sky130_fd_sc_hd__or4b_2_3_C
                                        | (~sky130_fd_sc_hd__or4b_2_2_C);  // sky130_fd_sc_hd__or4b_2_3 : sky130_fd_sc_hd__or4b_2

    assign sky130_fd_sc_hd__a31o_2_16_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_6_D)
                                          | sky130_fd_sc_hd__nand4_2_6_C;  // sky130_fd_sc_hd__a31o_2_16 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_17_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_4_D)
                                          | sky130_fd_sc_hd__nand4_2_4_C;  // sky130_fd_sc_hd__a31o_2_17 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_1_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nor4_2_0_Y)
                                         | sky130_fd_sc_hd__nand4_2_0_C;  // sky130_fd_sc_hd__a31o_2_1 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_25_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_5_D)
                                          | sky130_fd_sc_hd__nand4_2_5_C;  // sky130_fd_sc_hd__a31o_2_25 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_2_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_2_D)
                                         | sky130_fd_sc_hd__nand4_2_2_C;  // sky130_fd_sc_hd__a31o_2_2 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_3_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_1_D)
                                         | sky130_fd_sc_hd__nand4_2_1_C;  // sky130_fd_sc_hd__a31o_2_3 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__a31o_2_4_X = (I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_3_D)
                                         | sky130_fd_sc_hd__nand4_2_3_C;  // sky130_fd_sc_hd__a31o_2_4 : sky130_fd_sc_hd__a31o_2
    assign sky130_fd_sc_hd__nand4_2_1_Y = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_1_C & sky130_fd_sc_hd__nand4_2_1_D);  // sky130_fd_sc_hd__nand4_2_1 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__nand4_2_4_Y = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_4_C & sky130_fd_sc_hd__nand4_2_4_D);  // sky130_fd_sc_hd__nand4_2_4 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__nand4_2_5_Y = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_5_C & sky130_fd_sc_hd__nand4_2_5_D);  // sky130_fd_sc_hd__nand4_2_5 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__nand4_2_6_Y = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_6_C & sky130_fd_sc_hd__nand4_2_6_D);  // sky130_fd_sc_hd__nand4_2_6 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__nor2_2_42_Y = ~(sky130_fd_sc_hd__or4_2_5_C | sky130_fd_sc_hd__or4_2_5_D);  // sky130_fd_sc_hd__nor2_2_42 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o21a_2_4_A2 = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_0_C & sky130_fd_sc_hd__nor4_2_0_Y);  // sky130_fd_sc_hd__nand4_2_0 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__o21a_2_5_A2 = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_3_C & sky130_fd_sc_hd__nand4_2_3_D);  // sky130_fd_sc_hd__nand4_2_3 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__o21a_2_6_A2 = ~(sky130_fd_sc_hd__or4_2_3_C | sky130_fd_sc_hd__or4_2_3_D);  // sky130_fd_sc_hd__nor2_2_14 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o21a_2_7_A2 = ~(sky130_fd_sc_hd__or4_2_1_C | sky130_fd_sc_hd__or4_2_1_D);  // sky130_fd_sc_hd__nor2_2_15 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__o21a_2_8_A2 = ~(I & sky130_fd_sc_hd__inv_2_7_A & sky130_fd_sc_hd__nand4_2_2_C & sky130_fd_sc_hd__nand4_2_2_D);  // sky130_fd_sc_hd__nand4_2_2 : sky130_fd_sc_hd__nand4_2
    assign sky130_fd_sc_hd__o21a_2_9_A2 = ~(sky130_fd_sc_hd__or4_2_2_C | sky130_fd_sc_hd__or4_2_2_D);  // sky130_fd_sc_hd__nor2_2_16 : sky130_fd_sc_hd__nor2_2
    assign sky130_fd_sc_hd__or4_2_1_X = sky130_fd_sc_hd__or4_2_1_A
                                        | sky130_fd_sc_hd__or4_2_1_B
                                        | sky130_fd_sc_hd__or4_2_1_C
                                        | sky130_fd_sc_hd__or4_2_1_D;  // sky130_fd_sc_hd__or4_2_1 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4_2_2_X = sky130_fd_sc_hd__or4_2_2_A
                                        | sky130_fd_sc_hd__or4_2_2_B
                                        | sky130_fd_sc_hd__or4_2_2_C
                                        | sky130_fd_sc_hd__or4_2_2_D;  // sky130_fd_sc_hd__or4_2_2 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4_2_3_X = sky130_fd_sc_hd__or4_2_3_A
                                        | sky130_fd_sc_hd__or4_2_3_B
                                        | sky130_fd_sc_hd__or4_2_3_C
                                        | sky130_fd_sc_hd__or4_2_3_D;  // sky130_fd_sc_hd__or4_2_3 : sky130_fd_sc_hd__or4_2
    assign sky130_fd_sc_hd__or4_2_5_X = sky130_fd_sc_hd__or4_2_5_A
                                        | sky130_fd_sc_hd__or4_2_5_B
                                        | sky130_fd_sc_hd__or4_2_5_C
                                        | sky130_fd_sc_hd__or4_2_5_D;  // sky130_fd_sc_hd__or4_2_5 : sky130_fd_sc_hd__or4_2

    assign sky130_fd_sc_hd__a21o_2_0_X = (sky130_fd_sc_hd__inv_2_1_A & sky130_fd_sc_hd__o21a_2_7_A2)
                                         | sky130_fd_sc_hd__or4_2_1_A;  // sky130_fd_sc_hd__a21o_2_0 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_13_X = (sky130_fd_sc_hd__inv_2_16_A & sky130_fd_sc_hd__nor2_2_42_Y)
                                          | sky130_fd_sc_hd__or4_2_5_A;  // sky130_fd_sc_hd__a21o_2_13 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_1_X = (sky130_fd_sc_hd__inv_2_2_A & sky130_fd_sc_hd__o21a_2_9_A2)
                                         | sky130_fd_sc_hd__or4_2_2_A;  // sky130_fd_sc_hd__a21o_2_1 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__a21o_2_2_X = (sky130_fd_sc_hd__inv_2_3_A & sky130_fd_sc_hd__o21a_2_6_A2)
                                         | sky130_fd_sc_hd__or4_2_3_A;  // sky130_fd_sc_hd__a21o_2_2 : sky130_fd_sc_hd__a21o_2
    assign sky130_fd_sc_hd__dfrtp_2_4_D = ~((~sky130_fd_sc_hd__o21a_2_5_A1) & sky130_fd_sc_hd__o21a_2_5_A2);  // sky130_fd_sc_hd__nand2b_2_5 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_58_D = ~((~sky130_fd_sc_hd__o21a_2_18_A1) & sky130_fd_sc_hd__nand4_2_6_Y);  // sky130_fd_sc_hd__nand2b_2_13 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__dfrtp_2_59_D = ~((~sky130_fd_sc_hd__o21a_2_16_A1) & sky130_fd_sc_hd__nand4_2_4_Y);  // sky130_fd_sc_hd__nand2b_2_15 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nand2b_2_1_Y = ~((~sky130_fd_sc_hd__o21a_2_4_A1) & sky130_fd_sc_hd__o21a_2_4_A2);  // sky130_fd_sc_hd__nand2b_2_1 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nand2b_2_2_Y = ~((~sky130_fd_sc_hd__and2b_2_3_B) & sky130_fd_sc_hd__nand4_2_1_Y);  // sky130_fd_sc_hd__nand2b_2_2 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nand2b_2_3_Y = ~((~sky130_fd_sc_hd__o21a_2_8_A1) & sky130_fd_sc_hd__o21a_2_8_A2);  // sky130_fd_sc_hd__nand2b_2_3 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__nand2b_2_4_Y = ~((~sky130_fd_sc_hd__o21a_2_30_A1) & sky130_fd_sc_hd__nand4_2_5_Y);  // sky130_fd_sc_hd__nand2b_2_4 : sky130_fd_sc_hd__nand2b_2
    assign sky130_fd_sc_hd__o21a_2_10_X = (sky130_fd_sc_hd__and2b_2_3_B | sky130_fd_sc_hd__nand4_2_1_Y)
                                          & sky130_fd_sc_hd__a31o_2_3_X;  // sky130_fd_sc_hd__o21a_2_10 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_16_X = (sky130_fd_sc_hd__o21a_2_16_A1 | sky130_fd_sc_hd__nand4_2_4_Y)
                                          & sky130_fd_sc_hd__a31o_2_17_X;  // sky130_fd_sc_hd__o21a_2_16 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_17_X = (sky130_fd_sc_hd__inv_2_16_A | sky130_fd_sc_hd__nor2_2_42_Y)
                                          & sky130_fd_sc_hd__or4_2_5_X;  // sky130_fd_sc_hd__o21a_2_17 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_18_X = (sky130_fd_sc_hd__o21a_2_18_A1 | sky130_fd_sc_hd__nand4_2_6_Y)
                                          & sky130_fd_sc_hd__a31o_2_16_X;  // sky130_fd_sc_hd__o21a_2_18 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_30_X = (sky130_fd_sc_hd__o21a_2_30_A1 | sky130_fd_sc_hd__nand4_2_5_Y)
                                          & sky130_fd_sc_hd__a31o_2_25_X;  // sky130_fd_sc_hd__o21a_2_30 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_4_X = (sky130_fd_sc_hd__o21a_2_4_A1 | sky130_fd_sc_hd__o21a_2_4_A2)
                                         & sky130_fd_sc_hd__a31o_2_1_X;  // sky130_fd_sc_hd__o21a_2_4 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_5_X = (sky130_fd_sc_hd__o21a_2_5_A1 | sky130_fd_sc_hd__o21a_2_5_A2)
                                         & sky130_fd_sc_hd__a31o_2_4_X;  // sky130_fd_sc_hd__o21a_2_5 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_6_X = (sky130_fd_sc_hd__inv_2_3_A | sky130_fd_sc_hd__o21a_2_6_A2)
                                         & sky130_fd_sc_hd__or4_2_3_X;  // sky130_fd_sc_hd__o21a_2_6 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_7_X = (sky130_fd_sc_hd__inv_2_1_A | sky130_fd_sc_hd__o21a_2_7_A2)
                                         & sky130_fd_sc_hd__or4_2_1_X;  // sky130_fd_sc_hd__o21a_2_7 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_8_X = (sky130_fd_sc_hd__o21a_2_8_A1 | sky130_fd_sc_hd__o21a_2_8_A2)
                                         & sky130_fd_sc_hd__a31o_2_2_X;  // sky130_fd_sc_hd__o21a_2_8 : sky130_fd_sc_hd__o21a_2
    assign sky130_fd_sc_hd__o21a_2_9_X = (sky130_fd_sc_hd__inv_2_2_A | sky130_fd_sc_hd__o21a_2_9_A2)
                                         & sky130_fd_sc_hd__or4_2_2_X;  // sky130_fd_sc_hd__o21a_2_9 : sky130_fd_sc_hd__o21a_2


    always @(posedge sky130_fd_sc_hd__dfxtp_2_3_CLK) begin
        sky130_fd_sc_hd__or2_2_8_B <= sky130_fd_sc_hd__dfxtp_2_0_D;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_2_CLK) begin
        sky130_fd_sc_hd__or2_2_9_A <= sky130_fd_sc_hd__dfxtp_2_1_D;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_2_CLK) begin
        sky130_fd_sc_hd__or3b_2_0_A <= sky130_fd_sc_hd__dfxtp_2_2_D;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_3_CLK) begin
        sky130_fd_sc_hd__or2_2_9_B <= sky130_fd_sc_hd__dfxtp_2_3_D;
    end


    always @(posedge sky130_fd_sc_hd__clkbuf_8_9_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_9_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_9_C <= sky130_fd_sc_hd__o21a_2_21_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_11_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_27_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_27_A1 <= sky130_fd_sc_hd__dfrtp_2_70_D;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_2_CLK or negedge rst_n) begin
        if (!rst_n) success <= 1'b0;
        else       success <= sky130_fd_sc_hd__a32o_2_4_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_8_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_7_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_7_C <= sky130_fd_sc_hd__o21a_2_19_X;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_2_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__a32o_2_3_B1 <= 1'b0;
        else       sky130_fd_sc_hd__a32o_2_3_B1 <= sky130_fd_sc_hd__a32o_2_3_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_9_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_8_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_8_C <= sky130_fd_sc_hd__o21a_2_23_X;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_3_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_9_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_9_A <= sky130_fd_sc_hd__a21o_2_18_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_7_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_19_A <= 1'b0;
        else       sky130_fd_sc_hd__xor2_2_19_A <= sky130_fd_sc_hd__o22a_2_3_X;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_2_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or2_2_11_B <= 1'b0;
        else       sky130_fd_sc_hd__or2_2_11_B <= sky130_fd_sc_hd__or2_2_11_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_11_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_20_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_20_A <= sky130_fd_sc_hd__o21a_2_26_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_7_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_19_B <= 1'b0;
        else       sky130_fd_sc_hd__xor2_2_19_B <= sky130_fd_sc_hd__a221o_2_2_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_5_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_9_A0 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_9_A0 <= sky130_fd_sc_hd__mux2_1_9_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_11_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_13_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_13_C <= sky130_fd_sc_hd__o21a_2_25_X;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_3_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_18_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_18_A <= sky130_fd_sc_hd__o21a_2_20_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_4_9_A or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_5_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_5_A <= sky130_fd_sc_hd__a21o_2_13_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_2_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_8_A1 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_8_A1 <= sky130_fd_sc_hd__mux2_1_14_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_8_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__a22o_2_2_A2 <= 1'b0;
        else       sky130_fd_sc_hd__a22o_2_2_A2 <= sky130_fd_sc_hd__mux2_1_13_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_11_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_12_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_12_C <= sky130_fd_sc_hd__o21a_2_27_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_9_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_23_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_23_A1 <= sky130_fd_sc_hd__dfrtp_2_63_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_3_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__and4_2_3_C <= 1'b0;
        else       sky130_fd_sc_hd__and4_2_3_C <= sky130_fd_sc_hd__xnor2_2_11_Y;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_6_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_15_A0 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_15_A0 <= sky130_fd_sc_hd__mux2_1_15_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_5_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_19_A1 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_19_A1 <= sky130_fd_sc_hd__mux2_1_18_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_10_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_11_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_11_C <= sky130_fd_sc_hd__o21a_2_24_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_11_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_28_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_28_A1 <= sky130_fd_sc_hd__dfrtp_2_64_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_2_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_5_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_5_C <= sky130_fd_sc_hd__o21a_2_30_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_2_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_30_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_30_A1 <= sky130_fd_sc_hd__nand2b_2_4_Y;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_3_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nor3_2_2_A <= 1'b0;
        else       sky130_fd_sc_hd__nor3_2_2_A <= sky130_fd_sc_hd__o21a_2_12_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_5_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_4_B <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_4_B <= sky130_fd_sc_hd__dfrtp_2_43_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_6_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_9_A1 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_9_A1 <= sky130_fd_sc_hd__mux2_1_17_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_9_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_19_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_19_A <= sky130_fd_sc_hd__o21a_2_22_X;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_3_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_17_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_17_A <= sky130_fd_sc_hd__o21a_2_29_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_4_9_A or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_16_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_16_A <= sky130_fd_sc_hd__o21a_2_17_X;
    end

    always @(posedge sky130_fd_sc_hd__dfrtp_2_8_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or3_2_8_C <= 1'b0;
        else       sky130_fd_sc_hd__or3_2_8_C <= sky130_fd_sc_hd__xor2_2_10_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_1_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__and2b_2_3_B <= 1'b0;
        else       sky130_fd_sc_hd__and2b_2_3_B <= sky130_fd_sc_hd__nand2b_2_2_Y;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_2_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_12_A1 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_12_A1 <= sky130_fd_sc_hd__mux2_1_10_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_10_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_21_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_21_A1 <= sky130_fd_sc_hd__dfrtp_2_66_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_9_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_7_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_7_A <= sky130_fd_sc_hd__a21o_2_14_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_8_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_6_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_6_C <= sky130_fd_sc_hd__o21a_2_18_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_5_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_4_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_4_A <= sky130_fd_sc_hd__nor2_2_31_Y;
    end

    always @(posedge sky130_fd_sc_hd__dfrtp_2_8_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or3_2_8_A <= 1'b0;
        else       sky130_fd_sc_hd__or3_2_8_A <= sky130_fd_sc_hd__nor2_2_30_Y;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_1_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_8_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_8_A1 <= sky130_fd_sc_hd__nand2b_2_3_Y;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_2_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_8_A0 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_8_A0 <= sky130_fd_sc_hd__mux2_1_8_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_11_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_24_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_24_A1 <= sky130_fd_sc_hd__dfrtp_2_67_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_4_9_A or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_4_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_4_C <= sky130_fd_sc_hd__o21a_2_16_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_5_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_4_D <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_4_D <= sky130_fd_sc_hd__dfrtp_2_45_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_10_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_10_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_10_C <= sky130_fd_sc_hd__o21a_2_28_X;
    end

    always @(posedge sky130_fd_sc_hd__dfrtp_2_8_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__and4_2_3_A <= 1'b0;
        else       sky130_fd_sc_hd__and4_2_3_A <= sky130_fd_sc_hd__a32o_2_2_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_0_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_2_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_2_A <= sky130_fd_sc_hd__a21o_2_1_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_10_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_25_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_25_A1 <= sky130_fd_sc_hd__dfrtp_2_68_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_8_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_19_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_19_A1 <= sky130_fd_sc_hd__dfrtp_2_57_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_2_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_16_A0 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_16_A0 <= sky130_fd_sc_hd__mux2_1_16_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_5_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_4_C <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_4_C <= sky130_fd_sc_hd__xor2_2_11_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_9_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_8_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_8_A <= sky130_fd_sc_hd__a21o_2_15_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_3_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__and4_2_3_B <= 1'b0;
        else       sky130_fd_sc_hd__and4_2_3_B <= sky130_fd_sc_hd__dfrtp_2_25_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_0_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_4_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_4_A1 <= sky130_fd_sc_hd__nand2b_2_1_Y;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_8_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or2_2_11_A <= 1'b0;
        else       sky130_fd_sc_hd__or2_2_11_A <= sky130_fd_sc_hd__a31o_2_13_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_4_9_A or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_18_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_18_A1 <= sky130_fd_sc_hd__dfrtp_2_58_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_6_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_12_A0 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_12_A0 <= sky130_fd_sc_hd__mux2_1_12_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_10_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_6_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_6_A <= sky130_fd_sc_hd__a21o_2_16_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_4_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_0_B <= 1'b0;
        else       sky130_fd_sc_hd__xor2_2_0_B <= sky130_fd_sc_hd__o211a_2_7_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_7_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_14_B <= 1'b0;
        else       sky130_fd_sc_hd__xor2_2_14_B <= sky130_fd_sc_hd__a221o_2_4_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_3_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or3_2_8_B <= 1'b0;
        else       sky130_fd_sc_hd__or3_2_8_B <= sky130_fd_sc_hd__o21a_2_11_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_4_9_A or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_16_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_16_A1 <= sky130_fd_sc_hd__dfrtp_2_59_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_6_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_11_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_11_A <= sky130_fd_sc_hd__a31o_2_12_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_3_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_7_A <= 1'b0;
        else       sky130_fd_sc_hd__xor2_2_7_A <= sky130_fd_sc_hd__mux2_1_5_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_4_9_A or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__a22o_2_4_B2 <= 1'b0;
        else       sky130_fd_sc_hd__a22o_2_4_B2 <= sky130_fd_sc_hd__a31o_2_14_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_4_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or2_2_7_A <= 1'b0;
        else       sky130_fd_sc_hd__or2_2_7_A <= sky130_fd_sc_hd__a22o_2_1_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_6_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__a22o_2_2_B2 <= 1'b0;
        else       sky130_fd_sc_hd__a22o_2_2_B2 <= sky130_fd_sc_hd__mux2_1_11_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_4_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_6_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_6_A <= sky130_fd_sc_hd__a31o_2_11_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_4_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_9_A <= 1'b0;
        else       sky130_fd_sc_hd__xor2_2_9_A <= sky130_fd_sc_hd__xor2_2_9_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_8_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__mux2_1_19_A0 <= 1'b0;
        else       sky130_fd_sc_hd__mux2_1_19_A0 <= sky130_fd_sc_hd__mux2_1_19_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_4_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_4_A <= 1'b0;
        else       sky130_fd_sc_hd__xor2_2_4_A <= sky130_fd_sc_hd__o311a_2_1_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_4_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_8_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_8_A <= sky130_fd_sc_hd__dfrtp_2_29_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_3_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nor3_2_2_B <= 1'b0;
        else       sky130_fd_sc_hd__nor3_2_2_B <= sky130_fd_sc_hd__and2b_2_9_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_0_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_0_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_0_C <= sky130_fd_sc_hd__o21a_2_4_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_0_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_1_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_1_A <= sky130_fd_sc_hd__o21a_2_7_X;
    end

    always @(posedge sky130_fd_sc_hd__dfrtp_2_8_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_1_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_1_A <= sky130_fd_sc_hd__a21o_2_0_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_0_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or4_2_3_A <= 1'b0;
        else       sky130_fd_sc_hd__or4_2_3_A <= sky130_fd_sc_hd__a21o_2_2_X;
    end

    always @(posedge sky130_fd_sc_hd__dfrtp_2_8_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__o21a_2_5_A1 <= 1'b0;
        else       sky130_fd_sc_hd__o21a_2_5_A1 <= sky130_fd_sc_hd__dfrtp_2_4_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_1_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_2_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_2_C <= sky130_fd_sc_hd__o21a_2_8_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_1_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_1_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_1_C <= sky130_fd_sc_hd__o21a_2_10_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_1_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_2_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_2_A <= sky130_fd_sc_hd__o21a_2_9_X;
    end

    always @(posedge sky130_fd_sc_hd__dfrtp_2_8_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__nand4_2_3_C <= 1'b0;
        else       sky130_fd_sc_hd__nand4_2_3_C <= sky130_fd_sc_hd__o21a_2_5_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_0_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__inv_2_3_A <= 1'b0;
        else       sky130_fd_sc_hd__inv_2_3_A <= sky130_fd_sc_hd__o21a_2_6_X;
    end


    always @(posedge sky130_fd_sc_hd__clkbuf_8_7_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_17_B <= 1'b1;
        else       sky130_fd_sc_hd__xor2_2_17_B <= sky130_fd_sc_hd__dfstp_2_0_D;
    end

    always @(posedge sky130_fd_sc_hd__dfxtp_2_3_CLK or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_16_A <= 1'b1;
        else       sky130_fd_sc_hd__xor2_2_16_A <= sky130_fd_sc_hd__o221a_2_1_X;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_7_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__xor2_2_20_A <= 1'b1;
        else       sky130_fd_sc_hd__xor2_2_20_A <= sky130_fd_sc_hd__dfstp_2_2_D;
    end

    always @(posedge sky130_fd_sc_hd__clkbuf_8_7_X or negedge rst_n) begin
        if (!rst_n) sky130_fd_sc_hd__or2_2_12_A <= 1'b1;
        else       sky130_fd_sc_hd__or2_2_12_A <= sky130_fd_sc_hd__o32a_2_3_X;
    end

endmodule