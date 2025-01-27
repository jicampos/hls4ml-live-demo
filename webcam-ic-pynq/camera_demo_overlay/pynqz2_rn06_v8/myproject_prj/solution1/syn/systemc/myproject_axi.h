// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _myproject_axi_HH_
#define _myproject_axi_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Loop_1_proc225.h"
#include "myproject.h"
#include "Block_myproject_axi_exit52_proc.h"
#include "Loop_2_proc.h"
#include "fifo_w8_d3072_A.h"
#include "fifo_w1_d2_A.h"
#include "fifo_w8_d10_A.h"
#include "fifo_w8_d2_A.h"
#include "start_for_myproject_U0.h"
#include "start_for_Block_myproject_axi_exit52_proc_U0.h"

namespace ap_rtl {

struct myproject_axi : public sc_module {
    // Port declarations 10
    sc_in< sc_lv<32> > in_r_TDATA;
    sc_in< sc_lv<1> > in_r_TLAST;
    sc_out< sc_lv<32> > out_r_TDATA;
    sc_out< sc_lv<1> > out_r_TLAST;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > in_r_TVALID;
    sc_out< sc_logic > in_r_TREADY;
    sc_out< sc_logic > out_r_TVALID;
    sc_in< sc_logic > out_r_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    myproject_axi(sc_module_name name);
    SC_HAS_PROCESS(myproject_axi);

