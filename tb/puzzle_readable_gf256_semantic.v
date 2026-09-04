`include "counter_control1_semantic.v"
module puzzle_readable_combined (
    input       I,
    input       clk,
    input       enable,
    input       rst_n,
    output reg  success,
    output      [7:0] O
);

    wire [3:0] counter_11;
    wire [3:0] output_count;
    
    wire and2_2_15_X;
    wire and3_2_10_B;
    wire and3_2_11_X;
    wire and4_2_4_B;
    wire and4_2_4_D;
    wire and4_2_4_X;
    wire and4b_2_3_X;
    wire inv_2_10_A;
    wire inv_2_23_A;
    wire inv_2_8_Y;
    wire mux2_1_7_A0;
    wire nand4_2_1_Y;
    wire nand4_2_4_Y;
    wire nand4_2_5_Y;
    wire nand4_2_6_Y;
    wire nand4_2_7_Y;
    wire nand4_2_8_Y;
    wire nand4_2_9_Y;
    wire nor2_2_41_Y;
    wire nor2_2_42_Y;
    wire nor2_2_43_Y;
    wire nor2_2_44_Y;
    wire nor2_2_45_Y;
    wire nor3_2_2_Y;
    wire o21a_2_24_A2;
    wire o21a_2_25_A2;
    wire o21a_2_27_A2;
    wire o21a_2_28_A2;
    wire o21a_2_4_A2;
    wire o21a_2_5_A2;
    wire o21a_2_6_A2;
    wire o21a_2_7_A2;
    wire o21a_2_8_A2;
    wire o21a_2_9_A2;
    wire or2_2_7_X;
    wire or4_2_1_B;
    wire or4_2_1_D;
    wire or4_2_2_B;
    wire or4_2_2_D;
    wire or4_2_3_B;
    wire or4_2_3_D;
    wire or4_2_5_B;
    wire or4_2_5_D;
    wire or4_2_6_B;
    wire or4_2_6_D;
    wire or4_2_7_B;
    wire or4_2_7_D;
    wire or4_2_8_B;
    wire or4_2_8_D;
    wire or4_2_9_B;
    wire or4_2_9_D;
    wire xnor2_2_11_B;
    
    wire a22o_2_13_A1;
    wire a22o_2_21_B2;
    wire a22o_2_22_X;
    wire a22o_2_7_A1;
    wire a31o_2_15_X;
    wire strobe;
    wire and2_2_8_X;
    wire and2b_2_16_X;
    wire and2b_2_19_X;
    wire and3_2_17_X;
    wire and3_2_25_C;
    wire and3b_2_1_X;
    wire and3b_2_2_X;
    wire conb_1_2_HI;
    wire conb_1_3_LO;
    wire conb_1_4_LO;
    wire conb_1_5_LO;
    wire inv_2_7_A;
    wire inv_2_7_Y;
    wire nand4_2_1_D;
    wire nand4_2_2_D;
    wire nand4_2_3_D;
    wire nand4_2_4_D;
    wire nand4_2_5_D;
    wire nand4_2_6_D;
    wire nor2_2_23_Y;
    wire nor2_2_39_Y;
    wire nor2_2_46_A;
    wire nor4_2_0_Y;
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
    wire or3_2_14_A;
    wire or3_2_15_A;
    wire or3_2_16_A;
    wire or3_2_17_A;
    wire or3_2_6_X;
    wire or3_2_9_X;
    wire or4_2_1_C;
    wire or4_2_2_C;
    wire or4_2_3_C;
    wire or4_2_5_C;
    wire xnor2_2_14_B;
    wire xnor2_2_6_Y;
    wire xor2_2_20_B;

    
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

    counter_control1 u_counter_control (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .a22o_2_13_A1(a22o_2_13_A1),
        .a22o_2_21_B2(a22o_2_21_B2),
        .a22o_2_22_X(a22o_2_22_X),
        .a22o_2_7_A1(a22o_2_7_A1),
        .a31o_2_15_X(a31o_2_15_X),
        .strobe(strobe),
        .and2_2_8_X(and2_2_8_X),
        .and2b_2_16_X(and2b_2_16_X),
        .and2b_2_19_X(and2b_2_19_X),
        .and3_2_17_X(and3_2_17_X),
        .and3_2_25_C(and3_2_25_C),
        .and3b_2_1_X(and3b_2_1_X),
        .and3b_2_2_X(and3b_2_2_X),
        .conb_1_2_HI(conb_1_2_HI),
        .conb_1_3_LO(conb_1_3_LO),
        .conb_1_4_LO(conb_1_4_LO),
        .conb_1_5_LO(conb_1_5_LO),
        .inv_2_7_A(inv_2_7_A),
        .inv_2_7_Y(inv_2_7_Y),
        .nand4_2_1_D(nand4_2_1_D),
        .nand4_2_2_D(nand4_2_2_D),
        .nand4_2_3_D(nand4_2_3_D),
        .nand4_2_4_D(nand4_2_4_D),
        .nand4_2_5_D(nand4_2_5_D),
        .nand4_2_6_D(nand4_2_6_D),
        .nor2_2_23_Y(nor2_2_23_Y),
        .nor2_2_39_Y(nor2_2_39_Y),
        .nor2_2_46_A(nor2_2_46_A),
        .nor4_2_0_Y(nor4_2_0_Y),
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
        .or3_2_14_A(or3_2_14_A),
        .or3_2_15_A(or3_2_15_A),
        .or3_2_16_A(or3_2_16_A),
        .or3_2_17_A(or3_2_17_A),
        .or3_2_6_X(or3_2_6_X),
        .or3_2_9_X(or3_2_9_X),
        .or4_2_1_C(or4_2_1_C),
        .or4_2_2_C(or4_2_2_C),
        .or4_2_3_C(or4_2_3_C),
        .or4_2_5_C(or4_2_5_C),
        .xnor2_2_14_B(xnor2_2_14_B),
        .xnor2_2_6_Y(xnor2_2_6_Y),
        .xor2_2_20_B(xor2_2_20_B),
        .counter_11(counter_11),
        .output_count(output_count)
    );

    output_logic u_output_logic (
        .clk(clk),
        .rst_n(rst_n),
        .I(I),
        .success(success),
        .output_count(output_count),
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
        .strobe(strobe),
        .and2_2_8_X(and2_2_8_X),
        .and2b_2_16_X(and2b_2_16_X),
        .and2b_2_19_X(and2b_2_19_X),
        .and3_2_17_X(and3_2_17_X),
        .and3_2_25_C(and3_2_25_C),
        .and3b_2_1_X(and3b_2_1_X),
        .and3b_2_2_X(and3b_2_2_X),
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
                         & or3_2_8_A;  
    assign and4_2_4_B = and4_2_3_C
                        & nor3_2_2_A;  
    assign and4_2_4_D = and4_2_3_A
                        & and4_2_3_B
                        & or3_2_8_B;  
    assign inv_2_23_A = ~inv_2_11_A;  
    assign inv_2_8_Y = ~inv_2_8_A;  
    assign mux2_1_7_A0 = ~(or2_2_7_A & I);  
    assign or2_2_7_X = or2_2_7_A | I;  
    assign or4_2_1_B = ~inv_2_1_A;  
    assign or4_2_2_B = ~inv_2_2_A;  
    assign or4_2_3_B = ~inv_2_3_A;  
    assign or4_2_5_B = ~inv_2_16_A;  
    assign or4_2_6_B = ~inv_2_20_A;  
    assign or4_2_7_B = ~inv_2_18_A;  
    assign or4_2_8_B = ~inv_2_19_A;  
    assign or4_2_9_B = ~inv_2_17_A;  
    assign inv_2_10_A = or3_2_8_A
                        & I
                        & inv_2_7_A;  
    assign nand4_2_7_Y = ~(I & inv_2_7_A & nand4_2_7_C & (counter_11 == 0));  
    assign nand4_2_8_Y = ~(I & inv_2_7_A & nand4_2_8_C & (counter_11 == 3));  
    assign nand4_2_9_Y = ~(I & inv_2_7_A & nand4_2_9_C & (counter_11 == 5));  
    assign nor3_2_2_Y = ~(nor3_2_2_A | nor3_2_2_B | (or3_2_8_A
                       | or3_2_8_B
                       | or3_2_8_C));  
    assign o21a_2_24_A2 = ~(I & inv_2_7_A & nand4_2_11_C & (counter_11 == 8));  
    assign o21a_2_25_A2 = ~(I & inv_2_7_A & nand4_2_13_C & (counter_11 == 10));  
    assign o21a_2_27_A2 = ~(I & inv_2_7_A & nand4_2_12_C & (counter_11 == 9));  
    assign o21a_2_28_A2 = ~(I & inv_2_7_A & nand4_2_10_C & (counter_11 == 6));  
    assign or4_2_1_D = ~(I & inv_2_7_A);  
    assign or4_2_2_D = ~(I & inv_2_7_A);  
    assign or4_2_3_D = ~(I & inv_2_7_A);  
    assign or4_2_5_D = ~(I & inv_2_7_A);  
    assign or4_2_6_D = ~(I & inv_2_7_A);  
    assign or4_2_7_D = ~(I & inv_2_7_A);  
    assign or4_2_8_D = ~(I & inv_2_7_A);  
    assign or4_2_9_D = ~(I & inv_2_7_A);  
    assign and3_2_11_X = and4_2_3_A
                         & and4_2_3_B
                         & inv_2_10_A;  
    assign and4_2_4_X = nor3_2_2_B
                        & and4_2_4_B
                        & inv_2_10_A
                        & and4_2_4_D;  
    assign nor2_2_41_Y = ~((counter_11 != 1) | or4_2_9_D);  
    assign nor2_2_43_Y = ~((counter_11 != 2) | or4_2_7_D);  
    assign nor2_2_44_Y = ~((counter_11 != 4) | or4_2_8_D);  
    assign nor2_2_45_Y = ~((counter_11 != 8) | or4_2_6_D);  
    assign xnor2_2_11_B = ~(inv_2_10_A & and4_2_4_D);  
    assign and2_2_15_X = (~inv_2_6_A)
                         & (and4_2_3_A
                        & and4_2_3_B
                        & and4_2_3_C
                        & nor3_2_2_Y);  
    assign and4b_2_3_X = (~or2_2_11_B)
                         & or2_2_11_A
                         & ((((~nand4_2_1_C)
                        & and2b_2_3_B)
                        & (or4_2_2_A
                        & or4_2_2_B)
                        & ((~nand4_2_5_C)
                        & o21a_2_30_A1)
                        & ((~nand4_2_2_C)
                        & o21a_2_8_A1))
                        & ((or4_2_1_A
                        & or4_2_1_B)
                        & ((~nand4_2_0_C)
                        & o21a_2_4_A1)
                        & ((~nand4_2_3_C)
                        & o21a_2_5_A1)
                        & (or4_2_3_A
                        & or4_2_3_B))
                        & (((~nand4_2_4_C)
                        & o21a_2_16_A1)
                        & (or4_2_5_A
                        & or4_2_5_B)
                        & ((~nand4_2_6_C)
                        & o21a_2_18_A1)))
                         & ((((~nand4_2_9_C)
                        & o21a_2_21_A1)
                        & (or4_2_8_A
                        & or4_2_8_B)
                        & ((~nand4_2_11_C)
                        & o21a_2_24_A1)
                        & ((~nand4_2_10_C)
                        & o21a_2_28_A1))
                         & ((or4_2_9_A
                        & or4_2_9_B)
                        & ((~nand4_2_7_C)
                        & o21a_2_19_A1)
                        & ((~nand4_2_8_C)
                        & o21a_2_23_A1)
                        & (or4_2_7_A
                        & or4_2_7_B))
                         & (((~nand4_2_12_C)
                         & o21a_2_27_A1)
                         & (or4_2_6_A
                         & or4_2_6_B)
                         & ((~nand4_2_13_C)
                         & o21a_2_25_A1)));  
    assign nand4_2_1_Y = ~(I & inv_2_7_A & nand4_2_1_C & nand4_2_1_D);  
    assign nand4_2_4_Y = ~(I & inv_2_7_A & nand4_2_4_C & nand4_2_4_D);  
    assign nand4_2_5_Y = ~(I & inv_2_7_A & nand4_2_5_C & nand4_2_5_D);  
    assign nand4_2_6_Y = ~(I & inv_2_7_A & nand4_2_6_C & nand4_2_6_D);  
    assign nor2_2_42_Y = ~(or4_2_5_C | or4_2_5_D);  
    assign o21a_2_4_A2 = ~(I & inv_2_7_A & nand4_2_0_C & nor4_2_0_Y);  
    assign o21a_2_5_A2 = ~(I & inv_2_7_A & nand4_2_3_C & nand4_2_3_D);  
    assign o21a_2_6_A2 = ~(or4_2_3_C | or4_2_3_D);  
    assign o21a_2_7_A2 = ~(or4_2_1_C | or4_2_1_D);  
    assign o21a_2_8_A2 = ~(I & inv_2_7_A & nand4_2_2_C & nand4_2_2_D);  
    assign o21a_2_9_A2 = ~(or4_2_2_C | or4_2_2_D);  

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
            nand4_2_9_C <= ((o21a_2_21_A1 | nand4_2_9_Y)
                         & ((I & inv_2_7_A & (counter_11 == 5))
                         | nand4_2_9_C));
            o21a_2_27_A1 <= (~((~o21a_2_27_A1) & o21a_2_27_A2));
            success <= ((inv_2_23_A & and2_2_15_X & and4b_2_3_X)
                        | (success & strobe));
            nand4_2_7_C <= ((o21a_2_19_A1 | nand4_2_7_Y)
                         & ((I & inv_2_7_A & (counter_11 == 0))
                         | nand4_2_7_C));
            nand4_2_8_C <= ((o21a_2_23_A1 | nand4_2_8_Y)
                         & ((I & inv_2_7_A & (counter_11 == 3))
                         | nand4_2_8_C));
            or4_2_9_A <= ((inv_2_17_A & nor2_2_41_Y)
                         | or4_2_9_A);
            inv_2_20_A <= ((inv_2_20_A | nor2_2_45_Y)
                         & (or4_2_6_A
                       | or4_2_6_B
                       | (counter_11 != 8)
                       | or4_2_6_D));
            mux2_1_9_A0 <= (inv_2_7_A ? mux2_1_9_A1 : mux2_1_9_A0);
            nand4_2_13_C <= ((o21a_2_25_A1 | o21a_2_25_A2)
                         & ((I & inv_2_7_A & (counter_11 == 10))
                         | nand4_2_13_C));
            inv_2_18_A <= ((inv_2_18_A | nor2_2_43_Y)
                         & (or4_2_7_A
                       | or4_2_7_B
                       | (counter_11 != 2)
                       | or4_2_7_D));
            or4_2_5_A <= ((inv_2_16_A & nor2_2_42_Y)
                         | or4_2_5_A);
            mux2_1_8_A1 <= (inv_2_7_A ? mux2_1_15_A0 : mux2_1_8_A1);
            a22o_2_2_A2 <= (inv_2_7_A ? I : a22o_2_2_A2);
            nand4_2_12_C <= ((o21a_2_27_A1 | o21a_2_27_A2)
                         & ((I & inv_2_7_A & (counter_11 == 9))
                         | nand4_2_12_C));
            o21a_2_23_A1 <= (~((~o21a_2_23_A1) & nand4_2_8_Y));
            and4_2_3_C <= (~(and4_2_3_C ^ xnor2_2_11_B));
            mux2_1_15_A0 <= (inv_2_7_A ? mux2_1_16_A0 : mux2_1_15_A0);
            mux2_1_19_A1 <= (inv_2_7_A ? a22o_2_2_A2 : mux2_1_19_A1);
            nand4_2_11_C <= ((o21a_2_24_A1 | o21a_2_24_A2)
                         & ((I & inv_2_7_A & (counter_11 == 8))
                         | nand4_2_11_C));
            o21a_2_28_A1 <= (~((~o21a_2_28_A1) & o21a_2_28_A2));
            nand4_2_5_C <= ((o21a_2_30_A1 | nand4_2_5_Y)
                         & ((I & inv_2_7_A & nand4_2_5_D)
                         | nand4_2_5_C));
            o21a_2_30_A1 <= (~((~o21a_2_30_A1) & nand4_2_5_Y));
            nor3_2_2_A <= (((~(and4_2_3_C & nor3_2_2_A)) | xnor2_2_11_B)
                         & ((and4_2_3_C & inv_2_10_A & and4_2_4_D)
                        | nor3_2_2_A));
            mux2_1_9_A1 <= (inv_2_7_A ? mux2_1_19_A0 : mux2_1_9_A1);
            inv_2_19_A <= ((inv_2_19_A | nor2_2_44_Y)
                         & (or4_2_8_A
                       | or4_2_8_B
                       | (counter_11 != 4)
                       | or4_2_8_D));
            inv_2_17_A <= ((inv_2_17_A | nor2_2_41_Y)
                         & (or4_2_9_A
                       | or4_2_9_B
                       | (counter_11 != 1)
                       | or4_2_9_D));
            inv_2_16_A <= ((inv_2_16_A | nor2_2_42_Y)
                         & (or4_2_5_A
                       | or4_2_5_B
                       | or4_2_5_C
                       | or4_2_5_D));
            or3_2_8_C <= (or3_2_8_C
                         ^ and4_2_4_X);
            and2b_2_3_B <= (~((~and2b_2_3_B) & nand4_2_1_Y));
            mux2_1_12_A1 <= (inv_2_7_A ? mux2_1_8_A0 : mux2_1_12_A1);
            o21a_2_21_A1 <= (~((~o21a_2_21_A1) & nand4_2_9_Y));
            or4_2_7_A <= ((inv_2_18_A & nor2_2_43_Y)
                         | or4_2_7_A);
            nand4_2_6_C <= ((o21a_2_18_A1 | nand4_2_6_Y)
                         & ((I & inv_2_7_A & nand4_2_6_D)
                         | nand4_2_6_C));
            or3_2_8_A <= (~(inv_2_10_A | (~((I & inv_2_7_A) | or3_2_8_A))));
            o21a_2_8_A1 <= (~((~o21a_2_8_A1) & o21a_2_8_A2));
            mux2_1_8_A0 <= (inv_2_7_A ? mux2_1_8_A1 : mux2_1_8_A0);
            o21a_2_24_A1 <= (~((~o21a_2_24_A1) & o21a_2_24_A2));
            nand4_2_4_C <= ((o21a_2_16_A1 | nand4_2_4_Y)
                         & ((I & inv_2_7_A & nand4_2_4_D)
                         | nand4_2_4_C));
            nand4_2_10_C <= ((o21a_2_28_A1 | o21a_2_28_A2)
                         & ((I & inv_2_7_A & (counter_11 == 6))
                         | nand4_2_10_C));
            and4_2_3_A <= ((I & inv_2_7_A & and3_2_10_B)
                        | ((~inv_2_10_A) & and4_2_3_A));
            or4_2_2_A <= ((inv_2_2_A & o21a_2_9_A2)
                        | or4_2_2_A);
            o21a_2_25_A1 <= (~((~o21a_2_25_A1) & o21a_2_25_A2));
            o21a_2_19_A1 <= (~((~o21a_2_19_A1) & nand4_2_7_Y));
            mux2_1_16_A0 <= (inv_2_7_A ? mux2_1_9_A0 : mux2_1_16_A0);
            or4_2_8_A <= ((inv_2_19_A & nor2_2_44_Y)
                         | or4_2_8_A);
            and4_2_3_B <= ((~and3_2_11_X)
                          & ((and4_2_3_A & inv_2_10_A)
                         | and4_2_3_B));
            o21a_2_4_A1 <= (~((~o21a_2_4_A1) & o21a_2_4_A2));
            o21a_2_18_A1 <= (~((~o21a_2_18_A1) & nand4_2_6_Y));
            mux2_1_12_A0 <= (inv_2_7_A ? mux2_1_12_A1 : mux2_1_12_A0);
            or4_2_6_A <= ((inv_2_20_A & nor2_2_45_Y)
                         | or4_2_6_A);
            or3_2_8_B <= ((or3_2_8_B | and3_2_11_X)
                         & xnor2_2_11_B);
            o21a_2_16_A1 <= (~((~o21a_2_16_A1) & nand4_2_4_Y));
            inv_2_11_A <= ((I & inv_2_7_A & (((counter_11 != 10) & mux2_1_12_A1)
                         | (conb_1_2_HI & mux2_1_12_A0)
                         | (((counter_11 != 0) & a22o_2_2_A2)
                        | ((counter_11 != 0) & a22o_2_2_B2))))
                         | inv_2_11_A);
            or2_2_7_A <= ((inv_2_7_Y & or2_2_7_A)
                        | (((inv_2_8_A | mux2_1_7_A0)
                         & or2_2_7_X
                         & inv_2_7_A) & (counter_11 != 10)));
            a22o_2_2_B2 <= (inv_2_7_A ? mux2_1_12_A0 : a22o_2_2_B2);
            inv_2_6_A <= (((counter_11 == 10) & inv_2_7_A & (inv_2_8_A ? or2_2_7_X : mux2_1_7_A0))
                         | inv_2_6_A);
            mux2_1_19_A0 <= (inv_2_7_A ? mux2_1_19_A1 : mux2_1_19_A0);
            inv_2_8_A <= (~((inv_2_8_Y & mux2_1_7_A0) | (inv_2_7_Y ? inv_2_8_Y : (counter_11 == 10))));
            nor3_2_2_B <= ((~and4_2_4_X)
                         & ((and4_2_4_B & inv_2_10_A & and4_2_4_D)
                         | nor3_2_2_B));
            nand4_2_0_C <= ((o21a_2_4_A1 | o21a_2_4_A2)
                        & ((I & inv_2_7_A & nor4_2_0_Y)
                        | nand4_2_0_C));
            inv_2_1_A <= ((inv_2_1_A | o21a_2_7_A2)
                        & (or4_2_1_A
                       | or4_2_1_B
                       | or4_2_1_C
                       | or4_2_1_D));
            or4_2_1_A <= ((inv_2_1_A & o21a_2_7_A2)
                        | or4_2_1_A);
            or4_2_3_A <= ((inv_2_3_A & o21a_2_6_A2)
                        | or4_2_3_A);
            o21a_2_5_A1 <= (~((~o21a_2_5_A1) & o21a_2_5_A2));
            nand4_2_2_C <= ((o21a_2_8_A1 | o21a_2_8_A2)
                        & ((I & inv_2_7_A & nand4_2_2_D)
                        | nand4_2_2_C));
            nand4_2_1_C <= ((and2b_2_3_B | nand4_2_1_Y)
                         & ((I & inv_2_7_A & nand4_2_1_D)
                        | nand4_2_1_C));
            inv_2_2_A <= ((inv_2_2_A | o21a_2_9_A2)
                        & (or4_2_2_A
                       | or4_2_2_B
                       | or4_2_2_C
                       | or4_2_2_D));
            nand4_2_3_C <= ((o21a_2_5_A1 | o21a_2_5_A2)
                        & ((I & inv_2_7_A & nand4_2_3_D)
                        | nand4_2_3_C));
            inv_2_3_A <= ((inv_2_3_A | o21a_2_6_A2)
                        & (or4_2_3_A
                       | or4_2_3_B
                       | or4_2_3_C
                       | or4_2_3_D));
        end
    end

endmodule

    



module output_logic (
    input  clk,
    input  rst_n,
    input  I,
    input  success,
    input  [3:0] output_count,
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
    input  strobe,
    input  and2_2_8_X,
    input  and2b_2_16_X,
    input  and2b_2_19_X,
    input  and3_2_17_X,
    input  and3_2_25_C,
    input  and3b_2_1_X,
    input  and3b_2_2_X,
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
    wire nor3_2_3_A;
    wire nor3_2_3_B;
    wire nor3_2_3_C;
    wire nor3_2_3_Y;
    wire nor3b_2_2_Y;
    wire nor3b_2_3_Y;
    wire o31a_2_9_A1;
    wire or3_2_17_B;
    wire or3_2_17_C;
    wire or4b_2_8_A;
    wire or4b_2_8_C;
    reg a32o_2_3_B1;
    reg [7:0] lfsr;
    wire [7:0] mode_output;

    // One zero-input step uses the primitive degree-8 recurrence
    //   x^8 + x^4 + x^3 + x^2 + 1  (0x11D).
    // The synthesized output phase performs eight such steps per clock.
    function [7:0] lfsr_advance_byte;
        input [7:0] s;
        integer k;
        reg [7:0] t;
        begin
            t = s;
            for (k = 0; k < 8; k = k + 1) begin
                t = {t[6:0], t[7] ^ t[5] ^ t[4] ^ t[3]};
            end
            lfsr_advance_byte = t;
        end
    endfunction

    function [7:0] success_mask;
        input [3:0] count;
        begin
            case (count)
                4'd0:  success_mask = 8'h4D;
                4'd1:  success_mask = 8'hAD;
                4'd2:  success_mask = 8'hFB;
                4'd3:  success_mask = 8'h83;
                4'd4:  success_mask = 8'h13;
                4'd5:  success_mask = 8'h79;
                4'd6:  success_mask = 8'h1C;
                4'd7:  success_mask = 8'hB5;
                4'd8:  success_mask = 8'h79;
                4'd9:  success_mask = 8'h63;
                4'd10: success_mask = 8'hC7;
                4'd11: success_mask = 8'h68;
                4'd12: success_mask = 8'h93;
                4'd13: success_mask = 8'hF5;
                4'd14: success_mask = 8'h8F;
                default: success_mask = 8'h00;
            endcase
        end
    endfunction

    assign or4b_2_8_C = ((~and4_2_3_B)
                         & (~or3_2_8_C)
                         & nor3_2_2_B
                         & or3_2_8_B)
                        & and3_2_10_B
                        & and4_2_4_B;  
    assign or4b_2_8_A = ~(and4_2_3_A | and4_2_3_B | and4_2_3_C | (~nor3_2_2_Y));  
    assign nor3_2_3_A = ~(((~success) & a32o_2_3_B1) | or4b_2_8_C | or4b_2_8_A);  
    assign nor3_2_3_B = ~(or4b_2_8_A | ((success | a32o_2_3_B1)
                         & (~or4b_2_8_C)));  
    assign nor3_2_3_C = ~(or4b_2_8_A
                        | success
                        | or4b_2_8_C
                        | (~a32o_2_3_B1));  
    assign nor3_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | nor3_2_3_C);  
    assign nor3b_2_2_Y = ~(nor3_2_3_A | nor3_2_3_C | (~nor3_2_3_B));  
    assign nor3b_2_3_Y = ~(nor3_2_3_A | nor3_2_3_B | (~nor3_2_3_C));  
    assign or3_2_17_B = ~(nor3_2_3_B | nor3_2_3_C | (~nor3_2_3_A));  
    assign or3_2_17_C = ~((nor3_2_3_B & nor3_2_3_C) | nor3_2_3_A);  
    assign o31a_2_9_A1 = ~(or3_2_17_B | or3_2_17_C);  

    // For the successful-output mode, the eight O equations below reduce to
    //
    //   O = lfsr ^ K[output_count]
    //
    // where, for output_count 0..14:
    //   K = 4D AD FB 83 13 79 1C B5 79 63 C7 68 93 F5 8F
    // and O=0 at output_count 15.  Meanwhile lfsr advances by M^8
    // after each non-gap output clock, so successful byte k is
    //   O_k = M^(8k) * S_final ^ K[k].
    // The equations below now serve only the non-success output modes.

    // The successful path is now explicit.  A successful puzzle uses the
    // GF(256) state directly, XORed with a fixed byte mask for each phase.
    assign O = success
             ? ((or2_2_11_B && and3_2_25_C)
                ? (lfsr ^ success_mask(output_count))
                : 8'h00)
             : mode_output;

    assign mode_output[0] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((o31a_2_2_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & a22o_2_21_B2)) | (((~(lfsr[0] ^ xnor2_2_14_B)) & or3_2_17_B)
                         | (nor3b_2_3_Y & o21bai_2_0_Y)))
                        & (or3_2_16_A
                        | or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  
    assign mode_output[1] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((o21a_2_13_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & and3b_2_1_X)) | (((~(or3_2_9_X ^ (lfsr[1]
                         ^ or2_2_9_X))) & or3_2_17_B)
                         | (nor3b_2_3_Y & o31a_2_0_X)))
                        & (or3_2_10_A
                        | or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  
    assign mode_output[2] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((o211a_2_10_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & and2b_2_19_X)) | (((~(lfsr[2] ^ o21ai_2_4_Y)) & or3_2_17_B)
                         | (nor3b_2_3_Y & and2_2_8_X)))
                        & (or3_2_11_A
                        | or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  
    assign mode_output[3] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((a22o_2_13_A1 & nor3b_2_2_Y)
                         | (nor3_2_3_Y & o221a_2_2_X)) | (((lfsr[3]
                         ^ o32a_2_2_X) & or3_2_17_B)
                         | (nor3b_2_3_Y & xnor2_2_6_Y)))
                         & (or3_2_15_A
                        | or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  
    assign mode_output[4] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((conb_1_4_LO & nor3b_2_2_Y)
                         | (nor3_2_3_Y & o211a_2_9_X)) | (((lfsr[4]
                         ^ o31a_2_1_X) & or3_2_17_B)
                        | (nor3b_2_3_Y & o32ai_2_0_Y)))
                        & (or3_2_17_A
                        | or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  
    assign mode_output[5] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((and3_2_17_X & nor3b_2_2_Y)
                         | (nor3_2_3_Y & and3b_2_2_X)) | (((lfsr[5]
                         ^ xor2_2_20_B) & or3_2_17_B)
                         | (nor3b_2_3_Y & nor2_2_23_Y)))
                        & (or3_2_14_A
                        | or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  
    assign mode_output[6] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((a22o_2_7_A1 & nor3b_2_2_Y)
                        | (nor3_2_3_Y & o21a_2_15_X)) | (((~(lfsr[6] ^ a22o_2_22_X)) & or3_2_17_B)
                        | (nor3b_2_3_Y & o22a_2_2_X)))
                        & (or3_2_6_X
                        | or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  
    assign mode_output[7] = or2_2_11_B
                  & ((o31a_2_9_A1 | ((conb_1_5_LO & nor3b_2_2_Y)
                        | (nor3_2_3_Y & conb_1_3_LO)) | (((~(lfsr[7] ^ a31o_2_15_X)) & or3_2_17_B)
                         ))
                        & (or3_2_17_B
                        | or3_2_17_C))
                  & and3_2_25_C;  

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            a32o_2_3_B1 <= 1'b0;
            lfsr <= 8'hA5;
        end else begin
            // This is a separate output-mode/status bit from the original design.
            a32o_2_3_B1 <= (((~inv_2_23_A) & and2_2_15_X & and4b_2_3_X)
                            | (a32o_2_3_B1 & strobe));

            // Input phase: one GF(2) recurrence step, with I injected.
            if (inv_2_7_A) begin
                lfsr <= {
                    lfsr[6:0],
                    I ^ lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]
                };
            end
            // Output phase: the old netlist performs M^8, i.e. eight
            // zero-input recurrence steps, on every non-gap output count.
            else if (or2_2_11_B && and3_2_25_C) begin
                lfsr <= lfsr_advance_byte(lfsr);
            end
            // Otherwise hold lfsr (enable stall, completion bubble, or count 15).
        end
    end

endmodule
