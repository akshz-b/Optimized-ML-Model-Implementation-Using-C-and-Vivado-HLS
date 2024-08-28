# This script segment is generated automatically by AutoPilot

set id 134
set name sample_fcmp_32ns_Gfk
set corename simcore_fcmp
set op fcmp
set stage_num 2
set max_latency -1
set registered_input 1
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
set opcode_width 5
set opcode_signed 0
set out_width 1
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fcmp] == "ap_gen_simcore_fcmp"} {
eval "ap_gen_simcore_fcmp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
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
    opcode_width ${opcode_width} \
    opcode_signed ${opcode_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fcmp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fcmp
set corename FCmp
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
    opcode_width ${opcode_width} \
    opcode_signed ${opcode_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 138
set hasByteEnable 0
set MemName k2c_dense_3_denseFfa
set CoreName ap_simcore_mem
set PortList { 1 3 }
set DataWd 32
set AddrRange 128
set AddrWd 7
set impl_style block
set TrueReset 0
set IsROM 1
set ROMData { "00111011101000011110010011001100" "00111101001011100101000000110101" "10111011001110001101011100010010" "10111100001010101101101111111010" "00111100101100001011010100101000" "00111101011011111011101001010000" "00111100111001111110101110101100" "00111100100111010111111001011101" "10111100101101001000001000011110" "00111100011111110110101001001001" "10111011101010000111110100000100" "00111011111110000010101100111010" "00111100101001010000010101010110" "00111100110111110111111101010010" "00111101000100101100010101110001" "10111010000110100110101101111010" "00111100111100001001101110111010" "10111011111101001110001001010100" "00111101010110111111100010100110" "10111100100110110011100101101011" "00111100100110000100000011101001" "00111101010110010100110010101101" "10111101010010100110111010001010" "00111100000111011101101000110111" "00111100011100111011001001001101" "10111011000110010000110110001001" "10111100100010111011001100110010" "10111100101001100101110111010100" "00111101100000100100100011100010" "00111100111010000100010001011000" "00111010110111010101001101010001" "00111100100011101001010101011110" "00111101000010110110010100100011" "00111101000110000010100000101010" "00111011110101011010101101110000" "00111101100011101001111101111011" "10111100000111011100111110000001" "00111101000000011011101111010100" "10111100011110011001111000101011" "00111011100101001010000011001001" "10111100011011111111110010011010" "00111100111010011100001000011111" "00111100011110111110000111000010" "00111011000000001000111011110111" "00111100001110001110101000000111" "00111101001000001010010000000111" "00111101001001111001001100101010" "00111100111101010011001100011010" "00111100000110110001011100001010" "00111101100000011000011011010000" "10111101000011011000001101111001" "00111100110101101110101011101101" "10111100011101110000001101000100" "10111100001010100001101010100101" "10111100110110001101111001111110" "10111101010011000110011100010010" "00111101001101010111100110110111" "00111100111100011100001000000001" "00111100110001111010000111001111" "10111100111000010000000101110000" "00111100101100110100001011110100" "00111011101110100011110000011010" "00111101001000101100111011000101" "10111100000111101101101001100001" "00111101000101100111100101101101" "00111100101000111111010111010110" "00111100011101011011110110111100" "10111100100011001001010011001010" "00111100110001100011000101101101" "00111101000001011000101100001100" "10111101000000010111010111011101" "00111101011110111011100010000010" "00111100100101001011110110110001" "00111100000101110111000100111101" "00111101001101101100010010101101" "10111100111110011100000100111001" "00111100110100011110001011000110" "00111100111011100011000110111111" "10111100101010000011000000100001" "00111101000101001110111110111001" "00111100010111001110001001010011" "00111100101110110111111010011111" "00111100101010001100100111110010" "10111010100101100110100001010001" "10111100010010000011100010110100" "00111101001001111101111111011101" "10111101100011001000011011111000" "10111100101111111001010100110000" "00111101001001110101000001011011" "00111010100010001100111011011010" "00111101001100100100010011111000" "00111101001110001010010111100111" "10111100010001101111000000101010" "00111100111001111010100110100010" "00111101000100110111011000000100" "00111100111010110010011011000101" "00111100001001010110001010011011" "00111100111001011010000000000011" "00111101000001001100001100111000" "00111101011010110010001001110010" "10111100100100000111000010000111" "10111011101011011110110100001001" "10111010001000011010110111001010" "00111101100001111000000001100110" "00111100000110100111110001100011" "00111101000110011110001010010100" "00111010001111010110000010101000" "00111100010110111000001011110011" "00111101011010110100000100000011" "00111101010000000001000101010001" "00111101000011110101101001111010" "10111100111010001000011110111111" "00111101000001100110110101100010" "00111101000000110001111000111011" "00111100100110011010001010010101" "00111100110100110110111001111010" "00111100101101111111100010110011" "00111100100000101010101001000000" "00111100011011001101001110001010" "10111011011101110111110111011011" "00111100111001110000001001100101" "00111101000110111010001111010101" "00111101001110011100110001110011" "00111101011000100010011110110110" "10111100001001001111011001101011" "00111100101100110000100100110101" "10111010111000000101001011000100" "00111101010001100111011111101001" }
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
    id 140 \
    name input_array \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array \
    op interface \
    ports { input_array_address0 { O 4 vector } input_array_ce0 { O 1 bit } input_array_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 141 \
    name input_array8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array8 \
    op interface \
    ports { input_array8_address0 { O 4 vector } input_array8_ce0 { O 1 bit } input_array8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 142 \
    name input_array9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array9 \
    op interface \
    ports { input_array9_address0 { O 4 vector } input_array9_ce0 { O 1 bit } input_array9_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 143 \
    name input_array10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array10 \
    op interface \
    ports { input_array10_address0 { O 4 vector } input_array10_ce0 { O 1 bit } input_array10_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 144 \
    name input_array11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array11 \
    op interface \
    ports { input_array11_address0 { O 4 vector } input_array11_ce0 { O 1 bit } input_array11_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 145 \
    name input_array12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array12 \
    op interface \
    ports { input_array12_address0 { O 4 vector } input_array12_ce0 { O 1 bit } input_array12_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 146 \
    name input_array13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array13 \
    op interface \
    ports { input_array13_address0 { O 4 vector } input_array13_ce0 { O 1 bit } input_array13_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 147 \
    name input_array14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_array14 \
    op interface \
    ports { input_array14_address0 { O 4 vector } input_array14_ce0 { O 1 bit } input_array14_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_array14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 150 \
    name input_shape \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename input_shape \
    op interface \
    ports { input_shape_address0 { O 3 vector } input_shape_ce0 { O 1 bit } input_shape_q0 { I 64 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_shape'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 152 \
    name dense_13_output_arra_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra_7 \
    op interface \
    ports { dense_13_output_arra_7_address0 { O 4 vector } dense_13_output_arra_7_ce0 { O 1 bit } dense_13_output_arra_7_we0 { O 1 bit } dense_13_output_arra_7_d0 { O 32 vector } dense_13_output_arra_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 153 \
    name dense_13_output_arra_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra_6 \
    op interface \
    ports { dense_13_output_arra_6_address0 { O 4 vector } dense_13_output_arra_6_ce0 { O 1 bit } dense_13_output_arra_6_we0 { O 1 bit } dense_13_output_arra_6_d0 { O 32 vector } dense_13_output_arra_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 154 \
    name dense_13_output_arra_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra_5 \
    op interface \
    ports { dense_13_output_arra_5_address0 { O 4 vector } dense_13_output_arra_5_ce0 { O 1 bit } dense_13_output_arra_5_we0 { O 1 bit } dense_13_output_arra_5_d0 { O 32 vector } dense_13_output_arra_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 155 \
    name dense_13_output_arra_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra_4 \
    op interface \
    ports { dense_13_output_arra_4_address0 { O 4 vector } dense_13_output_arra_4_ce0 { O 1 bit } dense_13_output_arra_4_we0 { O 1 bit } dense_13_output_arra_4_d0 { O 32 vector } dense_13_output_arra_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 156 \
    name dense_13_output_arra_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra_3 \
    op interface \
    ports { dense_13_output_arra_3_address0 { O 4 vector } dense_13_output_arra_3_ce0 { O 1 bit } dense_13_output_arra_3_we0 { O 1 bit } dense_13_output_arra_3_d0 { O 32 vector } dense_13_output_arra_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 157 \
    name dense_13_output_arra_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra_2 \
    op interface \
    ports { dense_13_output_arra_2_address0 { O 4 vector } dense_13_output_arra_2_ce0 { O 1 bit } dense_13_output_arra_2_we0 { O 1 bit } dense_13_output_arra_2_d0 { O 32 vector } dense_13_output_arra_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 158 \
    name dense_13_output_arra_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra_1 \
    op interface \
    ports { dense_13_output_arra_1_address0 { O 4 vector } dense_13_output_arra_1_ce0 { O 1 bit } dense_13_output_arra_1_we0 { O 1 bit } dense_13_output_arra_1_d0 { O 32 vector } dense_13_output_arra_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 159 \
    name dense_13_output_arra \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_13_output_arra \
    op interface \
    ports { dense_13_output_arra_address0 { O 4 vector } dense_13_output_arra_ce0 { O 1 bit } dense_13_output_arra_we0 { O 1 bit } dense_13_output_arra_d0 { O 32 vector } dense_13_output_arra_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name output_numel_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_output_numel_read \
    op interface \
    ports { output_numel_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name input_dim \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_dim \
    op interface \
    ports { input_dim { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name input_numel_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_input_numel_read \
    op interface \
    ports { input_numel_read { I 64 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name kernel_dim \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_dim \
    op interface \
    ports { kernel_dim { I 64 vector } } \
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


