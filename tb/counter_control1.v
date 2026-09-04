module counter_control1 (
    input  clk,
    input  rst_n,
    input  enable,
    output reg [3:0] counter_11,
    output a22o_2_13_A1,
    output a22o_2_21_B2,
    output a22o_2_22_X,
    output a22o_2_7_A1,
    output a31o_2_15_X,
    output strobe,
    output and2_2_8_X,
    output and2b_2_16_X,
    output and2b_2_19_X,
    output and3_2_17_X,
    output and3_2_25_C,
    output and3b_2_1_X,
    output and3b_2_2_X,
    output conb_1_2_HI,
    output conb_1_3_LO,
    output conb_1_4_LO,
    output conb_1_5_LO,
    output inv_2_7_A,
    output inv_2_7_Y,
    output nand4_2_1_D,
    output nand4_2_2_D,
    output nand4_2_3_D,
    output nand4_2_4_D,
    output nand4_2_5_D,
    output nand4_2_6_D,
    output nor2_2_23_Y,
    output nor2_2_39_Y,
    output nor2_2_46_A,
    output nor4_2_0_Y,
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
    
    //
    output or2_2_9_X,
    output or3_2_10_A,
    output or3_2_11_A,
    output or3_2_14_A,
    output or3_2_15_A,
    output or3_2_16_A,
    output or3_2_17_A,
    output or3_2_6_X,
    output or3_2_9_X,
    output or4_2_1_C,
    output or4_2_2_C,
    output or4_2_3_C,
    output or4_2_5_C,
    //output
    output xnor2_2_14_B,
    output xnor2_2_6_Y,
    output xor2_2_20_B
);

    // internal wires
    wire a32o_2_1_B2;
    wire and2_2_2_A;
    wire and2_2_7_B;
    wire and3_2_0_C;
    wire and3_2_0_X;
    wire and3_2_1_C;
    wire and3_2_1_X;
    wire and3_2_2_A;
    wire and3_2_2_B;
    wire and3_2_2_C;
    wire and3_2_4_A;
    wire and3_2_4_B;
    wire and3b_2_0_C;
    wire inv_2_0_Y;
    wire inv_2_12_A;
    wire inv_2_12_Y;
    wire inv_2_14_Y;
    wire inv_2_15_Y;
    wire inv_2_4_A;
    wire inv_2_5_A;
    wire mux2_1_4_S;
    wire nand2_2_29_Y;
    wire nand2_2_31_A;
    wire nand2_2_3_Y;
    wire nand2_2_5_Y;
    wire nand2_2_9_Y;
    wire nand2b_2_8_Y;
    wire nand3_2_1_Y;
    wire nor2_2_0_B;
    wire nor2_2_20_Y;
    wire nor2_2_21_A;
    wire nor2_2_24_Y;
    wire nor2_2_32_B;
    wire nor2_2_3_B;
    wire nor2_2_4_Y;
    wire nor2_2_5_A;
    wire nor2_2_5_Y;
    wire nor2_2_8_A;
    wire nor2_2_9_B;
    wire nor3_2_1_B;
    wire nor3_2_1_C;
    wire o21a_2_15_A2;
    wire o21a_2_3_A2;
    wire o21ai_2_5_Y;
    wire o221a_2_2_C1;
    wire o22ai_2_0_Y;
    wire o31a_2_0_A1;
    wire o31a_2_0_A2;
    wire o31a_2_1_A3;
    wire o31a_2_1_B1;
    wire o31a_2_2_A1;
    wire o32a_2_1_B2;
    wire o32a_2_2_A2;
    wire o32a_2_2_B1;
    wire o32a_2_2_B2;
    wire o32ai_2_0_B1;
    wire or2_2_0_B;
    wire or2_2_10_A;
    wire or2_2_1_A;
    wire or2_2_1_B;
    wire or2_2_1_X;
    wire or2_2_2_A;
    wire or2_2_3_X;
    wire or2_2_4_A;
    wire or2_2_4_B;
    wire or2_2_4_X;
    wire or2_2_5_A;
    wire or2_2_8_X;
    wire or3_2_0_B;
    wire or3_2_0_X;
    wire or3_2_1_B;
    wire or3_2_1_C;
    wire or3_2_2_B;
    wire or3_2_2_C;
    wire or3_2_3_A;
    wire or3_2_3_B;
    wire or3_2_3_C;
    wire or3_2_4_B;
    wire or3_2_5_B;
    wire or3_2_5_X;
    wire or3_2_6_A;
    wire or3_2_6_B;
    wire or3_2_6_C;
    wire or3_2_7_A;
    wire or3_2_9_A;
    wire or3_2_9_B;
    wire or3_2_9_C;
    wire or4_2_0_A;
    wire or4_2_0_B;
    wire or4_2_0_C;
    wire or4_2_0_D;
    wire or4b_2_2_C;
    wire or4b_2_3_A;
    wire or4b_2_3_B;
    wire or4b_2_3_C;
    wire xnor2_2_4_A;
    wire xnor2_2_5_B;
    wire xnor2_2_6_A;
    wire xnor2_2_8_A;
    wire xnor2_2_8_B;
    wire xor2_2_0_X;
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

    reg [3:0] counter_outer;
    reg [3:0] counter_output;
    
    always @(posedge clk) begin
        if(!or2_2_11_B)
            counter_output <= 0;
        else
            counter_output <= counter_output + 1;
    end

    always @(posedge clk)
        if(!rst_n)
        begin
            counter_11 <= 0;
            counter_outer <= 0;
            or2_2_11_A <= 0;
        end
        else if(inv_2_7_A)
        begin
            if(counter_11 == 10)
            begin
                if (counter_outer == 10)
                begin
                    or2_2_11_A    <= 1;
                    counter_outer <= 0;
                end
                else 
                    counter_outer <= counter_outer + 1;
                counter_11    <= 0;
            end
            else 
                counter_11    <= counter_11 + 1;
        end
    assign and3_2_2_A = ~(counter_outer[0] & counter_outer[2]);  // nand2_2_21 : nand2_2
    assign and3_2_2_C = ~(counter_outer[1] ^ counter_outer[3]);  // xnor2_2_3 : xnor2_2


    assign or2_2_1_A = counter_11[0]
                       & counter_outer[0];  // and2_2_1 : and2_2
    assign or2_2_1_B = ~(counter_11[0] | counter_outer[0]);  // nor2_2_7 : nor2_2


    assign conb_1_2_HI = 1'b1;
    assign conb_1_3_LO = 1'b0;
    assign conb_1_4_LO = 1'b0;
    assign conb_1_5_LO = 1'b0;
    assign strobe      = ~((~or2_2_11_B) & or2_2_11_A);  // nand2b_2_23 : nand2b_2
    assign and2_2_7_B  = ~((~counter_output[0]) & counter_output[2]);  // nand2b_2_10 : nand2b_2
    assign and3_2_25_C = (counter_output != 15);  // nand4_2_14 : nand4_2
    assign and3b_2_0_C = (counter_output[1:0] != 3) && (counter_output[3] == 0);  // a21oi_2_8 : a21oi_2
    assign and3b_2_1_X = (counter_output[3:1] == 3);
    assign inv_2_14_Y   = ~counter_output[3];  // inv_2_14 : inv_2
    assign inv_2_15_Y   = ~counter_output[0];  // inv_2_15 : inv_2
    assign inv_2_7_A    = (~or2_2_11_A) & enable;  // and2b_2_11 : and2b_2
    assign nand2_2_29_Y = (counter_output[1:0] != 3);  // nand2_2_29 : nand2_2
    assign nand2_2_31_A = (counter_output[1:0] != 1);  // nand2b_2_11 : nand2b_2
    assign nand2b_2_8_Y = (counter_output[3:2] != 1);  // nand2b_2_8 : nand2b_2
    assign nand3_2_1_Y  = (counter_output[2:0] != 7);  // nand3_2_1 : nand3_2
    assign nor2_2_0_B   = ~(counter_11[0] & counter_outer[0]);  // nand2_2_4 : nand2_2
    assign nor2_2_24_Y  = ~(counter_output[1] | counter_output[3]);  // nor2_2_24 : nor2_2
    assign nor2_2_32_B  = (counter_output[1:0] == 1);
    assign nor3_2_1_B   = (counter_output[1:0] == 0);  // nor2_2_22 : nor2_2
    assign nor3_2_1_C   = (counter_output[1:0] == 3);
    assign o21ai_2_5_Y  = ~((counter_output[1] | counter_output[2]) & counter_output[3]);  // o21ai_2_5 : o21ai_2
    assign o221a_2_2_C1 = (counter_output[1:0] != 2);  // nand2b_2_12 : nand2b_2
    assign o31a_2_0_A1  = (counter_output[2:1] == 2);
    assign o31a_2_1_A3  = (counter_output[1:0] == 2);
    assign o31a_2_1_B1  = ~(counter_output[1] & counter_output[3]);  // nand2_2_30 : nand2_2
    assign o31a_2_2_A1  = (counter_output[2:0] == 7);
    assign o32ai_2_0_B1 = ~((~counter_output[2]) & counter_output[3]);  // nand2b_2_9 : nand2b_2
    assign or2_2_8_X = counter_output[2]
                       | counter_output[3];  // or2_2_8 : or2_2
    assign or2_2_9_X = counter_output[1]
                       | counter_output[2];  // or2_2_9 : or2_2
    assign or3_2_14_A = (counter_output == 3);
    assign or3_2_17_A = ~((counter_output[0] & counter_output[1]) | counter_output[2] | counter_output[3]);  // a211oi_2_2 : a211oi_2
    assign or3_2_6_A   = ~((counter_output[0] & counter_output[1]) | counter_output[3]);  // a21oi_2_9 : a21oi_2
    assign or3_2_6_B   = (counter_output == 7);
    assign or3_2_6_C   = (counter_output != 8);  // nor4b_2_0 : nor4b_2
    assign or3_2_9_B   = ~(counter_output[0] | counter_output[1]);  // nor2_2_38 : nor2_2
    assign or3_2_9_C   = ~(counter_output[2] | counter_output[3]);  // nor2_2_37 : nor2_2
    assign xnor2_2_4_A = ~(counter_outer[1] & counter_outer[2]);  // nand2_2_17 : nand2_2
    assign xor2_2_0_X  = counter_outer[0]
                        ^ counter_outer[1];  // xor2_2_0 : xor2_2
    assign xor2_2_7_X = counter_outer[0]
                        ^ counter_outer[2];  // xor2_2_7 : xor2_2
    assign a22o_2_13_A1 = ~((counter_output[0] & counter_output[2]) | counter_output[3] | (counter_output[2:1] == 1) | (~(counter_output[0] | counter_output[1])));  // a2111oi_2_0 : a2111oi_2
    assign a22o_2_21_B2 = ~((or2_2_8_X & nor2_2_32_B) | (counter_output[2] ? counter_output[3] : counter_output[1]));  // a21oi_2_15 : a21oi_2
    assign a22o_2_22_X = (counter_output[0] & or3_2_9_C)
                         | (nand2_2_31_A & counter_output[2]);  // a22o_2_22 : a22o_2
    assign a22o_2_7_A1 = ~((counter_output[0] & (counter_output[2:1] == 1)) | counter_output[3]);  // a21oi_2_17 : a21oi_2
    assign and2_2_8_X = (counter_output[1:0] != 3)
                        & (counter_output[3:2] != 3);  // and2_2_8 : and2_2

    assign and2_2_8_X  = (counter_output[1:0] != 3) && (counter_output[3:2] != 3);

    assign and2b_2_19_X = (~or2_2_8_X)
                          & o221a_2_2_C1;  // and2b_2_19 : and2b_2
    assign and3_2_17_X = counter_output[0]
                         & inv_2_14_Y
                         & (counter_output[2:1] == 1);  // and3_2_17 : and3_2
    assign and3_2_2_B = ~(counter_outer[3] & xor2_2_7_X);  // nand2_2_22 : nand2_2
    assign and3b_2_2_X = (~counter_output[3])
                         & nor2_2_32_B
                         & counter_output[2];  // and3b_2_2 : and3b_2
    assign inv_2_12_A = ~(counter_output[2] & o31a_2_1_A3);  // nand2_2_32 : nand2_2
    assign inv_2_5_A = (counter_11 == 10)
                       & inv_2_7_A
                       & counter_outer[1]
                       & counter_outer[0];  // and4_2_2 : and4_2
    assign inv_2_7_Y   = ~inv_2_7_A;  // inv_2_7 : inv_2
    assign nor2_2_23_Y = ~(counter_output[3] | (counter_output[1:0] != 3));  // nor2_2_23 : nor2_2
    assign nor2_2_4_Y = ~(or2_2_1_A | or2_2_1_B);  // nor2_2_4 : nor2_2
    assign nor2_2_8_A = ~(counter_11[1] ^ xor2_2_0_X);  // xnor2_2_1 : xnor2_2
    assign o211a_2_10_X = (inv_2_15_Y | counter_output[2])
                          & inv_2_14_Y
                          & counter_output[1];  // o211a_2_10 : o211a_2
    assign o21a_2_13_X = (inv_2_15_Y | o31a_2_2_A1)
                         & inv_2_14_Y;  // o21a_2_13 : o21a_2
    assign o21a_2_15_A2 = ~(counter_output[0] & or2_2_8_X);  // nand2_2_27 : nand2_2
    assign o22a_2_2_X = (counter_output[3] | (counter_output[1:0] != 3))
                        & ((counter_output[3:2] != 3) | nor3_2_1_B);  // o22a_2_2 : o22a_2
    assign o31a_2_0_A2 = ~((nor3_2_1_C & o32ai_2_0_B1 & nand2b_2_8_Y) | and3b_2_0_C);  // a31oi_2_0 : a31oi_2
    assign o31a_2_2_X = (o31a_2_2_A1 | ((~counter_output[1])
                         & counter_output[0]) | (~(counter_output[0] | counter_output[2] | (~counter_output[1]))))
                        & inv_2_14_Y;  // o31a_2_2 : o31a_2
    assign o32a_2_2_A2 = ~(counter_output[3] ^ (counter_output[0]
                         & counter_output[1]
                         & counter_output[2]));  // xnor2_2_27 : xnor2_2
    assign o32a_2_2_B1 = (~or3_2_9_B)
                         & nand2_2_29_Y;  // and2b_2_15 : and2b_2
    assign or2_2_10_A = or2_2_11_B
                        & and3_2_25_C;  // and2_2_16 : and2_2
    assign or2_2_1_X = or2_2_1_A
                       | or2_2_1_B;  // or2_2_1 : or2_2
    assign or3_2_10_A = (counter_output[0] & nor2_2_24_Y)
                        | or3_2_6_C;  // a21o_2_7 : a21o_2
    assign or3_2_11_A = (counter_output[0] & counter_output[2] & nor2_2_24_Y)
                        | (~(counter_output[0] | counter_output[1] | counter_output[2]));  // a31o_2_6 : a31o_2
    assign or3_2_15_A = (counter_output[1] & or3_2_17_A)
                        | or3_2_6_C
                        | or3_2_6_B;  // a211o_2_4 : a211o_2
    assign or3_2_16_A = (counter_output[1] | counter_output[2])
                        & (or3_2_6_A | or3_2_6_B);  // o22a_2_1 : o22a_2
    assign or3_2_5_B = (counter_outer == 7);  // nor2_2_17 : nor2_2
    assign or3_2_6_X = or3_2_6_A
                       | or3_2_6_B
                       | or3_2_6_C;  // or3_2_6 : or3_2
    assign or3_2_9_A = ~(counter_output[0] | inv_2_14_Y);  // nor2_2_36 : nor2_2
    assign xnor2_2_6_A = (~nor3_2_1_B)
                         & and2_2_7_B
                         & and3b_2_0_C;  // and3b_2_0 : and3b_2
    assign xor2_2_1_B = ~((counter_outer[1] & xor2_2_7_X) | (~(counter_outer[1] | counter_outer[2])));  // a21oi_2_10 : a21oi_2
    assign xor2_2_4_X = counter_outer[3]
                        ^ xor2_2_7_X;  // xor2_2_4 : xor2_2
    assign a31o_2_15_X = (counter_output[2] & inv_2_14_Y & nand2_2_29_Y)
                         | (~((counter_output[0] & inv_2_14_Y) | (or2_2_9_X & nand2_2_29_Y)));  // a31o_2_15 : a31o_2
    assign and2b_2_16_X = (~inv_2_7_A)
                          & or2_2_10_A;  // and2b_2_16 : and2b_2
    assign and3_2_4_A = ~((~xnor2_2_4_A) & xor2_2_4_X);  // nand2b_2_6 : nand2b_2
    assign inv_2_12_Y = ~inv_2_12_A;  // inv_2_12 : inv_2
    assign nor2_2_39_Y = ~(or2_2_10_A | inv_2_7_A);  // nor2_2_39 : nor2_2
    assign nor2_2_46_A = ~((~inv_2_7_A) & or2_2_10_A);  // nand2b_2_22 : nand2b_2
    assign nor2_2_9_B = ~(nor2_2_8_A & nor2_2_0_B);  // nand2_2_7 : nand2_2
    assign o211a_2_9_X = (counter_output[1] | or2_2_8_X)
                         & o21a_2_15_A2
                         & o21ai_2_5_Y;  // o211a_2_9 : o211a_2
    assign o21a_2_15_X = (counter_output[1] | o21a_2_15_A2)
                         & o21ai_2_5_Y;  // o21a_2_15 : o21a_2
    assign o21bai_2_0_Y = ~((nor3_2_1_B | o32ai_2_0_B1) & (~xnor2_2_6_A));  // o21bai_2_0 : o21bai_2
    assign o221a_2_2_X = (or2_2_8_X | nor2_2_32_B)
                         & ((~(counter_output[3] | nor2_2_32_B)) | (~((counter_output[0] & counter_output[3]) | counter_output[2])))
                         & o221a_2_2_C1;  // o221a_2_2 : o221a_2
    assign o31a_2_0_X = (o31a_2_0_A1 | o31a_2_0_A2 | (~(counter_output[2] | nor3_2_1_B | nor3_2_1_C)))
                        & ((nor3_2_1_C & o32ai_2_0_B1 & nand2b_2_8_Y)
                         | ((~counter_output[2])
                         & counter_output[0])
                         | and3b_2_0_C);  // o31a_2_0 : o31a_2
    assign o31a_2_1_X = (counter_output[2] | or3_2_9_A | o31a_2_1_A3)
                        & o31a_2_1_B1;  // o31a_2_1 : o31a_2
    assign o32a_2_2_B2 = ~(or2_2_9_X & o32a_2_2_A2);  // nand2_2_28 : nand2_2
    assign o32ai_2_0_Y = ~((o31a_2_0_A1 | o31a_2_0_A2 | (counter_output[1]
                        & and2_2_7_B)) & (o32ai_2_0_B1 | counter_output[0]));  // o32ai_2_0 : o32ai_2
    assign or2_2_10_X = or2_2_10_A
                        | inv_2_7_A;  // or2_2_10 : or2_2
    assign or3_2_3_A = ~(nor2_2_8_A | or2_2_1_X);  // nor2_2_8 : nor2_2
    assign or3_2_9_X = or3_2_9_A
                       | or3_2_9_B
                       | or3_2_9_C;  // or3_2_9 : or3_2
    assign xnor2_2_14_B = ~((inv_2_12_A & o31a_2_1_B1) | or3_2_9_A);  // a21oi_2_16 : a21oi_2
    assign xnor2_2_5_B = ~(xnor2_2_4_A ^ xor2_2_4_X);  // xnor2_2_4 : xnor2_2
    assign xnor2_2_6_Y = ~(xnor2_2_6_A ^ ((and2_2_7_B & (~((~counter_output[2]) & counter_output[0])))
                        | counter_output[1]));  // xnor2_2_6 : xnor2_2
    assign xnor2_2_8_B = ((~counter_11[2]) | (~xor2_2_1_B))
                         & ((~(counter_outer[0] & counter_outer[1])) | counter_outer[2]);  // o2bb2a_2_0 : o2bb2a_2
    assign xor2_2_1_X = counter_11[2]
                        ^ xor2_2_1_B;  // xor2_2_1 : xor2_2
    assign xor2_2_3_B = ~(nor2_2_8_A | nor2_2_0_B);  // nor2_2_0 : nor2_2
    assign and3_2_4_B = ~(counter_11[3] & xnor2_2_5_B);  // nand2_2_16 : nand2_2
    assign inv_2_4_A = ~(or2_2_1_B | nor2_2_9_B);  // nor2_2_9 : nor2_2
    assign o21ai_2_4_Y = ~((inv_2_12_Y | o32a_2_2_B2) & ((counter_output[0] & counter_output[2])
                         | inv_2_14_Y
                         | o31a_2_1_A3));  // o21ai_2_4 : o21ai_2
    assign o22ai_2_0_Y = ~((counter_outer[1] | and3_2_2_B) & ((~((counter_outer[1] & counter_outer[3]) | counter_outer[2])) | ((counter_outer[1] & counter_outer[2] & counter_outer[3])
                        | or3_2_5_B)));  // o22ai_2_0 : o22ai_2
    assign o32a_2_2_X = (inv_2_12_Y | o32a_2_2_A2 | (~(counter_output[2] | o32a_2_2_B1)))
                        & (o32a_2_2_B1 | o32a_2_2_B2);  // o32a_2_2 : o32a_2
    assign or2_2_0_B = (~xor2_2_3_B)
                       & nor2_2_9_B;  // and2b_2_0 : and2b_2
    assign or3_2_5_X = (~(counter_outer[1] | and3_2_2_B))
                       | or3_2_5_B
                       | (and3_2_2_A
                       & and3_2_2_B
                       & and3_2_2_C);  // or3_2_5 : or3_2
    assign xnor2_2_8_A = ~(counter_11[3] ^ xnor2_2_5_B);  // xnor2_2_5 : xnor2_2
    assign xor2_2_20_B = ~(nand2_2_31_A & ((or3_2_9_A & or2_2_9_X)
                        | (o32a_2_2_A2 & (counter_output[0]
                        | counter_output[2]
                        | (~counter_output[1])))));  // nand2_2_31 : nand2_2
    assign xor2_2_3_A = ~((~(counter_11[1] & xor2_2_0_X)) ^ xor2_2_1_X);  // xnor2_2_0 : xnor2_2
    assign xor2_2_5_B = (xnor2_2_4_A & or3_2_5_B)
                        | (~((counter_outer[3] & xnor2_2_4_A) | or3_2_5_B));  // a21o_2_4 : a21o_2
    assign and2_2_2_A = ~(xor2_2_3_A & or2_2_0_B);  // nand2_2_1 : nand2_2
    assign and3_2_0_C = or2_2_1_X
                        & or2_2_0_B;  // and2_2_0 : and2_2
    assign nand2_2_9_Y = ~(xor2_2_3_A & inv_2_4_A);  // nand2_2_9 : nand2_2
    assign nor2_2_21_A = ~((and3_2_4_A & and3_2_4_B) | or3_2_5_X);  // a21oi_2_4 : a21oi_2
    assign nor2_2_5_A = ~(xor2_2_3_A & or3_2_3_A);  // nand2_2_6 : nand2_2
    assign or2_2_2_A = xor2_2_3_A
                       ^ xor2_2_3_B;  // xor2_2_3 : xor2_2
    assign or3_2_0_B = ~(xor2_2_3_A ^ xor2_2_3_B);  // xnor2_2_2 : xnor2_2
    assign or3_2_2_B = ~(nor2_2_4_Y | or2_2_0_B);  // nor2_2_1 : nor2_2
    assign xor2_2_2_A = (counter_11[1] & xor2_2_0_X & xor2_2_1_X)
                        | (xor2_2_3_A & xor2_2_3_B);  // a32o_2_0 : a32o_2
    assign xor2_2_2_B = ~(xnor2_2_8_A ^ xnor2_2_8_B);  // xnor2_2_8 : xnor2_2
    assign xor2_2_6_B = o22ai_2_0_Y;  // and2b_2_5 : and2b_2
    assign and3_2_1_C = ~(or2_2_1_X & or3_2_0_B);  // nand2_2_0 : nand2_2
    assign nand2_2_5_Y = ~(or3_2_0_B & or3_2_2_B);  // nand2_2_5 : nand2_2
    assign nor2_2_3_B = ~(or3_2_0_B | or3_2_2_B);  // nor2_2_10 : nor2_2
    assign or2_2_4_A = ~(xor2_2_2_A ^ xor2_2_2_B);  // xnor2_2_9 : xnor2_2
    assign or2_2_4_B = or2_2_2_A
                       | or2_2_0_B;  // or2_2_0 : or2_2
    assign or3_2_0_X = or3_2_3_A
                       | or3_2_0_B
                       | or3_2_2_B;  // or3_2_0 : or3_2
    assign or3_2_2_C = ~(or3_2_0_B | inv_2_4_A);  // nor2_2_2 : nor2_2
    assign or3_2_3_B = xor2_2_2_A
                       ^ xor2_2_2_B;  // xor2_2_2 : xor2_2
    assign or3_2_3_C = or2_2_2_A
                       | or3_2_2_B;  // or2_2_2 : or2_2
    assign xor2_2_8_A = (xor2_2_2_A & (~(xnor2_2_8_A & xor2_2_8_B)))
                        | (~(xnor2_2_8_A | xnor2_2_8_B));  // a21o_2_8 : a21o_2
    assign xor2_2_8_B = ~(nor2_2_21_A | (and3_2_4_A
                        & and3_2_4_B
                        & or3_2_5_X));  // nor2_2_21 : nor2_2
    assign and3_2_0_X = or2_2_4_A
                        & or3_2_0_B
                        & and3_2_0_C;  // and3_2_0 : and3_2
    assign and3_2_1_X = or2_2_4_A
                        & (~inv_2_4_A)
                        & and3_2_1_C;  // and3_2_1 : and3_2
    assign inv_2_0_Y = ~or3_2_3_C;  // inv_2_0 : inv_2
    assign mux2_1_4_S = ~((~and3_2_0_C) & or2_2_4_B);  // nand2b_2_0 : nand2b_2
    assign nor2_2_5_Y = ~(nor2_2_5_A | or3_2_3_B);  // nor2_2_5 : nor2_2
    assign o21a_2_3_A2 = ~(or2_2_4_A & nand2_2_5_Y);  // nand2_2_11 : nand2_2
    assign or2_2_3_X = or2_2_4_A
                       | or3_2_2_B;  // or2_2_3 : or2_2
    assign or2_2_4_X = or2_2_4_A
                       | or2_2_4_B;  // or2_2_4 : or2_2
    assign or3_2_1_B = ~(or3_2_3_B | and2_2_2_A);  // nor2_2_28 : nor2_2
    assign or3_2_1_C = ~(or3_2_3_B | or2_2_4_B);  // nor2_2_11 : nor2_2
    assign or3_2_4_B = ~(or2_2_4_A | nor2_2_3_B);  // nor2_2_12 : nor2_2
    assign or4_2_0_A = xor2_2_8_A
                       ^ xor2_2_8_B;  // xor2_2_8 : xor2_2
    assign or4_2_0_C = or3_2_3_A
                       | or3_2_2_B
                       | or3_2_2_C;  // or3_2_2 : or3_2
    assign or4_2_0_D = (or3_2_3_A | or3_2_3_C)
                       & or3_2_3_B;  // o21a_2_0 : o21a_2
    assign xor2_2_6_A = (xor2_2_8_A & xor2_2_8_B)
                        | nor2_2_21_A;  // a21o_2_5 : a21o_2
    assign a32o_2_1_B2 = ~((or3_2_3_B & nor2_2_3_B) | or4_2_0_A);  // a21oi_2_0 : a21oi_2
    assign nand2_2_3_Y = ~(or4_2_0_A & o21a_2_3_A2);  // nand2_2_3 : nand2_2
    assign o32a_2_1_B2 = ~((or2_2_4_A | or3_2_2_C | inv_2_0_Y) & or4_2_0_A);  // o31ai_2_0 : o31ai_2
    assign or2_2_5_A = xor2_2_6_A
                       ^ xor2_2_6_B;  // xor2_2_6 : xor2_2
    assign or4_2_0_B = ~(xor2_2_6_A ^ xor2_2_6_B);  // xnor2_2_10 : xnor2_2
    assign xor2_2_5_A = ~(xor2_2_6_A & o22ai_2_0_Y);  // a21oi_2_7 : a21oi_2
    assign or3_2_7_A = ~(xor2_2_5_A ^ xor2_2_5_B);  // xnor2_2_7 : xnor2_2
    assign xor2_2_5_X = xor2_2_5_A
                        ^ xor2_2_5_B;  // xor2_2_5 : xor2_2
    assign nor2_2_20_Y = ~((~(xor2_2_5_A | xor2_2_5_B)) | ((counter_outer[0] | counter_outer[1])
                         & counter_outer[2]
                         & counter_outer[3]));  // nor2_2_20 : nor2_2

    assign or4b_2_2_C = (xor2_2_5_X | (or2_2_5_A ? (or4_2_0_A ? ((or3_2_3_B & and2_2_2_A & and3_2_1_C)
                        | and3_2_0_C) : ((or3_2_3_A | o21a_2_3_A2)
                        & or2_2_3_X)) : ((or4_2_0_A | and3_2_0_X | (~(or2_2_4_A | or3_2_0_X)))
                        & ((~(nor2_2_3_B | o21a_2_3_A2)) | o32a_2_1_B2))))
                        & ((or2_2_5_A & ((or4_2_0_A & o21a_2_3_A2 & or2_2_4_X)
                        | (((or3_2_3_B | mux2_1_4_S)
                        & (or2_2_4_X | nor2_2_4_Y)) & a32o_2_1_B2)))
                         | ((or3_2_2_C | (~((or3_2_3_B | inv_2_0_Y) & or4_2_0_A)))
                         & (((or3_2_3_B | (and2_2_2_A
                        & and3_2_1_C))
                        & or2_2_4_X) | or4_2_0_A)
                         & or4_2_0_B)
                         | or3_2_7_A)
                        & nor2_2_20_Y;  // o211a_2_5 : o211a_2
    assign or4b_2_3_A = (xor2_2_5_X | ((or2_2_5_A & ((or4_2_0_A & nor2_2_5_Y)
                         | (~((or2_2_4_A & nand2_2_9_Y)
                         | or4_2_0_D
                         | or4_2_0_A))))
                        | (or4_2_0_B
                        & ((xor2_2_3_A & or4_2_0_A & or2_2_0_B)
                        | or3_2_4_B
                        | and3_2_1_X)
                        & (~((or3_2_4_B | and3_2_1_X) & or4_2_0_A)))))
                        & (~((or2_2_5_A | (or4_2_0_A ? ((nand2_2_5_Y & or3_2_4_B)
                        | (or3_2_3_C & or2_2_4_A)) : (or3_2_1_C
                       | ((or3_2_3_B | inv_2_4_A)
                       & or2_2_4_B)))) & ((or4_2_0_A & or2_2_4_B)
                         | (mux2_1_4_S ? or2_2_4_A : or3_2_4_B)
                         | or4_2_0_B) & xor2_2_5_X))
                        & nor2_2_20_Y;  // o211a_2_3 : o211a_2
    assign or4b_2_3_B = ((((~(nor2_2_5_A | or2_2_4_A)) | or4_2_0_A | and3_2_0_X)
                         & or4_2_0_B
                         & (~(or4_2_0_A & (or3_2_3_B ? or4_2_0_C : or3_2_0_X)))) | ((or2_2_5_A & ((or3_2_0_B & or2_2_3_X)
                         | (~a32o_2_1_B2)) & (~(or4_2_0_A & (~((or3_2_3_A | or3_2_3_B | or2_2_2_A) & nor2_2_5_A)))))
                        | xor2_2_5_X))
                        & nor2_2_20_Y
                        & (or3_2_7_A
                       | ((nand2_2_3_Y | or3_2_4_B)
                       & or4_2_0_B
                       & (or4_2_0_A
                       | or3_2_1_B
                       | or3_2_1_C))
                       | (~((nand2_2_3_Y & (or4_2_0_A
                       | or3_2_4_B
                       | ((or3_2_3_A | or2_2_2_A)
                       & or2_2_4_A
                       & nor2_2_5_A))) | or4_2_0_B)));  // o211a_2_2 : o211a_2
    assign or4b_2_3_C = (xor2_2_5_X | (~((or2_2_5_A | ((or4_2_0_A | and3_2_0_X | (~((or2_2_4_A & and3_2_0_C) | or3_2_0_X)))
                        & (o32a_2_1_B2 | (~(or3_2_3_B | nor2_2_3_B))))) & (or4_2_0_A
                       | or4_2_0_B
                       | or4_2_0_C
                       | or4_2_0_D))))
                        & ((or4_2_0_A & (~((or2_2_4_A | nand2_2_5_Y) & ((or3_2_3_A
                       | or3_2_3_B
                       | or3_2_3_C) | or2_2_5_A))))
                         | ((or2_2_5_A
                       | or3_2_1_B) & (~((or2_2_5_A & ((or2_2_4_A | nand2_2_9_Y)
                         & (~nor2_2_5_Y))) | or4_2_0_A)))
                         | or3_2_7_A)
                        & nor2_2_20_Y;  // o211a_2_4 : o211a_2


    wire [3:0] state;
    assign nand4_2_1_D = (state == 12); 
    assign nand4_2_2_D = (state == 5);
    assign nand4_2_3_D = (state == 9); 
    assign nand4_2_4_D = (state == 10);
    assign nand4_2_5_D = (state == 13);
    assign nand4_2_6_D = (state == 3);
    assign state[0] = or4b_2_3_A;
    assign state[1] = or4b_2_2_C;
    assign state[2] = or4b_2_3_C;
    assign state[3] = or4b_2_3_B;
    
    assign nor4_2_0_Y = (state == 0);
    assign or4_2_1_C = (state != 8);
    assign or4_2_2_C = (state != 4); 
    assign or4_2_3_C = (state != 1);
    assign or4_2_5_C = (state != 2);

    always @(posedge clk or negedge rst_n) 
        if (!rst_n) 
            or2_2_11_B <= 0;
        else if(or2_2_11_A)
            or2_2_11_B <= 1;
endmodule
