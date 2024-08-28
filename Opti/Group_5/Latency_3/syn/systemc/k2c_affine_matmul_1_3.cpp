#include "k2c_affine_matmul_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void k2c_affine_matmul_1::thread_A10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A10_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A10_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A10_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A10_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A10_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A10_ce0 = ap_const_logic_1;
    } else {
        A10_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_A11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A11_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A11_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A11_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A11_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A11_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A11_ce0 = ap_const_logic_1;
    } else {
        A11_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_A12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A12_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A12_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A12_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A12_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A12_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A12_ce0 = ap_const_logic_1;
    } else {
        A12_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_A13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A13_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A13_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A13_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A13_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A13_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A13_ce0 = ap_const_logic_1;
    } else {
        A13_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_A14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A14_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A14_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A14_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A14_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A14_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A14_ce0 = ap_const_logic_1;
    } else {
        A14_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_A8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A8_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A8_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A8_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A8_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A8_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A8_ce0 = ap_const_logic_1;
    } else {
        A8_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_A9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A9_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A9_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A9_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A9_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A9_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A9_ce0 = ap_const_logic_1;
    } else {
        A9_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_A_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        A_address0 =  (sc_lv<4>) (newIndex24_cast_fu_4247_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        A_address0 =  (sc_lv<4>) (newIndex22_cast_fu_3761_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A_address0 =  (sc_lv<4>) (newIndex20_cast_fu_3275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        A_address0 =  (sc_lv<4>) (newIndex_cast_fu_2761_p1.read());
    } else {
        A_address0 = "XXXX";
    }
}

void k2c_affine_matmul_1::thread_A_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        A_ce0 = ap_const_logic_1;
    } else {
        A_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C1_address0() {
    C1_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C1_ce0 = ap_const_logic_1;
    } else {
        C1_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C1_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C1_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C1_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C1_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C1_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C1_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C1_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C1_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C1_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C1_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C1_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C1_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C1_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C1_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C1_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C1_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C1_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C1_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C1_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C1_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C1_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C1_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C1_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C1_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C1_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C1_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C1_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C1_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C1_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C1_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C1_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C1_d0 = sum_2_reg_1239.read();
    } else {
        C1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C1_we0() {
    if (!esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        C1_we0 = ap_const_logic_1;
    } else {
        C1_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C2_address0() {
    C2_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C2_ce0 = ap_const_logic_1;
    } else {
        C2_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C2_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C2_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C2_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C2_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C2_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C2_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C2_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C2_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C2_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C2_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C2_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C2_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C2_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C2_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C2_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C2_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C2_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C2_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C2_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C2_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C2_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C2_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C2_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C2_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C2_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C2_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C2_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C2_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C2_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C2_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C2_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C2_d0 = sum_2_reg_1239.read();
    } else {
        C2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C2_we0() {
    if (!esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        C2_we0 = ap_const_logic_1;
    } else {
        C2_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C3_address0() {
    C3_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C3_ce0 = ap_const_logic_1;
    } else {
        C3_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C3_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C3_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C3_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C3_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C3_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C3_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C3_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C3_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C3_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C3_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C3_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C3_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C3_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C3_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C3_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C3_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C3_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C3_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C3_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C3_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C3_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C3_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C3_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C3_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C3_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C3_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C3_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C3_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C3_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C3_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C3_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C3_d0 = sum_2_reg_1239.read();
    } else {
        C3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C3_we0() {
    if (!esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        C3_we0 = ap_const_logic_1;
    } else {
        C3_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C4_address0() {
    C4_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C4_ce0 = ap_const_logic_1;
    } else {
        C4_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C4_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C4_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C4_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C4_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C4_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C4_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C4_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C4_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C4_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C4_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C4_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C4_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C4_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C4_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C4_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C4_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C4_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C4_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C4_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C4_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C4_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C4_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C4_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C4_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C4_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C4_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C4_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C4_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C4_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C4_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C4_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C4_d0 = sum_2_reg_1239.read();
    } else {
        C4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C4_we0() {
    if (!esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        C4_we0 = ap_const_logic_1;
    } else {
        C4_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C5_address0() {
    C5_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C5_ce0 = ap_const_logic_1;
    } else {
        C5_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C5_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C5_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C5_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C5_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C5_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C5_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C5_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C5_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C5_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C5_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C5_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C5_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C5_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C5_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C5_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C5_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C5_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C5_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C5_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C5_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C5_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C5_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C5_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C5_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C5_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C5_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C5_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C5_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C5_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C5_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C5_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C5_d0 = sum_2_reg_1239.read();
    } else {
        C5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C5_we0() {
    if (!esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        C5_we0 = ap_const_logic_1;
    } else {
        C5_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C6_address0() {
    C6_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C6_ce0 = ap_const_logic_1;
    } else {
        C6_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C6_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C6_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C6_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C6_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C6_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C6_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C6_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C6_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C6_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C6_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C6_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C6_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C6_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C6_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C6_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C6_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C6_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C6_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C6_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C6_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C6_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C6_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C6_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C6_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C6_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C6_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C6_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C6_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C6_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C6_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C6_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C6_d0 = sum_2_reg_1239.read();
    } else {
        C6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C6_we0() {
    if (!esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        C6_we0 = ap_const_logic_1;
    } else {
        C6_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C7_address0() {
    C7_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C7_ce0 = ap_const_logic_1;
    } else {
        C7_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C7_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C7_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C7_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C7_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C7_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C7_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C7_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C7_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C7_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C7_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C7_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C7_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C7_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C7_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C7_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C7_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C7_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C7_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C7_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C7_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C7_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C7_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C7_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C7_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C7_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C7_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C7_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C7_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C7_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C7_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C7_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C7_d0 = sum_2_reg_1239.read();
    } else {
        C7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C7_we0() {
    if (!esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
        C7_we0 = ap_const_logic_1;
    } else {
        C7_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C_address0() {
    C_address0 =  (sc_lv<2>) (ap_const_lv64_0);
}

void k2c_affine_matmul_1::thread_C_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C_ce0 = ap_const_logic_1;
    } else {
        C_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_C_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read())) {
        C_d0 = sum_2_3_7_reg_2565.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read())) {
        C_d0 = sum_2_3_6_reg_2535.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read())) {
        C_d0 = sum_2_3_5_reg_2505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read())) {
        C_d0 = sum_2_3_4_reg_2475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read())) {
        C_d0 = sum_2_3_3_reg_2445.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read())) {
        C_d0 = sum_2_3_2_reg_2415.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read())) {
        C_d0 = sum_2_3_1_reg_2385.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read())) {
        C_d0 = sum_2_3_reg_2355.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read())) {
        C_d0 = sum_2_2_7_reg_2193.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read())) {
        C_d0 = sum_2_2_6_reg_2163.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        C_d0 = sum_2_2_5_reg_2133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read())) {
        C_d0 = sum_2_2_4_reg_2103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C_d0 = sum_2_2_3_reg_2073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read())) {
        C_d0 = sum_2_2_2_reg_2043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read())) {
        C_d0 = sum_2_2_1_reg_2013.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read())) {
        C_d0 = sum_2_2_reg_1983.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read())) {
        C_d0 = sum_2_1_7_reg_1821.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read())) {
        C_d0 = sum_2_1_6_reg_1791.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        C_d0 = sum_2_1_5_reg_1761.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C_d0 = sum_2_1_4_reg_1731.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read())) {
        C_d0 = sum_2_1_3_reg_1701.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read())) {
        C_d0 = sum_2_1_2_reg_1671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read())) {
        C_d0 = sum_2_1_1_reg_1641.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read())) {
        C_d0 = sum_2_1_reg_1611.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read())) {
        C_d0 = sum_2_0_7_reg_1449.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read())) {
        C_d0 = sum_2_0_6_reg_1419.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read())) {
        C_d0 = sum_2_0_5_reg_1389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        C_d0 = sum_2_0_4_reg_1359.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        C_d0 = sum_2_0_3_reg_1329.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        C_d0 = sum_2_0_2_reg_1299.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        C_d0 = sum_2_0_1_reg_1269.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C_d0 = sum_2_reg_1239.read();
    } else {
        C_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_C_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state82.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state94.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state129.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state141.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state153.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state165.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state201.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state236.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state248.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state260.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state284.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state308.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state343.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state355.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state367.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state379.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state391.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state403.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state415.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state427.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state106.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state320.read()))) {
        C_we0 = ap_const_logic_1;
    } else {
        C_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_UnifiedRetVal_i4_fu_2903_p3() {
    UnifiedRetVal_i4_fu_2903_p3 = (!sel_tmp12_i4_fu_2898_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp12_i4_fu_2898_p2.read()[0].to_bool())? dense_14_kernel_arra_1_q0.read(): sel_tmp11_i4_fu_2890_p3.read());
}

void k2c_affine_matmul_1::thread_UnifiedRetVal_i5_fu_3879_p3() {
    UnifiedRetVal_i5_fu_3879_p3 = (!sel_tmp12_i5_fu_3874_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp12_i5_fu_3874_p2.read()[0].to_bool())? dense_14_kernel_arra_1_q0.read(): sel_tmp11_i5_fu_3866_p3.read());
}

void k2c_affine_matmul_1::thread_UnifiedRetVal_i6_fu_4365_p3() {
    UnifiedRetVal_i6_fu_4365_p3 = (!sel_tmp12_i6_fu_4360_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp12_i6_fu_4360_p2.read()[0].to_bool())? dense_14_kernel_arra_1_q0.read(): sel_tmp11_i6_fu_4352_p3.read());
}

