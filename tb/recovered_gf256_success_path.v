// Recovered GF(256) / LFSR portion of the puzzle.
// This is the successful-output path extracted from puzzle_readable_combined.v.
// It is intentionally semantic rather than a drop-in replacement for the whole puzzle.
module recovered_gf256_success_path (
    input        clk,
    input        rst_n,
    input        I,
    input        input_step,    // one accepted input bit
    input        output_step,   // advance to the next output byte
    input  [3:0] output_count,
    output [7:0] O
);

    reg [7:0] lfsr;

    // Characteristic polynomial:
    //     p(x) = x^8 + x^4 + x^3 + x^2 + 1 = 0x11D
    // One input step is the recovered one-bit recurrence.
    function [7:0] step_bit;
        input [7:0] s;
        input       bit_in;
        begin
            step_bit = {
                s[6:0],
                bit_in ^ s[7] ^ s[5] ^ s[4] ^ s[3]
            };
        end
    endfunction

    // The synthesized post-input transition is exactly eight zero-input
    // bit steps, i.e. M^8 for the one-bit transition matrix M.
    function [7:0] step_byte;
        input [7:0] s;
        integer k;
        reg [7:0] t;
        begin
            t = s;
            for (k = 0; k < 8; k = k + 1)
                t = step_bit(t, 1'b0);
            step_byte = t;
        end
    endfunction

    function [7:0] output_mask;
        input [3:0] count;
        begin
            case (count)
                4'd0:  output_mask = 8'h4D;
                4'd1:  output_mask = 8'hAD;
                4'd2:  output_mask = 8'hFB;
                4'd3:  output_mask = 8'h83;
                4'd4:  output_mask = 8'h13;
                4'd5:  output_mask = 8'h79;
                4'd6:  output_mask = 8'h1C;
                4'd7:  output_mask = 8'hB5;
                4'd8:  output_mask = 8'h79;
                4'd9:  output_mask = 8'h63;
                4'd10: output_mask = 8'hC7;
                4'd11: output_mask = 8'h68;
                4'd12: output_mask = 8'h93;
                4'd13: output_mask = 8'hF5;
                4'd14: output_mask = 8'h8F;
                default: output_mask = 8'h00;
            endcase
        end
    endfunction

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            lfsr <= 8'hA5;
        else if (input_step)
            lfsr <= step_bit(lfsr, I);
        else if (output_step)
            lfsr <= step_byte(lfsr);
    end

    assign O = (output_count == 4'd15)
             ? 8'h00
             : (lfsr ^ output_mask(output_count));

    // For final lfsr == 8'h65 at the start of output_count 0,
    // the 15 output bytes are exactly:
    //     "(* TWO STARS *)"
endmodule
