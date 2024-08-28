# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 274
set hasByteEnable 0
set MemName k2c_dense_2_dense6jw
set CoreName ap_simcore_mem
set PortList { 1 3 }
set DataWd 32
set AddrRange 32
set AddrWd 5
set impl_style block
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
    id 279 \
    name dense_14_output_arra_7 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra_7 \
    op interface \
    ports { dense_14_output_arra_7_address0 { O 2 vector } dense_14_output_arra_7_ce0 { O 1 bit } dense_14_output_arra_7_we0 { O 1 bit } dense_14_output_arra_7_d0 { O 32 vector } dense_14_output_arra_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 280 \
    name dense_14_output_arra_6 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra_6 \
    op interface \
    ports { dense_14_output_arra_6_address0 { O 2 vector } dense_14_output_arra_6_ce0 { O 1 bit } dense_14_output_arra_6_we0 { O 1 bit } dense_14_output_arra_6_d0 { O 32 vector } dense_14_output_arra_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 281 \
    name dense_14_output_arra_5 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra_5 \
    op interface \
    ports { dense_14_output_arra_5_address0 { O 2 vector } dense_14_output_arra_5_ce0 { O 1 bit } dense_14_output_arra_5_we0 { O 1 bit } dense_14_output_arra_5_d0 { O 32 vector } dense_14_output_arra_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 282 \
    name dense_14_output_arra_4 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra_4 \
    op interface \
    ports { dense_14_output_arra_4_address0 { O 2 vector } dense_14_output_arra_4_ce0 { O 1 bit } dense_14_output_arra_4_we0 { O 1 bit } dense_14_output_arra_4_d0 { O 32 vector } dense_14_output_arra_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 283 \
    name dense_14_output_arra_3 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra_3 \
    op interface \
    ports { dense_14_output_arra_3_address0 { O 2 vector } dense_14_output_arra_3_ce0 { O 1 bit } dense_14_output_arra_3_we0 { O 1 bit } dense_14_output_arra_3_d0 { O 32 vector } dense_14_output_arra_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 284 \
    name dense_14_output_arra_2 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra_2 \
    op interface \
    ports { dense_14_output_arra_2_address0 { O 2 vector } dense_14_output_arra_2_ce0 { O 1 bit } dense_14_output_arra_2_we0 { O 1 bit } dense_14_output_arra_2_d0 { O 32 vector } dense_14_output_arra_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 285 \
    name dense_14_output_arra_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra_1 \
    op interface \
    ports { dense_14_output_arra_1_address0 { O 2 vector } dense_14_output_arra_1_ce0 { O 1 bit } dense_14_output_arra_1_we0 { O 1 bit } dense_14_output_arra_1_d0 { O 32 vector } dense_14_output_arra_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 286 \
    name dense_14_output_arra \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename dense_14_output_arra \
    op interface \
    ports { dense_14_output_arra_address0 { O 2 vector } dense_14_output_arra_ce0 { O 1 bit } dense_14_output_arra_we0 { O 1 bit } dense_14_output_arra_d0 { O 32 vector } dense_14_output_arra_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_14_output_arra'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 287 \
    name dense_13_output_arra_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra_7 \
    op interface \
    ports { dense_13_output_arra_7_address0 { O 4 vector } dense_13_output_arra_7_ce0 { O 1 bit } dense_13_output_arra_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 288 \
    name dense_13_output_arra_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra_6 \
    op interface \
    ports { dense_13_output_arra_6_address0 { O 4 vector } dense_13_output_arra_6_ce0 { O 1 bit } dense_13_output_arra_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 289 \
    name dense_13_output_arra_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra_5 \
    op interface \
    ports { dense_13_output_arra_5_address0 { O 4 vector } dense_13_output_arra_5_ce0 { O 1 bit } dense_13_output_arra_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 290 \
    name dense_13_output_arra_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra_4 \
    op interface \
    ports { dense_13_output_arra_4_address0 { O 4 vector } dense_13_output_arra_4_ce0 { O 1 bit } dense_13_output_arra_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 291 \
    name dense_13_output_arra_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra_3 \
    op interface \
    ports { dense_13_output_arra_3_address0 { O 4 vector } dense_13_output_arra_3_ce0 { O 1 bit } dense_13_output_arra_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 292 \
    name dense_13_output_arra_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra_2 \
    op interface \
    ports { dense_13_output_arra_2_address0 { O 4 vector } dense_13_output_arra_2_ce0 { O 1 bit } dense_13_output_arra_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 293 \
    name dense_13_output_arra_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra_1 \
    op interface \
    ports { dense_13_output_arra_1_address0 { O 4 vector } dense_13_output_arra_1_ce0 { O 1 bit } dense_13_output_arra_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 294 \
    name dense_13_output_arra \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename dense_13_output_arra \
    op interface \
    ports { dense_13_output_arra_address0 { O 4 vector } dense_13_output_arra_ce0 { O 1 bit } dense_13_output_arra_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'dense_13_output_arra'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 275 \
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
    id 276 \
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
    id 277 \
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
    id 278 \
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


