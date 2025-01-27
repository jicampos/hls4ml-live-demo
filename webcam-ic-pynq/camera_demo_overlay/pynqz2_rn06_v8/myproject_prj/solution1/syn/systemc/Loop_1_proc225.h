// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _Loop_1_proc225_HH_
#define _Loop_1_proc225_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "myproject_axi_fpext_32ns_64_2_1.h"

namespace ap_rtl {

struct Loop_1_proc225 : public sc_module {
    // Port declarations 24
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_out< sc_lv<8> > in_local_V_data_0_V_din;
    sc_in< sc_logic > in_local_V_data_0_V_full_n;
    sc_out< sc_logic > in_local_V_data_0_V_write;
    sc_out< sc_lv<8> > in_local_V_data_1_V_din;
    sc_in< sc_logic > in_local_V_data_1_V_full_n;
    sc_out< sc_logic > in_local_V_data_1_V_write;
    sc_out< sc_lv<8> > in_local_V_data_2_V_din;
    sc_in< sc_logic > in_local_V_data_2_V_full_n;
    sc_out< sc_logic > in_local_V_data_2_V_write;
    sc_in< sc_lv<1> > in_r_TLAST;
    sc_in< sc_logic > in_r_TVALID;
    sc_out< sc_logic > in_r_TREADY;
    sc_in< sc_lv<32> > in_r_TDATA;
    sc_out< sc_lv<1> > ap_return;


    // Module declarations
    Loop_1_proc225(sc_module_name name);
    SC_HAS_PROCESS(Loop_1_proc225);

    ~Loop_1_proc225();

    sc_trace_file* mVcdFile;

