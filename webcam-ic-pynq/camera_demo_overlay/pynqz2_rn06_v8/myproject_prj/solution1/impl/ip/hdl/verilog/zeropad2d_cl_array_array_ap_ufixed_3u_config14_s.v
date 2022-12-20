// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module zeropad2d_cl_array_array_ap_ufixed_3u_config14_s (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        data_V_data_0_V_dout,
        data_V_data_0_V_empty_n,
        data_V_data_0_V_read,
        data_V_data_1_V_dout,
        data_V_data_1_V_empty_n,
        data_V_data_1_V_read,
        data_V_data_2_V_dout,
        data_V_data_2_V_empty_n,
        data_V_data_2_V_read,
        res_V_data_0_V_din,
        res_V_data_0_V_full_n,
        res_V_data_0_V_write,
        res_V_data_1_V_din,
        res_V_data_1_V_full_n,
        res_V_data_1_V_write,
        res_V_data_2_V_din,
        res_V_data_2_V_full_n,
        res_V_data_2_V_write
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
input  [7:0] data_V_data_0_V_dout;
input   data_V_data_0_V_empty_n;
output   data_V_data_0_V_read;
input  [7:0] data_V_data_1_V_dout;
input   data_V_data_1_V_empty_n;
output   data_V_data_1_V_read;
input  [7:0] data_V_data_2_V_dout;
input   data_V_data_2_V_empty_n;
output   data_V_data_2_V_read;
output  [7:0] res_V_data_0_V_din;
input   res_V_data_0_V_full_n;
output   res_V_data_0_V_write;
output  [7:0] res_V_data_1_V_din;
input   res_V_data_1_V_full_n;
output   res_V_data_1_V_write;
output  [7:0] res_V_data_2_V_din;
input   res_V_data_2_V_full_n;
output   res_V_data_2_V_write;

reg ap_done;
reg ap_idle;
reg start_write;
reg data_V_data_0_V_read;
reg data_V_data_1_V_read;
reg data_V_data_2_V_read;
reg res_V_data_0_V_write;
reg res_V_data_1_V_write;
reg res_V_data_2_V_write;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    data_V_data_0_V_blk_n;
wire    ap_CS_fsm_state3;
wire   [0:0] icmp_ln65_fu_105_p2;
reg    data_V_data_1_V_blk_n;
reg    data_V_data_2_V_blk_n;
reg    res_V_data_0_V_blk_n;
reg    res_V_data_1_V_blk_n;
reg    res_V_data_2_V_blk_n;
wire   [5:0] i_fu_99_p2;
reg   [5:0] i_reg_135;
wire    ap_CS_fsm_state2;
wire   [5:0] j_fu_111_p2;
wire    io_acc_block_signal_op26;
wire    io_acc_block_signal_op30;
reg    ap_block_state3;
reg   [5:0] i1_0_reg_71;
reg    ap_block_state1;
reg   [5:0] j3_0_reg_82;
wire   [0:0] icmp_ln61_fu_93_p2;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 3'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln61_fu_93_p2 == 1'd1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i1_0_reg_71 <= i_reg_135;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        i1_0_reg_71 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        j3_0_reg_82 <= j_fu_111_p2;
    end else if (((icmp_ln61_fu_93_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j3_0_reg_82 <= 6'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_135 <= i_fu_99_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln61_fu_93_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        data_V_data_0_V_blk_n = data_V_data_0_V_empty_n;
    end else begin
        data_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        data_V_data_0_V_read = 1'b1;
    end else begin
        data_V_data_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        data_V_data_1_V_blk_n = data_V_data_1_V_empty_n;
    end else begin
        data_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        data_V_data_1_V_read = 1'b1;
    end else begin
        data_V_data_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        data_V_data_2_V_blk_n = data_V_data_2_V_empty_n;
    end else begin
        data_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        data_V_data_2_V_read = 1'b1;
    end else begin
        data_V_data_2_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln61_fu_93_p2 == 1'd1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        res_V_data_0_V_blk_n = res_V_data_0_V_full_n;
    end else begin
        res_V_data_0_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        res_V_data_0_V_write = 1'b1;
    end else begin
        res_V_data_0_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        res_V_data_1_V_blk_n = res_V_data_1_V_full_n;
    end else begin
        res_V_data_1_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        res_V_data_1_V_write = 1'b1;
    end else begin
        res_V_data_1_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        res_V_data_2_V_blk_n = res_V_data_2_V_full_n;
    end else begin
        res_V_data_2_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        res_V_data_2_V_write = 1'b1;
    end else begin
        res_V_data_2_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln61_fu_93_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else if ((~(((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0))) & (icmp_ln65_fu_105_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state3 = (((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op30 == 1'b0)) | ((icmp_ln65_fu_105_p2 == 1'd0) & (io_acc_block_signal_op26 == 1'b0)));
end

assign ap_ready = internal_ap_ready;

assign i_fu_99_p2 = (i1_0_reg_71 + 6'd1);

assign icmp_ln61_fu_93_p2 = ((i1_0_reg_71 == 6'd32) ? 1'b1 : 1'b0);

assign icmp_ln65_fu_105_p2 = ((j3_0_reg_82 == 6'd32) ? 1'b1 : 1'b0);

assign io_acc_block_signal_op26 = (data_V_data_2_V_empty_n & data_V_data_1_V_empty_n & data_V_data_0_V_empty_n);

assign io_acc_block_signal_op30 = (res_V_data_2_V_full_n & res_V_data_1_V_full_n & res_V_data_0_V_full_n);

assign j_fu_111_p2 = (j3_0_reg_82 + 6'd1);

assign res_V_data_0_V_din = data_V_data_0_V_dout;

assign res_V_data_1_V_din = data_V_data_1_V_dout;

assign res_V_data_2_V_din = data_V_data_2_V_dout;

assign start_out = real_start;

endmodule //zeropad2d_cl_array_array_ap_ufixed_3u_config14_s