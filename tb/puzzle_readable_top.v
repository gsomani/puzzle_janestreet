module puzzle_readable_top (
    input       I,
    input       clk,
    input       enable,
    input       rst_n,
    output reg  success,
    output      [7:0] O
);

    // wires local to the success-checking FSM (I-dependent)
    wire a21o_2_0_X;
    wire a21o_2_10_X;
    wire a21o_2_13_X;
    wire a21o_2_14_X;
    wire a21o_2_15_X;
    wire a21o_2_16_X;
    wire a21o_2_18_X;
    wire a21o_2_1_X;
    wire a21o_2_2_X;
    wire a221o_2_1_X;
    wire a22o_2_1_X;
    wire a22o_2_2_X;
    wire a31o_2_11_X;
    wire a31o_2_12_X;
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
    wire a31o_2_9_X;
    wire a32o_2_2_X;
    wire a32o_2_4_X;
    wire and2_2_15_X;
    wire and2b_2_9_B;
    wire and2b_2_9_X;
    wire and3_2_10_B;
    wire and3_2_11_X;
    wire and3_2_12_A;
    wire and3_2_12_B;
    wire and3_2_12_C;
    wire and3_2_13_C;
    wire and3_2_5_A;
    wire and3_2_5_B;
    wire and3_2_5_C;
    wire and3_2_6_C;
    wire and3_2_6_X;
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
    wire and4b_2_3_D;
    wire and4b_2_3_X;
    wire dfrtp_2_25_D;
    wire dfrtp_2_29_D;
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
    wire inv_2_10_A;
    wire inv_2_10_Y;
    wire inv_2_23_A;
    wire inv_2_6_Y;
    wire inv_2_8_Y;
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
    wire mux2_1_6_X;
    wire mux2_1_7_A0;
    wire mux2_1_7_X;
    wire mux2_1_8_X;
    wire mux2_1_9_X;
    wire nand2b_2_1_Y;
    wire nand2b_2_2_Y;
    wire nand2b_2_3_Y;
    wire nand2b_2_4_Y;
    wire nand4_2_1_Y;
    wire nand4_2_4_Y;
    wire nand4_2_5_Y;
    wire nand4_2_6_Y;
    wire nand4_2_7_Y;
    wire nand4_2_8_Y;
    wire nand4_2_9_Y;
    wire nor2_2_30_B;
    wire nor2_2_30_Y;
    wire nor2_2_41_Y;
    wire nor2_2_42_Y;
    wire nor2_2_43_Y;
    wire nor2_2_44_Y;
    wire nor2_2_45_Y;
    wire nor3_2_2_Y;
    wire o211a_2_8_X;
    wire o21a_2_10_X;
    wire o21a_2_11_X;
    wire o21a_2_12_A1;
    wire o21a_2_12_X;
    wire o21a_2_16_X;
    wire o21a_2_17_X;
    wire o21a_2_18_X;
    wire o21a_2_19_X;
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
    wire or2_2_7_X;
    wire or3_2_8_X;
    wire or4_2_1_B;
    wire or4_2_1_D;
    wire or4_2_1_X;
    wire or4_2_2_B;
    wire or4_2_2_D;
    wire or4_2_2_X;
    wire or4_2_3_B;
    wire or4_2_3_D;
    wire or4_2_3_X;
    wire or4_2_5_B;
    wire or4_2_5_D;
    wire or4_2_5_X;
    wire or4_2_6_B;
    wire or4_2_6_D;
    wire or4_2_6_X;
    wire or4_2_7_B;
    wire or4_2_7_D;
    wire or4_2_7_X;
    wire or4_2_8_B;
    wire or4_2_8_D;
    wire or4_2_8_X;
    wire or4_2_9_B;
    wire or4_2_9_D;
    wire or4_2_9_X;
    wire xnor2_2_11_B;
    wire xnor2_2_11_Y;
    wire xor2_2_10_X;

    // wires driven by counter_control (input-invariant)
    wire a22o_2_13_A1;
    wire a22o_2_21_B2;
    wire a22o_2_22_X;
    wire a22o_2_7_A1;
    wire a31o_2_15_X;
    wire a32o_2_4_B2;
    wire and2_2_8_X;
    wire and2b_2_16_X;
    wire and2b_2_19_X;
    wire and3_2_17_X;
    wire and3_2_25_C;
    wire and3b_2_1_X;
    wire and3b_2_2_X;
    wire and4b_2_2_X;
    wire buf_2_0_X;
    wire conb_1_0_LO;
    wire conb_1_2_HI;
    wire conb_1_3_LO;
    wire conb_1_4_LO;
    wire conb_1_5_LO;
    wire inv_2_7_A;
    wire inv_2_7_Y;
    wire inv_2_9_A;
    wire inv_2_9_Y;
    wire nand4_2_10_D;
    wire nand4_2_12_D;
    wire nand4_2_13_D;
    wire nand4_2_1_D;
    wire nand4_2_2_D;
    wire nand4_2_3_D;
    wire nand4_2_4_D;
    wire nand4_2_5_D;
    wire nand4_2_6_D;
    wire nand4_2_8_D;
    wire nand4_2_9_D;
    wire nor2_2_23_Y;
    wire nor2_2_39_Y;
    wire nor2_2_46_A;
    wire nor4_2_0_Y;
    wire nor4_2_1_Y;
    wire o211a_2_10_X;
    wire o211a_2_9_X;
    wire o21a_2_13_X;
    wire o21a_2_15_X;
    wire o21ai_2_4_Y;
    wire o21bai_2_0_Y;
    wire o221a_2_2_X;
    wire o22a_2_2_X;
    wire o31a_2_0_X;
    wire o31a_2_1_X;
    wire o31a_2_2_X;
    wire o32a_2_2_X;
    wire o32ai_2_0_Y;
    wire or2_2_10_X;
    wire or2_2_11_A;
    wire or2_2_11_B;
    wire or2_2_9_X;
    wire or3_2_10_A;
    wire or3_2_11_A;
    wire or3_2_13_A;
    wire or3_2_14_A;
    wire or3_2_15_A;
    wire or3_2_16_A;
    wire or3_2_17_A;
    wire or3_2_6_X;
    wire or3_2_9_X;
    wire or4_2_1_C;
    wire or4_2_2_C;
    wire or4_2_3_C;
    wire or4_2_4_X;
    wire or4_2_5_C;
    wire or4_2_6_C;
    wire or4_2_7_C;
    wire or4_2_8_C;
    wire or4_2_9_C;
    wire or4bb_2_0_X;
    wire xnor2_2_14_B;
    wire xnor2_2_6_Y;
    wire xor2_2_20_B;

    // registers
    reg a22o_2_2_A2;
    reg a22o_2_2_B2;
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
    reg or2_2_7_A;
    reg or3_2_8_A;
    reg or3_2_8_B;
    reg or3_2_8_C;
    reg or4_2_1_A;
    reg or4_2_2_A;
    reg or4_2_3_A;
    reg or4_2_5_A;
    reg or4_2_6_A;
    reg or4_2_7_A;
    reg or4_2_8_A;
    reg or4_2_9_A;

    counter_control u_counter_control (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .a22o_2_13_A1(a22o_2_13_A1),
        .a22o_2_21_B2(a22o_2_21_B2),
        .a22o_2_22_X(a22o_2_22_X),
        .a22o_2_7_A1(a22o_2_7_A1),
        .a31o_2_15_X(a31o_2_15_X),
        .a32o_2_4_B2(a32o_2_4_B2),
        .and2_2_8_X(and2_2_8_X),
        .and2b_2_16_X(and2b_2_16_X),
        .and2b_2_19_X(and2b_2_19_X),
        .and3_2_17_X(and3_2_17_X),
        .and3_2_25_C(and3_2_25_C),
        .and3b_2_1_X(and3b_2_1_X),
        .and3b_2_2_X(and3b_2_2_X),
        .and4b_2_2_X(and4b_2_2_X),
        .buf_2_0_X(buf_2_0_X),
        .conb_1_0_LO(conb_1_0_LO),
        .conb_1_2_HI(conb_1_2_HI),
        .conb_1_3_LO(conb_1_3_LO),
        .conb_1_4_LO(conb_1_4_LO),
        .conb_1_5_LO(conb_1_5_LO),
        .inv_2_7_A(inv_2_7_A),
        .inv_2_7_Y(inv_2_7_Y),
        .inv_2_9_A(inv_2_9_A),
        .inv_2_9_Y(inv_2_9_Y),
        .nand4_2_10_D(nand4_2_10_D),
        .nand4_2_12_D(nand4_2_12_D),
        .nand4_2_13_D(nand4_2_13_D),
        .nand4_2_1_D(nand4_2_1_D),
        .nand4_2_2_D(nand4_2_2_D),
        .nand4_2_3_D(nand4_2_3_D),
        .nand4_2_4_D(nand4_2_4_D),
        .nand4_2_5_D(nand4_2_5_D),
        .nand4_2_6_D(nand4_2_6_D),
        .nand4_2_8_D(nand4_2_8_D),
        .nand4_2_9_D(nand4_2_9_D),
        .nor2_2_23_Y(nor2_2_23_Y),
        .nor2_2_39_Y(nor2_2_39_Y),
        .nor2_2_46_A(nor2_2_46_A),
        .nor4_2_0_Y(nor4_2_0_Y),
        .nor4_2_1_Y(nor4_2_1_Y),
        .o211a_2_10_X(o211a_2_10_X),
        .o211a_2_9_X(o211a_2_9_X),
        .o21a_2_13_X(o21a_2_13_X),
        .o21a_2_15_X(o21a_2_15_X),
        .o21ai_2_4_Y(o21ai_2_4_Y),
        .o21bai_2_0_Y(o21bai_2_0_Y),
        .o221a_2_2_X(o221a_2_2_X),
        .o22a_2_2_X(o22a_2_2_X),
        .o31a_2_0_X(o31a_2_0_X),
        .o31a_2_1_X(o31a_2_1_X),
        .o31a_2_2_X(o31a_2_2_X),
        .o32a_2_2_X(o32a_2_2_X),
        .o32ai_2_0_Y(o32ai_2_0_Y),
        .or2_2_10_X(or2_2_10_X),
        .or2_2_11_A(or2_2_11_A),
        .or2_2_11_B(or2_2_11_B),
        .or2_2_9_X(or2_2_9_X),
        .or3_2_10_A(or3_2_10_A),
        .or3_2_11_A(or3_2_11_A),
        .or3_2_13_A(or3_2_13_A),
        .or3_2_14_A(or3_2_14_A),
        .or3_2_15_A(or3_2_15_A),
        .or3_2_16_A(or3_2_16_A),
        .or3_2_17_A(or3_2_17_A),
        .or3_2_6_X(or3_2_6_X),
        .or3_2_9_X(or3_2_9_X),
        .or4_2_1_C(or4_2_1_C),
        .or4_2_2_C(or4_2_2_C),
        .or4_2_3_C(or4_2_3_C),
        .or4_2_4_X(or4_2_4_X),
        .or4_2_5_C(or4_2_5_C),
        .or4_2_6_C(or4_2_6_C),
        .or4_2_7_C(or4_2_7_C),
        .or4_2_8_C(or4_2_8_C),
        .or4_2_9_C(or4_2_9_C),
        .or4bb_2_0_X(or4bb_2_0_X),
        .xnor2_2_14_B(xnor2_2_14_B),
        .xnor2_2_6_Y(xnor2_2_6_Y),
        .xor2_2_20_B(xor2_2_20_B)
    );

    output_logic u_output_logic (
        .clk(clk),
        .rst_n(rst_n),
        .I(I),
        .success(success),
        .and2_2_15_X(and2_2_15_X),
        .and3_2_10_B(and3_2_10_B),
        .and4_2_3_A(and4_2_3_A),
        .and4_2_3_B(and4_2_3_B),
        .and4_2_3_C(and4_2_3_C),
        .and4_2_4_B(and4_2_4_B),
        .and4b_2_3_X(and4b_2_3_X),
        .inv_2_23_A(inv_2_23_A),
        .nor3_2_2_B(nor3_2_2_B),
        .nor3_2_2_Y(nor3_2_2_Y),
        .or3_2_8_B(or3_2_8_B),
        .or3_2_8_C(or3_2_8_C),
        .a22o_2_13_A1(a22o_2_13_A1),
        .a22o_2_21_B2(a22o_2_21_B2),
        .a22o_2_22_X(a22o_2_22_X),
        .a22o_2_7_A1(a22o_2_7_A1),
        .a31o_2_15_X(a31o_2_15_X),
        .a32o_2_4_B2(a32o_2_4_B2),
        .and2_2_8_X(and2_2_8_X),
        .and2b_2_16_X(and2b_2_16_X),
        .and2b_2_19_X(and2b_2_19_X),
        .and3_2_17_X(and3_2_17_X),
        .and3_2_25_C(and3_2_25_C),
        .and3b_2_1_X(and3b_2_1_X),
        .and3b_2_2_X(and3b_2_2_X),
        .conb_1_0_LO(conb_1_0_LO),
        .conb_1_3_LO(conb_1_3_LO),
        .conb_1_4_LO(conb_1_4_LO),
        .conb_1_5_LO(conb_1_5_LO),
        .inv_2_7_A(inv_2_7_A),
        .nor2_2_23_Y(nor2_2_23_Y),
        .nor2_2_39_Y(nor2_2_39_Y),
        .nor2_2_46_A(nor2_2_46_A),
        .o211a_2_10_X(o211a_2_10_X),
        .o211a_2_9_X(o211a_2_9_X),
        .o21a_2_13_X(o21a_2_13_X),
        .o21a_2_15_X(o21a_2_15_X),
        .o21ai_2_4_Y(o21ai_2_4_Y),
        .o21bai_2_0_Y(o21bai_2_0_Y),
        .o221a_2_2_X(o221a_2_2_X),
        .o22a_2_2_X(o22a_2_2_X),
        .o31a_2_0_X(o31a_2_0_X),
        .o31a_2_1_X(o31a_2_1_X),
        .o31a_2_2_X(o31a_2_2_X),
        .o32a_2_2_X(o32a_2_2_X),
        .o32ai_2_0_Y(o32ai_2_0_Y),
        .or2_2_10_X(or2_2_10_X),
        .or2_2_11_B(or2_2_11_B),
        .or2_2_9_X(or2_2_9_X),
        .or3_2_10_A(or3_2_10_A),
        .or3_2_11_A(or3_2_11_A),
        .or3_2_13_A(or3_2_13_A),
        .or3_2_14_A(or3_2_14_A),
        .or3_2_15_A(or3_2_15_A),
        .or3_2_16_A(or3_2_16_A),
        .or3_2_17_A(or3_2_17_A),
        .or3_2_6_X(or3_2_6_X),
        .or3_2_9_X(or3_2_9_X),
        .xnor2_2_14_B(xnor2_2_14_B),
        .xnor2_2_6_Y(xnor2_2_6_Y),
        .xor2_2_20_B(xor2_2_20_B),
        .O(O)
    );

    assign and3_2_10_B = (~and4_2_3_A)
                         & or3_2_8_A;  // sky130_fd_sc_hd__and2b_2_8 : sky130_fd_sc_hd__and2b_2
    assign and3_2_12_A = (~nand4_2_12_C)
                         & o21a_2_27_A1;  // sky130_fd_sc_hd__and2b_2_29 : sky130_fd_sc_hd__and2b_2
    assign and3_2_12_C = (~nand4_2_13_C)
                         & o21a_2_25_A1;  // sky130_fd_sc_hd__and2b_2_27 : sky130_fd_sc_hd__and2b_2
    assign and3_2_5_A = (~nand4_2_4_C)
                        & o21a_2_16_A1;  // sky130_fd_sc_hd__and2b_2_22 : sky130_fd_sc_hd__and2b_2
    assign and3_2_5_C = (~nand4_2_6_C)
                        & o21a_2_18_A1;  // sky130_fd_sc_hd__and2b_2_21 : sky130_fd_sc_hd__and2b_2
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
    assign inv_2_23_A = ~inv_2_11_A;  // sky130_fd_sc_hd__inv_2_11 : sky130_fd_sc_hd__inv_2
    assign inv_2_6_Y = ~inv_2_6_A;  // sky130_fd_sc_hd__inv_2_6 : sky130_fd_sc_hd__inv_2
    assign inv_2_8_Y = ~inv_2_8_A;  // sky130_fd_sc_hd__inv_2_8 : sky130_fd_sc_hd__inv_2
    assign mux2_1_7_A0 = ~(or2_2_7_A & I);  // sky130_fd_sc_hd__nand2_2_25 : sky130_fd_sc_hd__nand2_2
    assign o21a_2_12_A1 = ~(and4_2_3_C & nor3_2_2_A);  // sky130_fd_sc_hd__nand2_2_26 : sky130_fd_sc_hd__nand2_2
    assign or2_2_7_X = or2_2_7_A | I;  // sky130_fd_sc_hd__or2_2_7 : sky130_fd_sc_hd__or2_2
    assign or3_2_8_X = or3_2_8_A
                       | or3_2_8_B
                       | or3_2_8_C;  // sky130_fd_sc_hd__or3_2_8 : sky130_fd_sc_hd__or3_2
    assign or4_2_1_B = ~inv_2_1_A;  // sky130_fd_sc_hd__inv_2_1 : sky130_fd_sc_hd__inv_2
    assign or4_2_2_B = ~inv_2_2_A;  // sky130_fd_sc_hd__inv_2_2 : sky130_fd_sc_hd__inv_2
    assign or4_2_3_B = ~inv_2_3_A;  // sky130_fd_sc_hd__inv_2_3 : sky130_fd_sc_hd__inv_2
    assign or4_2_5_B = ~inv_2_16_A;  // sky130_fd_sc_hd__inv_2_16 : sky130_fd_sc_hd__inv_2
    assign or4_2_6_B = ~inv_2_20_A;  // sky130_fd_sc_hd__inv_2_20 : sky130_fd_sc_hd__inv_2
    assign or4_2_7_B = ~inv_2_18_A;  // sky130_fd_sc_hd__inv_2_18 : sky130_fd_sc_hd__inv_2
    assign or4_2_8_B = ~inv_2_19_A;  // sky130_fd_sc_hd__inv_2_19 : sky130_fd_sc_hd__inv_2
    assign or4_2_9_B = ~inv_2_17_A;  // sky130_fd_sc_hd__inv_2_17 : sky130_fd_sc_hd__inv_2
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
    assign and3_2_12_B = or4_2_6_A
                         & or4_2_6_B;  // sky130_fd_sc_hd__and2_2_14 : sky130_fd_sc_hd__and2_2
    assign and3_2_5_B = or4_2_5_A
                        & or4_2_5_B;  // sky130_fd_sc_hd__and2_2_10 : sky130_fd_sc_hd__and2_2
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
    assign inv_2_10_A = or3_2_8_A
                        & I
                        & inv_2_7_A;  // sky130_fd_sc_hd__and3_2_9 : sky130_fd_sc_hd__and3_2
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
    assign mux2_1_7_X = inv_2_8_A ? or2_2_7_X : mux2_1_7_A0;  // sky130_fd_sc_hd__mux2_1_7 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_8_X = inv_2_7_A ? mux2_1_8_A1 : mux2_1_8_A0;  // sky130_fd_sc_hd__mux2_1_8 : sky130_fd_sc_hd__mux2_1
    assign mux2_1_9_X = inv_2_7_A ? mux2_1_9_A1 : mux2_1_9_A0;  // sky130_fd_sc_hd__mux2_1_9 : sky130_fd_sc_hd__mux2_1
    assign nand4_2_7_Y = ~(I & inv_2_7_A & nand4_2_7_C & nor4_2_1_Y);  // sky130_fd_sc_hd__nand4_2_7 : sky130_fd_sc_hd__nand4_2
    assign nand4_2_8_Y = ~(I & inv_2_7_A & nand4_2_8_C & nand4_2_8_D);  // sky130_fd_sc_hd__nand4_2_8 : sky130_fd_sc_hd__nand4_2
    assign nand4_2_9_Y = ~(I & inv_2_7_A & nand4_2_9_C & nand4_2_9_D);  // sky130_fd_sc_hd__nand4_2_9 : sky130_fd_sc_hd__nand4_2
    assign nor2_2_30_B = ~((I & inv_2_7_A) | or3_2_8_A);  // sky130_fd_sc_hd__a21oi_2_11 : sky130_fd_sc_hd__a21oi_2
    assign nor3_2_2_Y = ~(nor3_2_2_A | nor3_2_2_B | or3_2_8_X);  // sky130_fd_sc_hd__nor3_2_2 : sky130_fd_sc_hd__nor3_2
    assign o211a_2_8_X = (inv_2_8_A | mux2_1_7_A0)
                         & or2_2_7_X
                         & inv_2_7_A;  // sky130_fd_sc_hd__o211a_2_8 : sky130_fd_sc_hd__o211a_2
    assign o21a_2_24_A2 = ~(I & inv_2_7_A & nand4_2_11_C & and4b_2_2_X);  // sky130_fd_sc_hd__nand4_2_11 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_25_A2 = ~(I & inv_2_7_A & nand4_2_13_C & nand4_2_13_D);  // sky130_fd_sc_hd__nand4_2_13 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_27_A2 = ~(I & inv_2_7_A & nand4_2_12_C & nand4_2_12_D);  // sky130_fd_sc_hd__nand4_2_12 : sky130_fd_sc_hd__nand4_2
    assign o21a_2_28_A2 = ~(I & inv_2_7_A & nand4_2_10_C & nand4_2_10_D);  // sky130_fd_sc_hd__nand4_2_10 : sky130_fd_sc_hd__nand4_2
    assign or4_2_1_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_14 : sky130_fd_sc_hd__nand2_2
    assign or4_2_2_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_15 : sky130_fd_sc_hd__nand2_2
    assign or4_2_3_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_13 : sky130_fd_sc_hd__nand2_2
    assign or4_2_5_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_34 : sky130_fd_sc_hd__nand2_2
    assign or4_2_6_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_35 : sky130_fd_sc_hd__nand2_2
    assign or4_2_7_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_36 : sky130_fd_sc_hd__nand2_2
    assign or4_2_8_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_37 : sky130_fd_sc_hd__nand2_2
    assign or4_2_9_D = ~(I & inv_2_7_A);  // sky130_fd_sc_hd__nand2_2_33 : sky130_fd_sc_hd__nand2_2

    assign a21o_2_10_X = (and4_2_3_A & inv_2_10_A)
                         | and4_2_3_B;  // sky130_fd_sc_hd__a21o_2_10 : sky130_fd_sc_hd__a21o_2
    assign a22o_2_1_X = (inv_2_7_Y & or2_2_7_A)
                        | (o211a_2_8_X & inv_2_9_Y);  // sky130_fd_sc_hd__a22o_2_1 : sky130_fd_sc_hd__a22o_2
    assign a22o_2_2_X = (or4_2_4_X & a22o_2_2_A2)
                        | (buf_2_0_X & a22o_2_2_B2);  // sky130_fd_sc_hd__a22o_2_2 : sky130_fd_sc_hd__a22o_2
    assign a31o_2_11_X = (inv_2_9_A & inv_2_7_A & mux2_1_7_X)
                         | inv_2_6_A;  // sky130_fd_sc_hd__a31o_2_11 : sky130_fd_sc_hd__a31o_2
    assign a31o_2_9_X = (and4_2_3_C & inv_2_10_A & and4_2_4_D)
                        | nor3_2_2_A;  // sky130_fd_sc_hd__a31o_2_9 : sky130_fd_sc_hd__a31o_2
    assign and2b_2_9_B = (and4_2_4_B & inv_2_10_A & and4_2_4_D)
                         | nor3_2_2_B;  // sky130_fd_sc_hd__a31o_2_10 : sky130_fd_sc_hd__a31o_2
    assign and3_2_11_X = and4_2_3_A
                         & and4_2_3_B
                         & inv_2_10_A;  // sky130_fd_sc_hd__and3_2_11 : sky130_fd_sc_hd__and3_2
    assign and3_2_13_C = and3_2_12_A
                         & and3_2_12_B
                         & and3_2_12_C;  // sky130_fd_sc_hd__and3_2_12 : sky130_fd_sc_hd__and3_2
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
    assign dfrtp_2_57_D = ~((~o21a_2_19_A1) & nand4_2_7_Y);  // sky130_fd_sc_hd__nand2b_2_14 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_63_D = ~((~o21a_2_23_A1) & nand4_2_8_Y);  // sky130_fd_sc_hd__nand2b_2_17 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_64_D = ~((~o21a_2_28_A1) & o21a_2_28_A2);  // sky130_fd_sc_hd__nand2b_2_21 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_66_D = ~((~o21a_2_21_A1) & nand4_2_9_Y);  // sky130_fd_sc_hd__nand2b_2_16 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_67_D = ~((~o21a_2_24_A1) & o21a_2_24_A2);  // sky130_fd_sc_hd__nand2b_2_18 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_68_D = ~((~o21a_2_25_A1) & o21a_2_25_A2);  // sky130_fd_sc_hd__nand2b_2_19 : sky130_fd_sc_hd__nand2b_2
    assign dfrtp_2_70_D = ~((~o21a_2_27_A1) & o21a_2_27_A2);  // sky130_fd_sc_hd__nand2b_2_20 : sky130_fd_sc_hd__nand2b_2
    assign inv_2_10_Y = ~inv_2_10_A;  // sky130_fd_sc_hd__inv_2_10 : sky130_fd_sc_hd__inv_2
    assign mux2_1_6_X = inv_2_7_Y ? inv_2_8_Y : inv_2_9_A;  // sky130_fd_sc_hd__mux2_1_6 : sky130_fd_sc_hd__mux2_1
    assign nor2_2_30_Y = ~(inv_2_10_A | nor2_2_30_B);  // sky130_fd_sc_hd__nor2_2_30 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_41_Y = ~(or4_2_9_C | or4_2_9_D);  // sky130_fd_sc_hd__nor2_2_41 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_43_Y = ~(or4_2_7_C | or4_2_7_D);  // sky130_fd_sc_hd__nor2_2_43 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_44_Y = ~(or4_2_8_C | or4_2_8_D);  // sky130_fd_sc_hd__nor2_2_44 : sky130_fd_sc_hd__nor2_2
    assign nor2_2_45_Y = ~(or4_2_6_C | or4_2_6_D);  // sky130_fd_sc_hd__nor2_2_45 : sky130_fd_sc_hd__nor2_2
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
    assign xnor2_2_11_B = ~(inv_2_10_A & and4_2_4_D);  // sky130_fd_sc_hd__nand2_2_24 : sky130_fd_sc_hd__nand2_2

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
    assign a32o_2_2_X = (I & inv_2_7_A & and3_2_10_B)
                        | (inv_2_10_Y & and4_2_3_A);  // sky130_fd_sc_hd__a32o_2_2 : sky130_fd_sc_hd__a32o_2
    assign and2_2_15_X = inv_2_6_Y
                         & and4_2_3_X;  // sky130_fd_sc_hd__and2_2_15 : sky130_fd_sc_hd__and2_2
    assign and2b_2_9_X = (~and4_2_4_X)
                         & and2b_2_9_B;  // sky130_fd_sc_hd__and2b_2_9 : sky130_fd_sc_hd__and2b_2
    assign and3_2_6_X = and4_2_1_X
                        & and4_2_0_X
                        & and3_2_6_C;  // sky130_fd_sc_hd__and3_2_6 : sky130_fd_sc_hd__and3_2
    assign and4b_2_3_D = and4_2_5_X
                         & and4_2_6_X
                         & and3_2_13_C;  // sky130_fd_sc_hd__and3_2_13 : sky130_fd_sc_hd__and3_2
    assign dfrtp_2_25_D = (~and3_2_11_X)
                          & a21o_2_10_X;  // sky130_fd_sc_hd__and2b_2_10 : sky130_fd_sc_hd__and2b_2
    assign dfrtp_2_29_D = ~((inv_2_8_Y & mux2_1_7_A0) | mux2_1_6_X);  // sky130_fd_sc_hd__a21oi_2_12 : sky130_fd_sc_hd__a21oi_2
    assign o21a_2_11_X = (or3_2_8_B | and3_2_11_X)
                         & xnor2_2_11_B;  // sky130_fd_sc_hd__o21a_2_11 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_12_X = (o21a_2_12_A1 | xnor2_2_11_B)
                         & a31o_2_9_X;  // sky130_fd_sc_hd__o21a_2_12 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_20_X = (inv_2_18_A | nor2_2_43_Y)
                         & or4_2_7_X;  // sky130_fd_sc_hd__o21a_2_20 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_22_X = (inv_2_19_A | nor2_2_44_Y)
                         & or4_2_8_X;  // sky130_fd_sc_hd__o21a_2_22 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_26_X = (inv_2_20_A | nor2_2_45_Y)
                         & or4_2_6_X;  // sky130_fd_sc_hd__o21a_2_26 : sky130_fd_sc_hd__o21a_2
    assign o21a_2_29_X = (inv_2_17_A | nor2_2_41_Y)
                         & or4_2_9_X;  // sky130_fd_sc_hd__o21a_2_29 : sky130_fd_sc_hd__o21a_2
    assign xnor2_2_11_Y = ~(and4_2_3_C ^ xnor2_2_11_B);  // sky130_fd_sc_hd__xnor2_2_11 : sky130_fd_sc_hd__xnor2_2
    assign xor2_2_10_X = or3_2_8_C
                         ^ and4_2_4_X;  // sky130_fd_sc_hd__xor2_2_10 : sky130_fd_sc_hd__xor2_2
    assign a31o_2_12_X = (I & inv_2_7_A & a221o_2_1_X)
                         | inv_2_11_A;  // sky130_fd_sc_hd__a31o_2_12 : sky130_fd_sc_hd__a31o_2
    assign and4b_2_3_X = (~or2_2_11_B)
                         & or2_2_11_A
                         & and3_2_6_X
                         & and4b_2_3_D;  // sky130_fd_sc_hd__and4b_2_3 : sky130_fd_sc_hd__and4b_2
    assign a32o_2_4_X = (inv_2_23_A & and2_2_15_X & and4b_2_3_X)
                        | (success & a32o_2_4_B2);  // sky130_fd_sc_hd__a32o_2_4 : sky130_fd_sc_hd__a32o_2

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
            nand4_2_8_C <= 1'b0;
            or4_2_9_A <= 1'b0;
            inv_2_20_A <= 1'b0;
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
            or3_2_8_A <= 1'b0;
            o21a_2_8_A1 <= 1'b0;
            mux2_1_8_A0 <= 1'b0;
            o21a_2_24_A1 <= 1'b0;
            nand4_2_4_C <= 1'b0;
            nand4_2_10_C <= 1'b0;
            and4_2_3_A <= 1'b0;
            or4_2_2_A <= 1'b0;
            o21a_2_25_A1 <= 1'b0;
            o21a_2_19_A1 <= 1'b0;
            mux2_1_16_A0 <= 1'b0;
            or4_2_8_A <= 1'b0;
            and4_2_3_B <= 1'b0;
            o21a_2_4_A1 <= 1'b0;
            o21a_2_18_A1 <= 1'b0;
            mux2_1_12_A0 <= 1'b0;
            or4_2_6_A <= 1'b0;
            or3_2_8_B <= 1'b0;
            o21a_2_16_A1 <= 1'b0;
            inv_2_11_A <= 1'b0;
            or2_2_7_A <= 1'b0;
            a22o_2_2_B2 <= 1'b0;
            inv_2_6_A <= 1'b0;
            mux2_1_19_A0 <= 1'b0;
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
            nand4_2_8_C <= o21a_2_23_X;
            or4_2_9_A <= a21o_2_18_X;
            inv_2_20_A <= o21a_2_26_X;
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
            or3_2_8_A <= nor2_2_30_Y;
            o21a_2_8_A1 <= nand2b_2_3_Y;
            mux2_1_8_A0 <= mux2_1_8_X;
            o21a_2_24_A1 <= dfrtp_2_67_D;
            nand4_2_4_C <= o21a_2_16_X;
            nand4_2_10_C <= o21a_2_28_X;
            and4_2_3_A <= a32o_2_2_X;
            or4_2_2_A <= a21o_2_1_X;
            o21a_2_25_A1 <= dfrtp_2_68_D;
            o21a_2_19_A1 <= dfrtp_2_57_D;
            mux2_1_16_A0 <= mux2_1_16_X;
            or4_2_8_A <= a21o_2_15_X;
            and4_2_3_B <= dfrtp_2_25_D;
            o21a_2_4_A1 <= nand2b_2_1_Y;
            o21a_2_18_A1 <= dfrtp_2_58_D;
            mux2_1_12_A0 <= mux2_1_12_X;
            or4_2_6_A <= a21o_2_16_X;
            or3_2_8_B <= o21a_2_11_X;
            o21a_2_16_A1 <= dfrtp_2_59_D;
            inv_2_11_A <= a31o_2_12_X;
            or2_2_7_A <= a22o_2_1_X;
            a22o_2_2_B2 <= mux2_1_11_X;
            inv_2_6_A <= a31o_2_11_X;
            mux2_1_19_A0 <= mux2_1_19_X;
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

endmodule
