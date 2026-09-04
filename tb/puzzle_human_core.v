// Human-readable semantic core recovered from puzzle_readable_combined.v.
//
// Meaning of the 121 serial input bits:
//   11x11 two-star Star Battle grid, row-major.
//
// success requires:
//   * exactly 2 stars in every row,
//   * exactly 2 stars in every column,
//   * exactly 2 stars in every irregular region,
//   * no two stars touch horizontally, vertically, or diagonally.
//
// The accepted 121-bit grid is simultaneously accumulated by an 8-bit
// GF(2) recurrence with polynomial x^8+x^4+x^3+x^2+1 (0x11D).
//
// This file reconstructs the semantic success path.  The original netlist
// has additional failure-output selection logic which is intentionally not
// reproduced here.

module puzzle_human_core (
    input        I,
    input        clk,
    input        enable,
    input        rst_n,
    output reg   success,
    output [7:0] O
);

    // progress 0..120 = input cells, 121 = validate, 122 = output phase.
    reg [6:0] progress;

    wire [3:0] row = progress / 11;
    wire [3:0] col = progress % 11;

    // Counts saturate at 3: 0,1,2,3 means 0,1,2,>=3 stars.
    reg [1:0] row_count;
    reg [1:0] col_count    [0:10];
    reg [1:0] region_count [0:10];

    // Last 12 accepted input bits. Before accepting the current cell:
    // history[0]  = left         (n-1)
    // history[9]  = upper-right  (n-10)
    // history[10] = upper        (n-11)
    // history[11] = upper-left   (n-12)
    reg [11:0] history;

    reg invalid;

    reg [7:0] lfsr;
    reg [3:0] output_count;

    integer k;

    function [1:0] sat_inc;
        input [1:0] x;
        input       add;
        begin
            if (!add)
                sat_inc = x;
            else if (x == 2'd3)
                sat_inc = 2'd3;
            else
                sat_inc = x + 1'b1;
        end
    endfunction

    // Region number recovered from the synthesized 4-bit `state` decoder.
    // Arbitrary original state labels have been remapped to 0..10.
    function [3:0] region_id;
        input [6:0] pos;
        begin
            case (pos)
                // original state 0
                13,24,35,44,46,55,56,57,105,106:
                    region_id = 0;

                // original state 1
                63,64,65,74,85,96,107,108,109:
                    region_id = 1;

                // original state 2
                5,6,16,25,26,27,28,36,47,58,66,67,68,69,70,71,72,77,88,99,100,110:
                    region_id = 2;

                // original state 3
                75,76,86,87,97,98:
                    region_id = 3;

                // original state 4
                8,9,19,20,31:
                    region_id = 4;

                // original state 5
                0,1,2,3,4,11,12,14,15,22,23,33,34,45:
                    region_id = 5;

                // original state 8
                37,38,39,48,59,60,61,81,82,83:
                    region_id = 6;

                // original state 9
                91,102,103,113:
                    region_id = 7;

                // original state 10
                10,21,32,40,43,49,50,51,52,53,54,62,84,92,93,94,95,104,114,115,116,117,118,119,120:
                    region_id = 8;

                // original state 12
                7,17,18,29,30,41,42:
                    region_id = 9;

                // original state 13
                73,78,79,80,89,90,101,111,112:
                    region_id = 10;

                default:
                    region_id = 0;
            endcase
        end
    endfunction

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

    function [7:0] step_byte;
        input [7:0] s;
        integer j;
        reg [7:0] t;
        begin
            t = s;
            for (j = 0; j < 8; j = j + 1)
                t = step_bit(t, 1'b0);
            step_byte = t;
        end
    endfunction

    function [7:0] output_mask;
        input [3:0] n;
        begin
            case (n)
                0:  output_mask = 8'h4D;
                1:  output_mask = 8'hAD;
                2:  output_mask = 8'hFB;
                3:  output_mask = 8'h83;
                4:  output_mask = 8'h13;
                5:  output_mask = 8'h79;
                6:  output_mask = 8'h1C;
                7:  output_mask = 8'hB5;
                8:  output_mask = 8'h79;
                9:  output_mask = 8'h63;
                10: output_mask = 8'hC7;
                11: output_mask = 8'h68;
                12: output_mask = 8'h93;
                13: output_mask = 8'hF5;
                14: output_mask = 8'h8F;
                default: output_mask = 8'h00;
            endcase
        end
    endfunction

    wire touching = I && (
        ((col != 0)  && history[0])  ||
        ((row != 0)  && history[10]) ||
        ((row != 0) && (col != 10) && history[9]) ||
        ((row != 0) && (col != 0)  && history[11])
    );

    wire [1:0] current_row_count = sat_inc(row_count, I);

    // Check the final accumulated column/region counts one cycle after the
    // 121st input bit has been accepted, matching the original success timing.
    reg all_columns_two;
    reg all_regions_two;
    always @* begin
        all_columns_two = 1'b1;
        all_regions_two = 1'b1;
        for (k = 0; k < 11; k = k + 1) begin
            if (col_count[k] != 2)
                all_columns_two = 1'b0;
            if (region_count[k] != 2)
                all_regions_two = 1'b0;
        end
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            progress     <= 0;
            row_count    <= 0;
            history      <= 0;
            invalid      <= 0;
            success      <= 0;
            lfsr         <= 8'hA5;
            output_count <= 0;

            for (k = 0; k < 11; k = k + 1) begin
                col_count[k]    <= 0;
                region_count[k] <= 0;
            end
        end else begin
            if (progress < 121) begin
                output_count <= 0;

                if (enable) begin
                    // Reject touching stars.
                    if (touching)
                        invalid <= 1'b1;

                    // Accumulate the current row/column/region.
                    col_count[col] <= sat_inc(col_count[col], I);
                    region_count[region_id(progress)] <= sat_inc(region_count[region_id(progress)], I);

                    // At the final column, require exactly two stars in this row.
                    if (col == 10) begin
                        if (current_row_count != 2)
                            invalid <= 1'b1;
                        row_count <= 0;
                    end else begin
                        row_count <= current_row_count;
                    end

                    history <= {history[10:0], I};
                    lfsr <= step_bit(lfsr, I);
                    progress <= progress + 1'b1;
                end
            end else if (progress == 121) begin
                // By this cycle all counts include the final input cell.
                success <= !invalid && all_columns_two && all_regions_two;
                progress <= 122;
                output_count <= 0;
            end else begin
                // Successful output path: one GF(256) byte advance per byte.
                if (output_count < 15) begin
                    output_count <= output_count + 1'b1;
                    lfsr <= step_byte(lfsr);
                end
            end
        end
    end

    assign O = (success && progress >= 122 && output_count < 15)
             ? (lfsr ^ output_mask(output_count))
             : 8'h00;

endmodule
