# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 179
set hasByteEnable 0
set MemName k2c_bias_add_1_deWhU
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 32
set AddrRange 32
set AddrWd 5
set TrueReset 0
set IsROM 1
set ROMData { "00111011100100010001111010000011" "00111100111100110010011111101101" "00111011011100100001000110110010" "00111100011110011110000101100011" "00111010101111101110100110010000" "00111100011101010000100010000100" "00111101001011001010011000110010" "10111100001111100110010110110111" "00111011110111111001011111011100" "10111100100100010010001100000000" "00111100000100101000111010100101" "00111100110010010110110111011111" "10111011010000010001110100011000" "00111100110000011110101001011011" "00111101000010000011100111110010" "00111101000000101100011000011110" "10111011010010100100000100111111" "00111101001110110010111001000101" "00111101001000111000100111011100" "10111100011101110100011101111010" "00111010110001110111110010110100" "00111101010000000010010001111101" "10111100011000111100101111101000" "00111101001011101000000111110010" "00111101001001100101001101111001" "00111100100111111001101110010001" "00111101001010011000110001010110" "10111100000100101010010011101110" "00111101000001000111110010101100" "00111100011010101011010100111101" "10111100011000000010010111010010" "00111101001000011101000110101000" }
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
    id 180 \
    name A_array \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array \
    op interface \
    ports { A_array_address0 { O 2 vector } A_array_ce0 { O 1 bit } A_array_we0 { O 1 bit } A_array_d0 { O 32 vector } A_array_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 181 \
    name A_array1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array1 \
    op interface \
    ports { A_array1_address0 { O 2 vector } A_array1_ce0 { O 1 bit } A_array1_we0 { O 1 bit } A_array1_d0 { O 32 vector } A_array1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 182 \
    name A_array2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array2 \
    op interface \
    ports { A_array2_address0 { O 2 vector } A_array2_ce0 { O 1 bit } A_array2_we0 { O 1 bit } A_array2_d0 { O 32 vector } A_array2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 183 \
    name A_array3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array3 \
    op interface \
    ports { A_array3_address0 { O 2 vector } A_array3_ce0 { O 1 bit } A_array3_we0 { O 1 bit } A_array3_d0 { O 32 vector } A_array3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 184 \
    name A_array4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array4 \
    op interface \
    ports { A_array4_address0 { O 2 vector } A_array4_ce0 { O 1 bit } A_array4_we0 { O 1 bit } A_array4_d0 { O 32 vector } A_array4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 185 \
    name A_array5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array5 \
    op interface \
    ports { A_array5_address0 { O 2 vector } A_array5_ce0 { O 1 bit } A_array5_we0 { O 1 bit } A_array5_d0 { O 32 vector } A_array5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 186 \
    name A_array6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array6 \
    op interface \
    ports { A_array6_address0 { O 2 vector } A_array6_ce0 { O 1 bit } A_array6_we0 { O 1 bit } A_array6_d0 { O 32 vector } A_array6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 187 \
    name A_array7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename A_array7 \
    op interface \
    ports { A_array7_address0 { O 2 vector } A_array7_ce0 { O 1 bit } A_array7_we0 { O 1 bit } A_array7_d0 { O 32 vector } A_array7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_array7'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 188 \
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
    id 189 \
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


