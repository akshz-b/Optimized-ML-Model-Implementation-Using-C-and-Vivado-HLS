create_project prj -part xc7a200tfbg676-2 -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "C:/Users/Ritik/OneDrive/Desktop/Group_5_final/Opti/Group_5/Latency_3/syn/verilog/sample_ap_fadd_7_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips sample_ap_fadd_7_full_dsp_32]]
}
source "C:/Users/Ritik/OneDrive/Desktop/Group_5_final/Opti/Group_5/Latency_3/syn/verilog/sample_ap_fcmp_0_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips sample_ap_fcmp_0_no_dsp_32]]
}
source "C:/Users/Ritik/OneDrive/Desktop/Group_5_final/Opti/Group_5/Latency_3/syn/verilog/sample_ap_fdiv_28_no_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips sample_ap_fdiv_28_no_dsp_32]]
}
source "C:/Users/Ritik/OneDrive/Desktop/Group_5_final/Opti/Group_5/Latency_3/syn/verilog/sample_ap_fexp_16_full_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips sample_ap_fexp_16_full_dsp_32]]
}
source "C:/Users/Ritik/OneDrive/Desktop/Group_5_final/Opti/Group_5/Latency_3/syn/verilog/sample_ap_fmul_3_max_dsp_32_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips sample_ap_fmul_3_max_dsp_32]]
}
