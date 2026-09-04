// Human-readable reconstruction of puzzle_readable_combined.v
//
// Recovered intent
// ----------------
// The serial input I describes an 11x11 Star Battle grid in row-major order.
// A '1' means a star. 121 input bits are accepted while enable is asserted.
//
// A valid solution has:
//   * exactly two stars in every row,
//   * exactly two stars in every column,
//   * exactly two stars in every irregular region,
//   * no two stars touching horizontally, vertically, or diagonally.
//
// In parallel, every accepted input bit is accumulated into an 8-bit linear
// recurrence over GF(2), with characteristic polynomial
//
//     x^8 + x^4 + x^3 + x^2 + 1   (0x11D)
//
// and reset seed 8'hA5.
//
// The recovered diagnostic outputs are:
//
//   underfilled row/column/region : "EMPTY SKY"
//   overfilled row/column/region  : "BIG BANG"
//   counts correct but touching   : "TWO NOT TOUCH"
//   valid puzzle                  : GF(256) output, which is
//                                   "(* TWO STARS *)" for the unique solution
//
// Timing
// ------
//  * One input cell is consumed on each rising edge with enable == 1.
//  * After the 121st cell there is one validation clock.
//  * O then presents byte 0. Subsequent rising edges advance output_count.
//  * output_count is 4 bits, so the 16-clock output frame repeats.
//  * At output_count == 15, O is 8'h00 and the GF(256) state does not advance.
//
// Important equivalence note
// --------------------------
// This is the semantic reconstruction of the intended transaction, where the
// 121-cell stream is clock-enabled normally. The synthesized counter/control
// netlist also contains a free-running phase counter that can perturb the raw
// region decoder if enable is stalled arbitrarily in the middle of a grid.
// That synthesis-specific corner behavior is intentionally not reproduced here.

