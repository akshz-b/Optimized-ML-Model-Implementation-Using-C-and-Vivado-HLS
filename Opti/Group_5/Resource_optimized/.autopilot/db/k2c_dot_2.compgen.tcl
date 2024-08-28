# This script segment is generated automatically by AutoPilot

set id 105
set name sample_udiv_64ns_Ee0
set corename simcore_udiv_seq
set op udiv
set stage_num 68
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set start_width 1
set start_signed 0
set done_width 1
set in0_width 64
set in0_signed 0
set in1_width 8
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS_SEQ
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
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
    start_width ${start_width} \
    start_signed ${start_signed} \
    done_width ${done_width} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 106
set name sample_mul_59ns_6Ffa
set corename simcore_mul
set op mul
set stage_num 2
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 59
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


set id 107
set name sample_mul_mul_11Gfk
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 11
set in0_signed 1
set in1_width 11
set in1_signed 1
set out_width 11
set exp i0*i1
set arg_lists {i0 {11 1 +} i1 {11 1 +} p {11 1 +} acc {0} }
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
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
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
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 108
set name sample_mul_mul_6nHfu
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 6
set in0_signed 0
set in1_width 11
set in1_signed 1
set out_width 11
set exp i0*i1
set arg_lists {i0 {6 0 +} i1 {11 1 +} p {11 1 +} acc {0} }
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
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
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
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 113
set hasByteEnable 0
set MemName k2c_dot_2_dense_1Aem
set CoreName ap_simcore_mem
set PortList { 1 3 }
set DataWd 64
set AddrRange 5
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0000000000000000000000000000000000000000000000000000000000100000" "0000000000000000000000000000000000000000000000000000000000000001" "0000000000000000000000000000000000000000000000000000000000000001" "0000000000000000000000000000000000000000000000000000000000000001" "0000000000000000000000000000000000000000000000000000000000000001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.755
set ClkPeriod 10
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
set ID 114
set hasByteEnable 0
set MemName k2c_dot_2_dense_1Bew
set CoreName ap_simcore_mem
set PortList { 1 3 }
set DataWd 64
set AddrRange 5
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "0000000000000000000000000000000000000000000000000000000000100000" "0000000000000000000000000000000000000000000000000000000000010000" "0000000000000000000000000000000000000000000000000000000000000001" "0000000000000000000000000000000000000000000000000000000000000001" "0000000000000000000000000000000000000000000000000000000000000001" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 1.755
set ClkPeriod 10
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
set ID 115
set hasByteEnable 0
set MemName k2c_dot_2_dense_1CeG
set CoreName ap_simcore_mem
set PortList { 2 1 }
set DataWd 32
set AddrRange 544
set AddrWd 10
set impl_style block
set TrueReset 0
set IsROM 0
set ROMData { }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 10
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
set ID 116
set hasByteEnable 0
set MemName k2c_dot_2_dense_1DeQ
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 512
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "10111110010001011011011111010110" "10111101000000000001011000001011" "10111110100010000011000111000000" "00111100100000000100000011110101" "10111101101000001110110000000111" "00111110010010001111100111011001" "00111011111110100100001010111110" "10111110011101101010001110011111" "10111100010000111110100010100101" "10111110100111100001010011010010" "10111110100110011111111110101100" "00111110001101001101011010001111" "00111110010001100101111110111101" "00111110100000101000000111110001" "00111110001011111001001011100011" "10111110000100100010011000110010" "00111101110001110011101101010101" "00111110001011010000100110110001" "00111110100110101100111100011000" "10111110101110110011101011000111" "00111110011001011100011101001111" "10111101110010001010110000110111" "10111110001101100011001011001000" "00111110011101000111010001001000" "10111110001110001001001011010111" "10111110000011011100100100011111" "10111101110111110110000100110000" "10111110100111011100010111101111" "00111110100000101000000110101100" "00111110010010101010011100111100" "00111110010101011000111010100101" "10111100001000110000101110100111" "00111100100101000111000010000010" "10111110100011111001100101110011" "10111101101100101100111011001000" "00111110101010101010000100010101" "00111110101111110101010111011010" "10111110001110010000111001100101" "10111110011001101010011100110100" "00111110110011011010111101101000" "10111110101010010111110001011111" "10111110100110110000100000000101" "10111110010000101001100110101100" "10111110001110100101011110101011" "00111110100000101011011100011100" "10111110000111011101101000000010" "00111110010111001111010000101001" "00111110011000101001111101010001" "00111110001001111110010011111001" "10111110101110101010000001001011" "00111110001101101101001111001101" "10111110010110000001100011010001" "00111110000110010111011101100010" "00111101101011110011110110010011" "10111101010010001010000111101110" "00111110101101011101000111000001" "10111110000001011000010000101000" "00111110001010010000000100011010" "00111110100010101101101101010010" "10111110100100010010100010011011" "00111101100100010011101101101101" "10111110000001111011110100010100" "10111100001000101011111011000010" "10111110100001111100111001101101" "10111110100010001010110100110100" "00111100100010011101011101010110" "10111110101011100001000010010010" "00111110100111011100100100001011" "00111110100001010000000111000100" "10111101110110110101111111011110" "00111110001100101001111010100101" "00111110100101110010110011011010" "10111110100011100010110011100010" "10111110100101011100000101000101" "10111100000010010111101001110110" "00111101001100010001010110000101" "00111101001011110101110111011011" "00111110011000011110111011101110" "00111110101100100110010110111001" "00111110100011111100011111000100" "00111110000111101100101010110000" "10111101111110011111101101111101" "10111101111111100001101111001001" "10111100101011010101010001100010" "10111110100111001111101000000001" "00111110110000011101100101110101" "10111110100011011010101101111100" "10111110100001100100101111010101" "00111110010100110101010011100010" "00111100100010001100010001101000" "10111110000001000101111000111110" "10111110100111111010100101111100" "00111110010010111111010110011111" "10111101100000010011010010111001" "00111110100010101100101000001101" "00111110100101111110111001010101" "00111100101000101010011010001001" "10111110001111010101000111101000" "10111101010101000100100101011000" "00111110001101010001011100111001" "10111101101000110001011010000010" "00111101010111111001100001100101" "10111100011000000010010110110110" "00111110101011001111101100010100" "10111011101100001000001001111001" "10111100011100111000111111001100" "10111101001111110001101000010101" "10111110100110000101100001111010" "00111110101011000100100010011111" "00111101010111111000000111110011" "00111110010000101101100100111001" "00111101101111001010000101010111" "10111110011010101011101101000111" "00111110000000001100100010000010" "10111110001101010001001001100101" "00111110010101010011101010011010" "10111100010011110001111011001100" "00111110010110110110011110011000" "10111110100011000000111110000111" "10111110100010100010111101110101" "10111110100001110110110100101100" "10111101011110010010001110111000" "10111101110010110011010110011110" "00111110100010001111000010100110" "00111110100111000011001110100111" "10111110000000010011010110110010" "10111110011110001111110101100110" "10111101100110010111000001000100" "10111110100110001010110100111110" "10111110011011001100110100110111" "10111101111000010100000001010111" "00111110110001011010001000110101" "10111110100010101011001011010000" "00111110000000100101111011111100" "10111110010010111010100110111000" "00111110110000100000100110000100" "10111110000110001100100001100010" "10111100001010011110111000000101" "10111110100101100100101100111010" "10111110100001001010111111100101" "00111110001100011110001110000010" "10111100110000101011010001000100" "00111110100100101110101011100000" "00111101100110111010110100011000" "00111101100111001101001000011011" "10111110001001011100110001111110" "10111110100001100111101011001111" "00111110001000000100001001010110" "00111101110011110100100111000101" "10111101101000010001001110100100" "00111110100100001010110010000100" "00111110010110101010011000100100" "10111101100011010001000101100000" "10111110101110101010001111110001" "10111101000101100110000101001000" "00111110001101011000010000010010" "10111101101000110001011111100111" "10111110011110010110001111110001" "10111110001101110010111011111110" "00111110010111001111011110110000" "10111110100110101001100001001000" "00111110001110000001101010011011" "00111110100101011100111111001111" "10111110000100111011011001101010" "10111110001010010111101111001110" "10111110011010010000001011110011" "00111101111111110000100011000011" "10111101100001000100111100100011" "00111110100011100100000010001101" "10111110011110100010010010010110" "10111110100111010110111011000110" "10111110101001111011101010010010" "10111110001000111110100001000001" "00111110011111000001111110010011" "00111101011111110001000111101100" "10111110001110111010101111110000" "10111101101011101100010100010011" "10111101101100011100110110000100" "00111110010000000110000010000010" "00111110011010100111111001011000" "00111110001011110001101010001110" "10111101110011000101010100011001" "10111101010001111101101010011001" "10111101101101110011100110110001" "00111011100001001101001010101000" "10111101101001000100010011110111" "00111110000111011101001010011001" "10111110010111110110100001010111" "10111101011100111111011011000111" "00111110100110111100111110001111" "10111101000101101001010111000011" "10111101001111111011011000101111" "10111101111101100101001000111110" "10111110100010011010010100000111" "00111101100100010000110000011000" "10111110100001100000010101110011" "10111110000000100110100111011100" "10111110000011010000010011101111" "10111101101100011111011011011110" "10111110101010010010011000111010" "00111101010011110010101101010000" "10111110001100100100011000010111" "10111110100100000010111011100010" "10111110001100010111000100111011" "00111110011111100010100010010110" "10111110001011110100111101111101" "00111110011100011110110110001001" "00111101011111101110110010101101" "00111101110011111100111001101000" "00111110001110001100100101101101" "10111110100000100001001101101001" "00111110000000001001011100101000" "00111110101111101110110000110000" "00111101011000010011001111000000" "10111110101001001100110101000000" "00111110011010010001110111011001" "00111110100101000011000000000001" "00111101101010001100000111001100" "00111110010011010110100000111010" "00111110011100101110111110100101" "10111010111010100100101000000111" "00111101001011111101001011000010" "10111110100000110001011010111100" "10111101101001101010001101100000" "00111110100011100111010001111000" "00111110100000010000111000010010" "10111110000001001101100101110010" "00111101000111010100101010011101" "00111100111101011011111101001010" "00111110000001001100000111110000" "00111110000110101110001100110110" "00111110101110010001000011111100" "00111110101101100000110100100010" "10111101110000001101011000111000" "10111101111110000110100001001111" "10111100101010101100110110001010" "00111101011011100110101000100000" "10111110100100100101000111100111" "00111101101101001010100110101010" "10111110000110110110111001101110" "10111110010111010000110100111100" "10111101001111010011110101001000" "10111110100110100001001001100100" "00111011100010001100100100110011" "10111110010010010101100000011110" "00111101010111101010111111001001" "00111110001110000111110110110110" "10111110001001100001000011100011" "00111100100101110000001001101100" "10111110101101011111100000001101" "00111101110010111010000110101001" "00111110010111111101101000001011" "00111101110001010001001101000010" "00111101100011010001011100001001" "10111101001100101101100010001011" "10111110101001111001100110010010" "00111110000101110000001110110011" "00111110100000001111100010110110" "00111110010010010001111111101111" "10111110000011110001111111010011" "00111100001101010101001010011010" "10111101101001010111010100001000" "10111110100010011001001010010011" "00111101110011100111110100100011" "10111110011011101010011010010100" "00111101011010001111101110100101" "00111110100100010101001001001110" "10111101110111011001001010111111" "00111110000100101010100000010001" "10111110010001111000011100110101" "00111100101010010010101011111100" "00111110101100001110010101000111" "10111101110111110011000101111110" "00111101110000000010100101011001" "00111110010011001010001110010001" "00111101011101111111111111001001" "10111101011010110000111100010110" "10111110100101111100110100011110" "10111110101010110110001010000011" "00111110100111100000100010111010" "00111110010111101001111000010101" "10111101100111000111011011000010" "00111110010101110011001100111011" "00111101101010101011000000111011" "00111110011101111001000110001000" "10111110010000101011000000100100" "10111101011100000100000110010001" "00111101100111110001100100101111" "10111110001000101110110011000101" "00111100011110110010010100011111" "10111101010011011011010011101111" "00111101110111111101111000110000" "10111101100000100100011110111001" "10111110100101001000100011100011" "10111110100010101101110101010010" "10111101000000000010000110010001" "10111110100010111000111111110110" "00111110011001110111001100110100" "10111101110011001001101111111011" "10111101001111000001011001111110" "00111110101010010100110010100011" "10111011111010001110000110010101" "10111110011100011101110100110011" "10111011011100000000011111000100" "00111110001011100111001110000010" "10111110011101101101100000100101" "10111110101010111011110000100100" "00111101001100010001111001101000" "00111011100110001011001010011110" "10111110101111111000110000011100" "00111110100101001101011110010101" "10111101110100010101000010100100" "10111110100111000100000000100000" "00111101110110101100101100110101" "00111110001100100111100101000000" "00111110011000110111110101101110" "10111110011011111011101010001111" "10111101110110010110110001010110" "10111110100010111110011110000010" "10111100111001010010001011110000" "00111110101001111011110001001010" "00111101001001111101111011111101" "10111101110000100100001001100110" "00111110100010100111001011100100" "00111110011010101010010111000110" "10111110001111101100000000001111" "00111101001011111110011110111110" "10111110001111100001100101001010" "10111101000111001100010010111111" "10111101110100001010011010111110" "00111101010010111100101111011011" "00111110010010100111101010111110" "00111110100101101000010000011100" "00111110010010100011000010100010" "10111110100000101110111111000000" "00111110100100011010010000011110" "10111110101100011111111110011100" "00111110101011011100011010111111" "00111110101101110011010011111100" "00111110101001010110111110001101" "10111110000111110010101010011100" "00111110010110001100100000101110" "00111011101111101111100110010001" "10111101111001000000001101110110" "00111110100101010001010100001001" "10111110100111100001101110000011" "10111110001100000000111101000111" "10111110100011101111111000010001" "00111110011000010001111011100110" "10111110100001110010010000001111" "10111110000011111011000111100001" "10111110100010001000001111110111" "10111110101100010010111010101110" "10111110001010111000110101001110" "10111110100010010110100010011111" "10111110101100011110110011100100" "10111100100100111100000101101011" "00111101000001111111101010100110" "10111101100111011000011101110101" "10111110100110101010101011111000" "00111110101010001011101001111010" "10111100101110101010110101111110" "00111110101100011011100001101110" "10111110100110110110100010101101" "10111100100101111010101001110001" "10111110101010110010110101001011" "00111101110111001010011100110001" "00111110001001110000010011111100" "10111101100111011001111001011100" "10111011001001111001011010001100" "10111110000111011110110000010011" "00111110100000011110100010101010" "00111110110001011101110101011010" "00111110001001010101110010111010" "10111110100001010111011100011101" "00111110100101110001100111110111" "00111110001000001100101111011101" "10111110000010101000001000010110" "10111101100011101001111011100100" "10111101111010111101011011010011" "10111101100111011001000000001101" "00111110010111101000011101000011" "10111110010110110100000010110101" "10111110100000010000000111110011" "00111101000010100100110011000101" "00111110010101010110110111100101" "00111110110010001111000100010110" "10111100101101001001011100001000" "10111110011000100011110010100100" "00111110101100011101001101110111" "00111110010011101001010110111000" "10111100111110000010110000011001" "10111110001110011001011011010010" "10111110010010000110001001110001" "10111110001101101010000000011001" "10111110010010111110111101100101" "00111110101111100000011000100010" "10111100010010001100111110101100" "00111110011110100110101111110111" "00111100111110111100110000000001" "10111101011100110001011101011111" "00111101001100110011101111010010" "00111110101001100010000111010010" "10111110000000001000100010011000" "00111110101010100010111110011000" "10111101111001100100011000010001" "10111110100111100101111100100111" "00111101001100000111000010000110" "10111100010010010001111000001100" "00111110011111100100111101011010" "10111110000111010001101001011111" "10111110001011000100011110010000" "10111110010101101100000110000010" "10111110100001101011011111111011" "10111101011000111111100011111001" "10111110100100010101101000110110" "00111110010011101010110000001000" "00111101111110000100011011101111" "00111110011100000100111000011101" "10111110011000001100000111100001" "00111110010010011001011101101101" "00111110100010101111001011101000" "00111110001001011011000001110011" "00111110010000011011101000010110" "00111110100100000100010000001101" "10111110101000111111000100001100" "00111110101000111101110000111001" "10111100100000010001111111100111" "10111110100011111101010110000010" "10111110100101001011000111011100" "00111110011100110000000001001111" "10111101011011001111101111000010" "10111101110011100100000110000111" "10111110001100011011100010110111" "00111110101011000011101011000001" "10111110011110111010001001110111" "10111101101000100010011000001100" "10111101110010010111011001011110" "00111110101001111010100101000001" "10111110011010001001011100111001" "10111110100100100001101001001110" "00111110000011010111011001011101" "00111110010011111010000001111010" "10111110000101011111110100001101" "10111110001101101100011011011000" "10111110001101101001101101111000" "10111110100011110101101011110111" "10111110001010100100011110110101" "10111101101011001100001110110110" "10111101101110111001101111100111" "00111110101111001001100011011100" "00111110101010010011100101000010" "10111110011000010110001101010101" "10111101011011100101010011001111" "10111110010101100000110011001001" "00111110010010111001100101000001" "00111110101001000000011110101100" "00111101110001000000001001110010" "00111101101110011011100000100000" "10111101101001111001110000111011" "00111110001000111110010111111101" "10111101011100111100100101101111" "10111110001000010001111011000001" "00111110100110011101010101010001" "10111110010111100001111101010010" "00111100000101101011001001000110" "10111110101011001000100100000010" "10111101000100100000100111000111" "00111110101000000100100011000110" "10111110010100011000011101000010" "10111110100100010110100111100111" "00111101001001000010001010001010" "10111110101011000101011011011110" "00111101110101001110010101101110" "00111110100111001101101110000001" "00111101111100111110001011100111" "00111110100010100111101101111001" "00111101101100110011100010001100" "10111110001011001110010111010001" "00111101110010000000001000010101" "10111110101000011001001001010001" "00111101000010010000011001000101" "00111110010101111011000000000010" "10111110100101011101011011011101" "10111110100111011100110011001111" "10111110100110000011110000001111" "00111101111001001010001100010000" "10111110100110101101111011001100" "00111101110101100110110011010101" "00111101001000100111000010001011" "10111110101011101100111011100111" "10111110101000110001011011100101" "10111110001100101110000110001100" "00111100011000000111100110100111" "10111110100101000110100111111000" "00111110101001111000111011011111" "10111110101011111010000111000010" "00111110100100100110000000001001" "10111101101011001101110000100001" "10111110000010110000110111111000" "10111110010101111001011010111111" "00111110000010011000001111011111" "00111110101100010001000001000111" "00111110001101101011100000001100" "00111101100110001101100011101010" "00111110100000011110010100010001" "10111100110111000000111110011010" "00111110101011110010001110010001" "10111101111001111101110111100011" "10111110100101000001001110110000" "00111010100010111111110011000110" "00111110000110001010001011101011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.772
set ClkPeriod 10
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
    id 117 \
    name C_array \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename C_array \
    op interface \
    ports { C_array_address0 { O 4 vector } C_array_ce0 { O 1 bit } C_array_we0 { O 1 bit } C_array_d0 { O 32 vector } C_array_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'C_array'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 118 \
    name A_array \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_array \
    op interface \
    ports { A_array_address0 { O 5 vector } A_array_ce0 { O 1 bit } A_array_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
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
    id 120 \
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
    id 121 \
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
    id 122 \
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
    id 123 \
    name p_read2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_p_read2 \
    op interface \
    ports { p_read2 { I 64 vector } } \
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