void k2c_affine_matmul_1::thread_UnifiedRetVal_i_fu_3393_p3() {
    UnifiedRetVal_i_fu_3393_p3 = (!sel_tmp12_i_fu_3388_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp12_i_fu_3388_p2.read()[0].to_bool())? dense_14_kernel_arra_1_q0.read(): sel_tmp11_i_fu_3380_p3.read());
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[10];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp10_stage0() {
    ap_CS_fsm_pp10_stage0 = ap_CS_fsm.read()[41];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp11_stage0() {
    ap_CS_fsm_pp11_stage0 = ap_CS_fsm.read()[43];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp12_stage0() {
    ap_CS_fsm_pp12_stage0 = ap_CS_fsm.read()[45];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp13_stage0() {
    ap_CS_fsm_pp13_stage0 = ap_CS_fsm.read()[47];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp14_stage0() {
    ap_CS_fsm_pp14_stage0 = ap_CS_fsm.read()[49];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp15_stage0() {
    ap_CS_fsm_pp15_stage0 = ap_CS_fsm.read()[51];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp16_stage0() {
    ap_CS_fsm_pp16_stage0 = ap_CS_fsm.read()[64];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp17_stage0() {
    ap_CS_fsm_pp17_stage0 = ap_CS_fsm.read()[66];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp18_stage0() {
    ap_CS_fsm_pp18_stage0 = ap_CS_fsm.read()[68];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp19_stage0() {
    ap_CS_fsm_pp19_stage0 = ap_CS_fsm.read()[70];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[12];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp20_stage0() {
    ap_CS_fsm_pp20_stage0 = ap_CS_fsm.read()[72];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp21_stage0() {
    ap_CS_fsm_pp21_stage0 = ap_CS_fsm.read()[74];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp22_stage0() {
    ap_CS_fsm_pp22_stage0 = ap_CS_fsm.read()[76];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp23_stage0() {
    ap_CS_fsm_pp23_stage0 = ap_CS_fsm.read()[78];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp24_stage0() {
    ap_CS_fsm_pp24_stage0 = ap_CS_fsm.read()[91];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp25_stage0() {
    ap_CS_fsm_pp25_stage0 = ap_CS_fsm.read()[93];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp26_stage0() {
    ap_CS_fsm_pp26_stage0 = ap_CS_fsm.read()[95];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp27_stage0() {
    ap_CS_fsm_pp27_stage0 = ap_CS_fsm.read()[97];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp28_stage0() {
    ap_CS_fsm_pp28_stage0 = ap_CS_fsm.read()[99];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp29_stage0() {
    ap_CS_fsm_pp29_stage0 = ap_CS_fsm.read()[101];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[14];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp30_stage0() {
    ap_CS_fsm_pp30_stage0 = ap_CS_fsm.read()[103];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp31_stage0() {
    ap_CS_fsm_pp31_stage0 = ap_CS_fsm.read()[105];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[16];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[18];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[20];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[22];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[24];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[37];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_pp9_stage0() {
    ap_CS_fsm_pp9_stage0 = ap_CS_fsm.read()[39];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[25];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[26];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state108() {
    ap_CS_fsm_state108 = ap_CS_fsm.read()[27];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[28];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[29];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[30];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[31];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[35];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[36];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state129() {
    ap_CS_fsm_state129 = ap_CS_fsm.read()[38];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[40];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state153() {
    ap_CS_fsm_state153 = ap_CS_fsm.read()[42];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state165() {
    ap_CS_fsm_state165 = ap_CS_fsm.read()[44];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[46];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state189() {
    ap_CS_fsm_state189 = ap_CS_fsm.read()[48];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state201() {
    ap_CS_fsm_state201 = ap_CS_fsm.read()[50];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state213() {
    ap_CS_fsm_state213 = ap_CS_fsm.read()[52];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state214() {
    ap_CS_fsm_state214 = ap_CS_fsm.read()[53];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state215() {
    ap_CS_fsm_state215 = ap_CS_fsm.read()[54];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state216() {
    ap_CS_fsm_state216 = ap_CS_fsm.read()[55];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state217() {
    ap_CS_fsm_state217 = ap_CS_fsm.read()[56];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state218() {
    ap_CS_fsm_state218 = ap_CS_fsm.read()[57];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state219() {
    ap_CS_fsm_state219 = ap_CS_fsm.read()[58];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[11];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state223() {
    ap_CS_fsm_state223 = ap_CS_fsm.read()[62];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[63];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state236() {
    ap_CS_fsm_state236 = ap_CS_fsm.read()[65];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state248() {
    ap_CS_fsm_state248 = ap_CS_fsm.read()[67];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state260() {
    ap_CS_fsm_state260 = ap_CS_fsm.read()[69];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state272() {
    ap_CS_fsm_state272 = ap_CS_fsm.read()[71];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state284() {
    ap_CS_fsm_state284 = ap_CS_fsm.read()[73];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state296() {
    ap_CS_fsm_state296 = ap_CS_fsm.read()[75];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state308() {
    ap_CS_fsm_state308 = ap_CS_fsm.read()[77];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state320() {
    ap_CS_fsm_state320 = ap_CS_fsm.read()[79];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state321() {
    ap_CS_fsm_state321 = ap_CS_fsm.read()[80];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state322() {
    ap_CS_fsm_state322 = ap_CS_fsm.read()[81];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state323() {
    ap_CS_fsm_state323 = ap_CS_fsm.read()[82];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state324() {
    ap_CS_fsm_state324 = ap_CS_fsm.read()[83];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state325() {
    ap_CS_fsm_state325 = ap_CS_fsm.read()[84];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state326() {
    ap_CS_fsm_state326 = ap_CS_fsm.read()[85];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state330() {
    ap_CS_fsm_state330 = ap_CS_fsm.read()[89];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state331() {
    ap_CS_fsm_state331 = ap_CS_fsm.read()[90];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[13];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state343() {
    ap_CS_fsm_state343 = ap_CS_fsm.read()[92];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state355() {
    ap_CS_fsm_state355 = ap_CS_fsm.read()[94];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state367() {
    ap_CS_fsm_state367 = ap_CS_fsm.read()[96];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state379() {
    ap_CS_fsm_state379 = ap_CS_fsm.read()[98];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state391() {
    ap_CS_fsm_state391 = ap_CS_fsm.read()[100];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state403() {
    ap_CS_fsm_state403 = ap_CS_fsm.read()[102];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state415() {
    ap_CS_fsm_state415 = ap_CS_fsm.read()[104];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state427() {
    ap_CS_fsm_state427 = ap_CS_fsm.read()[106];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state428() {
    ap_CS_fsm_state428 = ap_CS_fsm.read()[107];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[15];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[17];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state70() {
    ap_CS_fsm_state70 = ap_CS_fsm.read()[19];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state82() {
    ap_CS_fsm_state82 = ap_CS_fsm.read()[21];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void k2c_affine_matmul_1::thread_ap_CS_fsm_state94() {
    ap_CS_fsm_state94 = ap_CS_fsm.read()[23];
}

void k2c_affine_matmul_1::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp10_stage0() {
    ap_block_pp10_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp10_stage0_11001() {
    ap_block_pp10_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp10_stage0_subdone() {
    ap_block_pp10_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp11_stage0() {
    ap_block_pp11_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp11_stage0_11001() {
    ap_block_pp11_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp11_stage0_subdone() {
    ap_block_pp11_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp12_stage0() {
    ap_block_pp12_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp12_stage0_11001() {
    ap_block_pp12_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp12_stage0_subdone() {
    ap_block_pp12_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp13_stage0() {
    ap_block_pp13_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp13_stage0_11001() {
    ap_block_pp13_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp13_stage0_subdone() {
    ap_block_pp13_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp14_stage0() {
    ap_block_pp14_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp14_stage0_11001() {
    ap_block_pp14_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp14_stage0_subdone() {
    ap_block_pp14_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp15_stage0() {
    ap_block_pp15_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp15_stage0_11001() {
    ap_block_pp15_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp15_stage0_subdone() {
    ap_block_pp15_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp16_stage0() {
    ap_block_pp16_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp16_stage0_11001() {
    ap_block_pp16_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp16_stage0_subdone() {
    ap_block_pp16_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp17_stage0() {
    ap_block_pp17_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp17_stage0_11001() {
    ap_block_pp17_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp17_stage0_subdone() {
    ap_block_pp17_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp18_stage0() {
    ap_block_pp18_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp18_stage0_11001() {
    ap_block_pp18_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp18_stage0_subdone() {
    ap_block_pp18_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp19_stage0() {
    ap_block_pp19_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp19_stage0_11001() {
    ap_block_pp19_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp19_stage0_subdone() {
    ap_block_pp19_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp20_stage0() {
    ap_block_pp20_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp20_stage0_11001() {
    ap_block_pp20_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp20_stage0_subdone() {
    ap_block_pp20_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp21_stage0() {
    ap_block_pp21_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp21_stage0_11001() {
    ap_block_pp21_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp21_stage0_subdone() {
    ap_block_pp21_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp22_stage0() {
    ap_block_pp22_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp22_stage0_11001() {
    ap_block_pp22_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp22_stage0_subdone() {
    ap_block_pp22_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp23_stage0() {
    ap_block_pp23_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp23_stage0_11001() {
    ap_block_pp23_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp23_stage0_subdone() {
    ap_block_pp23_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp24_stage0() {
    ap_block_pp24_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp24_stage0_11001() {
    ap_block_pp24_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp24_stage0_subdone() {
    ap_block_pp24_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp25_stage0() {
    ap_block_pp25_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp25_stage0_11001() {
    ap_block_pp25_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp25_stage0_subdone() {
    ap_block_pp25_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp26_stage0() {
    ap_block_pp26_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp26_stage0_11001() {
    ap_block_pp26_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp26_stage0_subdone() {
    ap_block_pp26_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp27_stage0() {
    ap_block_pp27_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp27_stage0_11001() {
    ap_block_pp27_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp27_stage0_subdone() {
    ap_block_pp27_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp28_stage0() {
    ap_block_pp28_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp28_stage0_11001() {
    ap_block_pp28_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp28_stage0_subdone() {
    ap_block_pp28_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp29_stage0() {
    ap_block_pp29_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp29_stage0_11001() {
    ap_block_pp29_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp29_stage0_subdone() {
    ap_block_pp29_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp30_stage0() {
    ap_block_pp30_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp30_stage0_11001() {
    ap_block_pp30_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp30_stage0_subdone() {
    ap_block_pp30_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp31_stage0() {
    ap_block_pp31_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp31_stage0_11001() {
    ap_block_pp31_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp31_stage0_subdone() {
    ap_block_pp31_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp8_stage0() {
    ap_block_pp8_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp8_stage0_11001() {
    ap_block_pp8_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp8_stage0_subdone() {
    ap_block_pp8_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp9_stage0() {
    ap_block_pp9_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp9_stage0_11001() {
    ap_block_pp9_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_pp9_stage0_subdone() {
    ap_block_pp9_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state100_pp7_stage0_iter5() {
    ap_block_state100_pp7_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state101_pp7_stage0_iter6() {
    ap_block_state101_pp7_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state102_pp7_stage0_iter7() {
    ap_block_state102_pp7_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state103_pp7_stage0_iter8() {
    ap_block_state103_pp7_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state104_pp7_stage0_iter9() {
    ap_block_state104_pp7_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state105_pp7_stage0_iter10() {
    ap_block_state105_pp7_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state118_pp8_stage0_iter0() {
    ap_block_state118_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state119_pp8_stage0_iter1() {
    ap_block_state119_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state11_pp0_stage0_iter0() {
    ap_block_state11_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state120_pp8_stage0_iter2() {
    ap_block_state120_pp8_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state121_pp8_stage0_iter3() {
    ap_block_state121_pp8_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state122_pp8_stage0_iter4() {
    ap_block_state122_pp8_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state123_pp8_stage0_iter5() {
    ap_block_state123_pp8_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state124_pp8_stage0_iter6() {
    ap_block_state124_pp8_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state125_pp8_stage0_iter7() {
    ap_block_state125_pp8_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state126_pp8_stage0_iter8() {
    ap_block_state126_pp8_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state127_pp8_stage0_iter9() {
    ap_block_state127_pp8_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state128_pp8_stage0_iter10() {
    ap_block_state128_pp8_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state12_pp0_stage0_iter1() {
    ap_block_state12_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state130_pp9_stage0_iter0() {
    ap_block_state130_pp9_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state131_pp9_stage0_iter1() {
    ap_block_state131_pp9_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state132_pp9_stage0_iter2() {
    ap_block_state132_pp9_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state133_pp9_stage0_iter3() {
    ap_block_state133_pp9_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state134_pp9_stage0_iter4() {
    ap_block_state134_pp9_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state135_pp9_stage0_iter5() {
    ap_block_state135_pp9_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state136_pp9_stage0_iter6() {
    ap_block_state136_pp9_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state137_pp9_stage0_iter7() {
    ap_block_state137_pp9_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state138_pp9_stage0_iter8() {
    ap_block_state138_pp9_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state139_pp9_stage0_iter9() {
    ap_block_state139_pp9_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state13_pp0_stage0_iter2() {
    ap_block_state13_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state140_pp9_stage0_iter10() {
    ap_block_state140_pp9_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state142_pp10_stage0_iter0() {
    ap_block_state142_pp10_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state143_pp10_stage0_iter1() {
    ap_block_state143_pp10_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state144_pp10_stage0_iter2() {
    ap_block_state144_pp10_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state145_pp10_stage0_iter3() {
    ap_block_state145_pp10_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state146_pp10_stage0_iter4() {
    ap_block_state146_pp10_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state147_pp10_stage0_iter5() {
    ap_block_state147_pp10_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state148_pp10_stage0_iter6() {
    ap_block_state148_pp10_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state149_pp10_stage0_iter7() {
    ap_block_state149_pp10_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state14_pp0_stage0_iter3() {
    ap_block_state14_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state150_pp10_stage0_iter8() {
    ap_block_state150_pp10_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state151_pp10_stage0_iter9() {
    ap_block_state151_pp10_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state152_pp10_stage0_iter10() {
    ap_block_state152_pp10_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state154_pp11_stage0_iter0() {
    ap_block_state154_pp11_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state155_pp11_stage0_iter1() {
    ap_block_state155_pp11_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state156_pp11_stage0_iter2() {
    ap_block_state156_pp11_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state157_pp11_stage0_iter3() {
    ap_block_state157_pp11_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state158_pp11_stage0_iter4() {
    ap_block_state158_pp11_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state159_pp11_stage0_iter5() {
    ap_block_state159_pp11_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state15_pp0_stage0_iter4() {
    ap_block_state15_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state160_pp11_stage0_iter6() {
    ap_block_state160_pp11_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state161_pp11_stage0_iter7() {
    ap_block_state161_pp11_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state162_pp11_stage0_iter8() {
    ap_block_state162_pp11_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state163_pp11_stage0_iter9() {
    ap_block_state163_pp11_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state164_pp11_stage0_iter10() {
    ap_block_state164_pp11_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state166_pp12_stage0_iter0() {
    ap_block_state166_pp12_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state167_pp12_stage0_iter1() {
    ap_block_state167_pp12_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state168_pp12_stage0_iter2() {
    ap_block_state168_pp12_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state169_pp12_stage0_iter3() {
    ap_block_state169_pp12_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state16_pp0_stage0_iter5() {
    ap_block_state16_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state170_pp12_stage0_iter4() {
    ap_block_state170_pp12_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state171_pp12_stage0_iter5() {
    ap_block_state171_pp12_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state172_pp12_stage0_iter6() {
    ap_block_state172_pp12_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state173_pp12_stage0_iter7() {
    ap_block_state173_pp12_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state174_pp12_stage0_iter8() {
    ap_block_state174_pp12_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state175_pp12_stage0_iter9() {
    ap_block_state175_pp12_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state176_pp12_stage0_iter10() {
    ap_block_state176_pp12_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state178_pp13_stage0_iter0() {
    ap_block_state178_pp13_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state179_pp13_stage0_iter1() {
    ap_block_state179_pp13_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state17_pp0_stage0_iter6() {
    ap_block_state17_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state180_pp13_stage0_iter2() {
    ap_block_state180_pp13_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state181_pp13_stage0_iter3() {
    ap_block_state181_pp13_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state182_pp13_stage0_iter4() {
    ap_block_state182_pp13_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state183_pp13_stage0_iter5() {
    ap_block_state183_pp13_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state184_pp13_stage0_iter6() {
    ap_block_state184_pp13_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state185_pp13_stage0_iter7() {
    ap_block_state185_pp13_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state186_pp13_stage0_iter8() {
    ap_block_state186_pp13_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state187_pp13_stage0_iter9() {
    ap_block_state187_pp13_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state188_pp13_stage0_iter10() {
    ap_block_state188_pp13_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state18_pp0_stage0_iter7() {
    ap_block_state18_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state190_pp14_stage0_iter0() {
    ap_block_state190_pp14_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state191_pp14_stage0_iter1() {
    ap_block_state191_pp14_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state192_pp14_stage0_iter2() {
    ap_block_state192_pp14_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state193_pp14_stage0_iter3() {
    ap_block_state193_pp14_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state194_pp14_stage0_iter4() {
    ap_block_state194_pp14_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state195_pp14_stage0_iter5() {
    ap_block_state195_pp14_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state196_pp14_stage0_iter6() {
    ap_block_state196_pp14_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state197_pp14_stage0_iter7() {
    ap_block_state197_pp14_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state198_pp14_stage0_iter8() {
    ap_block_state198_pp14_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state199_pp14_stage0_iter9() {
    ap_block_state199_pp14_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state19_pp0_stage0_iter8() {
    ap_block_state19_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state200_pp14_stage0_iter10() {
    ap_block_state200_pp14_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state202_pp15_stage0_iter0() {
    ap_block_state202_pp15_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state203_pp15_stage0_iter1() {
    ap_block_state203_pp15_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state204_pp15_stage0_iter2() {
    ap_block_state204_pp15_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state205_pp15_stage0_iter3() {
    ap_block_state205_pp15_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state206_pp15_stage0_iter4() {
    ap_block_state206_pp15_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state207_pp15_stage0_iter5() {
    ap_block_state207_pp15_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state208_pp15_stage0_iter6() {
    ap_block_state208_pp15_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state209_pp15_stage0_iter7() {
    ap_block_state209_pp15_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state20_pp0_stage0_iter9() {
    ap_block_state20_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state210_pp15_stage0_iter8() {
    ap_block_state210_pp15_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state211_pp15_stage0_iter9() {
    ap_block_state211_pp15_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state212_pp15_stage0_iter10() {
    ap_block_state212_pp15_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state21_pp0_stage0_iter10() {
    ap_block_state21_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state225_pp16_stage0_iter0() {
    ap_block_state225_pp16_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state226_pp16_stage0_iter1() {
    ap_block_state226_pp16_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state227_pp16_stage0_iter2() {
    ap_block_state227_pp16_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state228_pp16_stage0_iter3() {
    ap_block_state228_pp16_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state229_pp16_stage0_iter4() {
    ap_block_state229_pp16_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state230_pp16_stage0_iter5() {
    ap_block_state230_pp16_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state231_pp16_stage0_iter6() {
    ap_block_state231_pp16_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state232_pp16_stage0_iter7() {
    ap_block_state232_pp16_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state233_pp16_stage0_iter8() {
    ap_block_state233_pp16_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state234_pp16_stage0_iter9() {
    ap_block_state234_pp16_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state235_pp16_stage0_iter10() {
    ap_block_state235_pp16_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state237_pp17_stage0_iter0() {
    ap_block_state237_pp17_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state238_pp17_stage0_iter1() {
    ap_block_state238_pp17_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state239_pp17_stage0_iter2() {
    ap_block_state239_pp17_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state23_pp1_stage0_iter0() {
    ap_block_state23_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state240_pp17_stage0_iter3() {
    ap_block_state240_pp17_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state241_pp17_stage0_iter4() {
    ap_block_state241_pp17_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state242_pp17_stage0_iter5() {
    ap_block_state242_pp17_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state243_pp17_stage0_iter6() {
    ap_block_state243_pp17_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state244_pp17_stage0_iter7() {
    ap_block_state244_pp17_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state245_pp17_stage0_iter8() {
    ap_block_state245_pp17_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state246_pp17_stage0_iter9() {
    ap_block_state246_pp17_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state247_pp17_stage0_iter10() {
    ap_block_state247_pp17_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state249_pp18_stage0_iter0() {
    ap_block_state249_pp18_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state24_pp1_stage0_iter1() {
    ap_block_state24_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state250_pp18_stage0_iter1() {
    ap_block_state250_pp18_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state251_pp18_stage0_iter2() {
    ap_block_state251_pp18_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state252_pp18_stage0_iter3() {
    ap_block_state252_pp18_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state253_pp18_stage0_iter4() {
    ap_block_state253_pp18_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state254_pp18_stage0_iter5() {
    ap_block_state254_pp18_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state255_pp18_stage0_iter6() {
    ap_block_state255_pp18_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state256_pp18_stage0_iter7() {
    ap_block_state256_pp18_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state257_pp18_stage0_iter8() {
    ap_block_state257_pp18_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state258_pp18_stage0_iter9() {
    ap_block_state258_pp18_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state259_pp18_stage0_iter10() {
    ap_block_state259_pp18_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state25_pp1_stage0_iter2() {
    ap_block_state25_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state261_pp19_stage0_iter0() {
    ap_block_state261_pp19_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state262_pp19_stage0_iter1() {
    ap_block_state262_pp19_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state263_pp19_stage0_iter2() {
    ap_block_state263_pp19_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state264_pp19_stage0_iter3() {
    ap_block_state264_pp19_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state265_pp19_stage0_iter4() {
    ap_block_state265_pp19_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state266_pp19_stage0_iter5() {
    ap_block_state266_pp19_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state267_pp19_stage0_iter6() {
    ap_block_state267_pp19_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state268_pp19_stage0_iter7() {
    ap_block_state268_pp19_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state269_pp19_stage0_iter8() {
    ap_block_state269_pp19_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state26_pp1_stage0_iter3() {
    ap_block_state26_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state270_pp19_stage0_iter9() {
    ap_block_state270_pp19_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state271_pp19_stage0_iter10() {
    ap_block_state271_pp19_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state273_pp20_stage0_iter0() {
    ap_block_state273_pp20_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state274_pp20_stage0_iter1() {
    ap_block_state274_pp20_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state275_pp20_stage0_iter2() {
    ap_block_state275_pp20_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state276_pp20_stage0_iter3() {
    ap_block_state276_pp20_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state277_pp20_stage0_iter4() {
    ap_block_state277_pp20_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state278_pp20_stage0_iter5() {
    ap_block_state278_pp20_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state279_pp20_stage0_iter6() {
    ap_block_state279_pp20_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state27_pp1_stage0_iter4() {
    ap_block_state27_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state280_pp20_stage0_iter7() {
    ap_block_state280_pp20_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state281_pp20_stage0_iter8() {
    ap_block_state281_pp20_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state282_pp20_stage0_iter9() {
    ap_block_state282_pp20_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state283_pp20_stage0_iter10() {
    ap_block_state283_pp20_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state285_pp21_stage0_iter0() {
    ap_block_state285_pp21_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state286_pp21_stage0_iter1() {
    ap_block_state286_pp21_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state287_pp21_stage0_iter2() {
    ap_block_state287_pp21_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state288_pp21_stage0_iter3() {
    ap_block_state288_pp21_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state289_pp21_stage0_iter4() {
    ap_block_state289_pp21_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state28_pp1_stage0_iter5() {
    ap_block_state28_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state290_pp21_stage0_iter5() {
    ap_block_state290_pp21_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state291_pp21_stage0_iter6() {
    ap_block_state291_pp21_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state292_pp21_stage0_iter7() {
    ap_block_state292_pp21_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state293_pp21_stage0_iter8() {
    ap_block_state293_pp21_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state294_pp21_stage0_iter9() {
    ap_block_state294_pp21_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state295_pp21_stage0_iter10() {
    ap_block_state295_pp21_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state297_pp22_stage0_iter0() {
    ap_block_state297_pp22_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state298_pp22_stage0_iter1() {
    ap_block_state298_pp22_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state299_pp22_stage0_iter2() {
    ap_block_state299_pp22_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state29_pp1_stage0_iter6() {
    ap_block_state29_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state300_pp22_stage0_iter3() {
    ap_block_state300_pp22_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state301_pp22_stage0_iter4() {
    ap_block_state301_pp22_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state302_pp22_stage0_iter5() {
    ap_block_state302_pp22_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state303_pp22_stage0_iter6() {
    ap_block_state303_pp22_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state304_pp22_stage0_iter7() {
    ap_block_state304_pp22_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state305_pp22_stage0_iter8() {
    ap_block_state305_pp22_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state306_pp22_stage0_iter9() {
    ap_block_state306_pp22_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state307_pp22_stage0_iter10() {
    ap_block_state307_pp22_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state309_pp23_stage0_iter0() {
    ap_block_state309_pp23_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state30_pp1_stage0_iter7() {
    ap_block_state30_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state310_pp23_stage0_iter1() {
    ap_block_state310_pp23_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state311_pp23_stage0_iter2() {
    ap_block_state311_pp23_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state312_pp23_stage0_iter3() {
    ap_block_state312_pp23_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state313_pp23_stage0_iter4() {
    ap_block_state313_pp23_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state314_pp23_stage0_iter5() {
    ap_block_state314_pp23_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state315_pp23_stage0_iter6() {
    ap_block_state315_pp23_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state316_pp23_stage0_iter7() {
    ap_block_state316_pp23_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state317_pp23_stage0_iter8() {
    ap_block_state317_pp23_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state318_pp23_stage0_iter9() {
    ap_block_state318_pp23_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state319_pp23_stage0_iter10() {
    ap_block_state319_pp23_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state31_pp1_stage0_iter8() {
    ap_block_state31_pp1_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state32_pp1_stage0_iter9() {
    ap_block_state32_pp1_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state332_pp24_stage0_iter0() {
    ap_block_state332_pp24_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state333_pp24_stage0_iter1() {
    ap_block_state333_pp24_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state334_pp24_stage0_iter2() {
    ap_block_state334_pp24_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state335_pp24_stage0_iter3() {
    ap_block_state335_pp24_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state336_pp24_stage0_iter4() {
    ap_block_state336_pp24_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state337_pp24_stage0_iter5() {
    ap_block_state337_pp24_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state338_pp24_stage0_iter6() {
    ap_block_state338_pp24_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state339_pp24_stage0_iter7() {
    ap_block_state339_pp24_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state33_pp1_stage0_iter10() {
    ap_block_state33_pp1_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state340_pp24_stage0_iter8() {
    ap_block_state340_pp24_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state341_pp24_stage0_iter9() {
    ap_block_state341_pp24_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state342_pp24_stage0_iter10() {
    ap_block_state342_pp24_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state344_pp25_stage0_iter0() {
    ap_block_state344_pp25_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state345_pp25_stage0_iter1() {
    ap_block_state345_pp25_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state346_pp25_stage0_iter2() {
    ap_block_state346_pp25_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state347_pp25_stage0_iter3() {
    ap_block_state347_pp25_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state348_pp25_stage0_iter4() {
    ap_block_state348_pp25_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state349_pp25_stage0_iter5() {
    ap_block_state349_pp25_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state350_pp25_stage0_iter6() {
    ap_block_state350_pp25_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state351_pp25_stage0_iter7() {
    ap_block_state351_pp25_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state352_pp25_stage0_iter8() {
    ap_block_state352_pp25_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state353_pp25_stage0_iter9() {
    ap_block_state353_pp25_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state354_pp25_stage0_iter10() {
    ap_block_state354_pp25_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state356_pp26_stage0_iter0() {
    ap_block_state356_pp26_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state357_pp26_stage0_iter1() {
    ap_block_state357_pp26_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state358_pp26_stage0_iter2() {
    ap_block_state358_pp26_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state359_pp26_stage0_iter3() {
    ap_block_state359_pp26_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state35_pp2_stage0_iter0() {
    ap_block_state35_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state360_pp26_stage0_iter4() {
    ap_block_state360_pp26_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state361_pp26_stage0_iter5() {
    ap_block_state361_pp26_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state362_pp26_stage0_iter6() {
    ap_block_state362_pp26_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state363_pp26_stage0_iter7() {
    ap_block_state363_pp26_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state364_pp26_stage0_iter8() {
    ap_block_state364_pp26_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state365_pp26_stage0_iter9() {
    ap_block_state365_pp26_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state366_pp26_stage0_iter10() {
    ap_block_state366_pp26_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state368_pp27_stage0_iter0() {
    ap_block_state368_pp27_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state369_pp27_stage0_iter1() {
    ap_block_state369_pp27_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state36_pp2_stage0_iter1() {
    ap_block_state36_pp2_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state370_pp27_stage0_iter2() {
    ap_block_state370_pp27_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state371_pp27_stage0_iter3() {
    ap_block_state371_pp27_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state372_pp27_stage0_iter4() {
    ap_block_state372_pp27_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state373_pp27_stage0_iter5() {
    ap_block_state373_pp27_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state374_pp27_stage0_iter6() {
    ap_block_state374_pp27_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state375_pp27_stage0_iter7() {
    ap_block_state375_pp27_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state376_pp27_stage0_iter8() {
    ap_block_state376_pp27_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state377_pp27_stage0_iter9() {
    ap_block_state377_pp27_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state378_pp27_stage0_iter10() {
    ap_block_state378_pp27_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state37_pp2_stage0_iter2() {
    ap_block_state37_pp2_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state380_pp28_stage0_iter0() {
    ap_block_state380_pp28_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state381_pp28_stage0_iter1() {
    ap_block_state381_pp28_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state382_pp28_stage0_iter2() {
    ap_block_state382_pp28_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state383_pp28_stage0_iter3() {
    ap_block_state383_pp28_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state384_pp28_stage0_iter4() {
    ap_block_state384_pp28_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state385_pp28_stage0_iter5() {
    ap_block_state385_pp28_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state386_pp28_stage0_iter6() {
    ap_block_state386_pp28_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state387_pp28_stage0_iter7() {
    ap_block_state387_pp28_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state388_pp28_stage0_iter8() {
    ap_block_state388_pp28_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state389_pp28_stage0_iter9() {
    ap_block_state389_pp28_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state38_pp2_stage0_iter3() {
    ap_block_state38_pp2_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state390_pp28_stage0_iter10() {
    ap_block_state390_pp28_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state392_pp29_stage0_iter0() {
    ap_block_state392_pp29_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state393_pp29_stage0_iter1() {
    ap_block_state393_pp29_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state394_pp29_stage0_iter2() {
    ap_block_state394_pp29_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state395_pp29_stage0_iter3() {
    ap_block_state395_pp29_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state396_pp29_stage0_iter4() {
    ap_block_state396_pp29_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state397_pp29_stage0_iter5() {
    ap_block_state397_pp29_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state398_pp29_stage0_iter6() {
    ap_block_state398_pp29_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state399_pp29_stage0_iter7() {
    ap_block_state399_pp29_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state39_pp2_stage0_iter4() {
    ap_block_state39_pp2_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state400_pp29_stage0_iter8() {
    ap_block_state400_pp29_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state401_pp29_stage0_iter9() {
    ap_block_state401_pp29_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state402_pp29_stage0_iter10() {
    ap_block_state402_pp29_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state404_pp30_stage0_iter0() {
    ap_block_state404_pp30_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state405_pp30_stage0_iter1() {
    ap_block_state405_pp30_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state406_pp30_stage0_iter2() {
    ap_block_state406_pp30_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state407_pp30_stage0_iter3() {
    ap_block_state407_pp30_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state408_pp30_stage0_iter4() {
    ap_block_state408_pp30_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state409_pp30_stage0_iter5() {
    ap_block_state409_pp30_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state40_pp2_stage0_iter5() {
    ap_block_state40_pp2_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state410_pp30_stage0_iter6() {
    ap_block_state410_pp30_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state411_pp30_stage0_iter7() {
    ap_block_state411_pp30_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state412_pp30_stage0_iter8() {
    ap_block_state412_pp30_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state413_pp30_stage0_iter9() {
    ap_block_state413_pp30_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state414_pp30_stage0_iter10() {
    ap_block_state414_pp30_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state416_pp31_stage0_iter0() {
    ap_block_state416_pp31_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state417_pp31_stage0_iter1() {
    ap_block_state417_pp31_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state418_pp31_stage0_iter2() {
    ap_block_state418_pp31_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state419_pp31_stage0_iter3() {
    ap_block_state419_pp31_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state41_pp2_stage0_iter6() {
    ap_block_state41_pp2_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state420_pp31_stage0_iter4() {
    ap_block_state420_pp31_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state421_pp31_stage0_iter5() {
    ap_block_state421_pp31_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state422_pp31_stage0_iter6() {
    ap_block_state422_pp31_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state423_pp31_stage0_iter7() {
    ap_block_state423_pp31_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state424_pp31_stage0_iter8() {
    ap_block_state424_pp31_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state425_pp31_stage0_iter9() {
    ap_block_state425_pp31_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state426_pp31_stage0_iter10() {
    ap_block_state426_pp31_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state42_pp2_stage0_iter7() {
    ap_block_state42_pp2_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state43_pp2_stage0_iter8() {
    ap_block_state43_pp2_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state44_pp2_stage0_iter9() {
    ap_block_state44_pp2_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state45_pp2_stage0_iter10() {
    ap_block_state45_pp2_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state47_pp3_stage0_iter0() {
    ap_block_state47_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state48_pp3_stage0_iter1() {
    ap_block_state48_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state49_pp3_stage0_iter2() {
    ap_block_state49_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state50_pp3_stage0_iter3() {
    ap_block_state50_pp3_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state51_pp3_stage0_iter4() {
    ap_block_state51_pp3_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state52_pp3_stage0_iter5() {
    ap_block_state52_pp3_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state53_pp3_stage0_iter6() {
    ap_block_state53_pp3_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state54_pp3_stage0_iter7() {
    ap_block_state54_pp3_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state55_pp3_stage0_iter8() {
    ap_block_state55_pp3_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state56_pp3_stage0_iter9() {
    ap_block_state56_pp3_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state57_pp3_stage0_iter10() {
    ap_block_state57_pp3_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state59_pp4_stage0_iter0() {
    ap_block_state59_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state60_pp4_stage0_iter1() {
    ap_block_state60_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state61_pp4_stage0_iter2() {
    ap_block_state61_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state62_pp4_stage0_iter3() {
    ap_block_state62_pp4_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state63_pp4_stage0_iter4() {
    ap_block_state63_pp4_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state64_pp4_stage0_iter5() {
    ap_block_state64_pp4_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state65_pp4_stage0_iter6() {
    ap_block_state65_pp4_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state66_pp4_stage0_iter7() {
    ap_block_state66_pp4_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state67_pp4_stage0_iter8() {
    ap_block_state67_pp4_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state68_pp4_stage0_iter9() {
    ap_block_state68_pp4_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state69_pp4_stage0_iter10() {
    ap_block_state69_pp4_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state71_pp5_stage0_iter0() {
    ap_block_state71_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state72_pp5_stage0_iter1() {
    ap_block_state72_pp5_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state73_pp5_stage0_iter2() {
    ap_block_state73_pp5_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state74_pp5_stage0_iter3() {
    ap_block_state74_pp5_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state75_pp5_stage0_iter4() {
    ap_block_state75_pp5_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state76_pp5_stage0_iter5() {
    ap_block_state76_pp5_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state77_pp5_stage0_iter6() {
    ap_block_state77_pp5_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state78_pp5_stage0_iter7() {
    ap_block_state78_pp5_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state79_pp5_stage0_iter8() {
    ap_block_state79_pp5_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state80_pp5_stage0_iter9() {
    ap_block_state80_pp5_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state81_pp5_stage0_iter10() {
    ap_block_state81_pp5_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state83_pp6_stage0_iter0() {
    ap_block_state83_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state84_pp6_stage0_iter1() {
    ap_block_state84_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state85_pp6_stage0_iter2() {
    ap_block_state85_pp6_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state86_pp6_stage0_iter3() {
    ap_block_state86_pp6_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state87_pp6_stage0_iter4() {
    ap_block_state87_pp6_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state88_pp6_stage0_iter5() {
    ap_block_state88_pp6_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state89_pp6_stage0_iter6() {
    ap_block_state89_pp6_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state90_pp6_stage0_iter7() {
    ap_block_state90_pp6_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state91_pp6_stage0_iter8() {
    ap_block_state91_pp6_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state92_pp6_stage0_iter9() {
    ap_block_state92_pp6_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state93_pp6_stage0_iter10() {
    ap_block_state93_pp6_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state95_pp7_stage0_iter0() {
    ap_block_state95_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state96_pp7_stage0_iter1() {
    ap_block_state96_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state97_pp7_stage0_iter2() {
    ap_block_state97_pp7_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state98_pp7_stage0_iter3() {
    ap_block_state98_pp7_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_block_state99_pp7_stage0_iter4() {
    ap_block_state99_pp7_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_1::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond2_fu_2694_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp10() {
    ap_enable_pp10 = (ap_idle_pp10.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp11() {
    ap_enable_pp11 = (ap_idle_pp11.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp12() {
    ap_enable_pp12 = (ap_idle_pp12.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp13() {
    ap_enable_pp13 = (ap_idle_pp13.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp14() {
    ap_enable_pp14 = (ap_idle_pp14.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp15() {
    ap_enable_pp15 = (ap_idle_pp15.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp16() {
    ap_enable_pp16 = (ap_idle_pp16.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp17() {
    ap_enable_pp17 = (ap_idle_pp17.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp18() {
    ap_enable_pp18 = (ap_idle_pp18.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp19() {
    ap_enable_pp19 = (ap_idle_pp19.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp20() {
    ap_enable_pp20 = (ap_idle_pp20.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp21() {
    ap_enable_pp21 = (ap_idle_pp21.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp22() {
    ap_enable_pp22 = (ap_idle_pp22.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp23() {
    ap_enable_pp23 = (ap_idle_pp23.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp24() {
    ap_enable_pp24 = (ap_idle_pp24.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp25() {
    ap_enable_pp25 = (ap_idle_pp25.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp26() {
    ap_enable_pp26 = (ap_idle_pp26.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp27() {
    ap_enable_pp27 = (ap_idle_pp27.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp28() {
    ap_enable_pp28 = (ap_idle_pp28.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp29() {
    ap_enable_pp29 = (ap_idle_pp29.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp30() {
    ap_enable_pp30 = (ap_idle_pp30.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp31() {
    ap_enable_pp31 = (ap_idle_pp31.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp8() {
    ap_enable_pp8 = (ap_idle_pp8.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_enable_pp9() {
    ap_enable_pp9 = (ap_idle_pp9.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter10.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp10() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp10_iter10.read()))) {
        ap_idle_pp10 = ap_const_logic_1;
    } else {
        ap_idle_pp10 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp11() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp11_iter10.read()))) {
        ap_idle_pp11 = ap_const_logic_1;
    } else {
        ap_idle_pp11 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp12() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter10.read()))) {
        ap_idle_pp12 = ap_const_logic_1;
    } else {
        ap_idle_pp12 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp13() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter10.read()))) {
        ap_idle_pp13 = ap_const_logic_1;
    } else {
        ap_idle_pp13 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp14() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter10.read()))) {
        ap_idle_pp14 = ap_const_logic_1;
    } else {
        ap_idle_pp14 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp15() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter10.read()))) {
        ap_idle_pp15 = ap_const_logic_1;
    } else {
        ap_idle_pp15 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp16() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter10.read()))) {
        ap_idle_pp16 = ap_const_logic_1;
    } else {
        ap_idle_pp16 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp17() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp17_iter10.read()))) {
        ap_idle_pp17 = ap_const_logic_1;
    } else {
        ap_idle_pp17 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp18() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp18_iter10.read()))) {
        ap_idle_pp18 = ap_const_logic_1;
    } else {
        ap_idle_pp18 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp19() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp19_iter10.read()))) {
        ap_idle_pp19 = ap_const_logic_1;
    } else {
        ap_idle_pp19 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter10.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter10.read()))) {
        ap_idle_pp20 = ap_const_logic_1;
    } else {
        ap_idle_pp20 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp21() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter10.read()))) {
        ap_idle_pp21 = ap_const_logic_1;
    } else {
        ap_idle_pp21 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp22() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter10.read()))) {
        ap_idle_pp22 = ap_const_logic_1;
    } else {
        ap_idle_pp22 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp23() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter10.read()))) {
        ap_idle_pp23 = ap_const_logic_1;
    } else {
        ap_idle_pp23 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp24() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter10.read()))) {
        ap_idle_pp24 = ap_const_logic_1;
    } else {
        ap_idle_pp24 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp25() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp25_iter10.read()))) {
        ap_idle_pp25 = ap_const_logic_1;
    } else {
        ap_idle_pp25 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp26() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp26_iter10.read()))) {
        ap_idle_pp26 = ap_const_logic_1;
    } else {
        ap_idle_pp26 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp27() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp27_iter10.read()))) {
        ap_idle_pp27 = ap_const_logic_1;
    } else {
        ap_idle_pp27 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp28() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter10.read()))) {
        ap_idle_pp28 = ap_const_logic_1;
    } else {
        ap_idle_pp28 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp29() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter10.read()))) {
        ap_idle_pp29 = ap_const_logic_1;
    } else {
        ap_idle_pp29 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter10.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp30() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter10.read()))) {
        ap_idle_pp30 = ap_const_logic_1;
    } else {
        ap_idle_pp30 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp31() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter10.read()))) {
        ap_idle_pp31 = ap_const_logic_1;
    } else {
        ap_idle_pp31 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter10.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter10.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter10.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter10.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter10.read()))) {
        ap_idle_pp8 = ap_const_logic_1;
    } else {
        ap_idle_pp8 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_idle_pp9() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp9_iter10.read()))) {
        ap_idle_pp9 = ap_const_logic_1;
    } else {
        ap_idle_pp9 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond2_fu_2694_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_arrayNo_trunc6_fu_3219_p2() {
    arrayNo_trunc6_fu_3219_p2 = (!tmp_131_fu_3204_p2.read().is_01() || !tmp_214_fu_3209_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(tmp_131_fu_3204_p2.read()) + sc_biguint<3>(tmp_214_fu_3209_p1.read()));
}

void k2c_affine_matmul_1::thread_arrayNo_trunc7_fu_3705_p2() {
    arrayNo_trunc7_fu_3705_p2 = (!tmp_142_fu_3690_p2.read().is_01() || !tmp_225_fu_3695_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(tmp_142_fu_3690_p2.read()) + sc_biguint<3>(tmp_225_fu_3695_p1.read()));
}

void k2c_affine_matmul_1::thread_arrayNo_trunc8_fu_4191_p2() {
    arrayNo_trunc8_fu_4191_p2 = (!tmp_154_fu_4176_p2.read().is_01() || !tmp_236_fu_4181_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(tmp_154_fu_4176_p2.read()) + sc_biguint<3>(tmp_236_fu_4181_p1.read()));
}

void k2c_affine_matmul_1::thread_arrayNo_trunc_fu_2841_p2() {
    arrayNo_trunc_fu_2841_p2 = (!tmp_203_fu_2833_p1.read().is_01() || !tmp_204_fu_2837_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(tmp_203_fu_2833_p1.read()) + sc_biguint<3>(tmp_204_fu_2837_p1.read()));
}

void k2c_affine_matmul_1::thread_d_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp31_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_7_cast_fu_4634_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_6_cast_fu_4600_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp29_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_5_cast_fu_4566_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp28_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_4_cast_fu_4532_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp27_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_3_cast_fu_4498_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_2_cast_fu_4464_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp25_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_1_cast_fu_4430_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp24_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_3_cast_fu_4396_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp23_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_7_cast_fu_4148_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_6_cast_fu_4114_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp21_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_5_cast_fu_4080_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp20_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_4_cast_fu_4046_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_3_cast_fu_4012_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_2_cast_fu_3978_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_1_cast_fu_3944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_2_cast_fu_3910_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_7_cast_fu_3662_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_6_cast_fu_3628_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_5_cast_fu_3594_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_4_cast_fu_3560_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_3_cast_fu_3526_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_2_cast_fu_3492_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_1_cast_fu_3458_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_1_cast_fu_3424_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_0_7_cast_fu_3176_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_0_6_cast_fu_3142_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_0_5_cast_fu_3108_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_0_4_cast_fu_3074_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_0_3_cast_fu_3040_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_0_2_cast_fu_3006_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_0_1_cast_fu_2972_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        d_address0 =  (sc_lv<5>) (j_2_cast_fu_2938_p1.read());
    } else {
        d_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void k2c_affine_matmul_1::thread_d_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp5_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp6_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp7_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp8_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp9_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp10_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp11_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp12_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp13_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp14_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp15_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp16_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp17_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp18_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp19_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp20_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp21_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp22_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp23_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp24_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp25_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp26_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp27_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp28_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp29_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp30_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp31_iter0.read())))) {
        d_ce0 = ap_const_logic_1;
    } else {
        d_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        dense_14_kernel_arra_1_address0 =  (sc_lv<9>) (newIndex25_cast_reg_5822.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        dense_14_kernel_arra_1_address0 =  (sc_lv<9>) (newIndex23_cast_reg_5465.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        dense_14_kernel_arra_1_address0 =  (sc_lv<9>) (newIndex21_cast_reg_5108.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        dense_14_kernel_arra_1_address0 =  (sc_lv<9>) (newIndex19_cast_reg_4730.read());
    } else {
        dense_14_kernel_arra_1_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        dense_14_kernel_arra_1_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_1_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        dense_14_kernel_arra_2_address0 =  (sc_lv<9>) (newIndex25_cast_reg_5822.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        dense_14_kernel_arra_2_address0 =  (sc_lv<9>) (newIndex23_cast_reg_5465.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        dense_14_kernel_arra_2_address0 =  (sc_lv<9>) (newIndex21_cast_reg_5108.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        dense_14_kernel_arra_2_address0 =  (sc_lv<9>) (newIndex19_cast_reg_4730.read());
    } else {
        dense_14_kernel_arra_2_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        dense_14_kernel_arra_2_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_2_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read())) {
        dense_14_kernel_arra_3_address0 =  (sc_lv<9>) (newIndex25_cast_reg_5822.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        dense_14_kernel_arra_3_address0 =  (sc_lv<9>) (newIndex23_cast_reg_5465.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        dense_14_kernel_arra_3_address0 =  (sc_lv<9>) (newIndex21_cast_reg_5108.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        dense_14_kernel_arra_3_address0 =  (sc_lv<9>) (newIndex19_cast_reg_4730.read());
    } else {
        dense_14_kernel_arra_3_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state324.read()))) {
        dense_14_kernel_arra_3_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_3_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        dense_14_kernel_arra_4_address0 =  (sc_lv<9>) (newIndex25_cast_fu_4239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        dense_14_kernel_arra_4_address0 =  (sc_lv<9>) (newIndex23_cast_fu_3753_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        dense_14_kernel_arra_4_address0 =  (sc_lv<9>) (newIndex21_cast_fu_3267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dense_14_kernel_arra_4_address0 =  (sc_lv<9>) (newIndex19_cast_fu_2728_p1.read());
    } else {
        dense_14_kernel_arra_4_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()))) {
        dense_14_kernel_arra_4_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_4_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        dense_14_kernel_arra_5_address0 =  (sc_lv<9>) (newIndex25_cast_fu_4239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        dense_14_kernel_arra_5_address0 =  (sc_lv<9>) (newIndex23_cast_fu_3753_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        dense_14_kernel_arra_5_address0 =  (sc_lv<9>) (newIndex21_cast_fu_3267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dense_14_kernel_arra_5_address0 =  (sc_lv<9>) (newIndex19_cast_fu_2728_p1.read());
    } else {
        dense_14_kernel_arra_5_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()))) {
        dense_14_kernel_arra_5_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_5_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        dense_14_kernel_arra_6_address0 =  (sc_lv<9>) (newIndex25_cast_fu_4239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        dense_14_kernel_arra_6_address0 =  (sc_lv<9>) (newIndex23_cast_fu_3753_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        dense_14_kernel_arra_6_address0 =  (sc_lv<9>) (newIndex21_cast_fu_3267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dense_14_kernel_arra_6_address0 =  (sc_lv<9>) (newIndex19_cast_fu_2728_p1.read());
    } else {
        dense_14_kernel_arra_6_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()))) {
        dense_14_kernel_arra_6_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_6_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        dense_14_kernel_arra_7_address0 =  (sc_lv<9>) (newIndex25_cast_fu_4239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        dense_14_kernel_arra_7_address0 =  (sc_lv<9>) (newIndex23_cast_fu_3753_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        dense_14_kernel_arra_7_address0 =  (sc_lv<9>) (newIndex21_cast_fu_3267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dense_14_kernel_arra_7_address0 =  (sc_lv<9>) (newIndex19_cast_fu_2728_p1.read());
    } else {
        dense_14_kernel_arra_7_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()))) {
        dense_14_kernel_arra_7_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_7_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read())) {
        dense_14_kernel_arra_address0 =  (sc_lv<9>) (newIndex25_cast_fu_4239_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        dense_14_kernel_arra_address0 =  (sc_lv<9>) (newIndex23_cast_fu_3753_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        dense_14_kernel_arra_address0 =  (sc_lv<9>) (newIndex21_cast_fu_3267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        dense_14_kernel_arra_address0 =  (sc_lv<9>) (newIndex19_cast_fu_2728_p1.read());
    } else {
        dense_14_kernel_arra_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_dense_14_kernel_arra_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state323.read()))) {
        dense_14_kernel_arra_ce0 = ap_const_logic_1;
    } else {
        dense_14_kernel_arra_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_1::thread_exitcond1_0_1_fu_2949_p2() {
    exitcond1_0_1_fu_2949_p2 = (!i_33_0_s_fu_2943_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_0_s_fu_2943_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_0_2_fu_2983_p2() {
    exitcond1_0_2_fu_2983_p2 = (!i_33_0_5_fu_2977_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_0_5_fu_2977_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_0_3_fu_3017_p2() {
    exitcond1_0_3_fu_3017_p2 = (!i_33_0_6_fu_3011_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_0_6_fu_3011_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_0_4_fu_3051_p2() {
    exitcond1_0_4_fu_3051_p2 = (!i_33_0_8_fu_3045_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_0_8_fu_3045_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_0_5_fu_3085_p2() {
    exitcond1_0_5_fu_3085_p2 = (!i_33_0_9_fu_3079_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_0_9_fu_3079_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_0_6_fu_3119_p2() {
    exitcond1_0_6_fu_3119_p2 = (!i_33_0_1_fu_3113_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_0_1_fu_3113_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_0_7_fu_3153_p2() {
    exitcond1_0_7_fu_3153_p2 = (!i_33_0_2_fu_3147_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_0_2_fu_3147_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_1_fu_3435_p2() {
    exitcond1_1_1_fu_3435_p2 = (!i_33_1_s_fu_3429_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_s_fu_3429_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_2_fu_3469_p2() {
    exitcond1_1_2_fu_3469_p2 = (!i_33_1_5_fu_3463_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_5_fu_3463_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_3_fu_3503_p2() {
    exitcond1_1_3_fu_3503_p2 = (!i_33_1_6_fu_3497_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_6_fu_3497_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_4_fu_3537_p2() {
    exitcond1_1_4_fu_3537_p2 = (!i_33_1_8_fu_3531_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_8_fu_3531_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_5_fu_3571_p2() {
    exitcond1_1_5_fu_3571_p2 = (!i_33_1_9_fu_3565_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_9_fu_3565_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_6_fu_3605_p2() {
    exitcond1_1_6_fu_3605_p2 = (!i_33_1_1_fu_3599_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_1_fu_3599_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_7_fu_3639_p2() {
    exitcond1_1_7_fu_3639_p2 = (!i_33_1_2_fu_3633_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_2_fu_3633_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_1_fu_3401_p2() {
    exitcond1_1_fu_3401_p2 = (!i_1_reg_1553.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_1_reg_1553.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_1_fu_3921_p2() {
    exitcond1_2_1_fu_3921_p2 = (!i_33_2_s_fu_3915_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_s_fu_3915_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_2_fu_3955_p2() {
    exitcond1_2_2_fu_3955_p2 = (!i_33_2_5_fu_3949_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_5_fu_3949_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_3_fu_3989_p2() {
    exitcond1_2_3_fu_3989_p2 = (!i_33_2_6_fu_3983_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_6_fu_3983_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_4_fu_4023_p2() {
    exitcond1_2_4_fu_4023_p2 = (!i_33_2_8_fu_4017_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_8_fu_4017_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_5_fu_4057_p2() {
    exitcond1_2_5_fu_4057_p2 = (!i_33_2_9_fu_4051_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_9_fu_4051_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_6_fu_4091_p2() {
    exitcond1_2_6_fu_4091_p2 = (!i_33_2_1_fu_4085_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_1_fu_4085_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_7_fu_4125_p2() {
    exitcond1_2_7_fu_4125_p2 = (!i_33_2_2_fu_4119_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_2_fu_4119_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_2_fu_3887_p2() {
    exitcond1_2_fu_3887_p2 = (!i_2_reg_1925.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_2_reg_1925.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_1_fu_4407_p2() {
    exitcond1_3_1_fu_4407_p2 = (!i_33_3_s_fu_4401_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_3_s_fu_4401_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_2_fu_4441_p2() {
    exitcond1_3_2_fu_4441_p2 = (!i_33_3_5_fu_4435_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_3_5_fu_4435_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_3_fu_4475_p2() {
    exitcond1_3_3_fu_4475_p2 = (!i_33_3_6_fu_4469_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_3_6_fu_4469_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_4_fu_4509_p2() {
    exitcond1_3_4_fu_4509_p2 = (!i_33_3_8_fu_4503_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_3_8_fu_4503_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_5_fu_4543_p2() {
    exitcond1_3_5_fu_4543_p2 = (!i_33_3_9_fu_4537_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_3_9_fu_4537_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_6_fu_4577_p2() {
    exitcond1_3_6_fu_4577_p2 = (!i_33_3_1_fu_4571_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_3_1_fu_4571_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_7_fu_4611_p2() {
    exitcond1_3_7_fu_4611_p2 = (!i_33_3_2_fu_4605_p2.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_3_2_fu_4605_p2.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_3_fu_4373_p2() {
    exitcond1_3_fu_4373_p2 = (!i_3_reg_2297.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_3_reg_2297.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond1_fu_2915_p2() {
    exitcond1_fu_2915_p2 = (!i_reg_1181.read().is_01() || !outrows_cast_reg_4651.read().is_01())? sc_lv<1>(): sc_lv<1>(i_reg_1181.read() == outrows_cast_reg_4651.read());
}

void k2c_affine_matmul_1::thread_exitcond2_fu_2694_p2() {
    exitcond2_fu_2694_p2 = (!k_reg_1145.read().is_01() || !ap_const_lv8_80.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_1145.read() == ap_const_lv8_80);
}

void k2c_affine_matmul_1::thread_exitcond_0_1_fu_2960_p2() {
    exitcond_0_1_fu_2960_p2 = (!j_2_0_1_reg_1258.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_0_1_reg_1258.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_0_2_fu_2994_p2() {
    exitcond_0_2_fu_2994_p2 = (!j_2_0_2_reg_1288.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_0_2_reg_1288.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_0_3_fu_3028_p2() {
    exitcond_0_3_fu_3028_p2 = (!j_2_0_3_reg_1318.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_0_3_reg_1318.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_0_4_fu_3062_p2() {
    exitcond_0_4_fu_3062_p2 = (!j_2_0_4_reg_1348.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_0_4_reg_1348.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_0_5_fu_3096_p2() {
    exitcond_0_5_fu_3096_p2 = (!j_2_0_5_reg_1378.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_0_5_reg_1378.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_0_6_fu_3130_p2() {
    exitcond_0_6_fu_3130_p2 = (!j_2_0_6_reg_1408.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_0_6_reg_1408.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_0_7_fu_3164_p2() {
    exitcond_0_7_fu_3164_p2 = (!j_2_0_7_reg_1438.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_0_7_reg_1438.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_1_fu_3446_p2() {
    exitcond_1_1_fu_3446_p2 = (!j_2_1_1_reg_1630.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_1_reg_1630.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_2_fu_3480_p2() {
    exitcond_1_2_fu_3480_p2 = (!j_2_1_2_reg_1660.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_2_reg_1660.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_3_fu_3514_p2() {
    exitcond_1_3_fu_3514_p2 = (!j_2_1_3_reg_1690.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_3_reg_1690.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_4_fu_3548_p2() {
    exitcond_1_4_fu_3548_p2 = (!j_2_1_4_reg_1720.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_4_reg_1720.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_5_fu_3582_p2() {
    exitcond_1_5_fu_3582_p2 = (!j_2_1_5_reg_1750.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_5_reg_1750.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_6_fu_3616_p2() {
    exitcond_1_6_fu_3616_p2 = (!j_2_1_6_reg_1780.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_6_reg_1780.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_7_fu_3650_p2() {
    exitcond_1_7_fu_3650_p2 = (!j_2_1_7_reg_1810.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_7_reg_1810.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_1_fu_3412_p2() {
    exitcond_1_fu_3412_p2 = (!j_2_1_reg_1600.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_1_reg_1600.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_1_fu_3932_p2() {
    exitcond_2_1_fu_3932_p2 = (!j_2_2_1_reg_2002.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_1_reg_2002.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_2_fu_3966_p2() {
    exitcond_2_2_fu_3966_p2 = (!j_2_2_2_reg_2032.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_2_reg_2032.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_3_fu_4000_p2() {
    exitcond_2_3_fu_4000_p2 = (!j_2_2_3_reg_2062.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_3_reg_2062.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_4_fu_4034_p2() {
    exitcond_2_4_fu_4034_p2 = (!j_2_2_4_reg_2092.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_4_reg_2092.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_5_fu_4068_p2() {
    exitcond_2_5_fu_4068_p2 = (!j_2_2_5_reg_2122.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_5_reg_2122.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_6_fu_4102_p2() {
    exitcond_2_6_fu_4102_p2 = (!j_2_2_6_reg_2152.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_6_reg_2152.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_7_fu_4136_p2() {
    exitcond_2_7_fu_4136_p2 = (!j_2_2_7_reg_2182.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_7_reg_2182.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_2_fu_3898_p2() {
    exitcond_2_fu_3898_p2 = (!j_2_2_reg_1972.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_2_reg_1972.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_1_fu_4418_p2() {
    exitcond_3_1_fu_4418_p2 = (!j_2_3_1_reg_2374.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_1_reg_2374.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_2_fu_4452_p2() {
    exitcond_3_2_fu_4452_p2 = (!j_2_3_2_reg_2404.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_2_reg_2404.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_3_fu_4486_p2() {
    exitcond_3_3_fu_4486_p2 = (!j_2_3_3_reg_2434.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_3_reg_2434.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_4_fu_4520_p2() {
    exitcond_3_4_fu_4520_p2 = (!j_2_3_4_reg_2464.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_4_reg_2464.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_5_fu_4554_p2() {
    exitcond_3_5_fu_4554_p2 = (!j_2_3_5_reg_2494.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_5_reg_2494.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_6_fu_4588_p2() {
    exitcond_3_6_fu_4588_p2 = (!j_2_3_6_reg_2524.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_6_reg_2524.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_7_fu_4622_p2() {
    exitcond_3_7_fu_4622_p2 = (!j_2_3_7_reg_2554.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_7_reg_2554.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_3_fu_4384_p2() {
    exitcond_3_fu_4384_p2 = (!j_2_3_reg_2344.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_3_reg_2344.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_exitcond_fu_2926_p2() {
    exitcond_fu_2926_p2 = (!j_2_reg_1228.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(j_2_reg_1228.read() == ap_const_lv6_20);
}

void k2c_affine_matmul_1::thread_grp_fu_2676_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2676_p0 = tmp_155_reg_5914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read())) {
        grp_fu_2676_p0 = tmp_153_reg_5557.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        grp_fu_2676_p0 = tmp_144_reg_5200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_fu_2676_p0 = tmp_s_reg_4836.read();
    } else {
        grp_fu_2676_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_grp_fu_2676_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state326.read())) {
        grp_fu_2676_p1 = UnifiedRetVal_i6_reg_5919.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state219.read())) {
        grp_fu_2676_p1 = UnifiedRetVal_i5_reg_5562.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state112.read())) {
        grp_fu_2676_p1 = UnifiedRetVal_i_reg_5205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        grp_fu_2676_p1 = UnifiedRetVal_i4_reg_4841.read();
    } else {
        grp_fu_2676_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_1::thread_i_33_0_1_fu_3113_p2() {
    i_33_0_1_fu_3113_p2 = (i_reg_1181.read() | ap_const_lv64_6);
}

void k2c_affine_matmul_1::thread_i_33_0_2_fu_3147_p2() {
    i_33_0_2_fu_3147_p2 = (i_reg_1181.read() | ap_const_lv64_7);
}

void k2c_affine_matmul_1::thread_i_33_0_5_fu_2977_p2() {
    i_33_0_5_fu_2977_p2 = (i_reg_1181.read() | ap_const_lv64_2);
}

void k2c_affine_matmul_1::thread_i_33_0_6_fu_3011_p2() {
    i_33_0_6_fu_3011_p2 = (i_reg_1181.read() | ap_const_lv64_3);
}

void k2c_affine_matmul_1::thread_i_33_0_7_fu_3181_p2() {
    i_33_0_7_fu_3181_p2 = (!i_reg_1181.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(i_reg_1181.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_1::thread_i_33_0_8_fu_3045_p2() {
    i_33_0_8_fu_3045_p2 = (i_reg_1181.read() | ap_const_lv64_4);
}

void k2c_affine_matmul_1::thread_i_33_0_9_fu_3079_p2() {
    i_33_0_9_fu_3079_p2 = (i_reg_1181.read() | ap_const_lv64_5);
}

void k2c_affine_matmul_1::thread_i_33_0_s_fu_2943_p2() {
    i_33_0_s_fu_2943_p2 = (i_reg_1181.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_1::thread_i_33_1_1_fu_3599_p2() {
    i_33_1_1_fu_3599_p2 = (i_1_reg_1553.read() | ap_const_lv64_6);
}

void k2c_affine_matmul_1::thread_i_33_1_2_fu_3633_p2() {
    i_33_1_2_fu_3633_p2 = (i_1_reg_1553.read() | ap_const_lv64_7);
}

void k2c_affine_matmul_1::thread_i_33_1_5_fu_3463_p2() {
    i_33_1_5_fu_3463_p2 = (i_1_reg_1553.read() | ap_const_lv64_2);
}

void k2c_affine_matmul_1::thread_i_33_1_6_fu_3497_p2() {
    i_33_1_6_fu_3497_p2 = (i_1_reg_1553.read() | ap_const_lv64_3);
}

void k2c_affine_matmul_1::thread_i_33_1_7_fu_3667_p2() {
    i_33_1_7_fu_3667_p2 = (!i_1_reg_1553.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(i_1_reg_1553.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_1::thread_i_33_1_8_fu_3531_p2() {
    i_33_1_8_fu_3531_p2 = (i_1_reg_1553.read() | ap_const_lv64_4);
}

void k2c_affine_matmul_1::thread_i_33_1_9_fu_3565_p2() {
    i_33_1_9_fu_3565_p2 = (i_1_reg_1553.read() | ap_const_lv64_5);
}

void k2c_affine_matmul_1::thread_i_33_1_s_fu_3429_p2() {
    i_33_1_s_fu_3429_p2 = (i_1_reg_1553.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_1::thread_i_33_2_1_fu_4085_p2() {
    i_33_2_1_fu_4085_p2 = (i_2_reg_1925.read() | ap_const_lv64_6);
}

void k2c_affine_matmul_1::thread_i_33_2_2_fu_4119_p2() {
    i_33_2_2_fu_4119_p2 = (i_2_reg_1925.read() | ap_const_lv64_7);
}

void k2c_affine_matmul_1::thread_i_33_2_5_fu_3949_p2() {
    i_33_2_5_fu_3949_p2 = (i_2_reg_1925.read() | ap_const_lv64_2);
}

void k2c_affine_matmul_1::thread_i_33_2_6_fu_3983_p2() {
    i_33_2_6_fu_3983_p2 = (i_2_reg_1925.read() | ap_const_lv64_3);
}

void k2c_affine_matmul_1::thread_i_33_2_7_fu_4153_p2() {
    i_33_2_7_fu_4153_p2 = (!i_2_reg_1925.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(i_2_reg_1925.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_1::thread_i_33_2_8_fu_4017_p2() {
    i_33_2_8_fu_4017_p2 = (i_2_reg_1925.read() | ap_const_lv64_4);
}

void k2c_affine_matmul_1::thread_i_33_2_9_fu_4051_p2() {
    i_33_2_9_fu_4051_p2 = (i_2_reg_1925.read() | ap_const_lv64_5);
}

void k2c_affine_matmul_1::thread_i_33_2_s_fu_3915_p2() {
    i_33_2_s_fu_3915_p2 = (i_2_reg_1925.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_1::thread_i_33_3_1_fu_4571_p2() {
    i_33_3_1_fu_4571_p2 = (i_3_reg_2297.read() | ap_const_lv64_6);
}

void k2c_affine_matmul_1::thread_i_33_3_2_fu_4605_p2() {
    i_33_3_2_fu_4605_p2 = (i_3_reg_2297.read() | ap_const_lv64_7);
}

void k2c_affine_matmul_1::thread_i_33_3_5_fu_4435_p2() {
    i_33_3_5_fu_4435_p2 = (i_3_reg_2297.read() | ap_const_lv64_2);
}

void k2c_affine_matmul_1::thread_i_33_3_6_fu_4469_p2() {
    i_33_3_6_fu_4469_p2 = (i_3_reg_2297.read() | ap_const_lv64_3);
}

void k2c_affine_matmul_1::thread_i_33_3_7_fu_4639_p2() {
    i_33_3_7_fu_4639_p2 = (!i_3_reg_2297.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(i_3_reg_2297.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_1::thread_i_33_3_8_fu_4503_p2() {
    i_33_3_8_fu_4503_p2 = (i_3_reg_2297.read() | ap_const_lv64_4);
}

void k2c_affine_matmul_1::thread_i_33_3_9_fu_4537_p2() {
    i_33_3_9_fu_4537_p2 = (i_3_reg_2297.read() | ap_const_lv64_5);
}

void k2c_affine_matmul_1::thread_i_33_3_s_fu_4401_p2() {
    i_33_3_s_fu_4401_p2 = (i_3_reg_2297.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_1::thread_j_1_lcssa_1_cast_cas_fu_3677_p1() {
    j_1_lcssa_1_cast_cas_fu_3677_p1 = esl_zext<13,7>(j_1_lcssa_1_reg_1894.read());
}

void k2c_affine_matmul_1::thread_j_1_lcssa_2_cast_cas_fu_4163_p1() {
    j_1_lcssa_2_cast_cas_fu_4163_p1 = esl_zext<13,7>(j_1_lcssa_2_reg_2266.read());
}

void k2c_affine_matmul_1::thread_j_1_lcssa_cast_cast_fu_3191_p1() {
    j_1_lcssa_cast_cast_fu_3191_p1 = esl_zext<13,7>(j_1_lcssa_reg_1522.read());
}

void k2c_affine_matmul_1::thread_j_2_0_1_cast_fu_2972_p1() {
    j_2_0_1_cast_fu_2972_p1 = esl_zext<64,6>(j_2_0_1_reg_1258.read());
}

void k2c_affine_matmul_1::thread_j_2_0_2_cast_fu_3006_p1() {
    j_2_0_2_cast_fu_3006_p1 = esl_zext<64,6>(j_2_0_2_reg_1288.read());
}

void k2c_affine_matmul_1::thread_j_2_0_3_cast_fu_3040_p1() {
    j_2_0_3_cast_fu_3040_p1 = esl_zext<64,6>(j_2_0_3_reg_1318.read());
}

void k2c_affine_matmul_1::thread_j_2_0_4_cast_fu_3074_p1() {
    j_2_0_4_cast_fu_3074_p1 = esl_zext<64,6>(j_2_0_4_reg_1348.read());
}

void k2c_affine_matmul_1::thread_j_2_0_5_cast_fu_3108_p1() {
    j_2_0_5_cast_fu_3108_p1 = esl_zext<64,6>(j_2_0_5_reg_1378.read());
}

void k2c_affine_matmul_1::thread_j_2_0_6_cast_fu_3142_p1() {
    j_2_0_6_cast_fu_3142_p1 = esl_zext<64,6>(j_2_0_6_reg_1408.read());
}

void k2c_affine_matmul_1::thread_j_2_0_7_cast_fu_3176_p1() {
    j_2_0_7_cast_fu_3176_p1 = esl_zext<64,6>(j_2_0_7_reg_1438.read());
}

void k2c_affine_matmul_1::thread_j_2_1_1_cast_fu_3458_p1() {
    j_2_1_1_cast_fu_3458_p1 = esl_zext<64,6>(j_2_1_1_reg_1630.read());
}

void k2c_affine_matmul_1::thread_j_2_1_2_cast_fu_3492_p1() {
    j_2_1_2_cast_fu_3492_p1 = esl_zext<64,6>(j_2_1_2_reg_1660.read());
}

void k2c_affine_matmul_1::thread_j_2_1_3_cast_fu_3526_p1() {
    j_2_1_3_cast_fu_3526_p1 = esl_zext<64,6>(j_2_1_3_reg_1690.read());
}

void k2c_affine_matmul_1::thread_j_2_1_4_cast_fu_3560_p1() {
    j_2_1_4_cast_fu_3560_p1 = esl_zext<64,6>(j_2_1_4_reg_1720.read());
}

void k2c_affine_matmul_1::thread_j_2_1_5_cast_fu_3594_p1() {
    j_2_1_5_cast_fu_3594_p1 = esl_zext<64,6>(j_2_1_5_reg_1750.read());
}

void k2c_affine_matmul_1::thread_j_2_1_6_cast_fu_3628_p1() {
    j_2_1_6_cast_fu_3628_p1 = esl_zext<64,6>(j_2_1_6_reg_1780.read());
}

void k2c_affine_matmul_1::thread_j_2_1_7_cast_fu_3662_p1() {
    j_2_1_7_cast_fu_3662_p1 = esl_zext<64,6>(j_2_1_7_reg_1810.read());
}

void k2c_affine_matmul_1::thread_j_2_1_cast_fu_3424_p1() {
    j_2_1_cast_fu_3424_p1 = esl_zext<64,6>(j_2_1_reg_1600.read());
}

void k2c_affine_matmul_1::thread_j_2_2_1_cast_fu_3944_p1() {
    j_2_2_1_cast_fu_3944_p1 = esl_zext<64,6>(j_2_2_1_reg_2002.read());
}

void k2c_affine_matmul_1::thread_j_2_2_2_cast_fu_3978_p1() {
    j_2_2_2_cast_fu_3978_p1 = esl_zext<64,6>(j_2_2_2_reg_2032.read());
}

void k2c_affine_matmul_1::thread_j_2_2_3_cast_fu_4012_p1() {
    j_2_2_3_cast_fu_4012_p1 = esl_zext<64,6>(j_2_2_3_reg_2062.read());
}

void k2c_affine_matmul_1::thread_j_2_2_4_cast_fu_4046_p1() {
    j_2_2_4_cast_fu_4046_p1 = esl_zext<64,6>(j_2_2_4_reg_2092.read());
}

void k2c_affine_matmul_1::thread_j_2_2_5_cast_fu_4080_p1() {
    j_2_2_5_cast_fu_4080_p1 = esl_zext<64,6>(j_2_2_5_reg_2122.read());
}

void k2c_affine_matmul_1::thread_j_2_2_6_cast_fu_4114_p1() {
    j_2_2_6_cast_fu_4114_p1 = esl_zext<64,6>(j_2_2_6_reg_2152.read());
}

void k2c_affine_matmul_1::thread_j_2_2_7_cast_fu_4148_p1() {
    j_2_2_7_cast_fu_4148_p1 = esl_zext<64,6>(j_2_2_7_reg_2182.read());
}

void k2c_affine_matmul_1::thread_j_2_2_cast_fu_3910_p1() {
    j_2_2_cast_fu_3910_p1 = esl_zext<64,6>(j_2_2_reg_1972.read());
}

void k2c_affine_matmul_1::thread_j_2_3_1_cast_fu_4430_p1() {
    j_2_3_1_cast_fu_4430_p1 = esl_zext<64,6>(j_2_3_1_reg_2374.read());
}

void k2c_affine_matmul_1::thread_j_2_3_2_cast_fu_4464_p1() {
    j_2_3_2_cast_fu_4464_p1 = esl_zext<64,6>(j_2_3_2_reg_2404.read());
}

void k2c_affine_matmul_1::thread_j_2_3_3_cast_fu_4498_p1() {
    j_2_3_3_cast_fu_4498_p1 = esl_zext<64,6>(j_2_3_3_reg_2434.read());
}

void k2c_affine_matmul_1::thread_j_2_3_4_cast_fu_4532_p1() {
    j_2_3_4_cast_fu_4532_p1 = esl_zext<64,6>(j_2_3_4_reg_2464.read());
}

void k2c_affine_matmul_1::thread_j_2_3_5_cast_fu_4566_p1() {
    j_2_3_5_cast_fu_4566_p1 = esl_zext<64,6>(j_2_3_5_reg_2494.read());
}

void k2c_affine_matmul_1::thread_j_2_3_6_cast_fu_4600_p1() {
    j_2_3_6_cast_fu_4600_p1 = esl_zext<64,6>(j_2_3_6_reg_2524.read());
}

void k2c_affine_matmul_1::thread_j_2_3_7_cast_fu_4634_p1() {
    j_2_3_7_cast_fu_4634_p1 = esl_zext<64,6>(j_2_3_7_reg_2554.read());
}

void k2c_affine_matmul_1::thread_j_2_3_cast_fu_4396_p1() {
    j_2_3_cast_fu_4396_p1 = esl_zext<64,6>(j_2_3_reg_2344.read());
}

void k2c_affine_matmul_1::thread_j_2_cast_fu_2938_p1() {
    j_2_cast_fu_2938_p1 = esl_zext<64,6>(j_2_reg_1228.read());
}

void k2c_affine_matmul_1::thread_k_2_3_fu_4645_p2() {
    k_2_3_fu_4645_p2 = (!k_reg_1145.read().is_01() || !ap_const_lv8_4.is_01())? sc_lv<8>(): (sc_biguint<8>(k_reg_1145.read()) + sc_biguint<8>(ap_const_lv8_4));
}

void k2c_affine_matmul_1::thread_k_2_6_cast1_fu_3686_p1() {
    k_2_6_cast1_fu_3686_p1 = esl_zext<9,7>(k_2_6_fu_3681_p2.read());
}

void k2c_affine_matmul_1::thread_k_2_6_fu_3681_p2() {
    k_2_6_fu_3681_p2 = (tmp_reg_4846.read() | ap_const_lv7_2);
}

void k2c_affine_matmul_1::thread_k_2_7_cast1_fu_4172_p1() {
    k_2_7_cast1_fu_4172_p1 = esl_zext<9,7>(k_2_7_fu_4167_p2.read());
}

void k2c_affine_matmul_1::thread_k_2_7_fu_4167_p2() {
    k_2_7_fu_4167_p2 = (tmp_reg_4846.read() | ap_const_lv7_3);
}

void k2c_affine_matmul_1::thread_k_2_cast2_fu_3200_p1() {
    k_2_cast2_fu_3200_p1 = esl_zext<9,7>(k_2_s_fu_3195_p2.read());
}

void k2c_affine_matmul_1::thread_k_2_s_fu_3195_p2() {
    k_2_s_fu_3195_p2 = (tmp_reg_4846.read() | ap_const_lv7_1);
}

void k2c_affine_matmul_1::thread_k_cast_fu_2737_p1() {
    k_cast_fu_2737_p1 = esl_zext<9,8>(k_reg_1145.read());
}

void k2c_affine_matmul_1::thread_newIndex19_cast_fu_2728_p1() {
    newIndex19_cast_fu_2728_p1 = esl_zext<64,9>(tmp_143_fu_2720_p3.read());
}

void k2c_affine_matmul_1::thread_newIndex20_cast_fu_3275_p1() {
    newIndex20_cast_fu_3275_p1 = esl_zext<64,6>(newIndex1_reg_5087.read());
}

void k2c_affine_matmul_1::thread_newIndex21_cast_fu_3267_p1() {
    newIndex21_cast_fu_3267_p1 = esl_zext<64,10>(newIndex2_reg_5103.read());
}

void k2c_affine_matmul_1::thread_newIndex22_cast_fu_3761_p1() {
    newIndex22_cast_fu_3761_p1 = esl_zext<64,6>(newIndex3_reg_5444.read());
}

void k2c_affine_matmul_1::thread_newIndex23_cast_fu_3753_p1() {
    newIndex23_cast_fu_3753_p1 = esl_zext<64,10>(newIndex4_reg_5460.read());
}

void k2c_affine_matmul_1::thread_newIndex24_cast_fu_4247_p1() {
    newIndex24_cast_fu_4247_p1 = esl_zext<64,6>(newIndex5_reg_5801.read());
}

void k2c_affine_matmul_1::thread_newIndex25_cast_fu_4239_p1() {
    newIndex25_cast_fu_4239_p1 = esl_zext<64,10>(newIndex6_reg_5817.read());
}

void k2c_affine_matmul_1::thread_newIndex_cast_fu_2761_p1() {
    newIndex_cast_fu_2761_p1 = esl_zext<64,6>(newIndex_fu_2751_p4.read());
}

void k2c_affine_matmul_1::thread_newIndex_fu_2751_p4() {
    newIndex_fu_2751_p4 = sum3_fu_2745_p2.read().range(8, 3);
}

void k2c_affine_matmul_1::thread_outrows_cast_fu_2690_p1() {
    outrows_cast_fu_2690_p1 = esl_zext<64,8>(outrows.read());
}

void k2c_affine_matmul_1::thread_sel_tmp10_i4_fu_2885_p2() {
    sel_tmp10_i4_fu_2885_p2 = (!tmp_205_reg_4802.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_reg_4802.read() == ap_const_lv3_5);
}

void k2c_affine_matmul_1::thread_sel_tmp10_i5_fu_3861_p2() {
    sel_tmp10_i5_fu_3861_p2 = (!tmp_226_reg_5449.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_5449.read() == ap_const_lv3_5);
}

void k2c_affine_matmul_1::thread_sel_tmp10_i6_fu_4347_p2() {
    sel_tmp10_i6_fu_4347_p2 = (!tmp_237_reg_5806.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_237_reg_5806.read() == ap_const_lv3_5);
}

void k2c_affine_matmul_1::thread_sel_tmp10_i_fu_3375_p2() {
    sel_tmp10_i_fu_3375_p2 = (!tmp_215_reg_5092.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_5092.read() == ap_const_lv3_5);
}

void k2c_affine_matmul_1::thread_sel_tmp11_i4_fu_2890_p3() {
    sel_tmp11_i4_fu_2890_p3 = (!sel_tmp10_i4_fu_2885_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp10_i4_fu_2885_p2.read()[0].to_bool())? dense_14_kernel_arra_2_q0.read(): sel_tmp9_i4_fu_2878_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp11_i5_fu_3866_p3() {
    sel_tmp11_i5_fu_3866_p3 = (!sel_tmp10_i5_fu_3861_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp10_i5_fu_3861_p2.read()[0].to_bool())? dense_14_kernel_arra_2_q0.read(): sel_tmp9_i5_fu_3854_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp11_i6_fu_4352_p3() {
    sel_tmp11_i6_fu_4352_p3 = (!sel_tmp10_i6_fu_4347_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp10_i6_fu_4347_p2.read()[0].to_bool())? dense_14_kernel_arra_2_q0.read(): sel_tmp9_i6_fu_4340_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp11_i_fu_3380_p3() {
    sel_tmp11_i_fu_3380_p3 = (!sel_tmp10_i_fu_3375_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp10_i_fu_3375_p2.read()[0].to_bool())? dense_14_kernel_arra_2_q0.read(): sel_tmp9_i_fu_3368_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp12_i4_fu_2898_p2() {
    sel_tmp12_i4_fu_2898_p2 = (!tmp_205_reg_4802.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_reg_4802.read() == ap_const_lv3_6);
}

void k2c_affine_matmul_1::thread_sel_tmp12_i5_fu_3874_p2() {
    sel_tmp12_i5_fu_3874_p2 = (!tmp_226_reg_5449.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_5449.read() == ap_const_lv3_6);
}

void k2c_affine_matmul_1::thread_sel_tmp12_i6_fu_4360_p2() {
    sel_tmp12_i6_fu_4360_p2 = (!tmp_237_reg_5806.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_237_reg_5806.read() == ap_const_lv3_6);
}

void k2c_affine_matmul_1::thread_sel_tmp12_i_fu_3388_p2() {
    sel_tmp12_i_fu_3388_p2 = (!tmp_215_reg_5092.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_5092.read() == ap_const_lv3_6);
}

void k2c_affine_matmul_1::thread_sel_tmp1_i4_fu_2783_p3() {
    sel_tmp1_i4_fu_2783_p3 = (!sel_tmp_i4_fu_2777_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_i4_fu_2777_p2.read()[0].to_bool())? dense_14_kernel_arra_7_q0.read(): dense_14_kernel_arra_q0.read());
}

void k2c_affine_matmul_1::thread_sel_tmp1_i5_fu_3777_p3() {
    sel_tmp1_i5_fu_3777_p3 = (!sel_tmp_i5_fu_3772_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_i5_fu_3772_p2.read()[0].to_bool())? dense_14_kernel_arra_7_q0.read(): dense_14_kernel_arra_q0.read());
}

void k2c_affine_matmul_1::thread_sel_tmp1_i6_fu_4263_p3() {
    sel_tmp1_i6_fu_4263_p3 = (!sel_tmp_i6_fu_4258_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_i6_fu_4258_p2.read()[0].to_bool())? dense_14_kernel_arra_7_q0.read(): dense_14_kernel_arra_q0.read());
}

void k2c_affine_matmul_1::thread_sel_tmp1_i_fu_3291_p3() {
    sel_tmp1_i_fu_3291_p3 = (!sel_tmp_i_fu_3286_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_i_fu_3286_p2.read()[0].to_bool())? dense_14_kernel_arra_7_q0.read(): dense_14_kernel_arra_q0.read());
}

void k2c_affine_matmul_1::thread_sel_tmp2_i4_fu_2791_p2() {
    sel_tmp2_i4_fu_2791_p2 = (!tmp_205_fu_2773_p1.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_fu_2773_p1.read() == ap_const_lv3_1);
}

void k2c_affine_matmul_1::thread_sel_tmp2_i5_fu_3785_p2() {
    sel_tmp2_i5_fu_3785_p2 = (!tmp_226_reg_5449.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_5449.read() == ap_const_lv3_1);
}

void k2c_affine_matmul_1::thread_sel_tmp2_i6_fu_4271_p2() {
    sel_tmp2_i6_fu_4271_p2 = (!tmp_237_reg_5806.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_237_reg_5806.read() == ap_const_lv3_1);
}

void k2c_affine_matmul_1::thread_sel_tmp2_i_fu_3299_p2() {
    sel_tmp2_i_fu_3299_p2 = (!tmp_215_reg_5092.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_5092.read() == ap_const_lv3_1);
}

void k2c_affine_matmul_1::thread_sel_tmp3_i4_fu_2797_p3() {
    sel_tmp3_i4_fu_2797_p3 = (!sel_tmp2_i4_fu_2791_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_i4_fu_2791_p2.read()[0].to_bool())? dense_14_kernel_arra_6_q0.read(): sel_tmp1_i4_fu_2783_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp3_i5_fu_3790_p3() {
    sel_tmp3_i5_fu_3790_p3 = (!sel_tmp2_i5_fu_3785_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_i5_fu_3785_p2.read()[0].to_bool())? dense_14_kernel_arra_6_q0.read(): sel_tmp1_i5_fu_3777_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp3_i6_fu_4276_p3() {
    sel_tmp3_i6_fu_4276_p3 = (!sel_tmp2_i6_fu_4271_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_i6_fu_4271_p2.read()[0].to_bool())? dense_14_kernel_arra_6_q0.read(): sel_tmp1_i6_fu_4263_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp3_i_fu_3304_p3() {
    sel_tmp3_i_fu_3304_p3 = (!sel_tmp2_i_fu_3299_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_i_fu_3299_p2.read()[0].to_bool())? dense_14_kernel_arra_6_q0.read(): sel_tmp1_i_fu_3291_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp4_i4_fu_2805_p2() {
    sel_tmp4_i4_fu_2805_p2 = (!tmp_205_fu_2773_p1.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_fu_2773_p1.read() == ap_const_lv3_2);
}

void k2c_affine_matmul_1::thread_sel_tmp4_i5_fu_3798_p2() {
    sel_tmp4_i5_fu_3798_p2 = (!tmp_226_reg_5449.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_5449.read() == ap_const_lv3_2);
}

void k2c_affine_matmul_1::thread_sel_tmp4_i6_fu_4284_p2() {
    sel_tmp4_i6_fu_4284_p2 = (!tmp_237_reg_5806.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_237_reg_5806.read() == ap_const_lv3_2);
}

void k2c_affine_matmul_1::thread_sel_tmp4_i_fu_3312_p2() {
    sel_tmp4_i_fu_3312_p2 = (!tmp_215_reg_5092.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_5092.read() == ap_const_lv3_2);
}

void k2c_affine_matmul_1::thread_sel_tmp5_i4_fu_2811_p3() {
    sel_tmp5_i4_fu_2811_p3 = (!sel_tmp4_i4_fu_2805_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_i4_fu_2805_p2.read()[0].to_bool())? dense_14_kernel_arra_5_q0.read(): sel_tmp3_i4_fu_2797_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp5_i5_fu_3803_p3() {
    sel_tmp5_i5_fu_3803_p3 = (!sel_tmp4_i5_fu_3798_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_i5_fu_3798_p2.read()[0].to_bool())? dense_14_kernel_arra_5_q0.read(): sel_tmp3_i5_fu_3790_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp5_i6_fu_4289_p3() {
    sel_tmp5_i6_fu_4289_p3 = (!sel_tmp4_i6_fu_4284_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_i6_fu_4284_p2.read()[0].to_bool())? dense_14_kernel_arra_5_q0.read(): sel_tmp3_i6_fu_4276_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp5_i_fu_3317_p3() {
    sel_tmp5_i_fu_3317_p3 = (!sel_tmp4_i_fu_3312_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_i_fu_3312_p2.read()[0].to_bool())? dense_14_kernel_arra_5_q0.read(): sel_tmp3_i_fu_3304_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp6_i4_fu_2819_p2() {
    sel_tmp6_i4_fu_2819_p2 = (!tmp_205_fu_2773_p1.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_fu_2773_p1.read() == ap_const_lv3_3);
}

void k2c_affine_matmul_1::thread_sel_tmp6_i5_fu_3811_p2() {
    sel_tmp6_i5_fu_3811_p2 = (!tmp_226_reg_5449.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_5449.read() == ap_const_lv3_3);
}

void k2c_affine_matmul_1::thread_sel_tmp6_i6_fu_4297_p2() {
    sel_tmp6_i6_fu_4297_p2 = (!tmp_237_reg_5806.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_237_reg_5806.read() == ap_const_lv3_3);
}

void k2c_affine_matmul_1::thread_sel_tmp6_i_fu_3325_p2() {
    sel_tmp6_i_fu_3325_p2 = (!tmp_215_reg_5092.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_5092.read() == ap_const_lv3_3);
}

void k2c_affine_matmul_1::thread_sel_tmp7_i4_fu_2825_p3() {
    sel_tmp7_i4_fu_2825_p3 = (!sel_tmp6_i4_fu_2819_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_i4_fu_2819_p2.read()[0].to_bool())? dense_14_kernel_arra_4_q0.read(): sel_tmp5_i4_fu_2811_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp7_i5_fu_3816_p3() {
    sel_tmp7_i5_fu_3816_p3 = (!sel_tmp6_i5_fu_3811_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_i5_fu_3811_p2.read()[0].to_bool())? dense_14_kernel_arra_4_q0.read(): sel_tmp5_i5_fu_3803_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp7_i6_fu_4302_p3() {
    sel_tmp7_i6_fu_4302_p3 = (!sel_tmp6_i6_fu_4297_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_i6_fu_4297_p2.read()[0].to_bool())? dense_14_kernel_arra_4_q0.read(): sel_tmp5_i6_fu_4289_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp7_i_fu_3330_p3() {
    sel_tmp7_i_fu_3330_p3 = (!sel_tmp6_i_fu_3325_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp6_i_fu_3325_p2.read()[0].to_bool())? dense_14_kernel_arra_4_q0.read(): sel_tmp5_i_fu_3317_p3.read());
}

void k2c_affine_matmul_1::thread_sel_tmp8_i4_fu_2873_p2() {
    sel_tmp8_i4_fu_2873_p2 = (!tmp_205_reg_4802.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_reg_4802.read() == ap_const_lv3_4);
}

void k2c_affine_matmul_1::thread_sel_tmp8_i5_fu_3849_p2() {
    sel_tmp8_i5_fu_3849_p2 = (!tmp_226_reg_5449.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_5449.read() == ap_const_lv3_4);
}

void k2c_affine_matmul_1::thread_sel_tmp8_i6_fu_4335_p2() {
    sel_tmp8_i6_fu_4335_p2 = (!tmp_237_reg_5806.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_237_reg_5806.read() == ap_const_lv3_4);
}

void k2c_affine_matmul_1::thread_sel_tmp8_i_fu_3363_p2() {
    sel_tmp8_i_fu_3363_p2 = (!tmp_215_reg_5092.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_5092.read() == ap_const_lv3_4);
}

void k2c_affine_matmul_1::thread_sel_tmp9_i4_fu_2878_p3() {
    sel_tmp9_i4_fu_2878_p3 = (!sel_tmp8_i4_fu_2873_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_i4_fu_2873_p2.read()[0].to_bool())? dense_14_kernel_arra_3_q0.read(): sel_tmp7_i4_reg_4824.read());
}

void k2c_affine_matmul_1::thread_sel_tmp9_i5_fu_3854_p3() {
    sel_tmp9_i5_fu_3854_p3 = (!sel_tmp8_i5_fu_3849_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_i5_fu_3849_p2.read()[0].to_bool())? dense_14_kernel_arra_3_q0.read(): sel_tmp7_i5_reg_5552.read());
}

void k2c_affine_matmul_1::thread_sel_tmp9_i6_fu_4340_p3() {
    sel_tmp9_i6_fu_4340_p3 = (!sel_tmp8_i6_fu_4335_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_i6_fu_4335_p2.read()[0].to_bool())? dense_14_kernel_arra_3_q0.read(): sel_tmp7_i6_reg_5909.read());
}

void k2c_affine_matmul_1::thread_sel_tmp9_i_fu_3368_p3() {
    sel_tmp9_i_fu_3368_p3 = (!sel_tmp8_i_fu_3363_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_i_fu_3363_p2.read()[0].to_bool())? dense_14_kernel_arra_3_q0.read(): sel_tmp7_i_reg_5195.read());
}

void k2c_affine_matmul_1::thread_sel_tmp_i4_fu_2777_p2() {
    sel_tmp_i4_fu_2777_p2 = (!tmp_205_fu_2773_p1.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_205_fu_2773_p1.read() == ap_const_lv3_0);
}

void k2c_affine_matmul_1::thread_sel_tmp_i5_fu_3772_p2() {
    sel_tmp_i5_fu_3772_p2 = (!tmp_226_reg_5449.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_reg_5449.read() == ap_const_lv3_0);
}

void k2c_affine_matmul_1::thread_sel_tmp_i6_fu_4258_p2() {
    sel_tmp_i6_fu_4258_p2 = (!tmp_237_reg_5806.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_237_reg_5806.read() == ap_const_lv3_0);
}

void k2c_affine_matmul_1::thread_sel_tmp_i_fu_3286_p2() {
    sel_tmp_i_fu_3286_p2 = (!tmp_215_reg_5092.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_reg_5092.read() == ap_const_lv3_0);
}

void k2c_affine_matmul_1::thread_sum3_1_fu_3213_p2() {
    sum3_1_fu_3213_p2 = (!tmp_213_fu_3187_p1.read().is_01() || !k_2_cast2_fu_3200_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_213_fu_3187_p1.read()) + sc_biguint<9>(k_2_cast2_fu_3200_p1.read()));
}

void k2c_affine_matmul_1::thread_sum3_2_fu_3699_p2() {
    sum3_2_fu_3699_p2 = (!tmp_224_fu_3673_p1.read().is_01() || !k_2_6_cast1_fu_3686_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_224_fu_3673_p1.read()) + sc_biguint<9>(k_2_6_cast1_fu_3686_p1.read()));
}

void k2c_affine_matmul_1::thread_sum3_3_fu_4185_p2() {
    sum3_3_fu_4185_p2 = (!tmp_235_fu_4159_p1.read().is_01() || !k_2_7_cast1_fu_4172_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_235_fu_4159_p1.read()) + sc_biguint<9>(k_2_7_cast1_fu_4172_p1.read()));
}

void k2c_affine_matmul_1::thread_sum3_fu_2745_p2() {
    sum3_fu_2745_p2 = (!tmp_202_fu_2741_p1.read().is_01() || !k_cast_fu_2737_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_202_fu_2741_p1.read()) + sc_biguint<9>(k_cast_fu_2737_p1.read()));
}

void k2c_affine_matmul_1::thread_sum6_1_fu_3251_p2() {
    sum6_1_fu_3251_p2 = (!tmp_1_cast_cast_fu_3243_p1.read().is_01() || !j_1_lcssa_cast_cast_fu_3191_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_1_cast_cast_fu_3243_p1.read()) + sc_biguint<13>(j_1_lcssa_cast_cast_fu_3191_p1.read()));
}

void k2c_affine_matmul_1::thread_sum6_2_fu_3737_p2() {
    sum6_2_fu_3737_p2 = (!tmp_2_cast_cast_fu_3729_p1.read().is_01() || !j_1_lcssa_1_cast_cas_fu_3677_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_2_cast_cast_fu_3729_p1.read()) + sc_biguint<13>(j_1_lcssa_1_cast_cas_fu_3677_p1.read()));
}

void k2c_affine_matmul_1::thread_sum6_3_fu_4223_p2() {
    sum6_3_fu_4223_p2 = (!tmp_3_cast_cast_fu_4215_p1.read().is_01() || !j_1_lcssa_2_cast_cas_fu_4163_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_3_cast_cast_fu_4215_p1.read()) + sc_biguint<13>(j_1_lcssa_2_cast_cas_fu_4163_p1.read()));
}

void k2c_affine_matmul_1::thread_tmp_131_fu_3204_p2() {
    tmp_131_fu_3204_p2 = (tmp_203_reg_4829.read() | ap_const_lv3_1);
}

void k2c_affine_matmul_1::thread_tmp_132_fu_2700_p4() {
    tmp_132_fu_2700_p4 = k_reg_1145.read().range(6, 2);
}

void k2c_affine_matmul_1::thread_tmp_133_fu_2710_p4() {
    tmp_133_fu_2710_p4 = j_reg_1133.read().range(6, 3);
}

void k2c_affine_matmul_1::thread_tmp_142_fu_3690_p2() {
    tmp_142_fu_3690_p2 = (tmp_203_reg_4829.read() | ap_const_lv3_2);
}

void k2c_affine_matmul_1::thread_tmp_143_fu_2720_p3() {
    tmp_143_fu_2720_p3 = esl_concat<5,4>(tmp_132_fu_2700_p4.read(), tmp_133_fu_2710_p4.read());
}

void k2c_affine_matmul_1::thread_tmp_144_fu_3341_p9() {
    tmp_144_fu_3341_p9 = esl_zext<64,3>(arrayNo_trunc6_reg_5082.read());
}

void k2c_affine_matmul_1::thread_tmp_153_fu_3827_p9() {
    tmp_153_fu_3827_p9 = esl_zext<64,3>(arrayNo_trunc7_reg_5439.read());
}

void k2c_affine_matmul_1::thread_tmp_154_fu_4176_p2() {
    tmp_154_fu_4176_p2 = (tmp_203_reg_4829.read() | ap_const_lv3_3);
}

void k2c_affine_matmul_1::thread_tmp_155_fu_4313_p9() {
    tmp_155_fu_4313_p9 = esl_zext<64,3>(arrayNo_trunc8_reg_5796.read());
}

void k2c_affine_matmul_1::thread_tmp_1_cast_cast_fu_3243_p1() {
    tmp_1_cast_cast_fu_3243_p1 = esl_zext<13,12>(tmp_1_fu_3235_p3.read());
}

void k2c_affine_matmul_1::thread_tmp_1_fu_3235_p3() {
    tmp_1_fu_3235_p3 = esl_concat<7,5>(k_2_s_fu_3195_p2.read(), ap_const_lv5_0);
}

void k2c_affine_matmul_1::thread_tmp_202_fu_2741_p1() {
    tmp_202_fu_2741_p1 = inneridx_reg_1157.read().range(9-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_203_fu_2833_p1() {
    tmp_203_fu_2833_p1 = k_reg_1145.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_204_fu_2837_p1() {
    tmp_204_fu_2837_p1 = inneridx_reg_1157.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_205_fu_2773_p1() {
    tmp_205_fu_2773_p1 = j_reg_1133.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_206_fu_2920_p2() {
    tmp_206_fu_2920_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_reg_1181.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_207_fu_2954_p2() {
    tmp_207_fu_2954_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_0_s_fu_2943_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_208_fu_2988_p2() {
    tmp_208_fu_2988_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_0_5_fu_2977_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_209_fu_3022_p2() {
    tmp_209_fu_3022_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_0_6_fu_3011_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_210_fu_3056_p2() {
    tmp_210_fu_3056_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_0_8_fu_3045_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_211_fu_3090_p2() {
    tmp_211_fu_3090_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_0_9_fu_3079_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_212_fu_3124_p2() {
    tmp_212_fu_3124_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_0_1_fu_3113_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_213_fu_3187_p1() {
    tmp_213_fu_3187_p1 = inneridx_1_lcssa_reg_1499.read().range(9-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_214_fu_3209_p1() {
    tmp_214_fu_3209_p1 = inneridx_1_lcssa_reg_1499.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_215_fu_3247_p1() {
    tmp_215_fu_3247_p1 = j_1_lcssa_reg_1522.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_216_fu_3158_p2() {
    tmp_216_fu_3158_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_0_2_fu_3147_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_217_fu_3406_p2() {
    tmp_217_fu_3406_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_1_reg_1553.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_218_fu_3440_p2() {
    tmp_218_fu_3440_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_1_s_fu_3429_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_219_fu_3474_p2() {
    tmp_219_fu_3474_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_1_5_fu_3463_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_220_fu_3508_p2() {
    tmp_220_fu_3508_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_1_6_fu_3497_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_221_fu_3542_p2() {
    tmp_221_fu_3542_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_1_8_fu_3531_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_222_fu_3576_p2() {
    tmp_222_fu_3576_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_1_9_fu_3565_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_223_fu_3610_p2() {
    tmp_223_fu_3610_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_1_1_fu_3599_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_224_fu_3673_p1() {
    tmp_224_fu_3673_p1 = inneridx_1_lcssa_1_reg_1871.read().range(9-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_225_fu_3695_p1() {
    tmp_225_fu_3695_p1 = inneridx_1_lcssa_1_reg_1871.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_226_fu_3733_p1() {
    tmp_226_fu_3733_p1 = j_1_lcssa_1_reg_1894.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_227_fu_3644_p2() {
    tmp_227_fu_3644_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_1_2_fu_3633_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_228_fu_3892_p2() {
    tmp_228_fu_3892_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_2_reg_1925.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_229_fu_3926_p2() {
    tmp_229_fu_3926_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_2_s_fu_3915_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_230_fu_3960_p2() {
    tmp_230_fu_3960_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_2_5_fu_3949_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_231_fu_3994_p2() {
    tmp_231_fu_3994_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_2_6_fu_3983_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_232_fu_4028_p2() {
    tmp_232_fu_4028_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_2_8_fu_4017_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_233_fu_4062_p2() {
    tmp_233_fu_4062_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_2_9_fu_4051_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_234_fu_4096_p2() {
    tmp_234_fu_4096_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_2_1_fu_4085_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_235_fu_4159_p1() {
    tmp_235_fu_4159_p1 = inneridx_1_lcssa_2_reg_2243.read().range(9-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_236_fu_4181_p1() {
    tmp_236_fu_4181_p1 = inneridx_1_lcssa_2_reg_2243.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_237_fu_4219_p1() {
    tmp_237_fu_4219_p1 = j_1_lcssa_2_reg_2266.read().range(3-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_238_fu_4130_p2() {
    tmp_238_fu_4130_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_2_2_fu_4119_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_239_fu_4378_p2() {
    tmp_239_fu_4378_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_3_reg_2297.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_240_fu_4412_p2() {
    tmp_240_fu_4412_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_3_s_fu_4401_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_241_fu_4446_p2() {
    tmp_241_fu_4446_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_3_5_fu_4435_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_242_fu_4480_p2() {
    tmp_242_fu_4480_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_3_6_fu_4469_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_243_fu_4514_p2() {
    tmp_243_fu_4514_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_3_8_fu_4503_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_244_fu_4548_p2() {
    tmp_244_fu_4548_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_3_9_fu_4537_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_245_fu_4582_p2() {
    tmp_245_fu_4582_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_3_1_fu_4571_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_246_fu_4616_p2() {
    tmp_246_fu_4616_p2 = (!ap_const_lv64_7.is_01())? sc_lv<64>(): i_33_3_2_fu_4605_p2.read() << (unsigned short)ap_const_lv64_7.to_uint();
}

void k2c_affine_matmul_1::thread_tmp_2_cast_cast_fu_3729_p1() {
    tmp_2_cast_cast_fu_3729_p1 = esl_zext<13,12>(tmp_2_fu_3721_p3.read());
}

void k2c_affine_matmul_1::thread_tmp_2_fu_3721_p3() {
    tmp_2_fu_3721_p3 = esl_concat<7,5>(k_2_6_fu_3681_p2.read(), ap_const_lv5_0);
}

void k2c_affine_matmul_1::thread_tmp_37_0_1_fu_2966_p2() {
    tmp_37_0_1_fu_2966_p2 = (!j_2_0_1_reg_1258.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_0_1_reg_1258.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_0_2_fu_3000_p2() {
    tmp_37_0_2_fu_3000_p2 = (!j_2_0_2_reg_1288.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_0_2_reg_1288.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_0_3_fu_3034_p2() {
    tmp_37_0_3_fu_3034_p2 = (!j_2_0_3_reg_1318.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_0_3_reg_1318.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_0_4_fu_3068_p2() {
    tmp_37_0_4_fu_3068_p2 = (!j_2_0_4_reg_1348.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_0_4_reg_1348.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_0_5_fu_3102_p2() {
    tmp_37_0_5_fu_3102_p2 = (!j_2_0_5_reg_1378.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_0_5_reg_1378.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_0_6_fu_3136_p2() {
    tmp_37_0_6_fu_3136_p2 = (!j_2_0_6_reg_1408.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_0_6_reg_1408.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_0_7_fu_3170_p2() {
    tmp_37_0_7_fu_3170_p2 = (!j_2_0_7_reg_1438.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_0_7_reg_1438.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_1_fu_3452_p2() {
    tmp_37_1_1_fu_3452_p2 = (!j_2_1_1_reg_1630.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_1_reg_1630.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_2_fu_3486_p2() {
    tmp_37_1_2_fu_3486_p2 = (!j_2_1_2_reg_1660.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_2_reg_1660.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_3_fu_3520_p2() {
    tmp_37_1_3_fu_3520_p2 = (!j_2_1_3_reg_1690.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_3_reg_1690.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_4_fu_3554_p2() {
    tmp_37_1_4_fu_3554_p2 = (!j_2_1_4_reg_1720.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_4_reg_1720.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_5_fu_3588_p2() {
    tmp_37_1_5_fu_3588_p2 = (!j_2_1_5_reg_1750.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_5_reg_1750.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_6_fu_3622_p2() {
    tmp_37_1_6_fu_3622_p2 = (!j_2_1_6_reg_1780.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_6_reg_1780.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_7_fu_3656_p2() {
    tmp_37_1_7_fu_3656_p2 = (!j_2_1_7_reg_1810.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_7_reg_1810.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_1_fu_3418_p2() {
    tmp_37_1_fu_3418_p2 = (!j_2_1_reg_1600.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_1_reg_1600.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_1_fu_3938_p2() {
    tmp_37_2_1_fu_3938_p2 = (!j_2_2_1_reg_2002.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_1_reg_2002.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_2_fu_3972_p2() {
    tmp_37_2_2_fu_3972_p2 = (!j_2_2_2_reg_2032.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_2_reg_2032.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_3_fu_4006_p2() {
    tmp_37_2_3_fu_4006_p2 = (!j_2_2_3_reg_2062.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_3_reg_2062.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_4_fu_4040_p2() {
    tmp_37_2_4_fu_4040_p2 = (!j_2_2_4_reg_2092.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_4_reg_2092.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_5_fu_4074_p2() {
    tmp_37_2_5_fu_4074_p2 = (!j_2_2_5_reg_2122.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_5_reg_2122.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_6_fu_4108_p2() {
    tmp_37_2_6_fu_4108_p2 = (!j_2_2_6_reg_2152.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_6_reg_2152.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_7_fu_4142_p2() {
    tmp_37_2_7_fu_4142_p2 = (!j_2_2_7_reg_2182.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_7_reg_2182.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_2_fu_3904_p2() {
    tmp_37_2_fu_3904_p2 = (!j_2_2_reg_1972.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_2_reg_1972.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_1_fu_4424_p2() {
    tmp_37_3_1_fu_4424_p2 = (!j_2_3_1_reg_2374.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_1_reg_2374.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_2_fu_4458_p2() {
    tmp_37_3_2_fu_4458_p2 = (!j_2_3_2_reg_2404.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_2_reg_2404.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_3_fu_4492_p2() {
    tmp_37_3_3_fu_4492_p2 = (!j_2_3_3_reg_2434.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_3_reg_2434.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_4_fu_4526_p2() {
    tmp_37_3_4_fu_4526_p2 = (!j_2_3_4_reg_2464.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_4_reg_2464.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_5_fu_4560_p2() {
    tmp_37_3_5_fu_4560_p2 = (!j_2_3_5_reg_2494.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_5_reg_2494.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_6_fu_4594_p2() {
    tmp_37_3_6_fu_4594_p2 = (!j_2_3_6_reg_2524.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_6_reg_2524.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_7_fu_4628_p2() {
    tmp_37_3_7_fu_4628_p2 = (!j_2_3_7_reg_2554.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_7_reg_2554.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_3_fu_4390_p2() {
    tmp_37_3_fu_4390_p2 = (!j_2_3_reg_2344.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_3_reg_2344.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_37_fu_2932_p2() {
    tmp_37_fu_2932_p2 = (!j_2_reg_1228.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(j_2_reg_1228.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void k2c_affine_matmul_1::thread_tmp_3_cast_cast_fu_4215_p1() {
    tmp_3_cast_cast_fu_4215_p1 = esl_zext<13,12>(tmp_3_fu_4207_p3.read());
}

void k2c_affine_matmul_1::thread_tmp_3_fu_4207_p3() {
    tmp_3_fu_4207_p3 = esl_concat<7,5>(k_2_7_fu_4167_p2.read(), ap_const_lv5_0);
}

void k2c_affine_matmul_1::thread_tmp_fu_2911_p1() {
    tmp_fu_2911_p1 = k_reg_1145.read().range(7-1, 0);
}

void k2c_affine_matmul_1::thread_tmp_s_fu_2851_p9() {
    tmp_s_fu_2851_p9 = esl_zext<64,3>(arrayNo_trunc_fu_2841_p2.read());
}

}

