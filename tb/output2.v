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
    
    output xnor2_2_14_B,
    output xnor2_2_6_Y,
    output xor2_2_20_B
);

    
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
    wire nand2_2_3_Y;
    wire nand2_2_5_Y;
    wire nand2_2_9_Y;
    wire nor2_2_0_B;
    wire nor2_2_20_Y;
    wire nor2_2_21_A;
    wire nor2_2_24_Y;
    wire nor2_2_3_B;
    wire nor2_2_4_Y;
    wire nor2_2_5_A;
    wire nor2_2_5_Y;
    wire nor2_2_8_A;
    wire nor2_2_9_B;
    wire o21a_2_15_A2;
    wire o21a_2_3_A2;
    wire o21ai_2_5_Y;
    wire o22ai_2_0_Y;
    wire o31a_2_0_A2;
    wire o31a_2_1_B1;
    wire o32a_2_1_B2;
    wire o32a_2_2_A2;
    wire o32a_2_2_B1;
    wire o32a_2_2_B2;
    wire o32ai_2_0_B1;
    wire or2_2_10_A;
    wire or2_2_1_A;
    wire or2_2_1_B;
    wire or2_2_1_X;
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

    reg [3:0] counter;
    reg [3:0] counter_outer;
    reg [3:0] counter_output;
    assign  and3b_2_1_X = (counter_output[3:1] == 3);
    
    always @(posedge clk) begin
        if(!or2_2_11_B)
            counter_output <= 0;
        else
            counter_output <= counter_output + 1;
    end

    always @(posedge clk)
        if(!rst_n)
            counter <= 0;
        else
            counter <= counter + 1;


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
    assign and3_2_2_A = ~(counter_outer[0] & counter_outer[2]);  
    assign and3_2_2_C = ~(counter_outer[1] ^ counter_outer[3]);  


    assign or2_2_1_A = counter_11[0]
                       & counter_outer[0];  
    assign or2_2_1_B = ~(counter_11[0] | counter_outer[0]);  


    assign conb_1_2_HI = 1'b1;
    assign conb_1_3_LO = 1'b0;
    assign conb_1_4_LO = 1'b0;
    assign conb_1_5_LO = 1'b0;
    assign strobe      = ~((~or2_2_11_B) & or2_2_11_A);  
    assign and2_2_7_B  = ~((~counter_output[0]) & counter_output[2]);  
    assign and3_2_25_C = (counter_output != 15);  
    assign and3b_2_0_C = (counter_output[1:0] != 3) && (counter_output[3] == 0);  
    assign inv_2_14_Y   = ~counter_output[3];  
    assign inv_2_15_Y   = ~counter_output[0];  
    assign inv_2_7_A    = (~or2_2_11_A) & enable;  
    assign nor2_2_0_B   = ~(counter_11[0] & counter_outer[0]);  
    assign nor2_2_24_Y  = ~(counter_output[1] | counter_output[3]);  
    assign o21ai_2_5_Y  = ~((counter_output[1] | counter_output[2]) & counter_output[3]);  
    
    assign o31a_2_1_B1  = ~(counter_output[1] & counter_output[3]);  
    assign o32ai_2_0_B1 = (counter_output[3:2] != 2);  
    assign or2_2_8_X = (counter_output[3:2] != 0);  
    assign or2_2_9_X = (counter_output[2:1] != 0);
    assign or3_2_14_A = (counter_output == 3);
    assign or3_2_17_A = ~((counter_output[0] & counter_output[1]) | counter_output[2] | counter_output[3]);  
    assign or3_2_6_A   = ~((counter_output[0] & counter_output[1]) | counter_output[3]);  
    assign or3_2_6_B   = (counter_output == 7);
    assign or3_2_6_C   = (counter_output != 8);  
    assign or3_2_9_B   = (counter_output[1:0] == 0);  
    assign or3_2_9_C   = (counter_output[3:2] == 0);  
    assign xnor2_2_4_A = (counter_outer[2:1] != 3);  
    assign xor2_2_0_X  = counter_outer[0]
                        ^ counter_outer[1];  
    assign xor2_2_7_X = counter_outer[0]
                        ^ counter_outer[2];  
    assign a22o_2_13_A1 = ~((counter_output[0] & counter_output[2]) | counter_output[3] | (counter_output[2:1] == 1) | (~(counter_output[0] | counter_output[1])));  
    assign a22o_2_21_B2 = ~((or2_2_8_X & (counter_output[1:0] == 1)) | (counter_output[2] ? counter_output[3] : counter_output[1]));  
    assign a22o_2_22_X = (counter_output[0] & or3_2_9_C)
                         | ((counter_output[1:0] != 1) & counter_output[2]);  
    assign a22o_2_7_A1 = ~((counter_output[0] & (counter_output[2:1] == 1)) | counter_output[3]);  
    assign and2_2_8_X = (counter_output[1:0] != 3)
                        & (counter_output[3:2] != 3);  

    assign and2_2_8_X  = (counter_output[1:0] != 3) && (counter_output[3:2] != 3);

    assign and2b_2_19_X = (~or2_2_8_X)
                          & (counter_output[1:0] != 2);  
    assign and3_2_17_X = counter_output[0]
                         & inv_2_14_Y
                         & (counter_output[2:1] == 1);  
    assign and3_2_2_B = ~(counter_outer[3] & xor2_2_7_X);  
    assign and3b_2_2_X = (~counter_output[3])
                         & (counter_output[1:0] == 1)
                         & counter_output[2];  
    assign inv_2_12_A = ~(counter_output[2] & (counter_output[1:0] == 2));  
    assign inv_2_5_A = (counter_11 == 10)
                       & inv_2_7_A
                       & counter_outer[1]
                       & counter_outer[0];  
    assign inv_2_7_Y   = ~inv_2_7_A;  
    assign nor2_2_23_Y = ~(counter_output[3] | (counter_output[1:0] != 3));  
    assign nor2_2_4_Y = ~(or2_2_1_A | or2_2_1_B);  
    assign nor2_2_8_A = ~(counter_11[1] ^ xor2_2_0_X);  
    assign o211a_2_10_X = (inv_2_15_Y | counter_output[2])
                          & inv_2_14_Y
                          & counter_output[1];  
    assign o21a_2_13_X = (inv_2_15_Y | (counter_output[2:0] == 7))
                         & inv_2_14_Y;  
    assign o21a_2_15_A2 = ~(counter_output[0] & or2_2_8_X);  
    assign o22a_2_2_X = (counter_output[3] | (counter_output[1:0] != 3))
                        & ((counter_output[3:2] != 3) | (counter_output[1:0] == 0));  
    assign o31a_2_0_A2 = ~(((counter_output[1:0] == 3) & o32ai_2_0_B1 & (counter_output[3:2] != 1)) | and3b_2_0_C);  
    assign o31a_2_2_X = ((counter_output[2:0] == 7) | ((~counter_output[1])
                         & counter_output[0]) | (~(counter_output[0] | counter_output[2] | (~counter_output[1]))))
                        & inv_2_14_Y;  
    assign o32a_2_2_A2 = ~(counter_output[3] ^ (counter_output[0]
                         & counter_output[1]
                         & counter_output[2]));  
    assign o32a_2_2_B1 = (~or3_2_9_B)
                         & (counter_output[1:0] != 3);  
    assign or2_2_10_A = or2_2_11_B
                        & and3_2_25_C;  
    assign or2_2_1_X = or2_2_1_A
                       | or2_2_1_B;  
    assign or3_2_10_A = (counter_output[0] & nor2_2_24_Y)
                        | or3_2_6_C;  
    assign or3_2_11_A = (counter_output[0] & counter_output[2] & nor2_2_24_Y)
                        | (~(counter_output[0] | counter_output[1] | counter_output[2]));  
    assign or3_2_15_A = (counter_output[1] & or3_2_17_A)
                        | or3_2_6_C
                        | or3_2_6_B;  
    assign or3_2_16_A = (counter_output[1] | counter_output[2])
                        & (or3_2_6_A | or3_2_6_B);  
    assign or3_2_5_B = (counter_outer == 7);  
    assign or3_2_6_X = or3_2_6_A
                       | or3_2_6_B
                       | or3_2_6_C;  
    assign or3_2_9_A = ~(counter_output[0] | inv_2_14_Y);  
    assign xnor2_2_6_A = (~(counter_output[1:0] == 0))
                         & and2_2_7_B
                         & and3b_2_0_C;  
    assign xor2_2_1_B = ~((counter_outer[1] & xor2_2_7_X) | (~(counter_outer[1] | counter_outer[2])));  
    assign xor2_2_4_X = counter_outer[3]
                        ^ xor2_2_7_X;  
    assign a31o_2_15_X = (counter_output[2] & inv_2_14_Y & (counter_output[1:0] != 3))
                         | (~((counter_output[0] & inv_2_14_Y) | (or2_2_9_X & (counter_output[1:0] != 3))));  
    assign and2b_2_16_X = (~inv_2_7_A)
                          & or2_2_10_A;  
    assign and3_2_4_A = ~((~xnor2_2_4_A) & xor2_2_4_X);  
    assign inv_2_12_Y = ~inv_2_12_A;  
    assign nor2_2_39_Y = ~(or2_2_10_A | inv_2_7_A);  
    assign nor2_2_46_A = ~((~inv_2_7_A) & or2_2_10_A);  
    assign nor2_2_9_B = ~(nor2_2_8_A & nor2_2_0_B);  
    assign o211a_2_9_X = (counter_output[1] | or2_2_8_X)
                         & o21a_2_15_A2
                         & o21ai_2_5_Y;  
    assign o21a_2_15_X = (counter_output[1] | o21a_2_15_A2)
                         & o21ai_2_5_Y;  
    assign o21bai_2_0_Y = ~(((counter_output[1:0] == 0) | o32ai_2_0_B1) & (~xnor2_2_6_A));  
    assign o221a_2_2_X = (or2_2_8_X | (counter_output[1:0] == 1))
                         & ((~(counter_output[3] | (counter_output[1:0] == 1))) | (~((counter_output[0] & counter_output[3]) | counter_output[2])))
                         & (counter_output[1:0] != 2);  
    assign o31a_2_0_X = ((counter_output[2:1] == 2) | o31a_2_0_A2 | (~(counter_output[2] | (counter_output[1:0] == 0) | (counter_output[1:0] == 3))))
                        & (((counter_output[1:0] == 3) & o32ai_2_0_B1 & (counter_output[3:2] != 1))
                         | ((~counter_output[2])
                         & counter_output[0])
                         | and3b_2_0_C);  
    assign o31a_2_1_X = (counter_output[2] | or3_2_9_A | (counter_output[1:0] == 2))
                        & o31a_2_1_B1;  
    assign o32a_2_2_B2 = ~(or2_2_9_X & o32a_2_2_A2);  
    assign o32ai_2_0_Y = ~(((counter_output[2:1] == 2) | o31a_2_0_A2 | (counter_output[1]
                        & and2_2_7_B)) & (o32ai_2_0_B1 | counter_output[0]));  
    assign or2_2_10_X = or2_2_10_A
                        | inv_2_7_A;  
    assign or3_2_3_A = ~(nor2_2_8_A | or2_2_1_X);  
    assign or3_2_9_X = or3_2_9_A
                       | or3_2_9_B
                       | or3_2_9_C;  
    assign xnor2_2_14_B = ~((inv_2_12_A & o31a_2_1_B1) | or3_2_9_A);  
    assign xnor2_2_5_B = ~(xnor2_2_4_A ^ xor2_2_4_X);  
    assign xnor2_2_6_Y = ~(xnor2_2_6_A ^ ((and2_2_7_B & (~((~counter_output[2]) & counter_output[0])))
                        | counter_output[1]));  
    assign xnor2_2_8_B = ((~counter_11[2]) | (~xor2_2_1_B))
                         & ((~(counter_outer[0] & counter_outer[1])) | counter_outer[2]);  
    assign xor2_2_1_X = counter_11[2]
                        ^ xor2_2_1_B;  
    assign xor2_2_3_B = ~(nor2_2_8_A | nor2_2_0_B);  
    assign and3_2_4_B = ~(counter_11[3] & xnor2_2_5_B);  
    assign inv_2_4_A = ~(or2_2_1_B | nor2_2_9_B);  
    assign o21ai_2_4_Y = ~((inv_2_12_Y | o32a_2_2_B2) & ((counter_output[0] & counter_output[2])
                         | inv_2_14_Y
                         | (counter_output[1:0] == 2)));  
    assign o22ai_2_0_Y = ~((counter_outer[1] | and3_2_2_B) & ((~((counter_outer[1] & counter_outer[3]) | counter_outer[2])) | ((counter_outer[1] & counter_outer[2] & counter_outer[3])
                        | or3_2_5_B)));  
    assign o32a_2_2_X = (inv_2_12_Y | o32a_2_2_A2 | (~(counter_output[2] | o32a_2_2_B1)))
                        & (o32a_2_2_B1 | o32a_2_2_B2);  
    assign or3_2_5_X = (~(counter_outer[1] | and3_2_2_B))
                       | or3_2_5_B
                       | (and3_2_2_A
                       & and3_2_2_B
                       & and3_2_2_C);  
    assign xnor2_2_8_A = ~(counter_11[3] ^ xnor2_2_5_B);  
    assign xor2_2_20_B = ~((counter_output[1:0] != 1) & ((or3_2_9_A & or2_2_9_X)
                        | (o32a_2_2_A2 & (counter_output[0]
                        | counter_output[2]
                        | (~counter_output[1])))));  
    assign xor2_2_3_A = ~((~(counter_11[1] & xor2_2_0_X)) ^ xor2_2_1_X);  
    assign xor2_2_5_B = (xnor2_2_4_A & or3_2_5_B)
                        | (~((counter_outer[3] & xnor2_2_4_A) | or3_2_5_B));  
    assign and2_2_2_A = ~(xor2_2_3_A & counter[1]);  
    assign and3_2_0_C = or2_2_1_X
                        & counter[1];  
    assign nand2_2_9_Y = ~(xor2_2_3_A & inv_2_4_A);  
    assign nor2_2_21_A = ~((and3_2_4_A & and3_2_4_B) | or3_2_5_X);  
    assign nor2_2_5_A = ~(xor2_2_3_A & or3_2_3_A);  
    assign or3_2_0_B = ~(xor2_2_3_A ^ xor2_2_3_B);  
    assign or3_2_2_B = ~(nor2_2_4_Y | counter[1]);  
    assign xor2_2_2_A = (counter_11[1] & xor2_2_0_X & xor2_2_1_X)
                        | (xor2_2_3_A & xor2_2_3_B);  
    assign xor2_2_2_B = ~(xnor2_2_8_A ^ xnor2_2_8_B);  
    assign xor2_2_6_B = o22ai_2_0_Y;  
    assign and3_2_1_C = ~(or2_2_1_X & or3_2_0_B);  
    assign nand2_2_5_Y = ~(or3_2_0_B & or3_2_2_B);  
    assign nor2_2_3_B = ~(or3_2_0_B | or3_2_2_B);  
    assign or2_2_4_A = counter[3] && inv_2_7_A;
    assign or2_2_4_B = (counter[2:1] != 0);  
    assign or3_2_0_X = or3_2_3_A
                       | or3_2_0_B
                       | or3_2_2_B;  
    assign or3_2_2_C = ~(or3_2_0_B | inv_2_4_A);  
    assign or3_2_3_B = xor2_2_2_A
                       ^ xor2_2_2_B;  
    assign or3_2_3_C = counter[2]
                       | or3_2_2_B;  
    assign xor2_2_8_A = (xor2_2_2_A & (~(xnor2_2_8_A & xor2_2_8_B)))
                        | (~(xnor2_2_8_A | xnor2_2_8_B));  
    assign xor2_2_8_B = ~(nor2_2_21_A | (and3_2_4_A
                        & and3_2_4_B
                        & or3_2_5_X));  
    assign and3_2_0_X = or2_2_4_A
                        & or3_2_0_B
                        & and3_2_0_C;  
    assign and3_2_1_X = or2_2_4_A
                        & (~inv_2_4_A)
                        & and3_2_1_C;  
    assign inv_2_0_Y = ~or3_2_3_C;  
    assign mux2_1_4_S = ~((~and3_2_0_C) & or2_2_4_B);  
    assign nor2_2_5_Y = ~(nor2_2_5_A | or3_2_3_B);  
    assign o21a_2_3_A2 = ~(or2_2_4_A & nand2_2_5_Y);  
    assign or2_2_3_X = or2_2_4_A
                       | or3_2_2_B;  
    assign or2_2_4_X = or2_2_4_A
                       | or2_2_4_B;  
    assign or3_2_1_B = ~(or3_2_3_B | and2_2_2_A);  
    assign or3_2_1_C = ~(or3_2_3_B | or2_2_4_B);  
    assign or3_2_4_B = ~(or2_2_4_A | nor2_2_3_B);  
    assign or4_2_0_A = xor2_2_8_A
                       ^ xor2_2_8_B;  
    assign or4_2_0_C = or3_2_3_A
                       | or3_2_2_B
                       | or3_2_2_C;  
    assign or4_2_0_D = (or3_2_3_A | or3_2_3_C)
                       & or3_2_3_B;  
    assign xor2_2_6_A = (xor2_2_8_A & xor2_2_8_B)
                        | nor2_2_21_A;  
    assign a32o_2_1_B2 = ~((or3_2_3_B & nor2_2_3_B) | or4_2_0_A);  
    assign nand2_2_3_Y = ~(or4_2_0_A & o21a_2_3_A2);  
    assign o32a_2_1_B2 = ~((or2_2_4_A | or3_2_2_C | inv_2_0_Y) & or4_2_0_A);  
    assign or2_2_5_A = xor2_2_6_A
                       ^ xor2_2_6_B;  
    assign or4_2_0_B = ~(xor2_2_6_A ^ xor2_2_6_B);  
    assign xor2_2_5_A = ~(xor2_2_6_A & o22ai_2_0_Y);  
    assign or3_2_7_A = ~(xor2_2_5_A ^ xor2_2_5_B);  
    assign xor2_2_5_X = xor2_2_5_A
                        ^ xor2_2_5_B;  
    assign nor2_2_20_Y = ~((~(xor2_2_5_A | xor2_2_5_B)) | ((counter_outer[0] | counter_outer[1])
                         & counter_outer[2]
                         & counter_outer[3]));  

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
                        & nor2_2_20_Y;  
    assign or4b_2_3_A = (xor2_2_5_X | ((or2_2_5_A & ((or4_2_0_A & nor2_2_5_Y)
                         | (~((or2_2_4_A & nand2_2_9_Y)
                         | or4_2_0_D
                         | or4_2_0_A))))
                        | (or4_2_0_B
                        & ((xor2_2_3_A & or4_2_0_A & counter[1])
                        | or3_2_4_B
                        | and3_2_1_X)
                        & (~((or3_2_4_B | and3_2_1_X) & or4_2_0_A)))))
                        & (~((or2_2_5_A | (or4_2_0_A ? ((nand2_2_5_Y & or3_2_4_B)
                        | (or3_2_3_C & or2_2_4_A)) : (or3_2_1_C
                       | ((or3_2_3_B | inv_2_4_A)
                       & or2_2_4_B)))) & ((or4_2_0_A & or2_2_4_B)
                         | (mux2_1_4_S ? or2_2_4_A : or3_2_4_B)
                         | or4_2_0_B) & xor2_2_5_X))
                        & nor2_2_20_Y;  
    assign or4b_2_3_B = ((((~(nor2_2_5_A | or2_2_4_A)) | or4_2_0_A | and3_2_0_X)
                         & or4_2_0_B
                         & (~(or4_2_0_A & (or3_2_3_B ? or4_2_0_C : or3_2_0_X)))) | ((or2_2_5_A & ((or3_2_0_B & or2_2_3_X)
                         | (~a32o_2_1_B2)) & (~(or4_2_0_A & (~((or3_2_3_A | or3_2_3_B | counter[2]) & nor2_2_5_A)))))
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
                       | ((or3_2_3_A | counter[2])
                       & or2_2_4_A
                       & nor2_2_5_A))) | or4_2_0_B)));  
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
                        & nor2_2_20_Y;  


    wire [3:0] state;
    assign nand4_2_1_D = (state == 12); 
    assign nand4_2_2_D = (state == 5);
    assign nand4_2_3_D = (state == 9); 
    assign nand4_2_4_D = (state == 10);
    assign nand4_2_5_D = (state == 13);
    assign nand4_2_6_D = (state == 3);
    assign state = {or4b_2_3_B,or4b_2_3_C,or4b_2_2_C,or4b_2_3_A};
    
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