    myproject_axi_fpext_32ns_64_2_1<1,2,32,64>* myproject_axi_fpext_32ns_64_2_1_U1;
    regslice_both<1>* regslice_both_in_last_V_U;
    regslice_both<32>* regslice_both_in_data_U;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_logic > in_local_V_data_0_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln26_fu_200_p2;
    sc_signal< sc_logic > in_local_V_data_1_V_blk_n;
    sc_signal< sc_logic > in_local_V_data_2_V_blk_n;
    sc_signal< sc_logic > in_r_TDATA_blk_n;
    sc_signal< sc_lv<11> > i_fu_194_p2;
    sc_signal< sc_lv<11> > i_reg_695;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > j_fu_206_p2;
    sc_signal< sc_lv<2> > j_reg_703;
    sc_signal< sc_logic > io_acc_block_signal_op40;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<32> > in_data_tmp_reg_708;
    sc_signal< sc_lv<54> > man_V_2_fu_311_p3;
    sc_signal< sc_lv<54> > man_V_2_reg_714;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > icmp_ln571_fu_319_p2;
    sc_signal< sc_lv<1> > icmp_ln571_reg_719;
    sc_signal< sc_lv<1> > icmp_ln581_fu_331_p2;
    sc_signal< sc_lv<1> > icmp_ln581_reg_725;
    sc_signal< sc_lv<12> > add_ln581_fu_337_p2;
    sc_signal< sc_lv<12> > add_ln581_reg_732;
    sc_signal< sc_lv<12> > sub_ln581_fu_343_p2;
    sc_signal< sc_lv<12> > sub_ln581_reg_737;
    sc_signal< sc_lv<1> > icmp_ln582_fu_349_p2;
    sc_signal< sc_lv<1> > icmp_ln582_reg_742;
    sc_signal< sc_lv<8> > trunc_ln583_fu_355_p1;
    sc_signal< sc_lv<8> > trunc_ln583_reg_748;
    sc_signal< sc_lv<8> > select_ln603_fu_491_p3;
    sc_signal< sc_lv<8> > select_ln603_reg_754;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > or_ln603_fu_499_p2;
    sc_signal< sc_lv<1> > or_ln603_reg_759;
    sc_signal< sc_lv<8> > select_ln603_1_fu_505_p3;
    sc_signal< sc_lv<8> > select_ln603_1_reg_764;
    sc_signal< sc_lv<1> > or_ln603_2_fu_518_p2;
    sc_signal< sc_lv<1> > or_ln603_2_reg_769;
    sc_signal< sc_lv<11> > i_0_i_reg_151;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<2> > j_0_i_reg_162;
    sc_signal< sc_lv<1> > icmp_ln23_fu_188_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > is_last_1_fu_122;
    sc_signal< sc_lv<1> > is_last_fu_221_p2;
    sc_signal< sc_lv<24> > ctype_data_V_fu_126;
    sc_signal< sc_lv<24> > ctype_data_V_1_fu_668_p2;
    sc_signal< sc_lv<64> > grp_fu_174_p1;
    sc_signal< sc_lv<64> > ireg_V_fu_259_p1;
    sc_signal< sc_lv<11> > exp_tmp_V_fu_275_p4;
    sc_signal< sc_lv<52> > trunc_ln565_fu_289_p1;
    sc_signal< sc_lv<53> > tmp_s_fu_293_p3;
    sc_signal< sc_lv<54> > p_Result_9_fu_301_p1;
    sc_signal< sc_lv<1> > p_Result_s_fu_267_p3;
    sc_signal< sc_lv<54> > man_V_1_fu_305_p2;
    sc_signal< sc_lv<63> > trunc_ln556_fu_263_p1;
    sc_signal< sc_lv<12> > zext_ln461_fu_285_p1;
    sc_signal< sc_lv<12> > F2_fu_325_p2;
    sc_signal< sc_lv<12> > sh_amt_fu_359_p3;
    sc_signal< sc_lv<9> > tmp_139_fu_378_p4;
    sc_signal< sc_lv<32> > sext_ln581_fu_364_p1;
    sc_signal< sc_lv<54> > zext_ln586_fu_394_p1;
    sc_signal< sc_lv<54> > ashr_ln586_fu_398_p2;
    sc_signal< sc_lv<32> > bitcast_ln696_fu_407_p1;
    sc_signal< sc_lv<1> > tmp_140_fu_410_p3;
    sc_signal< sc_lv<8> > trunc_ln581_fu_368_p1;
    sc_signal< sc_lv<1> > xor_ln571_fu_431_p2;
    sc_signal< sc_lv<1> > or_ln582_fu_441_p2;
    sc_signal< sc_lv<1> > xor_ln582_fu_445_p2;
    sc_signal< sc_lv<1> > icmp_ln585_fu_372_p2;
    sc_signal< sc_lv<1> > and_ln581_fu_451_p2;
    sc_signal< sc_lv<1> > xor_ln585_fu_456_p2;
    sc_signal< sc_lv<1> > or_ln581_fu_474_p2;
    sc_signal< sc_lv<1> > icmp_ln603_fu_388_p2;
    sc_signal< sc_lv<1> > xor_ln581_fu_479_p2;
    sc_signal< sc_lv<1> > and_ln603_fu_485_p2;
    sc_signal< sc_lv<8> > shl_ln604_fu_426_p2;
    sc_signal< sc_lv<8> > trunc_ln586_fu_403_p1;
    sc_signal< sc_lv<1> > and_ln585_1_fu_468_p2;
    sc_signal< sc_lv<1> > and_ln585_fu_462_p2;
    sc_signal< sc_lv<8> > select_ln588_fu_418_p3;
    sc_signal< sc_lv<1> > and_ln582_fu_436_p2;
    sc_signal< sc_lv<1> > or_ln603_1_fu_512_p2;
    sc_signal< sc_lv<8> > select_ln603_2_fu_524_p3;
    sc_signal< sc_lv<5> > shl_ln_fu_536_p3;
    sc_signal< sc_lv<5> > empty_367_fu_544_p2;
    sc_signal< sc_lv<8> > select_ln603_3_fu_529_p3;
    sc_signal< sc_lv<1> > icmp_ln356_fu_550_p2;
    sc_signal< sc_lv<5> > sub_ln356_fu_560_p2;
    sc_signal< sc_lv<5> > select_ln356_fu_566_p3;
    sc_signal< sc_lv<5> > select_ln356_2_fu_582_p3;
    sc_signal< sc_lv<5> > select_ln356_1_fu_574_p3;
    sc_signal< sc_lv<5> > sub_ln356_1_fu_590_p2;
    sc_signal< sc_lv<24> > zext_ln356_fu_556_p1;
    sc_signal< sc_lv<24> > zext_ln356_1_fu_596_p1;
    sc_signal< sc_lv<24> > shl_ln356_fu_608_p2;
    sc_signal< sc_lv<24> > tmp_141_fu_614_p4;
    sc_signal< sc_lv<24> > zext_ln356_2_fu_600_p1;
    sc_signal< sc_lv<24> > zext_ln356_3_fu_604_p1;
    sc_signal< sc_lv<24> > shl_ln356_1_fu_632_p2;
    sc_signal< sc_lv<24> > lshr_ln356_fu_638_p2;
    sc_signal< sc_lv<24> > and_ln356_fu_644_p2;
    sc_signal< sc_lv<24> > xor_ln356_fu_650_p2;
    sc_signal< sc_lv<24> > select_ln356_3_fu_624_p3;
    sc_signal< sc_lv<24> > and_ln356_1_fu_656_p2;
    sc_signal< sc_lv<24> > and_ln356_2_fu_662_p2;
    sc_signal< sc_logic > grp_fu_174_ce;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > regslice_both_in_last_V_U_apdone_blk;
    sc_signal< sc_lv<1> > in_r_TLAST_int;
    sc_signal< sc_logic > in_r_TVALID_int;
    sc_signal< sc_logic > in_r_TREADY_int;
    sc_signal< sc_logic > regslice_both_in_last_V_U_ack_in;
    sc_signal< sc_logic > regslice_both_in_data_U_apdone_blk;
    sc_signal< sc_lv<32> > in_r_TDATA_int;
    sc_signal< sc_logic > regslice_both_in_data_U_vld_out;
    sc_signal< sc_logic > regslice_both_in_data_U_ack_in;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<11> ap_const_lv11_400;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<54> ap_const_lv54_0;
    static const sc_lv<63> ap_const_lv63_0;
    static const sc_lv<12> ap_const_lv12_433;
    static const sc_lv<12> ap_const_lv12_8;
    static const sc_lv<12> ap_const_lv12_FF8;
    static const sc_lv<12> ap_const_lv12_36;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<5> ap_const_lv5_7;
    static const sc_lv<5> ap_const_lv5_17;
    static const sc_lv<24> ap_const_lv24_FFFFFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_F2_fu_325_p2();
    void thread_add_ln581_fu_337_p2();
    void thread_and_ln356_1_fu_656_p2();
    void thread_and_ln356_2_fu_662_p2();
    void thread_and_ln356_fu_644_p2();
    void thread_and_ln581_fu_451_p2();
    void thread_and_ln582_fu_436_p2();
    void thread_and_ln585_1_fu_468_p2();
    void thread_and_ln585_fu_462_p2();
    void thread_and_ln603_fu_485_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_block_state1();
    void thread_ap_block_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ashr_ln586_fu_398_p2();
    void thread_bitcast_ln696_fu_407_p1();
    void thread_ctype_data_V_1_fu_668_p2();
    void thread_empty_367_fu_544_p2();
    void thread_exp_tmp_V_fu_275_p4();
    void thread_grp_fu_174_ce();
    void thread_i_fu_194_p2();
    void thread_icmp_ln23_fu_188_p2();
    void thread_icmp_ln26_fu_200_p2();
    void thread_icmp_ln356_fu_550_p2();
    void thread_icmp_ln571_fu_319_p2();
    void thread_icmp_ln581_fu_331_p2();
    void thread_icmp_ln582_fu_349_p2();
    void thread_icmp_ln585_fu_372_p2();
    void thread_icmp_ln603_fu_388_p2();
    void thread_in_local_V_data_0_V_blk_n();
    void thread_in_local_V_data_0_V_din();
    void thread_in_local_V_data_0_V_write();
    void thread_in_local_V_data_1_V_blk_n();
    void thread_in_local_V_data_1_V_din();
    void thread_in_local_V_data_1_V_write();
    void thread_in_local_V_data_2_V_blk_n();
    void thread_in_local_V_data_2_V_din();
    void thread_in_local_V_data_2_V_write();
    void thread_in_r_TDATA_blk_n();
    void thread_in_r_TREADY();
    void thread_in_r_TREADY_int();
    void thread_internal_ap_ready();
    void thread_io_acc_block_signal_op40();
    void thread_ireg_V_fu_259_p1();
    void thread_is_last_fu_221_p2();
    void thread_j_fu_206_p2();
    void thread_lshr_ln356_fu_638_p2();
    void thread_man_V_1_fu_305_p2();
    void thread_man_V_2_fu_311_p3();
    void thread_or_ln581_fu_474_p2();
    void thread_or_ln582_fu_441_p2();
    void thread_or_ln603_1_fu_512_p2();
    void thread_or_ln603_2_fu_518_p2();
    void thread_or_ln603_fu_499_p2();
    void thread_p_Result_9_fu_301_p1();
    void thread_p_Result_s_fu_267_p3();
    void thread_real_start();
    void thread_select_ln356_1_fu_574_p3();
    void thread_select_ln356_2_fu_582_p3();
    void thread_select_ln356_3_fu_624_p3();
    void thread_select_ln356_fu_566_p3();
    void thread_select_ln588_fu_418_p3();
    void thread_select_ln603_1_fu_505_p3();
    void thread_select_ln603_2_fu_524_p3();
    void thread_select_ln603_3_fu_529_p3();
    void thread_select_ln603_fu_491_p3();
    void thread_sext_ln581_fu_364_p1();
    void thread_sh_amt_fu_359_p3();
    void thread_shl_ln356_1_fu_632_p2();
    void thread_shl_ln356_fu_608_p2();
    void thread_shl_ln604_fu_426_p2();
    void thread_shl_ln_fu_536_p3();
    void thread_start_out();
    void thread_start_write();
    void thread_sub_ln356_1_fu_590_p2();
    void thread_sub_ln356_fu_560_p2();
    void thread_sub_ln581_fu_343_p2();
    void thread_tmp_139_fu_378_p4();
    void thread_tmp_140_fu_410_p3();
    void thread_tmp_141_fu_614_p4();
    void thread_tmp_s_fu_293_p3();
    void thread_trunc_ln556_fu_263_p1();
    void thread_trunc_ln565_fu_289_p1();
    void thread_trunc_ln581_fu_368_p1();
    void thread_trunc_ln583_fu_355_p1();
    void thread_trunc_ln586_fu_403_p1();
    void thread_xor_ln356_fu_650_p2();
    void thread_xor_ln571_fu_431_p2();
    void thread_xor_ln581_fu_479_p2();
    void thread_xor_ln582_fu_445_p2();
    void thread_xor_ln585_fu_456_p2();
    void thread_zext_ln356_1_fu_596_p1();
    void thread_zext_ln356_2_fu_600_p1();
    void thread_zext_ln356_3_fu_604_p1();
    void thread_zext_ln356_fu_556_p1();
    void thread_zext_ln461_fu_285_p1();
    void thread_zext_ln586_fu_394_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
