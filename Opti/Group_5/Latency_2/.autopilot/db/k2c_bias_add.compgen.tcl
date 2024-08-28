# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 70
set hasByteEnable 0
set MemName k2c_bias_add_densvdy
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 128
set AddrWd 7
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
    id 71 \
    name A_array_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_0 \
    op interface \
    ports { A_array_0_address0 { O 4 vector } A_array_0_ce0 { O 1 bit } A_array_0_we0 { O 1 bit } A_array_0_d0 { O 32 vector } A_array_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 72 \
    name A_array_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_1 \
    op interface \
    ports { A_array_1_address0 { O 4 vector } A_array_1_ce0 { O 1 bit } A_array_1_we0 { O 1 bit } A_array_1_d0 { O 32 vector } A_array_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 73 \
    name A_array_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_2 \
    op interface \
    ports { A_array_2_address0 { O 4 vector } A_array_2_ce0 { O 1 bit } A_array_2_we0 { O 1 bit } A_array_2_d0 { O 32 vector } A_array_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 74 \
    name A_array_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_3 \
    op interface \
    ports { A_array_3_address0 { O 4 vector } A_array_3_ce0 { O 1 bit } A_array_3_we0 { O 1 bit } A_array_3_d0 { O 32 vector } A_array_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 75 \
    name A_array_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_4 \
    op interface \
    ports { A_array_4_address0 { O 4 vector } A_array_4_ce0 { O 1 bit } A_array_4_we0 { O 1 bit } A_array_4_d0 { O 32 vector } A_array_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 76 \
    name A_array_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_5 \
    op interface \
    ports { A_array_5_address0 { O 4 vector } A_array_5_ce0 { O 1 bit } A_array_5_we0 { O 1 bit } A_array_5_d0 { O 32 vector } A_array_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 77 \
    name A_array_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_6 \
    op interface \
    ports { A_array_6_address0 { O 4 vector } A_array_6_ce0 { O 1 bit } A_array_6_we0 { O 1 bit } A_array_6_d0 { O 32 vector } A_array_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 78 \
    name A_array_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array_7 \
    op interface \
    ports { A_array_7_address0 { O 4 vector } A_array_7_ce0 { O 1 bit } A_array_7_we0 { O 1 bit } A_array_7_d0 { O 32 vector } A_array_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array_7'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 79 \
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
    id 80 \
    name b_numel_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_numel_read \
    op interface \
    ports { b_numel_read { I 64 vector } } \
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


