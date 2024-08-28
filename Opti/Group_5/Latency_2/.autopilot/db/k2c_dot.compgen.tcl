# This script segment is generated automatically by AutoPilot

set id 17
set name sample_fadd_32ns_ocq
set corename simcore_fadd
set op fadd
set stage_num 9
set max_latency -1
set registered_input 1
set impl_style full_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fadd] == "ap_gen_simcore_fadd"} {
eval "ap_gen_simcore_fadd { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fadd, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fadd
set corename FAddSub
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 18
set name sample_fmul_32ns_pcA
set corename simcore_fmul
set op fmul
set stage_num 5
set max_latency -1
set registered_input 1
set impl_style max_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fmul] == "ap_gen_simcore_fmul"} {
eval "ap_gen_simcore_fmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fmul
set corename FMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 20
set name sample_mul_66ns_6qcK
set corename simcore_mul
set op mul
set stage_num 6
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 66
set in0_signed 0
set in1_width 64
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 129
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 21
set name sample_mux_864_32rcU
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 32
set din0_signed 0
set din1_width 32
set din1_signed 0
set din2_width 32
set din2_signed 0
set din3_width 32
set din3_signed 0
set din4_width 32
set din4_signed 0
set din5_width 32
set din5_signed 0
set din6_width 32
set din6_signed 0
set din7_width 32
set din7_signed 0
set din8_width 64
set din8_signed 0
set dout_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 22
set name sample_mul_60ns_6sc4
set corename simcore_mul
set op mul
set stage_num 6
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 60
set in0_signed 0
set in1_width 64
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 23
set name sample_mul_64s_60tde
set corename simcore_mul
set op mul
set stage_num 6
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 64
set in0_signed 1
set in1_width 60
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 25
set name sample_mul_mul_13udo
set corename simcore_mul
set op mul
set stage_num 3
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 13
set in0_signed 1
set in1_width 13
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 13
set exp i0*i1
set arg_lists {i0 {13 1 +} i1 {13 1 +} p {13 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 34
set hasByteEnable 0
set MemName k2c_dot_dense_13_eOg
set CoreName ap_simcore_mem
set PortList { 1 3 }
set DataWd 64
set AddrRange 5
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0000000000000000000000000000000000000000000000000000000000010100" "0000000000000000000000000000000000000000000000000000000010000000" "0000000000000000000000000000000000000000000000000000000000000001" "0000000000000000000000000000000000000000000000000000000000000001" "0000000000000000000000000000000000000000000000000000000000000001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.755
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 35
set hasByteEnable 0
set MemName k2c_dot_dense_13_fYi
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 32
set AddrRange 2580
set AddrWd 12
set impl_style block
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 36
set hasByteEnable 0
set MemName k2c_dot_dense_13_g8j
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "00111110000010110011000010110111" "10111101100000100101110101010100" "00111101100010100010110101001100" "00111101111111011111000011011000" "00111101011100110000001101111110" "10111110001110000001011111011110" "00111101110001001001000011011101" "10111110010000001000011110011010" "10111110001110001010010111001011" "00111101100010011110111010110011" "00111100101000101010111001010100" "00111110000100001011100011110010" "10111110000000001100011100101011" "00111110001000110110011101011001" "10111101110000010111001000011011" "10111101101010100111100001011010" "10111101000011000101011101101111" "10111110010000011100110100010110" "10111100110011011110001000010001" "00111101001001011111001110111101" "00111101100100010110011101110100" "10111101001101000111011001011000" "00111110000000010000111001010011" "10111101100001101100010111000010" "00111110001001011010011000101100" "00111101100110101011101001001000" "00111101101100101011110000100001" "10111110001010010101100111010001" "10111110010100101111111011011111" "00111101110010010100100010110001" "10111101001010001010010111000001" "00111100110010101110110111110101" "00111101111011011010001101011101" "10111110001100010111101101101111" "10111101100100000111100011100111" "00111101001001000011001110010111" "10111110001011111001100010100101" "00111110010111011000110000100110" "00111101110101000001001100110101" "10111110001111001101010001110111" "10111110001101010101011111110111" "00111101001101111100001010001001" "00111100011001000100110000101101" "00111110001011101100011101110101" "00111110001111111011111011101101" "10111110001110110100100000101010" "00111101101101011111111010101000" "00111101101011001011100110111011" "00111100110001010100000001101010" "10111110000101100001110100100000" "00111101111000111000011001101111" "00111110001110100111000010010110" "10111110001111010111000010100110" "10111101100111011011100110010010" "10111101010000110011010011100100" "00111101011110001011011100001100" "10111101011010111011000010001010" "10111110010110001001101000000110" "00111101101001111101001110010110" "00111110001000011110011001111010" "10111101101100101110010011100111" "00111101111110001111001001011010" "00111110010001110111011100100001" "10111110000111000010011111010010" "00111101110001100011101001110100" "10111110000000011101110010101001" "10111101101110000001110101111111" "00111110001011100010101001010110" "10111101111110101110010010011100" "10111101011110101110010101101010" "00111101111000111011001011101110" "10111101111001000000111101010010" "10111101100000011111111110100111" "10111101111001011100101110111110" "00111100111010111101110100100001" "00111110001000000011110000101111" "10111110010100101110001101100111" "00111101010100001001000101000110" "10111101101110000011000010011010" "10111101000001100001001110010010" "00111110000001101010000101110101" "10111101010000011100000111111000" "00111011100100101101101101001001" "10111101110101101011001000101110" "00111101100100111101010110111111" "10111110001011111011011001101101" "00111100101010000011000110010100" "00111101101001011111101000100011" "10111101100100000111100011010001" "00111100010101110000111010101111" "00111110000001000110001001100001" "00111110011111001100100110000110" "00111110010001000100101110110010" "00111101100000000111101100101011" "00111010101101011111001001011011" "00111110011011001101100100000001" "10111101101011000001001110010110" "10111110000110101101110001000010" "10111101011010001010111111000001" "00111100111100010110010010010011" "10111101011101111110001111110001" "10111110010111001101100011000101" "00111110000101101011101101000100" "10111101111110010000011010100101" "00111110001101110100001100011001" "00111101001011010101101001100110" "10111100101001011000010111110101" "10111110010000101000000111110100" "10111101011101100011111000001110" "10111101011101001110010010000100" "10111101001000111100010001011010" "00111100001000100111110100010111" "10111110001010111100101110111101" "10111100000111100001101001001100" "00111010110101101010011000010010" "00111101101110100100011010011110" "00111110000110000010100001010011" "00111101010010111001110100011110" "00111101111101001110101101100101" "10111110001100001100101001100011" "10111100001111111100000001010110" "00111101100001100110011100001110" "10111110000011011111001101101101" "10111101100100101111101000111101" "00111110000010001001011111101000" "10111101101011001000000011110010" "10111101100000011000111101001111" "00111101011000011110110110011011" "00111101110000110111100101110010" "10111110000110100000001101001111" "10111100100001011100111110111001" "10111101110100001000000001110100" "00111110010000101101000001010011" "10111101111000000000110010001011" "10111011101011001011010100111010" "00111101110110101100101011111110" "00111110001010011110000111111010" "00111110010111000110010001100001" "00111101100101000110101110000010" "10111110010000001111000111011110" "00111110000011010000101101110110" "10111101000110100001101110111110" "00111110010010100111010100110100" "10111101111010010000111101010001" "00111101110101001011000000011101" "10111100111011010110111011011100" "00111100101000100100011000101110" "00111011001100001000101011000010" "10111101100111001001110110110000" "00111011001101001000101111011100" "10111110000101101110110100000111" "10111101111100001110100011001110" "10111101010010010100100101101111" "00111101101101110100110100001111" "00111100010011010000100001110010" "00111110001010110001101001111011" "00111101010001101110011101011000" "00111101101110111000000010011111" "10111101110110010101100000011011" "10111101110001010111010100011101" "00111101000000110111111011011100" "10111110000000000001011001001100" "00111101000100101101111010111000" "00111101100110101000110000111000" "10111101100101000010001111111011" "00111110001111110000110110110110" "00111110000011110011111111011000" "10111101010110101100101001001000" "00111101000000100111001001101010" "10111110001110110011101011010001" "00111110001100000011001011001010" "10111101111100011010001001100011" "00111101101100011001001101111110" "00111101100011100011010110110011" "10111110000000100010010101000100" "00111101000001100011111100000101" "10111101111010010101000010100010" "00111101111111101100000100010000" "00111101000111000011110010101101" "10111101011101000111001011101100" "10111100100110100000001000110110" "10111101010101111000111110000010" "10111100111010101110011100000101" "10111011110111011110000001100100" "10111101111010111011101011101101" "10111110000000111111000110001101" "10111110001001110111001010111001" "10111101000000101000011010001001" "00111101101101001110001001000011" "00111101011111101000001111011001" "00111101100001001001011110000010" "10111110000110111100100000100010" "00111110000000011100111111001010" "10111101100001010101110011000101" "10111101111000111001111111110011" "10111101101100100000111011101101" "10111110001110001110001111111101" "10111100010010100001010000101101" "10111011100011001110100110111100" "00111101111100110101111001111011" "10111011000011011101011011000100" "00111011100010000110101110010111" "00111110001101100101000001001001" "10111110001101100110111111111011" "00111110000010111011100110100100" "10111101011000111000111000011101" "10111110001011110110011111100000" "10111110001010101011101110000100" "00111110001011100001010000110101" "10111110000111111010001111010001" "00111110010110110011110110000110" "10111011110011110010110001111000" "10111110000001000110110111110100" "10111110001101111011000110000011" "00111101100101100110000111100100" "10111101100000011100110101111101" "00111101010010011111011000111010" "00111101100110110100010110101110" "10111100100000010111110010111010" "00111101110100001001100110101100" "10111011001111011110110011100001" "10111100110001100101110111010010" "10111110001011110110000110101011" "00111101101011011110010011011000" "00111110001110001111111111010011" "00111110001000011101011110011111" "00111101111011100000101010100101" "00111110001100111100101110100100" "10111101100010000010000110010000" "00111100110111110111001000110011" "10111100100011010100100100100001" "00111101111100111000011011011111" "00111110010101100010011111001111" "10111101010001010011001101000111" "00111101100010110000001101000101" "00111101001011000011101010111101" "10111100101010111100011001011111" "10111100011110111000100101111100" "00111101000001011010010100111110" "10111101110000001110101011100110" "00111101111111110100110010111111" "00111101000100110011110100010100" "10111110000101011111000010111110" "10111110001100111111110011010100" "10111110001011001011011111101011" "10111101000111011100110000001001" "10111101100000111001100110110000" "10111110010010001001001110011110" "00111110010011000111101011100001" "10111110011000001000111001001011" "10111110000101101110010000111010" "00111110001010100000110010110110" "00111101110110010111000010011110" "00111100010100011010110011110000" "00111101001010100000000010010101" "00111110001111101001011000101111" "10111110000110000110111110110100" "10111100011011101100111000100001" "00111101111001000010101001101001" "00111110000111011001010011010001" "00111101010101100101000000110001" "10111100000010000011001101001101" "00111011110111000111101001101011" "00111110000011100101000010000011" "10111100111111110000010101011011" "10111110000000010001011001010110" "10111101110101110010111011101110" "00111110000101001010101100110100" "00111101101010001011110100101100" "00111110001010110110100111000110" "10111101100101001010101100111101" "00111010111011110110001001110101" "10111110001101101010101000110100" "10111110000001010111011011001100" "00111101011011000100110000111011" "00111110000001011000110000010100" "10111101110000000011100000011101" "10111101110101011010110001111101" "10111100100101011010100010100100" "00111101100101101011101000100111" "00111100111000101110101000100110" "10111011110100100100001000011010" "10111100011000001101000011100110" "10111110001111101001000110010011" "00111101110100111100010101001100" "00111101110000000100000011100101" "10111110000001100010110110010100" "10111110001010110101001110101100" "10111101100100111111100011001011" "10111100010111001000111101001000" "10111110000100000111110111111111" "00111110000011011110001110111111" "00111101101011010011110011110010" "10111110000011100100010110011101" "00111101111010011010110100101000" "00111101010010000111000010111110" "00111110000001000001111011000000" "10111110001101101110100010100001" "00111110001000111011000100010000" "10111110001101110000100101010000" "10111110010011000101100101110010" "00111101101010000110011010010001" "10111110000100010101010111110111" "00111101101001101011111111110001" "00111100110101001101000001010010" "00111110000010100111100011111100" "10111110000010010111101101100010" "00111110010011000101110110011000" "00111101100110101010001011010101" "00111101110101001101101101100101" "00111011101111000001101011111011" "00111101011000110110100100110000" "00111110000101101010011101111010" "10111100100001110010011101001111" "10111101100101110101100111110010" "10111110001010111101101011110001" "10111101000000101000100100001111" "00111101111110000101101010110011" "00111101100010000101000000110011" "10111110010010100011101011110010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 37
set hasByteEnable 0
set MemName k2c_dot_dense_13_hbi
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "10111110010101101101010000101001" "00111101010111100100110000001100" "10111101001101100001101111010001" "10111101001101111100111110010100" "10111011111110111111101011010111" "10111110010010000111001010011110" "10111110000101000010111110110101" "10111101010001010011110001110000" "10111101111010001100011011110100" "00111011111000011110110100000110" "00111101111010010110101111010011" "10111101101110111010000111010011" "00111110001001000000001010000011" "10111101100111110000011110111001" "10111101101110101110111010001101" "00111110010110100111100000000111" "10111110001111111000010010001010" "00111110010000000110110010001111" "00111010101010110110001101000100" "00111110001110101001011011101111" "00111101111010100100001000000100" "10111101100011110100010110111011" "00111110001001101111010011011100" "00111101010000101010100111101110" "00111101101010010100100100100100" "00111110000001101111100110101100" "00111101111101110001101111100111" "00111101100111010001101011111100" "00111101101010010001010010101111" "10111101111001111001100100000011" "10111101101111001100000011100000" "00111100101010011001100000110111" "00111110001101101111101110100100" "00111101100110101010101110110000" "00111011000110000101000010100100" "10111101110000111111000101110010" "00111101100000011010010000000000" "00111110000010101100000000010110" "10111110000100001100001111010000" "10111110001001111111010000001001" "00111101010111000100101010110000" "00111101110011100110001111011110" "00111101010100010000000110101000" "10111110010010011100100111001101" "10111101111001100110111111101110" "10111110000110000011001001011000" "00111101101000011010011110000001" "00111110000010111100100010101000" "10111101011100000111010101010110" "10111110000111001100011110000111" "00111110001100110101111110100011" "10111101110010100111000111111111" "10111110001011000100001001111000" "10111101010101010100001000000001" "10111101001011100000101110110101" "10111110001011010101011010111011" "10111110010101110111110000100010" "00111101000111101001010111001000" "10111110001011110111010011101110" "10111110001100100111110001110111" "10111101000010011101100010011100" "10111101010000000101000100010001" "00111101111101010011110011000110" "00111110000111000001101110000001" "10111110000111100000010000100010" "00111100101000000110000110010010" "10111100101011111110100001110001" "10111100000110000000111010110110" "00111110010000101011011111001001" "00111101110010101010111100000000" "00111101111001101100110111010101" "10111110010000100111011100000000" "00111101100001101110000011100010" "00111110000011001010001000110001" "00111100111101100001001010001010" "00111101110010101101011011100101" "00111110000011100111000111000101" "00111110010110000100001100111000" "10111110000110001001110000010111" "10111101110100100110011001000000" "00111101010100101001000001111000" "00111101001100110011110101100111" "10111101111011100011011100010000" "10111110010111110000011100001100" "10111110001111011011001111111000" "00111110000001100001111111101001" "00111110011011011100010110001011" "00111101101000111110100001110101" "00111110001111100010111001100101" "00111110000000010001101101010010" "00111101111000101001000000101001" "10111110000010001010100001101010" "00111100110001111101111111110000" "10111101010010101101101101000100" "10111110100010110000010000111010" "00111101110101001010000100110000" "10111100100001001010001000001111" "00111110000111000000001010011001" "10111110000110100110001110000011" "10111101001011101111100100101110" "10111110000001111000101101010100" "10111100100010000011101010001010" "00111110010001101101101101111111" "00111101101110101000100101100101" "00111100101110000010010011001111" "00111101111100001110000011100010" "10111110001000101101110100111101" "10111110001110010000011111010000" "00111101110001101101001000100011" "00111110000101111010111101011101" "10111110000001011000000011011100" "00111110000101010110110100010101" "10111101101101110101100111111111" "00111101001001011001110100111111" "00111110001100110110111011001101" "00111101100101110100011001011001" "10111101111011000001111011010100" "00111101011100110010001001100011" "00111110000100110011111100000001" "00111010111000011001101010101000" "00111101100001010111100110101111" "00111101111000000110101010111010" "10111110000011001100111001100111" "00111101110111101110010001100011" "00111101111101011001001111110110" "00111011111101010100100110110101" "00111100111100000111000000001110" "00111110010010101001111110110100" "10111110001010101100100001111010" "10111110001011010010011011000101" "10111110001001000110000000000111" "10111101011101001001111100110011" "00111110001110110001001100110100" "10111110000110100010010001101000" "00111110000110101000100110100111" "10111110000100101110111010001111" "10111110010101010011100001001000" "10111110001000110111100000111101" "00111101110100101010101011101000" "10111100110000001100101101111101" "10111101100000110101001100000100" "00111110000100111111001110011001" "10111101010101101100000100101000" "10111110001000001010101100111100" "00111110010110000101000001101000" "10111100100000101111101101101100" "00111101101101110010010001111101" "10111101100001111001111001110100" "10111110010010101011010011010101" "10111101101001101001010100111100" "10111101011111100011110001110110" "00111110000100000111001000010011" "10111101101001010101011100000000" "00111101000001010011011100010000" "00111110001011000100101111101000" "10111101100001000011101011111000" "00111110000010110000000101110101" "10111110000011011110011010101110" "10111101110010001000010000000000" "10111110000000110010111000000011" "00111100000111011101111010100101" "00111101111001101000011011111010" "10111011111000110111100100100101" "10111110000101000011100101011011" "10111101111110000110111100111010" "10111110001011110011010111000000" "10111110010100011001010000100000" "10111010111000001100101111100100" "00111101010011001000111010111010" "10111101100111010101101011101001" "00111100010100001011101111100110" "10111110000111000001011111111101" "00111101101010000000101110110000" "10111101101000010111101100010111" "10111101100110101111010111010000" "10111101100000111001101011010011" "00111101011111010110111110010001" "00111101111111001011001000111000" "10111101101100110000000010000111" "00111110001100001101110000100101" "00111101110000011111011110010111" "00111110001100100001110110110011" "10111100001101011011100100011111" "00111011111101001000011100011100" "00111011110101010110000001101100" "10111101101001011100010000011101" "10111110000001001111100011000100" "10111110001100101000100110100100" "00111110001010101111111100011000" "10111101001110100110000000100001" "00111101110011000101011011000011" "10111110000101011100101010101111" "10111110000100111000111111110000" "00111110000011010001010100111111" "00111101110000101011110100001101" "00111110001010101001100010110001" "00111101110101010111001011110110" "10111101110011110101111000000011" "00111101110001001000110101110110" "00111101101100100100101001110111" "10111110000110000000011011101110" "00111100110001000111010110110001" "10111100110111001000100000010100" "10111110001010001011111101010010" "10111110001011111011001100001100" "10111101100111001000011110011110" "10111101101110011101001100110011" "10111101011011011110011100001100" "10111110000110110001001001000111" "00111101110111010110001000000101" "00111110000110100100010011100011" "10111101111000101101101010111101" "10111110000000010110110010000111" "10111101100100110000101010100110" "00111110000011101010101101111000" "10111110001111010110011000100011" "10111101001100011101101010011001" "10111110000100101000000110000110" "00111110001111101010010001110001" "10111101001000010111101001100000" "00111110001011010100100010000000" "00111101101000111000000111100110" "00111100101011110111001001101010" "00111101000001110100001110011111" "10111110000100001111001000000011" "10111101011011001110110010101101" "00111101111000111101101110101001" "10111101110100111101000010011111" "10111101111000111011111010011001" "10111101100111110111110110110100" "10111110010110001001111000000110" "10111101001101010000101011000100" "10111101001100011110110111011000" "00111110010100101011000000000111" "10111101100000000110011011100101" "00111110000001100101011101110111" "10111011000101001111100000100010" "10111110000110010101100011101000" "00111110010101111110001100011100" "10111100111101010000000110100000" "00111110001010101000100000100010" "10111101000100101001101010110101" "00111101010101010010001011001111" "10111110010100110111011101000100" "10111100110010101111110001111111" "10111101011100000100001111111011" "00111101101100011100101100001010" "10111101001011001100111001111111" "00111110000110110111010100101100" "00111101111101011001110011101001" "00111110000111111111010101010111" "00111110000011000110001111111011" "10111100100000100110111110110010" "00111101100001001110001001111100" "10111110010011100101010101000011" "00111110001110101100100100101011" "00111101010110100011100000001111" "10111101110100110011010110100111" "00111101011011100000101011010110" "10111110001100010011010110000010" "10111101101000101100110100001100" "00111110010001010011001011110000" "00111101100100111110011011100100" "10111101110100001101101100000100" "00111101111110010010101011001101" "10111110001111101111101111100000" "00111110000000101111001000111000" "10111101011110111111111111101000" "00111101110101010111001110011111" "10111110000100101001111011010100" "10111011000100000110000110001011" "10111101101001001010101110010010" "10111101000011001001001010111000" "10111101011001100000110011001010" "10111101111110001010011001101101" "10111110001100111001011011010100" "00111110001010011110100011110001" "00111110000111001111011100110010" "00111110000111001110000111101101" "10111100001001110001000010010001" "10111101101100100001100101010010" "00111110000011001000100001011111" "00111101101010101011000110110110" "10111110000001110110110100001001" "00111110001110100010110111100101" "10111110000101001100111011111100" "10111100110111111000110000000000" "10111101011100101010101111000100" "10111110000001111100100001001000" "10111101110010111000101000010001" "00111101001111101111010000001110" "00111101000000010100010000110010" "10111101111011110100101110111100" "00111101010110111000111000011101" "00111011001010010001000010100011" "00111110001010101011010000011111" "00111100101101000011111100010010" "00111110001110010110001001100100" "10111110000010011101011011111101" "00111101110001100111000101001110" "10111110000011010110011000101110" "10111101100000010110011100001110" "00111110100000100001111100000100" "10111110001010110101011110110001" "00111100110000010001110101000010" "00111101110100100010101111110001" "10111110010100101011010111000001" "00111100100111011010111011100110" "10111101010110111100111100011011" "00111101010111100011010000111000" "00111101101101110001100001100011" "00111110001010111100011000001110" "10111101110111000101101011101111" "10111110000100101111101001101010" "10111110001110010001011010100011" "10111110010010001011100001101000" "10111110000001100111110000101010" "00111110000101100101100101000101" "00111110001000111000010010000100" "00111010010110100111111011100011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 38
set hasByteEnable 0
set MemName k2c_dot_dense_13_ibs
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "10111110000110001010001011101001" "00111101001011111100111010101100" "10111101110011110011010010110010" "10111101100000010010011101001011" "00111100001111101001100111001110" "00111110001001010010101101101111" "00111100011001111101100101111011" "10111110001000110001111000011010" "10111101100011000100111111001001" "00111100111100001000100101101001" "00111100101100111001000010001010" "00111110000111110100111100010100" "00111101000011110101010111100101" "00111011110100001110100000111100" "00111110001100010101010100001011" "10111110001101001011010110011110" "00111101010010100000001100000011" "00111101110001100110010011011001" "00111101110001101010101000010001" "10111101111100001011010010001000" "10111110001011001101011011000011" "00111110011010001011100110010010" "00111011001111111111011010111011" "10111110000100010111001001110110" "00111110001111110100100110001001" "00111101100001100100110101100101" "00111100010011010100110110011111" "10111101000101101011010101010111" "10111110001011101000111000001010" "10111110000011001111000100110001" "10111101100010000100101000010100" "00111110010110001110100011001000" "10111101111101100011010111001101" "00111110010001101011010101100110" "00111110000011101010110101101001" "10111100110010011100000100000010" "10111101100110000110101011111101" "10111110000011110010000110001000" "00111101111000111011011111010100" "00111011101110000010010010000010" "00111110000001101100110010111001" "10111110001010010110000010000010" "10111011111100010101111110011100" "00111100110011010101001110111011" "10111101111100101110010111110100" "10111110000001100100000100011010" "10111101100000101101011111001111" "10111100011110000110010101011000" "00111101111111000100011110101010" "10111101111000010010010010111010" "00111110000111000000001111100000" "00111101000101101001101111011001" "10111101111000100011100111000101" "00111101001010111111111010000000" "10111101010000001101000001110100" "00111110000101100010111000111100" "10111101011000101110000111101001" "00111011010110110101011111010011" "00111110001110011100011101001001" "00111110001011101001000001011001" "00111101101011110100110101111010" "10111101110001010001100100101111" "00111101001000011000101011011010" "00111101000010011011110001110110" "00111100011111110011110101110100" "00111110001100000010010110001011" "10111101110100000100001010100110" "10111101111100000011001111011001" "10111101000101111001010110110000" "10111110000111001001011001010100" "00111110001100100101011100110100" "00111101100011100110100100101100" "00111101010101100000100110011100" "00111101100001010011000101110101" "00111101110011000110001110001010" "00111101111110011111101101001100" "00111110001000000000100110011011" "10111110000000101110100010001011" "00111101101000010100101111011011" "10111110000101101000010001101001" "10111110010110001001011100100001" "00111110011000100101111110111010" "10111110010100000100100111100110" "10111101010100110111100101010010" "00111100001111000010111110100100" "10111101001101010101111101111010" "10111110100010100001110010011000" "10111110010100111111110010110010" "10111110000010011001011110100111" "10111101110011010101101111011110" "10111110000101000110101111101011" "10111101000001000000110010011001" "00111101011001011000010001110001" "00111110010100100001011010101110" "10111110100000111010110111111111" "10111110010010010111101101100001" "00111101000011011101001110100100" "10111101101111010100011100001111" "10111101101110110011100101111101" "10111101001011011101110011111011" "10111011110001101011101111011111" "00111110001010111100011001011110" "10111101110011001101110011011000" "00111100110100000101011000111100" "00111110001110001111000100011101" "10111101000100111011011001011000" "00111110000110101111010111011010" "10111110000101110011011001010100" "10111110000001101110001101001000" "10111101000111101110011001000111" "10111101110001001101101001011111" "10111101001010111001100100111111" "00111101111101101001101011101101" "10111110001110011101101001000000" "10111110010110110010110101010110" "10111101001101011101010000111110" "10111110001001000101101001101101" "00111110000111100111111000011110" "00111101001000110001000000010011" "10111110001100101001101100110111" "00111110000110101000000101101000" "10111101110110000001110110010000" "10111101110100110010011111010010" "00111100000010000011010110011000" "10111101101101101110000110110100" "00111110010111110110111111001000" "10111101110011110111000100011111" "00111101100111110000010010101010" "10111110000000000001011001010110" "10111100110010000101110011100100" "10111101100100011011011100111111" "10111110000100110001001011001010" "10111101000011001110110010111010" "10111100110101011001101011101001" "00111110001011001001111100000000" "10111101110001010011001001111100" "10111100011111100001100101101101" "00111100011010100101010000010000" "00111010001110100101111101010111" "00111100111010000011101010010101" "00111100111000001100001110100111" "00111110000011001110110111001101" "00111110001100101001111100110110" "00111101110010101011001101010101" "00111101011011110101111010010111" "00111110001010010011010010100111" "00111101100111110101111101111001" "00111110010000001101001011111100" "00111101100011011101101010001110" "00111101110011011011100011111111" "10111101110100011001111111101111" "10111101010011010000101100010010" "00111110010111010101000101110101" "10111110000001011100111110000111" "10111110001111011111011000111110" "10111101110011001110100101011101" "10111101100011001000110001101101" "00111101101010000110011101111101" "00111101011000011110101001011100" "00111100110110011000000110100001" "00111100101011000011101010001101" "00111110011010010100010001001100" "00111110010001001000110110110001" "00111101101101100110001111100011" "10111110000000000101110000100111" "00111101010000100011011010101110" "10111101000111011001100100011101" "10111101000001111100000011010011" "10111101100001110101101100000101" "10111101101110001011110101011011" "00111100100000110010101110000000" "10111110000010001000100000001010" "10111110001101110011111011110010" "00111101100110000011100001110100" "10111110001110110010110001011011" "10111110000011111000101100110100" "00111101000101100010100011011001" "00111101101011101100101111110100" "10111110001110110101011000000011" "00111110010001111011101000011000" "00111110011011101000101001000000" "10111101101111101000011111010100" "10111110001001000110011011100011" "10111110010010110001010110101100" "10111100010111110101101101000100" "00111110000101000110100100111010" "00111101001010101111000000100000" "10111110010100000011000001110001" "00111100010111111001001110100101" "00111101111110011110000010011000" "00111110001010101001010111101100" "00111101001101000000100110111100" "10111101110100010011111101110111" "00111110000100100000110000111000" "10111101100101010110011001110100" "10111010111101001011011110101100" "10111110001100111101011010010010" "10111110010011000011010010000001" "00111101011001010111001100101011" "00111110010100101110100110111010" "10111101110100101100100111111100" "00111101001000010111001100001010" "10111110000000011001000111111111" "10111101110100101110010100111000" "00111110000110111111001000101000" "00111101001010100100110111100000" "00111101110001100001001101011110" "00111101111101111001100100011101" "10111110001111100000111000011001" "10111110001001100010011101000100" "00111101101100001010111001001101" "10111101010000001110000111001010" "10111110000011101001010110000011" "10111110010101000000111111100101" "10111101100000011111000011000011" "10111100111110000111110011000010" "00111100001111110001010100110001" "10111101111111100010011011000101" "00111101111101001111000110100010" "00111100111011000100100001110101" "10111011000001101011111001100011" "10111101010101011101100101100100" "00111100110011001111101111011110" "10111110010110010011111100101101" "10111101011110011000101010110110" "10111110010001111001000000001010" "00111101111100110001110000111110" "10111110000100011110001011010000" "10111101111000100100101110010111" "10111101100000111101001111100010" "00111110010100001101010101011101" "10111101111001100100010101001111" "00111110001100101110001001101010" "00111110010001001100000110100101" "00111110001000111100011101110100" "00111110000111011011110010011011" "00111100001111001010101111110111" "00111100101101100010010010111001" "00111101101100101101001010001100" "10111101011101011010111001001011" "00111110001111001001010001011001" "10111101011111010000110000001000" "00111110000111010110110001011001" "10111101000000011010011010010101" "00111110010100100000100101000001" "00111110001000000010000000101111" "00111101100100011111000010011000" "00111011110111000010010111100010" "10111101001010101100011011101011" "10111110000011001101000011010000" "10111110000001010010000000110110" "00111101110111010101101100010000" "00111110000111011011111010101100" "10111001000110110010111111010001" "00111101000111001000011010101011" "10111110010000111001100000100111" "10111110000011111010100101110010" "00111101000111100111010000000111" "10111101101101101100110101101100" "10111110010101011110100011001101" "10111101100001001000101110111001" "10111101011111110000010100000001" "10111100110011111100111011000110" "00111101010111001100011010101010" "00111101111110100110101111000001" "00111100000110001011110000001101" "10111101011010011010101001111100" "00111100011100111001100100101111" "10111110000111110111110110011010" "10111101111110010110011000100010" "10111101100000101001011110101010" "10111011110001000110000111110111" "00111110000100101010011111101000" "00111101110100001011011011100010" "00111110000101111010100100000111" "00111101100100000100001100000001" "00111101011010100000101000010110" "10111110000011010011010000110110" "00111110010110000000010100001000" "10111101111001101011000000111010" "10111110000000101111110011000010" "10111101010111100100000011100101" "10111101110011101011101011110101" "00111110001001100000101110110110" "00111110010010000100110100110110" "00111011101111101100110011000101" "10111101111110111101110001010010" "00111110001000100101000000100011" "00111101011101000100110100000111" "10111001100000001010011101010010" "10111110000010101100010111000110" "00111110001011100100101011010110" "00111101100010111010110110101011" "00111101011000000101101001100110" "00111101010010000001101111011010" "10111110000100100001011000010101" "00111101100011101010001111010101" "00111110001101111010100100101111" "00111110010100000000111111011101" "10111110000000000011001110110001" "10111110000011111000001011011000" "10111110011010111001010110110100" "10111010100011101011011010000010" "10111100110100000001000101110111" "00111110000000101010110001110000" "10111110001100010111010011110111" "10111101110110101011101010001000" "10111101101000110100111011001101" "10111110000001101001110011000011" "00111100010000011101010001011111" "00111101100011101110101101000110" "00111110001010000011100100001000" "10111110010011111101011100001001" "10111110000110010000001011000010" "10111110000101100111110011001101" "10111101110111111100011101100001" "00111110010011101000111101001110" "10111101110011101101111100011111" "00111100111101011111010010110100" "10111101110110000010110101001001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 39
set hasByteEnable 0
set MemName k2c_dot_dense_13_jbC
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "10111110001110010001010010111110" "00111100000111110000111000010000" "10111101101011100101110100011100" "10111101011100110110101011000001" "10111110000111100111000110000110" "00111101100111000111101100100011" "00111101001001100110110110110110" "00111110001111010001011100011101" "10111101111010101111101111100010" "10111101111111000110111101011101" "10111110000111100011110010100001" "10111101111011000111110110011000" "10111101111111000101110011110010" "10111110000011000011010011111011" "10111100010001011010111001011001" "10111110000101000000001111001110" "10111101101111100011101111101110" "10111101100000111101101111101010" "10111100100001100010100100010001" "10111110000111010100001000010011" "10111101110000001110010101111110" "10111101010000011110000110111111" "10111100011101011101001101011000" "10111100111111101001011011001001" "00111110001100011111010010010010" "10111110010110001100001111001000" "00111101000000101111101101001001" "10111101101001011011000011111111" "00111101100101000000010011101011" "00111101011101110001110100111111" "00111100101110110111011100010101" "10111110001011010100000100010101" "10111101010001011000110000100100" "00111110010101011000111110011100" "00111101101101010100000101010000" "00111101110001101000111110001010" "00111101111110111101000101001100" "00111101100101011011001011101011" "10111100100011000011001110011101" "00111101000111110110011010000111" "10111101110100001001010110000000" "10111110000011011011001010001000" "10111101110100100011111000001100" "10111110001010011110100111110111" "00111101011011000001100010000000" "10111011111100110011010110101111" "00111100101000101011000001100001" "00111110001010010100101010110000" "00111110010001000010101000111111" "00111101010110100000111110000011" "10111110001000001001101101111001" "10111101111110011001101100011111" "00111100001010100110100001110001" "10111000010111001010001111001000" "00111100011010010001110001001001" "10111101100101010010111100101100" "00111101111000011011001101011001" "00111101001011011110111001011101" "10111101111001000011001011000001" "00111011010101010111011100101000" "10111101100001101010100100100000" "10111110001000000100000001110000" "00111101001011010100111110110101" "00111100110100011011101000111000" "00111110011011011100001000110001" "10111110010011100101011000011110" "00111101000110110001010001110111" "10111101010101101111001111100000" "10111101101110001101000100000110" "10111100101110110101000110000101" "10111110000011111011110000011100" "00111100110101111001101010011000" "10111101001111101001000110011001" "10111110000100101101111000001001" "10111110010001101100010110111011" "00111110001010100101010000110110" "00111101000101111110001110001110" "10111101000010000010011001000010" "00111101110011010001011101100010" "00111100101000110111110010010010" "00111110001111001000011101100011" "00111101110001110110110100000001" "10111110010011111000000000011000" "10111101110000100011100010010011" "10111110010001111111111100111000" "10111101111100001101111100101100" "10111110001110011001001011001000" "00111101110011100111100000101001" "10111110000001110001011110100000" "00111110010011101110010001001011" "10111101111010010001100100110000" "10111110100001000100010110100101" "00111101111100001101101100100110" "10111101110111100001001011011111" "00111100100100001101001011010001" "00111101010110000100101110110000" "10111100101010100011010100110101" "00111100011001011000001111101101" "10111110000000101000001110110111" "00111101111011001110001100011010" "00111101101100100101011100110000" "10111101101111011011010010010001" "10111101100011100100110111100011" "00111100010001011101001100000100" "00111110000111101111100000000100" "00111101110110100101110111100011" "10111110010010000001111111011010" "00111110000011010101110010100011" "00111100001100100010001110101000" "10111101010000001001100100001011" "10111101100101110011110110010101" "00111110000010000100110101111100" "10111101101010100000101000100000" "10111101111000000100110110000101" "10111101101101111110001100001110" "10111101110010001000101101010001" "00111101101111000010010011000001" "10111110000100100000111101011000" "10111110010001000011001101100110" "00111101100110000111000011000000" "00111110000111101001011101100000" "10111100110101011110001010010011" "00111110000000011101101011100000" "10111011101011101110110001101111" "10111101001100100110100001110010" "10111011110110110001110001111001" "10111110000000111000010011011111" "10111100011010100101000000110100" "10111110001111100010011111001100" "00111101101100100000011111001000" "00111110000001010110011101100000" "00111101010100001011011110000011" "00111101100111110011101010000101" "10111101010111011001000111011110" "10111110000011101000101000000010" "10111100110000101011110100111010" "10111101111000010101010011011100" "00111101111100111111110101110100" "00111110001001001010001001010110" "10111110010001101001001100001111" "10111101011111111101110111010101" "10111101001100000111111001110011" "10111100101101101101110001100110" "00111101010011100110111001111010" "10111110001111111001101101000010" "10111101110110010100100000001100" "00111101100101111011000100111101" "10111110001101111011110011110100" "10111101100000100010111111001100" "10111110001100110100101010111100" "10111101110111001001101010000100" "00111101110011100100000010010000" "00111110001101110010110111110100" "10111100010010110110011011111111" "10111101001111110111101000111100" "00111110000110001101111100111101" "10111110001000110110111000000000" "10111110010000000011000110010010" "00111110001101101001101000100101" "10111100000010110000011000110110" "10111101100001011101000000011111" "10111110001110010100110001101001" "00111101111001001110101011111110" "10111101001100001101010111100001" "10111101010010110101011101010111" "10111100000001101100100001101001" "10111101100101101011010011000101" "00111110000000010010001111011101" "00111110000100010101110111011010" "00111101110101011010110111000100" "10111110000010010000011010110100" "00111110001011000111001100010000" "00111110000100100011010111001011" "00111110000011011001100001011011" "00111110010001000101100101111001" "00111101100111001111000111111010" "10111101000110000100101000100111" "10111100001101001101001111110101" "10111110010101000010100010010010" "10111110001001101111010110010111" "00111100100110101001010000011111" "00111101101110001011010011000010" "00111101001100100101001010010011" "00111110011000000011010001111100" "10111101110000011111100100000100" "10111110001011001101100000001101" "10111110001101111110011010001000" "00111110000000000110010101101101" "00111110000000110011011110010011" "00111101011100101001111111100011" "10111110001001101111011010011101" "00111101100111110100100000011010" "10111101101011010110011010000001" "00111110000110010100010110101010" "00111110001001001110001011000001" "00111110000011010110001100000010" "10111110000010111100100000010110" "00111101111010111011010100100110" "00111011110111110110011000010100" "00111101011101011000111100101011" "10111101110001001001010111111010" "10111101100110011011101001000111" "00111100110111111100111000010000" "10111101100100000101110011100101" "00111101111011100100101111101011" "10111101010011101011001001010100" "00111110001110010001111100111000" "00111101001100101011011100110011" "10111100011100010011001010000000" "00111101100111110000111111010100" "00111110010010101010101101000010" "10111110000010110101001100110011" "10111101000101010010001111011000" "10111110000100101010100001010100" "10111101010000110010001010111000" "00111110000110110001101010101111" "00111100101101000111110100000000" "10111110000001001100111011010100" "10111110000100011100110000010100" "10111110001100111001100001111000" "10111110000000111010110010101010" "00111110010101010011001101110110" "00111110000111100001010001100111" "10111100111011101111111011001111" "10111110001010110111010010000010" "00111101110010100000110110100011" "00111101111110010000011000100101" "10111101010011100001110100110100" "00111011011100000001110001110100" "00111101110010110001010000100000" "00111110010101110101011101101000" "00111101001010000100100110000001" "00111101111110100111011100010000" "00111101101011001110111100001100" "00111110010010101101001011111010" "00111011110010100100100100010100" "00111101100011101001101001011101" "00111101111010111010110101111101" "00111110000100101000110101101100" "10111110001101101101000011110001" "10111101101011011111100110010111" "10111101100001011100010111101010" "10111110001001100011001011101001" "00111110000110110000100010010101" "10111101111000100101101110101010" "00111101101000010101000001110110" "10111110001010100101000010111001" "00111101011001101010101110001011" "10111100111111001111001100100000" "00111101111000011111010001011101" "00111110001011100110010110100010" "00111101110100010000010111111111" "00111101101110010011111000001010" "10111101000110111001100011110010" "00111110010000100111110110101101" "00111100000111010000111010111000" "10111110010010110110101111111000" "00111110001001100101001010010101" "00111100101010001100010111000010" "10111110010011001010011101111100" "10111110000110001100110011001111" "00111110010101000101101101110011" "00111101001000010001100100101001" "10111110000110111100000111100101" "00111110000000011001111010101010" "10111101110111110011110110111000" "10111100111010011001010111001111" "00111101000000000011101101000101" "10111101001101011011000111100010" "00111101100010000001001010110101" "10111110001111100111000110101101" "00111101111111010111101101110010" "00111110000000100000101001111100" "00111110000110001000110011110110" "00111101111110001000001000001100" "00111110001010111100111100111011" "00111101011100001011011000000011" "00111110010100000111011110111100" "00111100111001011011010100011110" "00111101111101000001001001100110" "00111101110110010010001000000010" "10111010001011111110010111101000" "10111101111010011111011110110100" "00111101011101011101101111000111" "10111110010000011010110010100001" "10111101010111100000000101001001" "10111101010100100100110110000111" "00111101110011001101111011111110" "10111101011000101000100001101001" "00111101111010101010000101001111" "00111110000001110100001011010111" "00111110000100000111000101111001" "10111101110000100100110100100101" "00111110010001010110110101010101" "00111101001010100101010111010110" "00111100010101111101111110110100" "00111101110100010111000100001101" "10111101000001000111001110111111" "00111101111100010001101110010111" "00111110000110000111111101011100" "10111110000001100101111000110001" "00111100010111010110011000001110" "00111110000100001001101010011011" "10111110001100011110011111101000" "00111101011100110110011000010111" "00111101101011111111000111110111" "10111100001000111000100011000010" "00111100100011100011111111010100" "00111101011100001101111111110011" "10111100001000110010110100110101" "00111110001101111101100011111011" "00111101000110001110000100001011" "10111110001110101111001000010110" "10111101100001001010010000011001" "00111101100110011001110111100011" "00111101101110011110011000001110" "10111101110011101101010000001111" "10111101000110111100010100110101" "10111110001110010010101110111001" "00111110010110010001111000100000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 40
set hasByteEnable 0
set MemName k2c_dot_dense_13_kbM
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "10111101101011100010001000011001" "00111110000010001010101000100000" "00111110001001010100110010101001" "10111101101101110011101111110110" "10111110001000100101110101111100" "10111100101000101011011101111011" "00111100010011010100001101001111" "00111101010111111111101010111001" "00111101110101111010101000000010" "10111100100010010110001101000110" "10111101000001000001100010011110" "00111110010000110100110001000110" "10111101110101001110011000111011" "10111110000100011000000100011101" "00111101000000000100101100110110" "00111101100110010111110110111100" "00111110000100011011110010111100" "00111101011100101000011100011110" "10111101001101000100110011110001" "10111101101001010111011011011101" "10111100010010000100101001101011" "00111101110001000010000001111001" "10111110001100101110101010111000" "10111101011100010101000110000000" "00111110000000110101001110101000" "10111011101110001111111111111011" "10111101111110011101011101110100" "10111010110101101100000011110000" "00111101000001101010001100110010" "00111101110010001101111111111110" "10111110010011011001011111000101" "10111110001100100101111100010000" "10111101000001101011001001111100" "00111110001011010111100011011101" "00111110001100010100100010110001" "10111011111001100011000110011110" "10111100010011100001000111000110" "00111011110000111100111101111111" "10111110000010111100101110011101" "00111101110010111100101101001001" "00111101100011101100100010100110" "00111110000100111100100100011101" "00111100101001110001100001010011" "00111100010011100011100011001000" "10111110010011011000110001000101" "10111110001001111010111101011000" "10111101111111000010101001110100" "10111101110010111111110000000111" "10111110000100000101101011001110" "10111101110000111110000100110101" "00111101110100000110111101101010" "10111110000100000000100000001001" "00111110010111001110000010000101" "10111101111100110001010011001101" "00111110001000110101110100000001" "00111110000100011011001011001010" "00111110001011001111111100011101" "00111101111100011110011100000001" "10111110000010000000010011101100" "00111110000100101100011001100110" "10111011011110010111001111111111" "00111101000000011111001001100100" "00111110000111100011110011100111" "00111101111110011100100000110000" "00111101111110011101110111110001" "00111101111100011011010100101110" "10111110000101011000010010111000" "00111101110100111101100101011111" "10111100011000101000111001101110" "00111101010000010110011000110001" "10111101101010001001111001011010" "00111110000110111101101001100110" "10111101110001011101001111011000" "10111101111110111101011000101010" "00111110000001101111100000010100" "00111100011001000000011010010010" "00111110001001000011001110100110" "00111101011101101000010100110100" "10111101110110111010011010010011" "10111101111101101010101111110000" "10111100101010110101110000011110" "10111101101110100001000000101011" "00111101001101111011100000000011" "00111110001001000011101100011111" "00111110001011110110110110111111" "00111110000010011001110110110111" "00111101111100100100010110001111" "10111100001000111001000101110100" "10111110001010010101010100000001" "10111101100001010111101111101101" "00111101111101100010001000110100" "00111101101110011111001110100110" "10111101100111001011000101001000" "00111110011011011101110001111011" "00111110001000000100000010011100" "00111110010110010110100011110100" "00111110001100110000011101011010" "00111101011000010000000111010111" "10111110001011110000011010010000" "00111010011011111111001100101100" "00111101110100010101010000011000" "10111110000010000111111100100101" "10111110001001001010001101010011" "10111101111000001100001101011001" "00111101011000010111011001001110" "10111110000110011010010011111100" "10111101001000110001110101111011" "00111100010011001001110111111011" "00111101111000111111001000110111" "10111101110001110001000110111100" "10111101001100010001000100001010" "00111110010011010101011100001100" "10111110001110110000010011000001" "10111100000110111010000101000001" "10111101100110011101001000110100" "10111101100010000100011111010000" "00111110001110010001010110100111" "10111100101111111110011001100101" "10111100111101000111100110110110" "10111101101010001001101100100010" "00111110010000001111001000100010" "00111100110010101110001111010110" "10111101111100111111110110101111" "00111101101110101011001111010000" "00111101101001101000001111100101" "10111100111111001001001011111000" "00111110010100010100111010111011" "00111110000111011110101011100000" "00111100011111011000110111111000" "00111101011011111101000011100100" "10111101101100011010101100111100" "10111101000010110011010110010101" "00111011100111110110110011011111" "00111110001000000011010111101010" "00111010101001010011110101100100" "00111101100010000101010010010110" "00111110000110100000101001001000" "10111110000111110010111000001000" "10111110001011000001011011100000" "10111101110010100100010101110000" "10111110011010000010111101111111" "10111110000000101110000011111010" "10111101110010001110011011111100" "10111110000100001111100110011011" "00111100111111101101001010110101" "00111110001011001001101101010010" "00111110011000110010100010101100" "00111101001111011001011101000001" "10111101111000111100001000001101" "00111101111011010110100001010010" "10111101100100111000110010010010" "00111101101110101010011100011100" "00111101110000010101001011100111" "00111110001101101010011001011001" "10111101101000001001000110011100" "10111110001000001111110100100110" "10111110000011100100111011111010" "00111110001110010000110000011000" "00111100101100100100110110100011" "10111101000110111001101101000100" "10111101100010111101001000000010" "00111101011100101100100000011101" "00111101110100011111010001000010" "00111101100111101101101101110111" "00111110000000000001111010111010" "00111110010100100000001011111010" "00111101011111110110010100110110" "00111101111001100100101010001011" "10111110001010101100111011100000" "00111110001110110010110011011010" "00111100101011111011111110011101" "10111110000100001000110100101101" "00111101010010111010011111110111" "10111100111011111001000101111110" "10111101000001001010001011111101" "00111110010101100010111011010101" "00111100001001011010100000101011" "10111100101011100110110101001101" "00111101010000110100001010110001" "00111011110001100000111101001100" "00111110000111011011100001010001" "00111101010100010100011001000011" "10111101101100000100101111011111" "00111101001100111111010100101100" "00111101100101101100110000000101" "00111101110110000110011110100000" "10111100000010111101011111100101" "00111101111001100111001111001111" "10111110000000110000100000101000" "10111101001001111101111111000111" "00111110010001001101010110100010" "00111110001110010100110011000001" "00111011110001110000001001110100" "00111101000001101011000000110110" "00111101100110011010100111010110" "10111101100111100101001011001100" "00111110001111011111110111110100" "10111110000001111111110100101010" "00111110010011010011011011110101" "00111011011000110101000001000111" "00111110001010011001110000011010" "10111110000101001110110001111010" "00111100010100111111001110110101" "10111110001010110111010100011010" "00111101011101011001100101000110" "10111101111101111000100001000100" "10111110000110011001101111100110" "10111100001111111110110111000000" "10111110001010100101001010001111" "00111101010100000111000001000110" "00111110001011000001001010011000" "00111101100111110110001001101110" "00111101100000101101011010111000" "10111101000110010110111001101100" "10111110001000011100010100011011" "00111101110101010011101010111101" "00111101101110111100110010101111" "00111101100110010100000101000000" "10111110010010011001000100110010" "10111110000010010111011000101000" "00111110000001001111000111000011" "10111101100010010111110001001001" "00111101010000110001001101011100" "00111101110000010101010110110111" "00111101111101011001111001101010" "10111101000010110001100101011011" "00111101110010011100110010100111" "10111110001101001011001100001100" "10111100100110000010111000010101" "00111110010011111100110010101111" "10111100111100110100001100001010" "00111011100000001101010001001100" "00111100100110111001001001001111" "00111110000111011111101010100101" "10111101111111010101111110000011" "00111110001110110111001010010011" "00111101000000001000011000101100" "00111101111111101111001101101000" "10111100000001000011010110110110" "10111110001001001101000101011010" "10111110001011000000101011100110" "00111110001001111001111100011100" "00111101110110010001111101001001" "00111101001100000100100000011010" "00111101011010000110101100111101" "00111101101000111001101010101011" "10111101011101000011101101010100" "00111101100011111000011001011110" "00111100100101101011010111001111" "00111110001011010101100010110111" "10111101101101111001001010011001" "10111110010110001000010110010101" "10111101110010011010100110000010" "10111110001111000011111001100101" "10111110000011010000110000010100" "10111101100000000000000100010111" "10111101000100101101101111110010" "00111101110100100100010011100010" "10111100101011111011011011100110" "10111110000101100100000001011010" "00111100011001110010011010010100" "10111011010001110100101110110011" "10111101010000000110110110101100" "00111110001011011010101000101000" "00111101111100010001101011110100" "00111110000111011100110100011001" "10111101010000010001011110010100" "10111100100101001011011000000110" "00111101010010001111011010100101" "10111101110010010010011010011100" "10111101110011001000010011111101" "00111110001111111101001111011110" "00111100100001101111111111111011" "00111110000011000001001001000110" "00111110001100011000101111010100" "00111110001001101001111011001110" "10111110011100010010010011100000" "00111110010000100101010010000011" "10111101110111010010000000100111" "00111100011011110110101110001101" "00111101101110111110000100010110" "00111110001111011111110001110001" "00111101101110000101100100010101" "10111010100000010100101011101000" "10111101000000101100001101100000" "00111101001111001001011111000011" "00111110010010101101100111010101" "00111100001010010001010011111110" "00111110001101101000011001011100" "00111101111001101111111001111100" "10111110001100000001010110101111" "10111011100101111101110000101010" "10111110000101001100011000110010" "00111110000101001110000101100000" "00111101101111101001111111111101" "00111110000111011010100010010001" "10111101000110000000011101111010" "10111110000110001101111110001000" "00111110001000101101001011100010" "00111110001101111011011110000110" "00111101101110100001010000101000" "10111101100111011110111100111111" "10111101111111111011100010011010" "10111101101000101100000101000001" "00111101111110100011111000010011" "00111110001100101110101100110100" "10111101101110110110111101001010" "10111101010101101110111000001100" "00111101101000101010101111011011" "00111110001000001010010101000101" "00111100111011010000111101100110" "10111110001011101011100010110100" "10111101101011010001010111101110" "00111101100101010100010111101101" "10111101001111111001011010110001" "10111110001100011100011010111100" "10111110011110000011110011111100" "00111101101001110111010100001001" "00111110001011000101010000111010" "00111110001101111001010001110011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 41
set hasByteEnable 0
set MemName k2c_dot_dense_13_lbW
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "00111101100101111111111110100101" "10111101001001010011110000101010" "10111110000011000000111101101011" "10111101101111100001100110001100" "10111101001011100100010110000000" "10111101001011010000001101101110" "00111110001011110000010000001100" "10111110000111011001011011100000" "10111110000101111101000100111100" "10111110000011000100101100101000" "00111101011000110000010010001011" "00111101011101001001001001010101" "10111011011000111001011100010110" "00111110000000000111110011101100" "00111100100011011001011001011100" "00111101101001010000110001101110" "10111100010010111101111001111010" "10111100110111011001011111110101" "00111100101100110011001010011101" "00111100100110101111111110010001" "10111110001111010101110010011001" "00111110001011100111010100000111" "00111101100011110010101101001011" "10111110011000010110010110110011" "00111110000011010100101001100000" "00111101110000011101010101000101" "10111010110011011100001100100100" "00111110001001101011111100010110" "10111110000111101000110101101010" "10111110000011101111101010100101" "00111101010001010111110000010100" "10111101100011011101010100111010" "00111110010001010110000011011010" "00111101010101110100100111101001" "00111110010000101100100110111000" "10111011111100000110101010000110" "00111110000111100100010110100010" "10111101100100010010010001100101" "10111110010100000110100110010010" "00111101100010100101010101101100" "10111110010110011010010011100010" "10111101101101011011011101111001" "00111101100010110011101100011110" "00111110001001011011100000001010" "00111101100000101010010111101100" "00111101111000111001111000000101" "00111100110001010111110011000111" "00111101101000001110101011011111" "00111110000010110010010101000011" "00111110000001010101000100011110" "10111101010100000111000111010011" "10111101101111010110110010110100" "00111110000100010111001100110110" "10111100100110010101000101000111" "10111100101010011010001000000000" "00111101100011001100110000011101" "10111110000001000111100110100010" "10111110000011000000110111000100" "10111101110011001101110110111000" "10111101110101010100110001111010" "10111101101101011000001000110100" "00111011000000100000001110101010" "00111100110111101110011100010110" "10111110000100100011111100001111" "00111101101100101111011011000101" "10111110000010111010000110001110" "10111110010010101111100101100010" "10111110010010001111010110001100" "10111110001010011001111000011100" "00111101110110111000010010000000" "10111100001011101010001110010101" "00111110010110101101100101101110" "00111110000001010011010000111100" "00111101001000101101010100111000" "10111100110100011101011000110110" "10111101100001110000010000010111" "00111110010010100100100010101100" "10111101010110111000101000100011" "00111101000001001100101000101100" "00111110001110000101101011111110" "00111101100101100101101110011001" "00111101011011101110100100011111" "10111110011001011010010101111110" "10111110001100011010101001000000" "10111101011101001010001110110101" "10111110000101111010001010011110" "10111011110110010110001000000010" "00111110011101011101101001000110" "10111101111100010000111010010011" "10111110001011101010111001001001" "10111110011011101000000001001101" "10111101001111011110011000100100" "00111110000110111111101101111111" "00111110000101001001111110010010" "10111110001000001110000001010110" "00111101100000010111000010011000" "10111110001010101000010011000001" "10111110001110100110100010010000" "00111101100111010100111000010101" "00111110010010111100100111001100" "10111110001100110110101010101111" "00111100100100010101010001000101" "00111101000010000011001100101110" "00111100110101010011101111101011" "00111110000111100010111011010110" "10111110000111010111010001111111" "00111101111001111110101110101111" "10111110001010100010001110000110" "00111101101100101110100000111000" "10111110000011111010000111010011" "00111110011010011001011011010000" "00111110001101010100011010111101" "00111101110100001111100111110100" "00111011110001101011000001011011" "00111110001100101011111000000011" "00111110001110010010101011110011" "00111110000111010001100111010110" "00111101110101010011110101010001" "00111101101100001001000010100101" "10111101100111010110010111001101" "00111101111011000010111111011000" "00111101101100111101011011101101" "10111100110110011111010010111111" "00111110001011001101000101110111" "10111110010100011000101111111010" "00111110001010100000101100010000" "10111101110001100010111011100111" "10111110010000110101010010000001" "00111101110100000010101111111111" "00111101111100100110101101101101" "00111101110111011011010001110001" "10111101100110101011101110101111" "10111110001101101111101111101001" "00111110001111101110001000010111" "00111100110011000001011000110011" "10111100110110111110000101110001" "00111101011110111011111010000101" "10111110000100011111010110111111" "10111101011000001100101111111010" "00111100000100100110011011111000" "10111100110110000101111010011110" "10111110010011101001000010100001" "00111101110101011111011000000110" "10111101111111011111001110110000" "00111110000111001001101100001011" "00111110001111101010011001010001" "10111101111111101100101010000100" "10111101010001101110101000111001" "10111110000011110111111011100110" "00111101111001100000011110011111" "00111101100010111011010101000001" "00111101111100011011000101010011" "00111100101101111100111100000011" "10111110000100011000000011100110" "10111101110101000000010100010011" "10111101001111100100001111000000" "10111100100100011010100000001101" "10111100011111001011010110111101" "10111110000000100000110010000100" "00111101110001110100011110100111" "10111101100011110000100000011110" "00111110000010011111001100011101" "10111101001011110101000000011111" "10111101111000011100100111110010" "00111100011010111000101100110111" "10111101011000010011101100001110" "00111101010001000010010111001101" "10111110001010111101000010011011" "10111110000010000101010100101110" "00111011010010000101100011011010" "10111110000111101100101110000111" "00111101101110101101000010010011" "10111101110100111001011010001011" "00111101101110010101011001000001" "10111101100001010100100010110110" "10111101100010000100001101100000" "00111010000101000010011001011101" "10111110001101001100000001100110" "00111101100001111001100010111010" "00111110001011010101001111001011" "10111101111011011111011011111110" "10111101001101001101001001011010" "10111011100011011011011101111100" "10111100100100000010100110111010" "10111110000101101110100111101101" "10111110001000001011100111011011" "10111101000001001011010011110100" "00111101111100011010001001111010" "10111110000001110010010010101110" "00111110000000001000000010101000" "00111110000010001110100111111101" "10111110001011001000110110100001" "10111101001110000011010001101101" "10111110010010111000000011011100" "00111101111111010101010001101010" "00111100011100111001101011110001" "00111101110110000111110110010111" "00111100100010111101000000110000" "10111110000111110110010101100111" "10111110001111010011000011011101" "10111101100110110110110101010100" "10111101101000000100000100000100" "10111101110000111010000010011011" "00111110001001101011100110010001" "10111110010010111000001011011011" "00111110010011111001101000001001" "00111101110000011011001111011111" "00111011010110111100011100000001" "10111110001000111010011000100010" "00111100111000110010110110011100" "10111101110100100010010001101100" "00111101101001111010100110100111" "00111110000100111000001010001011" "00111110000011000000100110000000" "10111100000110011010000100010010" "00111101001000001000111111100100" "00111100010110100011000000001010" "10111101010100111011100110001000" "00111101000001011110101101000111" "00111110001000001100010000000100" "10111110001010100101011011000110" "00111101000011010010101111110010" "10111101110001101011110100101001" "10111110000110001000101101111101" "00111101110001010000100000011000" "10111110000001101111001111000001" "10111101100101100101001010111111" "00111110000100010101010110111101" "10111101111111100001101101111110" "10111110001011110100010001001110" "10111101111111000101000100110000" "00111110001000110000001101111111" "10111100101001001000100011100011" "10111011101000101111111110111101" "00111101011010101000000101010110" "10111101111110010011001100000011" "10111110001011011110110111001000" "00111101000011110000010010010111" "00111101100011110000110001010011" "00111101110000101010000011000001" "10111101100100010111101010110001" "00111101111001110001001001110000" "10111110010000001101011000100010" "10111100100001100110010011100111" "10111101010100010110100011010010" "00111101111110101110100001100010" "10111110000101101110001000010100" "00111110001001101110101010000011" "00111101110111100110100111001111" "00111110001101101000000010001111" "10111101001010101110001000001001" "00111101100011011100101001010100" "10111110001101010100101110101010" "10111110000010100010101000111010" "10111110001010101010110111001010" "00111110010000011001010101100000" "10111101001101001010100000100000" "00111101100101110010010101011110" "00111101011110100010001111011100" "10111110010001001100111010000000" "10111110000000101000010011110000" "10111110010100011111011001000010" "10111101111010111001011101001010" "10111110011000011001000101110110" "10111101101111000101001001100100" "10111100111011111100010001011100" "00111101110110110010011110101111" "10111110001000001011111110000001" "00111101100000000010101100011111" "00111101011101111100011010000000" "10111101010100001110001000011001" "00111101100010101100000111111101" "10111100100100000001010011000001" "00111101110100111000110101010101" "00111101011010101101001101000110" "10111100101001010010110011101111" "10111011000011111001001011101001" "00111100011001010011010010011011" "00111101111001000001001000110101" "00111110001110001010001011100000" "10111100011010010000111110100001" "10111101110110101001110010111110" "00111010110000100110010010111100" "10111100101101001101000011110001" "10111110000010101001011000110001" "00111101010001000110000001010011" "00111101011101100101010001110111" "10111101100000110101000111011100" "10111110001110100100011101110001" "00111110001011011111001011101000" "10111101111110010010000001101010" "00111110000111000101110011001100" "10111101001110110110001001011110" "00111110010101100101100101111010" "00111011101011101101101100011010" "10111110000110100111000101101110" "00111101111110101100011000000010" "00111101010101010001000100100101" "10111101101111010111100110101100" "10111101101010110100000100111010" "10111101010110100101011010011010" "10111110001010100011001101000001" "00111110001011000101100011101101" "10111110001111011011100010111000" "00111101110001000110110110000011" "10111110000101000010001100000011" "00111110001010101001011110101100" "00111110000000011001010010010000" "10111110000110010110110010000110" "00111101110101110000101000101100" "00111101000100000111100010101100" "00111100110011111010000000000100" "10111110001000100000101001101111" "00111101000000001000011101001100" "00111101111001110101111111100010" "00111110000101010010101000001101" "00111101100100110010000001100011" "00111101101111001110011000001010" "10111101111001011100100001010100" "00111101111110010011111010011100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 42
set hasByteEnable 0
set MemName k2c_dot_dense_13_mb6
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "10111101010011001111000100001100" "00111101101000001001101101111000" "00111101101011011000001010001000" "10111101111001100100111011010101" "00111101111110110011100110100110" "00111100101010110111101011000011" "10111100110100101011111100000101" "00111010001000011100101010001100" "00111110001010100101111000101010" "00111101011110011101001001010111" "10111101010001110110000101110001" "10111101011001011001101101100111" "10111100000111001100101101001011" "00111100110100111110110111100011" "00111110001101011000100001010111" "00111110011100001011111010010010" "00111100110110101100011001011110" "00111101100100110111010011000100" "00111110001000100100001100011110" "10111110011000111101100111110110" "00111100110101110000001010010010" "10111101011111100010111111110100" "00111011101000000000001000001111" "10111100100101110110001100101001" "00111110000011011111000010111000" "00111101110110101000100011111011" "00111110010100100111000001011001" "00111011110111101011110110100100" "10111101100000000101110101101011" "10111110011101010101111101011000" "10111100011101001001100110010010" "10111110000011010000111110101000" "10111100010011111000010101001101" "10111101011000100110011000110100" "00111101100111011100010011001000" "00111110000001000010100101111010" "10111110000111011000100110010101" "10111101000010101110110001110011" "10111110001010111011000001101110" "00111101101101100111100011110111" "10111101010110010001111000100110" "10111100001110111010101011010111" "00111110000000000011011110011001" "00111101111001111110001011100111" "00111101111000001101000000010010" "10111100001101001100100101011011" "10111011110111110000010101101101" "10111101110100001111111001100101" "10111110000011100110000111111001" "10111110001000100101001101110000" "10111110001101101000100101000001" "00111110000001001110001010100010" "10111110010010000001110101110101" "00111110010100111111000110010100" "10111110000010010011101001000000" "10111100110010000110010000111010" "00111110001101010011100001011100" "00111100001011101001101000100101" "10111100100100000000001010000110" "00111110000100100101000011111100" "00111011001101100100011100100111" "00111110010000010111011010110011" "00111110000111010011011101010010" "10111101010101001011111000011011" "00111101000011101011000111000111" "00111101100110100011101111111111" "00111101111111101100111011100111" "10111110001000001011101110000001" "10111101010110101000100001000011" "10111100111111101001010100010100" "10111101100001100010011001100101" "10111100111010110001011110110100" "00111101001011100100001110101110" "10111010111100010000111101100010" "00111100001011100100000110110101" "00111110000101001101001111001001" "00111110000101010011010100111101" "10111100110000001101100101100010" "00111110001010100110011010101010" "10111100110101100010000000100100" "00111110010100111111100101101011" "00111110011111001000011110101010" "10111100101010110111111001101101" "00111101011110100001110001000111" "10111101101001101011001011110111" "10111110100000101010111010111111" "00111110000001011000000010110010" "10111100101110110110100101001100" "10111110000000000111101010001000" "00111110001001000000011101110000" "10111110001001010010101000111011" "10111101100111011100000011000011" "10111110001110011101101110101101" "00111110010110111001011010110010" "00111101110000110010000011111101" "10111101101001111100000010000001" "00111101100000111111000000100001" "10111101000111010111110001010011" "10111110000011001101111100110100" "00111101100001110011011101111010" "10111100111110011001101001101011" "00111100110001100101001010111100" "10111110000101010100100110110100" "10111110000001000110101100001110" "10111100100111011000100111100100" "00111101011010001010110000000011" "00111110000000111011000110010100" "00111110011011100011010010000011" "10111101000100100001111010010100" "00111110000111100100011010100110" "00111010110110010100001001001001" "10111101100001111101011110110011" "10111110000010011011001110010000" "00111101111010100110010011101110" "00111101010100110110111101010001" "00111110001111110101001111100111" "10111110010010110101110111110010" "00111110010111000011010101010110" "10111110000000101111110100101100" "00111101111001110001110010101111" "10111101001001001101000100000001" "10111101110100110110111010111011" "00111101000100001010101111101110" "00111011100111100010001010010000" "10111110001001101100010011111110" "10111110001100100110011000111000" "10111110011001011010110010110110" "10111101111010010001110000101011" "00111101101000011100110100111110" "10111110000111110101110010001001" "10111100101000010101110000111010" "00111101000000011010000111111000" "00111100101100010001111010010010" "10111110001010101011000000001011" "10111101011100100101010111101000" "10111101111000111110111101011100" "00111101111001011010111101101011" "00111101011101101011101110101000" "00111101101010100110000110010111" "00111101011000111110001000100000" "10111101010000010010001110111101" "00111110001110100111000000000101" "00111110001101111001110100100001" "10111100100000100111110110111111" "10111101110111110001111100111011" "00111100000110100100011111110010" "00111110011000001001000111000011" "10111100100011011010110101011100" "00111110010001101101110111010011" "00111101100111000111010100010111" "10111101101000010010010001000100" "10111101111000101001100111101100" "10111110000001000001101000101101" "10111100100010110101010111100010" "10111110001101000101111100011101" "10111101001100011110001010011111" "00111110001010110001100100001011" "00111100100010000001111001100110" "00111110001000010111100010001110" "10111110000011110100111111011100" "00111101111001111011101001110100" "10111110010010011110011011000000" "00111101010010001111101110011100" "00111101000001100100011111110010" "00111110010001001011000011010000" "00111101001101101111110001001100" "00111101110010100001111001001101" "10111101110001101011001110100100" "10111101101000111101111011100100" "10111101111010001111001111010111" "10111101010011000110010010101011" "00111110001100101010110001101010" "00111101101001110101100000010111" "10111110000100111001111101010001" "00111101110010111001000011011001" "00111110000110010110010010010010" "00111110011000011101100010111001" "00111101011001011001101010001110" "00111100100001110110100110110001" "00111110010011011010101000111011" "10111110000001110101001111101000" "10111110000001000000011111011100" "00111110010011001011010101110101" "10111100001101101000101011101011" "10111101111001010110001111001111" "00111100110101001101011110000000" "10111101111000100110011000000100" "00111101100101110110111101111010" "10111101001111100101100111110100" "00111101000011110100100010001011" "00111110010111110000000100110000" "00111110010011011100011001011110" "10111101111001100110100111011010" "10111101111111101011010010111000" "10111101100011000100010001101111" "10111101001111110101100101101111" "10111110010001000110100001010011" "00111101010100110000111010001000" "10111101010000010000100000110011" "00111101101110011010001011010101" "10111101100101001000001100011000" "10111101000011111101010101101101" "10111110001100101110000101001000" "10111101000110111100011101011000" "10111011101100111001101101010101" "10111101110110000011000100111001" "10111110001111110100100011100111" "10111101101111011001101010101010" "10111101110101001101111110001100" "10111101000100011000100001001110" "10111110001001111100100111100001" "10111110000000100011000010011001" "00111110001010101100011101101000" "10111100100011110100110000100011" "10111100101100011000110000000110" "10111110001000011011000001011101" "00111110001100001011000010000000" "00111101001101110100111000011111" "10111110000000111011110100111101" "10111101100001010011010000001011" "10111110000111011001101110010111" "10111100101111011011100111000001" "00111100010001100101000100111111" "10111101110001110001100110000111" "10111011100111111010000000000101" "00111100110011101001000000110000" "10111101111001101011101000101100" "10111110010010010110111000100111" "10111110001100010011110000100001" "00111110010111010101011001001010" "10111110010011011110010011010101" "00111101101100110010110011000001" "00111110010110111110100100100010" "00111110001100110001011001110011" "10111100000101100000011010100110" "00111101001000101101011110100000" "10111101111011010000101001101010" "00111110010000010011011100000100" "00111110010001010000100000110110" "10111101110101000010000111111011" "10111110010011111010100000101001" "00111110000000000011101100101000" "10111110000010101110001010100110" "10111110000100101100010110111101" "00111100111001011011111111011110" "00111101000110001101000111011000" "10111110001000010010010101010101" "10111101111100101010010110100000" "10111100100101101111000111100001" "10111110000011011001101011100010" "10111110000010111001001000000000" "00111101001001011000100101010101" "10111101001010010111100100101010" "00111100001101000010100111110101" "00111101011111001100011111110010" "00111110000000110010001011000001" "10111011110011110001001100110111" "10111110001101111001010001110100" "00111101000110000000110010100110" "00111110001111001000000111011011" "00111101100011010000000111110010" "00111101100110110000100001000110" "10111101100010100011100011111001" "10111110000011000011110000111000" "10111100011010000000011100111011" "10111110010010001101011100011111" "00111101111010101001011001111100" "10111101100101100110001110011010" "00111101010111000110101110000000" "10111100010110001100001010101001" "00111110001110011101000000001111" "10111100110010111001110001010001" "00111100001010100111011001000110" "10111110000001011100100001010100" "00111101100010110100010111000101" "10111110000001001100101100101011" "00111101001100010000010111010001" "00111101111101001001100110101010" "00111101001010101100001111110000" "00111100100111111100010100001110" "10111110001010010111000010110010" "00111101100101010100110001001000" "10111101111000110100010110000010" "10111101100100001101001100100110" "00111101010010101100101101101011" "10111101010001011001111110000111" "10111110001001010110100011011000" "00111100010100111100110100011001" "10111110010010100111110100010000" "10111110010000100100111011010001" "10111101101111110110001000111101" "10111100101110101100100100110100" "00111110001101010110010010100001" "00111110001001010000110000000011" "00111101110111111001110111001111" "10111100000101111011011111001001" "00111101011101100100000000001011" "10111110000001110100000110101101" "00111101010101001101100011001010" "10111101100100011101100111101011" "10111101011111111000001010100011" "10111110000001011010111101110111" "10111110000000011001000100110111" "00111101111101110100101110000000" "00111101010011010010011111001110" "10111101011100101110110110010101" "10111110011001011110100010100100" "00111101001101010000000001100111" "10111101101101000011010111100100" "00111101011100111011010001011000" "00111110000010101001011000110100" "10111100011110000001001000101010" "10111101011110101000011010110100" "10111110001100000010001101011001" "10111110010011010111000001111110" "00111110001001011100001001110100" "00111011100101000011110000000010" "10111101101110010011111110110110" "00111110000100011100111111101111" "10111110000011111110010010101000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 43
set hasByteEnable 0
set MemName k2c_dot_dense_13_ncg
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 320
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "00111101000101101011110110100010" "00111100000100011001100101110110" "00111101110011010001001001001010" "10111110001101000000001001101101" "00111100110101110101000110111110" "10111110000110101000111000000101" "00111110000000011001010110011100" "10111101101100000110010111010100" "10111101001000110011010101011111" "10111011111111110011110111111100" "10111101110101100000101100010111" "00111100111011000111110110010001" "00111101110101100010001101101000" "00111101111110111001100000000010" "00111110000010110011010010111110" "00111101101111000110000101100101" "10111110000011010111100100100011" "10111110010000000110110001100101" "00111101010011101011001111000101" "00111101001111001111100011110001" "00111110010000100000011111100011" "00111110010001111111010000000001" "10111110000011001100000100010000" "10111101101110111011000100111110" "10111110010100000000001001110110" "10111110001000101001001100000001" "00111100101101110010010101001111" "10111110001100100111011001010000" "10111110001001001011111100101101" "00111110010101100100100001011010" "00111110010001011001111011001101" "00111101001111011100001000010011" "00111100100011110011010111111100" "10111110001001000011011110001011" "10111110000100101110100100000010" "00111101100000100110110000110110" "10111110001011010000000000001000" "10111110000010010001000011000001" "00111100111100111010011001010111" "10111110010010010100001001000000" "10111100100101110011010011011001" "00111110001111111000111100110100" "00111101011000000010101011001110" "00111101110001001111111110111010" "00111110010001000011010100110110" "10111101000011010111001001010111" "10111101010101001110110111011010" "10111110001010100110101101111111" "00111110000010101011100010010111" "10111101111011100001011000010011" "10111100101111110110100001101000" "00111110010101000001001000110101" "10111101111001111100111001110110" "10111110010101000110001000001001" "00111101010111001001110000101101" "00111101000101100011110011111101" "10111101001010010000101001100101" "10111011011010001101000111000010" "00111101101000111001111101000110" "10111110000111001101010011011110" "00111110000100001101000110000010" "10111110000110001100111100011100" "00111110001101101011111010100100" "00111011000100011100101110100011" "10111101111010111111110100101111" "00111101001001111001111001011010" "00111101101000010111000010001111" "00111101000101100011011101101001" "00111101100101001011100100000101" "10111100000010111101010101011010" "00111110001010100011110111001001" "00111110001011110011011100100101" "10111100000101100111111111001111" "00111110000111000001110111110111" "10111101101110100001011000100101" "00111110000011000100001100000100" "10111110001111011010000010110001" "00111101111110011101111100110010" "10111101011100111111011010011011" "10111110001010010111101111001111" "00111101101011111010011110100001" "00111101000101101011010001111000" "00111101111100000111000100010010" "10111101000010110011101000011011" "00111101010010010100011001010001" "10111101110101100101111010010001" "10111101111111000000011010001001" "10111110010110010011111011001000" "10111110010010010010111110011100" "10111101000001000010000011000001" "00111101101001011111101111011110" "00111110011011111100000110010100" "10111110010001110011111101001100" "10111101101001010011100111100001" "10111110010001000110000011010000" "10111100110100011100100111101111" "00111101111101011010001010101110" "00111100110001100101011101110100" "10111110000000010000101011000001" "00111101100100000010001101100111" "10111110001101000111000111110110" "00111110000111111001001011000011" "10111101101100001111111011100010" "00111100111011100011111010111000" "00111101100100101110110011110110" "10111101110001111110000001101110" "00111011111101110111100011001101" "10111101101110000010110111101110" "10111110010000001010101011000111" "10111101010100001010100110111100" "00111100110101000001010011001100" "10111101110101111001010111101011" "00111110001111011110100001101111" "00111101001011000011111101101001" "10111100100101010011000101111111" "10111101000010100000100110100001" "10111101111011100001100001100000" "00111100100001001011110000001011" "00111100001100001001111110111000" "00111110000101100101000010100011" "00111101011101010010000101111101" "10111101010110010101000011111011" "10111110000001010110111011101101" "00111110001001001111110110010111" "00111110010001010110010111011000" "00111101111011100000000000001011" "10111100001111110010111110010010" "10111110001001000010000100001100" "00111110000110110000010101011111" "00111101110111001100111001111001" "00111101100001011001100001001101" "00111101101111011110100101011110" "10111101110001000100110110001111" "10111101010010111100011101010111" "10111101100000101101000111010100" "10111110010010110101111100110110" "10111110001000101010000011011010" "10111100000001100100011100000100" "10111101100100000100111100000110" "10111101111101100010101000110111" "10111101110100000100001110010011" "00111100101111110101110010100000" "00111101011001000000110100110011" "10111100110110011111010011000101" "00111110001110011010100101000010" "10111101101010011000001100101101" "00111101011010010001101100001010" "00111110001001111000110010110111" "10111101011001000010010110100101" "00111101101110001110000000110001" "00111110000010100010100010100101" "10111110011011011101111100010111" "00111011111010111110001111111101" "00111101100011111100001111111011" "00111011100111111110101001011011" "00111110001100110101000011100101" "00111101101101000011000010110010" "00111101110000001101001011011000" "10111011111011111100100111001100" "00111101000110010011001111001001" "00111101100000110101101011111011" "00111101101101110010011110011111" "00111101011111011101001111111111" "10111101011101000011010001100111" "10111101001001110110110011011000" "10111110000000101001111010011001" "00111101110111100111010001111000" "00111101000111001100001101100011" "00111101100110101011100010101000" "10111100100111101001011001001100" "10111011100111111000010101000000" "00111110010011110101001001000000" "00111110000101101010111000110100" "00111100101101000010111000010000" "00111101110010111000110000101101" "10111110001000000000010001001101" "00111110010110001101100011100111" "10111110010000101101110000001000" "10111110000001101100011000010110" "00111110001100101010000100101110" "00111101110000110101010011110110" "10111101010001001000100100101110" "00111101010000010000111000010111" "00111100110000110000011001001001" "10111101011011010101111110000011" "10111100001111111011110011011001" "10111101100000000100101101100001" "00111101111001100001000011000010" "10111110000100111000110011110100" "00111101101111101100010101000010" "10111101110101100110111001110101" "00111110000000000111111001101011" "00111101110111100110000101010110" "00111101101001011000101001111100" "10111101101110110011010111110101" "10111101001010011011110110011011" "10111101111110100011011010111000" "10111100010101101111010101100011" "10111110001110001000110010011001" "00111100101100110100001110110000" "10111101111010110011000110101011" "10111101011100011111001011101001" "00111100000011110011010000110011" "00111101000000010011110011000111" "00111101110000011111110011101001" "00111100100101011110111001000100" "10111101111001010101101010100110" "10111101010100001100100100010101" "00111101101100110110011111011010" "00111101001011000001110111100111" "10111101011011011000010010111101" "10111110000101011111111100110101" "10111110001100101111111011000111" "10111101101001011110101100010000" "00111100111111100110011111001010" "00111101111011000001111001011010" "10111100000011101110010000100100" "10111101010000110100111110110011" "00111110000000001100101010000000" "00111100010100010110110001000010" "10111100101010000111100110000111" "10111101110100001011111010110010" "00111110000111100001000110100001" "00111100110000011011011101110110" "10111110001010101101101001010010" "00111101110111010011101100110001" "00111101110000001110111000000000" "00111110011011000110010001001000" "10111110000001110011111111000011" "00111101101011101101001111110101" "10111110010001101100100000101101" "00111101100110100100010000101101" "10111101100000111111111000011011" "00111101111111000001010101011001" "00111101111011100010100000010101" "00111101011111001011000011010100" "00111110010011110111110111110110" "00111101101000101110000101010000" "00111101001001010110100100001011" "00111101011100111100111110100000" "00111110001000000100000010100011" "00111110010001010101011000000110" "10111101001110110110110000001111" "00111110010111101110101001110111" "00111101010011011001011100100101" "00111110001010000011010001010110" "10111100011011100011110000001101" "00111110000100000110110110100100" "10111101110100000110010010101100" "10111110000101011010010001000111" "00111100111000100000100101100100" "10111101011010110000000101001001" "10111100000110000101011111011110" "00111101001001011011101100010101" "00111101011101010001101010010110" "10111100101101010001110100010110" "10111100001110101101001010111110" "00111101010010000100010110111011" "10111101101000000110100111000110" "10111110001100000001010110000011" "10111101101010011110110110001000" "10111101100000011001100100000000" "10111100111000001000001000101001" "00111101100001010010110110011011" "10111101101001101110011111100110" "10111110000101010000011111011000" "10111101000110001110000110011010" "10111101101011001000111001101111" "10111100110011101111100001000000" "00111100100100001010011001110100" "00111100010000101101111100011100" "00111101000010000110000100110101" "10111110000111100101000110110010" "10111100111100000101010110001101" "00111101101010011110100101000111" "00111101000001101000111010110111" "10111101100100011011011011001001" "00111101011010110101011001100110" "00111110000010111011010011111010" "00111110010001001110111100001000" "00111110000101111110100110010011" "00111101100101011011010010000111" "10111101001000100011010010100000" "00111101100100111111011010100110" "10111101111010000001000100101110" "10111011100010111000001110010101" "00111110001000110101010010110111" "10111101101010001000010001000101" "10111110000110111011101001111110" "10111110011101010000101000110111" "10111101011010000001001111000111" "10111110000110110001010101010000" "10111110000001011100010110110011" "00111101010101001011101111001010" "10111100100110101010001110010101" "00111110001011000111110000010000" "00111110001010011110110111011010" "10111101101001101010101010100001" "00111110010110101111111011000011" "10111101010001101101001001011001" "00111110000111110110010010001010" "00111101001100010111110011100100" "00111101000000011110110010110010" "00111101011101110001010111100101" "10111101101001010100101011111110" "00111110010100011100000100111010" "10111101010101010010111111010101" "00111110000000110101000001110000" "10111101000111001010010100010101" "00111101001101101101011000111000" "00111100111000001000011010010000" "10111101100001110100010001010011" "10111110000100000111001111001110" "10111110000011011011001011111100" "00111110000010100101000001110100" "10111100010011011010011100011010" "00111110001010110110001000000110" "10111011100001100011000111000111" "10111110000010111000010000110110" "10111101111101111101111111010111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 44
set hasByteEnable 0
set MemName k2c_dot_permA
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 64
set AddrRange 5
set AddrWd 3
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.755
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 45
set hasByteEnable 0
set MemName k2c_dot_permB
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 64
set AddrRange 5
set AddrWd 3
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.755
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name C_array_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_0 \
    op interface \
    ports { C_array_0_address0 { O 4 vector } C_array_0_ce0 { O 1 bit } C_array_0_we0 { O 1 bit } C_array_0_d0 { O 32 vector } C_array_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name C_array_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_1 \
    op interface \
    ports { C_array_1_address0 { O 4 vector } C_array_1_ce0 { O 1 bit } C_array_1_we0 { O 1 bit } C_array_1_d0 { O 32 vector } C_array_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name C_array_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_2 \
    op interface \
    ports { C_array_2_address0 { O 4 vector } C_array_2_ce0 { O 1 bit } C_array_2_we0 { O 1 bit } C_array_2_d0 { O 32 vector } C_array_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name C_array_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_3 \
    op interface \
    ports { C_array_3_address0 { O 4 vector } C_array_3_ce0 { O 1 bit } C_array_3_we0 { O 1 bit } C_array_3_d0 { O 32 vector } C_array_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name C_array_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_4 \
    op interface \
    ports { C_array_4_address0 { O 4 vector } C_array_4_ce0 { O 1 bit } C_array_4_we0 { O 1 bit } C_array_4_d0 { O 32 vector } C_array_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name C_array_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_5 \
    op interface \
    ports { C_array_5_address0 { O 4 vector } C_array_5_ce0 { O 1 bit } C_array_5_we0 { O 1 bit } C_array_5_d0 { O 32 vector } C_array_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name C_array_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_6 \
    op interface \
    ports { C_array_6_address0 { O 4 vector } C_array_6_ce0 { O 1 bit } C_array_6_we0 { O 1 bit } C_array_6_d0 { O 32 vector } C_array_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name C_array_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array_7 \
    op interface \
    ports { C_array_7_address0 { O 4 vector } C_array_7_ce0 { O 1 bit } C_array_7_we0 { O 1 bit } C_array_7_d0 { O 32 vector } C_array_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name A_array_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_0 \
    op interface \
    ports { A_array_0_address0 { O 4 vector } A_array_0_ce0 { O 1 bit } A_array_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name A_array_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_1 \
    op interface \
    ports { A_array_1_address0 { O 4 vector } A_array_1_ce0 { O 1 bit } A_array_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name A_array_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_2 \
    op interface \
    ports { A_array_2_address0 { O 4 vector } A_array_2_ce0 { O 1 bit } A_array_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name A_array_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_3 \
    op interface \
    ports { A_array_3_address0 { O 4 vector } A_array_3_ce0 { O 1 bit } A_array_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name A_array_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_4 \
    op interface \
    ports { A_array_4_address0 { O 4 vector } A_array_4_ce0 { O 1 bit } A_array_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name A_array_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_5 \
    op interface \
    ports { A_array_5_address0 { O 4 vector } A_array_5_ce0 { O 1 bit } A_array_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name A_array_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_6 \
    op interface \
    ports { A_array_6_address0 { O 4 vector } A_array_6_ce0 { O 1 bit } A_array_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name A_array_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array_7 \
    op interface \
    ports { A_array_7_address0 { O 4 vector } A_array_7_ce0 { O 1 bit } A_array_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 64 \
    name A_shape \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_shape \
    op interface \
    ports { A_shape_address0 { O 3 vector } A_shape_ce0 { O 1 bit } A_shape_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_shape'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 62 \
    name A_dim \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_dim \
    op interface \
    ports { A_dim { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name A_numel_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_numel_read \
    op interface \
    ports { A_numel_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name B_dim \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_dim \
    op interface \
    ports { B_dim { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name B_numel_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_numel_read \
    op interface \
    ports { B_numel_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name axesA_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_axesA_0_read \
    op interface \
    ports { axesA_0_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


