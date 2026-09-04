module counter_control1 (
    input  clk,
    input  rst_n,
    input  enable,
    output [3:0] counter_11,
    output reg [3:0] output_count,
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
    output or2_2_11_A,
    output or2_2_11_B,
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


    // Recovered semantic state: only three stored variables.
    reg [3:0] cycle;
    reg [6:0] progress;

    assign counter_11 = (progress <= 7'd120) ? (progress % 7'd11) : 4'd0;

    always @(posedge clk) begin
        if (!rst_n)
            cycle <= 4'd0;
        else
            cycle <= cycle + 1'b1;
    end

    always @(posedge clk) begin
        if (!rst_n)
            progress <= 7'd0;
        else if (progress < 7'd121 && enable)
            progress <= progress + 1'b1;
        else if (progress == 7'd121)
            progress <= 7'd122;
    end

    always @(posedge clk) begin
        if (progress < 7'd122)
            output_count <= 4'd0;
        else
            output_count <= output_count + 1'b1;
    end

    // The synthesized state cone is exactly represented as a compact LUT.
    function [3:0] decode_state;
        input [6:0] p;
        input [3:0] c;
        input       en;
        reg [127:0] lut;
        begin
            case (p)
                7'd0, 7'd2, 7'd8, 7'd10: lut = 128'haa44aa44555555555555555555555555;
                7'd1, 7'd9: lut = 128'h44444444555555555555555555555555;
                7'd3, 7'd11, 7'd45, 7'd121, 7'd122: lut = 128'h55555555555555555555555555555555;
                7'd4, 7'd6, 7'd12, 7'd14: lut = 128'h55555555225522552255225522552255;
                7'd5, 7'd13: lut = 128'h00000000222222222222222222222222;
                7'd7, 7'd15: lut = 128'h55555555cccccccccccccccccccccccc;
                7'd16: lut = 128'hff44ff44aa22cc22aa22cc22aa22cc22;
                7'd17: lut = 128'heeeeeeeeaaaaccccaaaaccccaaaacccc;
                7'd18: lut = 128'hee44ee44aa22cc22aa22cc22aa22cc22;
                7'd19: lut = 128'h66666666222244442222444422224444;
                7'd20: lut = 128'h44664466444444444444444444444444;
                7'd21, 7'd29: lut = 128'hddccddccbbaaddccbbaaddccbbaaddcc;
                7'd22: lut = 128'h44664466554455445544554455445544;
                7'd23, 7'd31: lut = 128'h44444444554455445544554455445544;
                7'd24, 7'd26: lut = 128'h22002200222200222222002222220022;
                7'd25, 7'd27: lut = 128'h22222222222200002222000022220000;
                7'd28, 7'd30: lut = 128'hcc22cc22dd00dd00dd00dd00dd00dd00;
                7'd32, 7'd34: lut = 128'h88aaccaa00aa55aa00aa55aa00aa55aa;
                7'd33: lut = 128'h8888cccc000055550000555500005555;
                7'd35: lut = 128'haaaaaaaa000000000000000000000000;
                7'd36, 7'd38: lut = 128'h88008800882299228822992288229922;
                7'd37: lut = 128'h8888dddd8888dddd8888dddd8888dddd;
                7'd39: lut = 128'haaaaaaaa888888888888888888888888;
                7'd40, 7'd42: lut = 128'hccaaccaa55bb55bb55bb55bb55bb55bb;
                7'd41: lut = 128'hcccccccc555555555555555555555555;
                7'd43: lut = 128'haaaaaaaa111111111111111111111111;
                7'd44, 7'd46: lut = 128'h00000000113311331133113311331133;
                7'd47: lut = 128'h22222222111111111111111111111111;
                7'd48, 7'd50: lut = 128'haa88aa88aa88aa88aa88aa88aa88aa88;
                7'd49, 7'd51, 7'd52, 7'd54: lut = 128'haaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa;
                7'd53: lut = 128'h88aa88aa88aa88aa88aa88aa88aa88aa;
                7'd55: lut = 128'h00220022002200220022002200220022;
                7'd56, 7'd58, 7'd60, 7'd62: lut = 128'haa882200aa882200aa882200aa882200;
                7'd57, 7'd61: lut = 128'h88880000888800008888000088880000;
                7'd59: lut = 128'h88888888888888888888888888888888;
                7'd63: lut = 128'h11111111111111111111111111111111;
                7'd64, 7'd65, 7'd66, 7'd67, 7'd68, 7'd69, 7'd70, 7'd71: lut = 128'h22222233222222112222221122222211;
                7'd72, 7'd88, 7'd90: lut = 128'haa22dd22aaffccffaaffccffaaffccff;
                7'd73, 7'd89: lut = 128'haaaaddddaaaaccccaaaaccccaaaacccc;
                7'd74: lut = 128'h11111188111111881111118811111188;
                7'd75: lut = 128'h333333aa333333883333338833333388;
                7'd76, 7'd78, 7'd79: lut = 128'hdd33ddaadd33dd88dd33dd88dd33dd88;
                7'd77: lut = 128'hcc22ccaacc22cc88cc22cc88cc22cc88;
                7'd80, 7'd82: lut = 128'h8800990088dd88dd88dd88dd88dd88dd;
                7'd81, 7'd83: lut = 128'h88889999888888888888888888888888;
                7'd84, 7'd86: lut = 128'haaaabbaa33aa33aa33aa33aa33aa33aa;
                7'd85: lut = 128'h88889999111111111111111111111111;
                7'd87, 7'd95: lut = 128'haaaabbbb333333333333333333333333;
                7'd91: lut = 128'haaaa9999aaaa8888aaaa8888aaaa8888;
                7'd92, 7'd94: lut = 128'haaaaffaa33aa77aa33aa77aa33aa77aa;
                7'd93: lut = 128'haaaadddd333355553333555533335555;
                7'd96, 7'd98: lut = 128'h2233aaaa332233113322331133223311;
                7'd97: lut = 128'h3333bbaa222222332222223322222233;
                7'd99: lut = 128'h33333322222222332222223322222233;
                7'd100, 7'd102: lut = 128'h003388aa992299119922991199229911;
                7'd101: lut = 128'h11119988dddddddddddddddddddddddd;
                7'd103: lut = 128'h99999988999999999999999999999999;
                7'd104, 7'd106, 7'd112, 7'd114, 7'd120: lut = 128'h00aa00aaaaeeaaddaaeeaaddaaeeaadd;
                7'd105, 7'd113, 7'd115, 7'd116, 7'd117, 7'd118, 7'd119: lut = 128'h00000000aaaaaa99aaaaaa99aaaaaa99;
                7'd107: lut = 128'h11111122000000330000003300000033;
                7'd108, 7'd110: lut = 128'h2211aaaabb00bb11bb00bb11bb00bb11;
                7'd109: lut = 128'h111199aaddddddffddddddffddddddff;
                7'd111: lut = 128'hddddddeeddddddffddddddffddddddff;
                default: lut = {32{4'h5}};
            endcase
            decode_state = lut >> ({en, c} * 4);
        end
    endfunction

    wire [3:0] state = decode_state(progress, cycle, enable);

    assign or2_2_11_A = (progress >= 7'd121);
    assign or2_2_11_B = (progress >= 7'd122);
    assign nand4_2_1_D = (state == 4'd12);
    assign nand4_2_2_D = (state == 4'd5);
    assign nand4_2_3_D = (state == 4'd9);
    assign nand4_2_4_D = (state == 4'd10);
    assign nand4_2_5_D = (state == 4'd13);
    assign nand4_2_6_D = (state == 4'd3);
    assign nor4_2_0_Y = (state == 4'd0);
    assign or4_2_1_C = (state != 4'd8);
    assign or4_2_2_C = (state != 4'd4);
    assign or4_2_3_C = (state != 4'd1);
    assign or4_2_5_C = (state != 4'd2);

    assign a22o_2_13_A1 = ~((output_count[0] & output_count[2]) | output_count[3] | (output_count[2:1] == 1) | (~(output_count[0] | output_count[1])));
    assign a22o_2_21_B2 = ~((((output_count[3:2] != 0)) & (output_count[1:0] == 1)) | (output_count[2] ? output_count[3] : output_count[1]));
    assign a22o_2_22_X = (output_count[0] & ((output_count[3:2] == 0))) | ((output_count[1:0] != 1) & output_count[2]);
    assign a22o_2_7_A1 = ~((output_count[0] & (output_count[2:1] == 1)) | output_count[3]);
    assign a31o_2_15_X = (output_count[2] & (~output_count[3]) & (output_count[1:0] != 3)) | (~((output_count[0] & (~output_count[3])) | (((output_count[2:1] != 0)) & (output_count[1:0] != 3))));
    assign strobe = (progress != 7'd121);
    assign and2_2_8_X = (output_count[1:0] != 3) && (output_count[3:2] != 3);
    assign and2b_2_16_X = (~((~((progress >= 7'd121))) & enable)) & (((progress >= 7'd122)) & ((output_count != 15)));
    assign and2b_2_19_X = (~((output_count[3:2] != 0))) & (output_count[1:0] != 2);
    assign and3_2_17_X = output_count[0] & (~output_count[3]) & (output_count[2:1] == 1);
    assign and3_2_25_C = (output_count != 15);
    assign and3b_2_1_X = (output_count[3:1] == 3);
    assign and3b_2_2_X = (~output_count[3]) & (output_count[1:0] == 1) & output_count[2];
    assign conb_1_2_HI = 1'b1;
    assign conb_1_3_LO = 1'b0;
    assign conb_1_4_LO = 1'b0;
    assign conb_1_5_LO = 1'b0;
    assign inv_2_7_A = (progress < 7'd121) & enable;
    assign inv_2_7_Y = ~((~((progress >= 7'd121))) & enable);
    assign nor2_2_23_Y = ~(output_count[3] | (output_count[1:0] != 3));
    assign nor2_2_39_Y = ~((((progress >= 7'd122)) & ((output_count != 15))) | ((~((progress >= 7'd121))) & enable));
    assign nor2_2_46_A = ~((~((~((progress >= 7'd121))) & enable)) & (((progress >= 7'd122)) & ((output_count != 15))));
    assign o211a_2_10_X = ((~output_count[0]) | output_count[2]) & (~output_count[3]) & output_count[1];
    assign o211a_2_9_X = (output_count[1] | ((output_count[3:2] != 0))) & (~(output_count[0] & ((output_count[3:2] != 0)))) & (~((output_count[1] | output_count[2]) & output_count[3]));
    assign o21a_2_13_X = ((~output_count[0]) | (output_count[2:0] == 7)) & (~output_count[3]);
    assign o21a_2_15_X = (output_count[1] | (~(output_count[0] & ((output_count[3:2] != 0))))) & (~((output_count[1] | output_count[2]) & output_count[3]));
    assign o21ai_2_4_Y = ~(((~(~(output_count[2] & (output_count[1:0] == 2)))) | (~(((output_count[2:1] != 0)) & (~(output_count[3] ^ (output_count[0] & output_count[1] & output_count[2])))))) & ((output_count[0] & output_count[2]) | (~output_count[3]) | (output_count[1:0] == 2)));
    assign o21bai_2_0_Y = ~(((output_count[1:0] == 0) | ((output_count[3:2] != 2))) & (~((~(output_count[1:0] == 0)) & (~((~output_count[0]) & output_count[2])) & ((output_count[1:0] != 3) && (output_count[3] == 0)))));
    assign o221a_2_2_X = (((output_count[3:2] != 0)) | (output_count[1:0] == 1)) & ((~(output_count[3] | (output_count[1:0] == 1))) | (~((output_count[0] & output_count[3]) | output_count[2]))) & (output_count[1:0] != 2);
    assign o22a_2_2_X = (output_count[3] | (output_count[1:0] != 3)) & ((output_count[3:2] != 3) | (output_count[1:0] == 0));
    assign o31a_2_0_X = ((output_count[2:1] == 2) | (~(((output_count[1:0] == 3) & ((output_count[3:2] != 2)) & (output_count[3:2] != 1)) | ((output_count[1:0] != 3) && (output_count[3] == 0)))) | (~(output_count[2] | (output_count[1:0] == 0) | (output_count[1:0] == 3)))) & (((output_count[1:0] == 3) & ((output_count[3:2] != 2)) & (output_count[3:2] != 1)) | ((~output_count[2]) & output_count[0]) | ((output_count[1:0] != 3) && (output_count[3] == 0)));
    assign o31a_2_1_X = (output_count[2] | (~(output_count[0] | (~output_count[3]))) | (output_count[1:0] == 2)) & (~(output_count[1] & output_count[3]));
    assign o31a_2_2_X = ((output_count[2:0] == 7) | ((~output_count[1]) & output_count[0]) | (~(output_count[0] | output_count[2] | (~output_count[1])))) & (~output_count[3]);
    assign o32a_2_2_X = ((~(~(output_count[2] & (output_count[1:0] == 2)))) | (~(output_count[3] ^ (output_count[0] & output_count[1] & output_count[2]))) | (~(output_count[2] | ((~((output_count[1:0] == 0))) & (output_count[1:0] != 3))))) & (((~((output_count[1:0] == 0))) & (output_count[1:0] != 3)) | (~(((output_count[2:1] != 0)) & (~(output_count[3] ^ (output_count[0] & output_count[1] & output_count[2]))))));
    assign o32ai_2_0_Y = ~(((output_count[2:1] == 2) | (~(((output_count[1:0] == 3) & ((output_count[3:2] != 2)) & (output_count[3:2] != 1)) | ((output_count[1:0] != 3) && (output_count[3] == 0)))) | (output_count[1] & (~((~output_count[0]) & output_count[2])))) & (((output_count[3:2] != 2)) | output_count[0]));
    assign or2_2_10_X = (((progress >= 7'd122)) & ((output_count != 15))) | ((~((progress >= 7'd121))) & enable);
    assign or2_2_9_X = (output_count[2:1] != 0);
    assign or3_2_10_A = (output_count[0] & (~(output_count[1] | output_count[3]))) | ((output_count != 8));
    assign or3_2_11_A = (output_count[0] & output_count[2] & (~(output_count[1] | output_count[3]))) | (~(output_count[0] | output_count[1] | output_count[2]));
    assign or3_2_14_A = (output_count == 3);
    assign or3_2_15_A = (output_count[1] & (~((output_count[0] & output_count[1]) | output_count[2] | output_count[3]))) | ((output_count != 8)) | ((output_count == 7));
    assign or3_2_16_A = (output_count[1] | output_count[2]) & ((~((output_count[0] & output_count[1]) | output_count[3])) | ((output_count == 7)));
    assign or3_2_17_A = ~((output_count[0] & output_count[1]) | output_count[2] | output_count[3]);
    assign or3_2_6_X = (~((output_count[0] & output_count[1]) | output_count[3])) | ((output_count == 7)) | ((output_count != 8));
    assign or3_2_9_X = (~(output_count[0] | (~output_count[3]))) | ((output_count[1:0] == 0)) | ((output_count[3:2] == 0));
    assign xnor2_2_14_B = ~(((~(output_count[2] & (output_count[1:0] == 2))) & (~(output_count[1] & output_count[3]))) | (~(output_count[0] | (~output_count[3]))));
    assign xnor2_2_6_Y = ~(((~(output_count[1:0] == 0)) & (~((~output_count[0]) & output_count[2])) & ((output_count[1:0] != 3) && (output_count[3] == 0))) ^ (((~((~output_count[0]) & output_count[2])) & (~((~output_count[2]) & output_count[0]))) | output_count[1]));
    assign xor2_2_20_B = ~((output_count[1:0] != 1) & (((~(output_count[0] | (~output_count[3]))) & ((output_count[2:1] != 0))) | ((~(output_count[3] ^ (output_count[0] & output_count[1] & output_count[2]))) & (output_count[0] | output_count[2] | (~output_count[1])))));

endmodule