module puzzle_human_readable_complete (
    input        I,
    input        clk,
    input        enable,
    input        rst_n,
    output reg   success,
    output reg [7:0] O
);

    localparam PHASE_LOAD     = 2'd0;
    localparam PHASE_VALIDATE = 2'd1;
    localparam PHASE_OUTPUT   = 2'd2;

    localparam MODE_EMPTY_SKY    = 2'd0;
    localparam MODE_BIG_BANG     = 2'd1;
    localparam MODE_TWO_NOT_TOUCH= 2'd2;
    localparam MODE_SUCCESS      = 2'd3;

    reg [1:0] phase;
    reg [1:0] output_mode;

    // Current input cell, 0..120, row-major.
    reg [6:0] cell_index;

    wire [3:0] row = cell_index / 7'd11;
    wire [3:0] col = cell_index % 7'd11;

    // Current row can be checked as soon as its final column arrives.
    reg [3:0] current_row_stars;

    // Column and region counts must survive until all 121 cells have arrived.
    reg [3:0] column_stars [0:10];
    reg [3:0] region_stars [0:10];

    // Sticky classification accumulated while rows are completed.
    reg row_underfilled;
    reg row_overfilled;

    // Sticky adjacency violation.
    reg touching_seen;

    // Last 12 accepted cells. Before the current cell is shifted in:
    //   history[0]  = left        = cell n-1
    //   history[9]  = upper-right = cell n-10
    //   history[10] = upper       = cell n-11
    //   history[11] = upper-left  = cell n-12
    reg [11:0] history;

    // GF(256)/LFSR state.
    reg [7:0] lfsr;

    // Output byte index, intentionally 4-bit and wrapping like the netlist.
    reg [3:0] output_count;

    integer scan_idx;
    integer reset_idx;

    // ---------------------------------------------------------------------
    // Irregular Star Battle regions
    // ---------------------------------------------------------------------
    // These eleven region labels were recovered from the synthesized `state`
    // decoder. The numeric labels themselves are arbitrary.
    function [3:0] region_id;
        input [6:0] pos;
        begin
            case (pos)
                13,24,35,44,46,55,56,57,105,106:
                    region_id = 4'd0;

                63,64,65,74,85,96,107,108,109:
                    region_id = 4'd1;

                5,6,16,25,26,27,28,36,47,58,
                66,67,68,69,70,71,72,77,88,99,100,110:
                    region_id = 4'd2;

                75,76,86,87,97,98:
                    region_id = 4'd3;

                8,9,19,20,31:
                    region_id = 4'd4;

                0,1,2,3,4,11,12,14,15,22,23,33,34,45:
                    region_id = 4'd5;

                37,38,39,48,59,60,61,81,82,83:
                    region_id = 4'd6;

                91,102,103,113:
                    region_id = 4'd7;

                10,21,32,40,43,49,50,51,52,53,54,62,
                84,92,93,94,95,104,114,115,116,117,118,119,120:
                    region_id = 4'd8;

                7,17,18,29,30,41,42:
                    region_id = 4'd9;

                73,78,79,80,89,90,101,111,112:
                    region_id = 4'd10;

                default:
                    region_id = 4'd0;
            endcase
        end
    endfunction

    // ---------------------------------------------------------------------
    // GF(2) recurrence
    // ---------------------------------------------------------------------
    function [7:0] lfsr_step_bit;
        input [7:0] s;
        input       bit_in;
        begin
            lfsr_step_bit = {
                s[6:0],
                bit_in ^ s[7] ^ s[5] ^ s[4] ^ s[3]
            };
        end
    endfunction

    // The output phase advances by exactly eight zero-input bit steps.
    function [7:0] lfsr_step_byte;
        input [7:0] s;
        integer j;
        reg [7:0] t;
        begin
            t = s;
            for (j = 0; j < 8; j = j + 1)
                t = lfsr_step_bit(t, 1'b0);
            lfsr_step_byte = t;
        end
    endfunction

    // XOR masks used by the successful output branch.
    function [7:0] success_mask;
        input [3:0] n;
        begin
            case (n)
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

    // Fixed diagnostic strings recovered from the output decoder.
    function [7:0] empty_sky_byte;
        input [3:0] n;
        begin
            case (n)
                0: empty_sky_byte = "E";
                1: empty_sky_byte = "M";
                2: empty_sky_byte = "P";
                3: empty_sky_byte = "T";
                4: empty_sky_byte = "Y";
                5: empty_sky_byte = " ";
                6: empty_sky_byte = "S";
                7: empty_sky_byte = "K";
                8: empty_sky_byte = "Y";
                default: empty_sky_byte = 8'h00;
            endcase
        end
    endfunction

    function [7:0] big_bang_byte;
        input [3:0] n;
        begin
            case (n)
                0: big_bang_byte = "B";
                1: big_bang_byte = "I";
                2: big_bang_byte = "G";
                3: big_bang_byte = " ";
                4: big_bang_byte = "B";
                5: big_bang_byte = "A";
                6: big_bang_byte = "N";
                7: big_bang_byte = "G";
                default: big_bang_byte = 8'h00;
            endcase
        end
    endfunction

    function [7:0] two_not_touch_byte;
        input [3:0] n;
        begin
            case (n)
                0:  two_not_touch_byte = "T";
                1:  two_not_touch_byte = "W";
                2:  two_not_touch_byte = "O";
                3:  two_not_touch_byte = " ";
                4:  two_not_touch_byte = "N";
                5:  two_not_touch_byte = "O";
                6:  two_not_touch_byte = "T";
                7:  two_not_touch_byte = " ";
                8:  two_not_touch_byte = "T";
                9:  two_not_touch_byte = "O";
                10: two_not_touch_byte = "U";
                11: two_not_touch_byte = "C";
                12: two_not_touch_byte = "H";
                default: two_not_touch_byte = 8'h00;
            endcase
        end
    endfunction

    // ---------------------------------------------------------------------
    // Current-cell checks
    // ---------------------------------------------------------------------
    wire current_star_touches_existing = I && (
        // left
        ((col != 0) && history[0]) ||

        // row above
        ((row != 0) && history[10]) ||

        // upper-right
        ((row != 0) && (col != 10) && history[9]) ||

        // upper-left
        ((row != 0) && (col != 0) && history[11])
    );

    wire [4:0] row_count_after_current = current_row_stars + (I ? 1'b1 : 1'b0);

    // At PHASE_VALIDATE all array counts already include the 121st input bit.
    reg any_column_or_region_underfilled;
    reg any_column_or_region_overfilled;

    always @* begin
        any_column_or_region_underfilled = 1'b0;
        any_column_or_region_overfilled  = 1'b0;

        for (scan_idx = 0; scan_idx < 11; scan_idx = scan_idx + 1) begin
            if (column_stars[scan_idx] < 2)
                any_column_or_region_underfilled = 1'b1;
            if (column_stars[scan_idx] > 2)
                any_column_or_region_overfilled = 1'b1;

            if (region_stars[scan_idx] < 2)
                any_column_or_region_underfilled = 1'b1;
            if (region_stars[scan_idx] > 2)
                any_column_or_region_overfilled = 1'b1;
        end
    end

    wire any_underfilled = row_underfilled || any_column_or_region_underfilled;
    wire any_overfilled  = row_overfilled  || any_column_or_region_overfilled;

    // ---------------------------------------------------------------------
    // Sequential machine
    // ---------------------------------------------------------------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            phase              <= PHASE_LOAD;
            output_mode        <= MODE_EMPTY_SKY;
            cell_index         <= 7'd0;
            current_row_stars  <= 4'd0;
            row_underfilled    <= 1'b0;
            row_overfilled     <= 1'b0;
            touching_seen      <= 1'b0;
            history            <= 12'd0;
            lfsr               <= 8'hA5;
            output_count       <= 4'd0;
            success            <= 1'b0;

            for (reset_idx = 0; reset_idx < 11; reset_idx = reset_idx + 1) begin
                column_stars[reset_idx] <= 4'd0;
                region_stars[reset_idx] <= 4'd0;
            end
        end else begin
            case (phase)
                PHASE_LOAD: begin
                    output_count <= 4'd0;
                    success      <= 1'b0;

                    if (enable) begin
                        // Record adjacency violation.
                        if (current_star_touches_existing)
                            touching_seen <= 1'b1;

                        // Count this star in its column and region.
                        if (I) begin
                            column_stars[col] <= column_stars[col] + 1'b1;
                            region_stars[region_id(cell_index)] <=
                                region_stars[region_id(cell_index)] + 1'b1;
                        end

                        // Count/check the row.
                        if (col == 10) begin
                            if (row_count_after_current < 2)
                                row_underfilled <= 1'b1;
                            if (row_count_after_current > 2)
                                row_overfilled <= 1'b1;
                            current_row_stars <= 4'd0;
                        end else if (I) begin
                            current_row_stars <= current_row_stars + 1'b1;
                        end

                        // Shift spatial history and checksum the raw input bit.
                        history <= {history[10:0], I};
                        lfsr    <= lfsr_step_bit(lfsr, I);

                        if (cell_index == 7'd120) begin
                            // One extra clock is used for final validation,
                            // matching the delayed-done structure in the netlist.
                            phase <= PHASE_VALIDATE;
                        end else begin
                            cell_index <= cell_index + 1'b1;
                        end
                    end
                end

                PHASE_VALIDATE: begin
                    output_count <= 4'd0;

                    // The original output selector gives underfill priority,
                    // then overfill, then adjacency, then success.
                    if (any_underfilled) begin
                        output_mode <= MODE_EMPTY_SKY;
                        success     <= 1'b0;
                    end else if (any_overfilled) begin
                        output_mode <= MODE_BIG_BANG;
                        success     <= 1'b0;
                    end else if (touching_seen) begin
                        output_mode <= MODE_TWO_NOT_TOUCH;
                        success     <= 1'b0;
                    end else begin
                        output_mode <= MODE_SUCCESS;
                        success     <= 1'b1;
                    end

                    phase <= PHASE_OUTPUT;
                end

                PHASE_OUTPUT: begin
                    // The raw design keeps producing 16-byte frames forever.
                    // Counts 0..14 advance the GF(256) state; count 15 is a
                    // zero-output hold cycle.
                    if (output_count != 4'd15)
                        lfsr <= lfsr_step_byte(lfsr);

                    output_count <= output_count + 1'b1;
                end

                default: begin
                    phase <= PHASE_LOAD;
                end
            endcase
        end
    end

    // ---------------------------------------------------------------------
    // Human-readable output mux
    // ---------------------------------------------------------------------
    always @* begin
        O = 8'h00;

        if (phase == PHASE_OUTPUT && output_count != 4'd15) begin
            case (output_mode)
                MODE_EMPTY_SKY:
                    O = empty_sky_byte(output_count);

                MODE_BIG_BANG:
                    O = big_bang_byte(output_count);

                MODE_TWO_NOT_TOUCH:
                    O = two_not_touch_byte(output_count);

                MODE_SUCCESS:
                    O = lfsr ^ success_mask(output_count);

                default:
                    O = 8'h00;
            endcase
        end
    end

endmodule