    ~myproject_axi();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    Loop_1_proc225* Loop_1_proc225_U0;
    myproject* myproject_U0;
    Block_myproject_axi_exit52_proc* Block_myproject_axi_exit52_proc_U0;
    Loop_2_proc* Loop_2_proc_U0;
    fifo_w8_d3072_A* in_local_V_data_0_V_U;
    fifo_w8_d3072_A* in_local_V_data_1_V_U;
    fifo_w8_d3072_A* in_local_V_data_2_V_U;
    fifo_w1_d2_A* is_last_0_i_loc_channel_U;
    fifo_w8_d10_A* out_local_V_data_0_V_U;
    fifo_w8_d10_A* out_local_V_data_1_V_U;
    fifo_w8_d10_A* out_local_V_data_2_V_U;
    fifo_w8_d10_A* out_local_V_data_3_V_U;
    fifo_w8_d10_A* out_local_V_data_4_V_U;
    fifo_w8_d10_A* out_local_V_data_5_V_U;
    fifo_w8_d10_A* out_local_V_data_6_V_U;
    fifo_w8_d10_A* out_local_V_data_7_V_U;
    fifo_w8_d10_A* out_local_V_data_8_V_U;
    fifo_w8_d10_A* out_local_V_data_9_V_U;
    fifo_w8_d2_A* tmp_data_V_0_U;
    fifo_w8_d2_A* tmp_data_V_1_U;
    fifo_w8_d2_A* tmp_data_V_2_U;
    fifo_w8_d2_A* tmp_data_V_3_U;
    fifo_w8_d2_A* tmp_data_V_4_U;
    fifo_w8_d2_A* tmp_data_V_5_U;
    fifo_w8_d2_A* tmp_data_V_6_U;
    fifo_w8_d2_A* tmp_data_V_7_U;
    fifo_w8_d2_A* tmp_data_V_8_U;
    fifo_w8_d2_A* tmp_data_V_9_U;
    start_for_myproject_U0* start_for_myproject_U0_U;
    start_for_Block_myproject_axi_exit52_proc_U0* start_for_Block_myproject_axi_exit52_proc_U0_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > Loop_1_proc225_U0_ap_start;
    sc_signal< sc_logic > Loop_1_proc225_U0_ap_done;
    sc_signal< sc_logic > Loop_1_proc225_U0_ap_continue;
    sc_signal< sc_logic > Loop_1_proc225_U0_ap_idle;
    sc_signal< sc_logic > Loop_1_proc225_U0_ap_ready;
    sc_signal< sc_logic > Loop_1_proc225_U0_start_out;
    sc_signal< sc_logic > Loop_1_proc225_U0_start_write;
    sc_signal< sc_lv<8> > Loop_1_proc225_U0_in_local_V_data_0_V_din;
    sc_signal< sc_logic > Loop_1_proc225_U0_in_local_V_data_0_V_write;
    sc_signal< sc_lv<8> > Loop_1_proc225_U0_in_local_V_data_1_V_din;
    sc_signal< sc_logic > Loop_1_proc225_U0_in_local_V_data_1_V_write;
    sc_signal< sc_lv<8> > Loop_1_proc225_U0_in_local_V_data_2_V_din;
    sc_signal< sc_logic > Loop_1_proc225_U0_in_local_V_data_2_V_write;
    sc_signal< sc_logic > Loop_1_proc225_U0_in_r_TREADY;
    sc_signal< sc_lv<1> > Loop_1_proc225_U0_ap_return;
    sc_signal< sc_logic > ap_channel_done_is_last_0_i_loc_channel;
    sc_signal< sc_logic > is_last_0_i_loc_channel_full_n;
    sc_signal< sc_logic > myproject_U0_ap_start;
    sc_signal< sc_logic > myproject_U0_start_out;
    sc_signal< sc_logic > myproject_U0_start_write;
    sc_signal< sc_logic > myproject_U0_input_1_V_data_0_V_read;
    sc_signal< sc_logic > myproject_U0_input_1_V_data_1_V_read;
    sc_signal< sc_logic > myproject_U0_input_1_V_data_2_V_read;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_0_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_0_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_1_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_1_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_2_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_2_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_3_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_3_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_4_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_4_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_5_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_5_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_6_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_6_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_7_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_7_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_8_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_8_V_write;
    sc_signal< sc_lv<8> > myproject_U0_layer12_out_V_data_9_V_din;
    sc_signal< sc_logic > myproject_U0_layer12_out_V_data_9_V_write;
    sc_signal< sc_logic > myproject_U0_ap_done;
    sc_signal< sc_logic > myproject_U0_ap_ready;
    sc_signal< sc_logic > myproject_U0_ap_idle;
    sc_signal< sc_logic > myproject_U0_ap_continue;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_ap_start;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_ap_done;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_ap_continue;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_ap_idle;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_ap_ready;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_0_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_1_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_2_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_3_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_4_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_5_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_6_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_7_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_8_V_read;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_out_local_V_data_9_V_read;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_0;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_0_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_1;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_1_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_2;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_2_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_3;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_3_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_4;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_4_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_5;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_5_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_6;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_6_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_7;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_7_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_8;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_8_ap_vld;
    sc_signal< sc_lv<8> > Block_myproject_axi_exit52_proc_U0_tmp_data_V_9;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_tmp_data_V_9_ap_vld;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_9;
    sc_signal< sc_logic > tmp_data_V_9_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_9;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_9;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_8;
    sc_signal< sc_logic > tmp_data_V_8_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_8;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_8;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_7;
    sc_signal< sc_logic > tmp_data_V_7_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_7;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_7;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_6;
    sc_signal< sc_logic > tmp_data_V_6_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_6;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_6;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_5;
    sc_signal< sc_logic > tmp_data_V_5_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_5;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_5;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_4;
    sc_signal< sc_logic > tmp_data_V_4_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_4;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_4;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_3;
    sc_signal< sc_logic > tmp_data_V_3_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_3;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_3;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_2;
    sc_signal< sc_logic > tmp_data_V_2_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_2;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_2;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_1;
    sc_signal< sc_logic > tmp_data_V_1_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_1;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_1;
    sc_signal< sc_logic > ap_channel_done_tmp_data_V_0;
    sc_signal< sc_logic > tmp_data_V_0_full_n;
    sc_signal< sc_logic > ap_sync_reg_channel_write_tmp_data_V_0;
    sc_signal< sc_logic > ap_sync_channel_write_tmp_data_V_0;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_start;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_done;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_continue;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_idle;
    sc_signal< sc_logic > Loop_2_proc_U0_ap_ready;
    sc_signal< sc_lv<32> > Loop_2_proc_U0_out_r_TDATA;
    sc_signal< sc_logic > Loop_2_proc_U0_out_r_TVALID;
    sc_signal< sc_lv<1> > Loop_2_proc_U0_out_r_TLAST;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > in_local_V_data_0_V_full_n;
    sc_signal< sc_lv<8> > in_local_V_data_0_V_dout;
    sc_signal< sc_logic > in_local_V_data_0_V_empty_n;
    sc_signal< sc_logic > in_local_V_data_1_V_full_n;
    sc_signal< sc_lv<8> > in_local_V_data_1_V_dout;
    sc_signal< sc_logic > in_local_V_data_1_V_empty_n;
    sc_signal< sc_logic > in_local_V_data_2_V_full_n;
    sc_signal< sc_lv<8> > in_local_V_data_2_V_dout;
    sc_signal< sc_logic > in_local_V_data_2_V_empty_n;
    sc_signal< sc_lv<1> > is_last_0_i_loc_channel_dout;
    sc_signal< sc_logic > is_last_0_i_loc_channel_empty_n;
    sc_signal< sc_logic > out_local_V_data_0_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_0_V_dout;
    sc_signal< sc_logic > out_local_V_data_0_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_1_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_1_V_dout;
    sc_signal< sc_logic > out_local_V_data_1_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_2_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_2_V_dout;
    sc_signal< sc_logic > out_local_V_data_2_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_3_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_3_V_dout;
    sc_signal< sc_logic > out_local_V_data_3_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_4_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_4_V_dout;
    sc_signal< sc_logic > out_local_V_data_4_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_5_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_5_V_dout;
    sc_signal< sc_logic > out_local_V_data_5_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_6_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_6_V_dout;
    sc_signal< sc_logic > out_local_V_data_6_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_7_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_7_V_dout;
    sc_signal< sc_logic > out_local_V_data_7_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_8_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_8_V_dout;
    sc_signal< sc_logic > out_local_V_data_8_V_empty_n;
    sc_signal< sc_logic > out_local_V_data_9_V_full_n;
    sc_signal< sc_lv<8> > out_local_V_data_9_V_dout;
    sc_signal< sc_logic > out_local_V_data_9_V_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_0_dout;
    sc_signal< sc_logic > tmp_data_V_0_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_1_dout;
    sc_signal< sc_logic > tmp_data_V_1_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_2_dout;
    sc_signal< sc_logic > tmp_data_V_2_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_3_dout;
    sc_signal< sc_logic > tmp_data_V_3_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_4_dout;
    sc_signal< sc_logic > tmp_data_V_4_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_5_dout;
    sc_signal< sc_logic > tmp_data_V_5_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_6_dout;
    sc_signal< sc_logic > tmp_data_V_6_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_7_dout;
    sc_signal< sc_logic > tmp_data_V_7_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_8_dout;
    sc_signal< sc_logic > tmp_data_V_8_empty_n;
    sc_signal< sc_lv<8> > tmp_data_V_9_dout;
    sc_signal< sc_logic > tmp_data_V_9_empty_n;
    sc_signal< sc_lv<1> > start_for_myproject_U0_din;
    sc_signal< sc_logic > start_for_myproject_U0_full_n;
    sc_signal< sc_lv<1> > start_for_myproject_U0_dout;
    sc_signal< sc_logic > start_for_myproject_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Block_myproject_axi_exit52_proc_U0_din;
    sc_signal< sc_logic > start_for_Block_myproject_axi_exit52_proc_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Block_myproject_axi_exit52_proc_U0_dout;
    sc_signal< sc_logic > start_for_Block_myproject_axi_exit52_proc_U0_empty_n;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_start_full_n;
    sc_signal< sc_logic > Block_myproject_axi_exit52_proc_U0_start_write;
    sc_signal< sc_logic > Loop_2_proc_U0_start_full_n;
    sc_signal< sc_logic > Loop_2_proc_U0_start_write;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_Block_myproject_axi_exit52_proc_U0_ap_continue();
    void thread_Block_myproject_axi_exit52_proc_U0_ap_start();
    void thread_Block_myproject_axi_exit52_proc_U0_start_full_n();
    void thread_Block_myproject_axi_exit52_proc_U0_start_write();
    void thread_Loop_1_proc225_U0_ap_continue();
    void thread_Loop_1_proc225_U0_ap_start();
    void thread_Loop_2_proc_U0_ap_continue();
    void thread_Loop_2_proc_U0_ap_start();
    void thread_Loop_2_proc_U0_start_full_n();
    void thread_Loop_2_proc_U0_start_write();
    void thread_ap_channel_done_is_last_0_i_loc_channel();
    void thread_ap_channel_done_tmp_data_V_0();
    void thread_ap_channel_done_tmp_data_V_1();
    void thread_ap_channel_done_tmp_data_V_2();
    void thread_ap_channel_done_tmp_data_V_3();
    void thread_ap_channel_done_tmp_data_V_4();
    void thread_ap_channel_done_tmp_data_V_5();
    void thread_ap_channel_done_tmp_data_V_6();
    void thread_ap_channel_done_tmp_data_V_7();
    void thread_ap_channel_done_tmp_data_V_8();
    void thread_ap_channel_done_tmp_data_V_9();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_channel_write_tmp_data_V_0();
    void thread_ap_sync_channel_write_tmp_data_V_1();
    void thread_ap_sync_channel_write_tmp_data_V_2();
    void thread_ap_sync_channel_write_tmp_data_V_3();
    void thread_ap_sync_channel_write_tmp_data_V_4();
    void thread_ap_sync_channel_write_tmp_data_V_5();
    void thread_ap_sync_channel_write_tmp_data_V_6();
    void thread_ap_sync_channel_write_tmp_data_V_7();
    void thread_ap_sync_channel_write_tmp_data_V_8();
    void thread_ap_sync_channel_write_tmp_data_V_9();
    void thread_ap_sync_continue();
    void thread_in_r_TREADY();
    void thread_myproject_U0_ap_continue();
    void thread_myproject_U0_ap_start();
    void thread_out_r_TDATA();
    void thread_out_r_TLAST();
    void thread_out_r_TVALID();
    void thread_start_for_Block_myproject_axi_exit52_proc_U0_din();
    void thread_start_for_myproject_U0_din();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
