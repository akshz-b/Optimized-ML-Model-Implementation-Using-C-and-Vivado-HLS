set lang "C"
set moduleName "sample0"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortName2 "i"
set BitWidth2 "64"
set ArrayOpt2 ""
set Const2 "0"
set Volatile2 "0"
set Pointer2 "0"
set Reference2 "0"
set Initializer2 ""
set External2 0
set Dims2 [list 0]
set Interface2 "wire"
set NameSpace2 [list ]
set DataType2 "long long unsigned int"
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2 $Initializer2 $External2 $NameSpace2]
lappend globalVariable $Port2
set PortName3 "dense_16_kernel"
set BitWidth3 "320448"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "0"
set Pointer3 "0"
set Reference3 "0"
set Initializer3 ""
set External3 0
set Dims3 [list 0]
set Interface3 "wire"
set NameSpace3 [list ]
set structMem3 ""
set PortName30 "array"
set BitWidth30 "320000"
set ArrayOpt30 ""
set Const30 "0"
set Volatile30 "0"
set Pointer30 "0"
set Reference30 "0"
set Dims30 [list  10000]
set Interface30 "wire"
set DataType30 "float"
set Port30 [list $PortName30 $Interface30 $DataType30 $Pointer30 $Dims30 $Const30 $Volatile30 $ArrayOpt30]
lappend structMem3 $Port30
set PortName31 "ndim"
set BitWidth31 "64"
set ArrayOpt31 ""
set Const31 "0"
set Volatile31 "0"
set Pointer31 "0"
set Reference31 "0"
set Dims31 [list 0]
set Interface31 "wire"
set DataType31 "long long unsigned int"
set Port31 [list $PortName31 $Interface31 $DataType31 $Pointer31 $Dims31 $Const31 $Volatile31 $ArrayOpt31]
lappend structMem3 $Port31
set PortName32 "numel"
set BitWidth32 "64"
set ArrayOpt32 ""
set Const32 "0"
set Volatile32 "0"
set Pointer32 "0"
set Reference32 "0"
set Dims32 [list 0]
set Interface32 "wire"
set DataType32 "long long unsigned int"
set Port32 [list $PortName32 $Interface32 $DataType32 $Pointer32 $Dims32 $Const32 $Volatile32 $ArrayOpt32]
lappend structMem3 $Port32
set PortName33 "shape"
set BitWidth33 "320"
set ArrayOpt33 ""
set Const33 "0"
set Volatile33 "0"
set Pointer33 "0"
set Reference33 "0"
set Dims33 [list  5]
set Interface33 "wire"
set DataType33 "long long unsigned int"
set Port33 [list $PortName33 $Interface33 $DataType33 $Pointer33 $Dims33 $Const33 $Volatile33 $ArrayOpt33]
lappend structMem3 $Port33
set structParameter3 [list ]
set structArgument3 [list ]
set NameSpace3 [list ]
set structIsPacked3 "0"
set DataType3 [list "k2c_tensor" "struct k2c_tensor" $structMem3 0 0 $structParameter3 $structArgument3 $NameSpace3 $structIsPacked3]
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3 $Initializer3 $External3 $NameSpace3]
lappend globalVariable $Port3
set PortName4 "dense_16_bias"
set BitWidth4 "320448"
set ArrayOpt4 ""
set Const4 "0"
set Volatile4 "0"
set Pointer4 "0"
set Reference4 "0"
set Initializer4 ""
set External4 0
set Dims4 [list 0]
set Interface4 "wire"
set NameSpace4 [list ]
set structMem4 ""
set PortName40 "array"
set BitWidth40 "320000"
set ArrayOpt40 ""
set Const40 "0"
set Volatile40 "0"
set Pointer40 "0"
set Reference40 "0"
set Dims40 [list  10000]
set Interface40 "wire"
set DataType40 "float"
set Port40 [list $PortName40 $Interface40 $DataType40 $Pointer40 $Dims40 $Const40 $Volatile40 $ArrayOpt40]
lappend structMem4 $Port40
set PortName41 "ndim"
set BitWidth41 "64"
set ArrayOpt41 ""
set Const41 "0"
set Volatile41 "0"
set Pointer41 "0"
set Reference41 "0"
set Dims41 [list 0]
set Interface41 "wire"
set DataType41 "long long unsigned int"
set Port41 [list $PortName41 $Interface41 $DataType41 $Pointer41 $Dims41 $Const41 $Volatile41 $ArrayOpt41]
lappend structMem4 $Port41
set PortName42 "numel"
set BitWidth42 "64"
set ArrayOpt42 ""
set Const42 "0"
set Volatile42 "0"
set Pointer42 "0"
set Reference42 "0"
set Dims42 [list 0]
set Interface42 "wire"
set DataType42 "long long unsigned int"
set Port42 [list $PortName42 $Interface42 $DataType42 $Pointer42 $Dims42 $Const42 $Volatile42 $ArrayOpt42]
lappend structMem4 $Port42
set PortName43 "shape"
set BitWidth43 "320"
set ArrayOpt43 ""
set Const43 "0"
set Volatile43 "0"
set Pointer43 "0"
set Reference43 "0"
set Dims43 [list  5]
set Interface43 "wire"
set DataType43 "long long unsigned int"
set Port43 [list $PortName43 $Interface43 $DataType43 $Pointer43 $Dims43 $Const43 $Volatile43 $ArrayOpt43]
lappend structMem4 $Port43
set structParameter4 [list ]
set structArgument4 [list ]
set NameSpace4 [list ]
set structIsPacked4 "0"
set DataType4 [list "k2c_tensor" "struct k2c_tensor" $structMem4 0 0 $structParameter4 $structArgument4 $NameSpace4 $structIsPacked4]
set Port4 [list $PortName4 $Interface4 $DataType4 $Pointer4 $Dims4 $Const4 $Volatile4 $ArrayOpt4 $Initializer4 $External4 $NameSpace4]
lappend globalVariable $Port4
set PortName5 "dense_15_output"
set BitWidth5 "320448"
set ArrayOpt5 ""
set Const5 "0"
set Volatile5 "0"
set Pointer5 "0"
set Reference5 "0"
set Initializer5 ""
set External5 0
set Dims5 [list 0]
set Interface5 "wire"
set NameSpace5 [list ]
set structMem5 ""
set PortName50 "array"
set BitWidth50 "320000"
set ArrayOpt50 ""
set Const50 "0"
set Volatile50 "0"
set Pointer50 "0"
set Reference50 "0"
set Dims50 [list  10000]
set Interface50 "wire"
set DataType50 "float"
set Port50 [list $PortName50 $Interface50 $DataType50 $Pointer50 $Dims50 $Const50 $Volatile50 $ArrayOpt50]
lappend structMem5 $Port50
set PortName51 "ndim"
set BitWidth51 "64"
set ArrayOpt51 ""
set Const51 "0"
set Volatile51 "0"
set Pointer51 "0"
set Reference51 "0"
set Dims51 [list 0]
set Interface51 "wire"
set DataType51 "long long unsigned int"
set Port51 [list $PortName51 $Interface51 $DataType51 $Pointer51 $Dims51 $Const51 $Volatile51 $ArrayOpt51]
lappend structMem5 $Port51
set PortName52 "numel"
set BitWidth52 "64"
set ArrayOpt52 ""
set Const52 "0"
set Volatile52 "0"
set Pointer52 "0"
set Reference52 "0"
set Dims52 [list 0]
set Interface52 "wire"
set DataType52 "long long unsigned int"
set Port52 [list $PortName52 $Interface52 $DataType52 $Pointer52 $Dims52 $Const52 $Volatile52 $ArrayOpt52]
lappend structMem5 $Port52
set PortName53 "shape"
set BitWidth53 "320"
set ArrayOpt53 ""
set Const53 "0"
set Volatile53 "0"
set Pointer53 "0"
set Reference53 "0"
set Dims53 [list  5]
set Interface53 "wire"
set DataType53 "long long unsigned int"
set Port53 [list $PortName53 $Interface53 $DataType53 $Pointer53 $Dims53 $Const53 $Volatile53 $ArrayOpt53]
lappend structMem5 $Port53
set structParameter5 [list ]
set structArgument5 [list ]
set NameSpace5 [list ]
set structIsPacked5 "0"
set DataType5 [list "k2c_tensor" "struct k2c_tensor" $structMem5 0 0 $structParameter5 $structArgument5 $NameSpace5 $structIsPacked5]
set Port5 [list $PortName5 $Interface5 $DataType5 $Pointer5 $Dims5 $Const5 $Volatile5 $ArrayOpt5 $Initializer5 $External5 $NameSpace5]
lappend globalVariable $Port5
set PortName6 "dense_15_kernel"
set BitWidth6 "320448"
set ArrayOpt6 ""
set Const6 "0"
set Volatile6 "0"
set Pointer6 "0"
set Reference6 "0"
set Initializer6 ""
set External6 0
set Dims6 [list 0]
set Interface6 "wire"
set NameSpace6 [list ]
set structMem6 ""
set PortName60 "array"
set BitWidth60 "320000"
set ArrayOpt60 ""
set Const60 "0"
set Volatile60 "0"
set Pointer60 "0"
set Reference60 "0"
set Dims60 [list  10000]
set Interface60 "wire"
set DataType60 "float"
set Port60 [list $PortName60 $Interface60 $DataType60 $Pointer60 $Dims60 $Const60 $Volatile60 $ArrayOpt60]
lappend structMem6 $Port60
set PortName61 "ndim"
set BitWidth61 "64"
set ArrayOpt61 ""
set Const61 "0"
set Volatile61 "0"
set Pointer61 "0"
set Reference61 "0"
set Dims61 [list 0]
set Interface61 "wire"
set DataType61 "long long unsigned int"
set Port61 [list $PortName61 $Interface61 $DataType61 $Pointer61 $Dims61 $Const61 $Volatile61 $ArrayOpt61]
lappend structMem6 $Port61
set PortName62 "numel"
set BitWidth62 "64"
set ArrayOpt62 ""
set Const62 "0"
set Volatile62 "0"
set Pointer62 "0"
set Reference62 "0"
set Dims62 [list 0]
set Interface62 "wire"
set DataType62 "long long unsigned int"
set Port62 [list $PortName62 $Interface62 $DataType62 $Pointer62 $Dims62 $Const62 $Volatile62 $ArrayOpt62]
lappend structMem6 $Port62
set PortName63 "shape"
set BitWidth63 "320"
set ArrayOpt63 ""
set Const63 "0"
set Volatile63 "0"
set Pointer63 "0"
set Reference63 "0"
set Dims63 [list  5]
set Interface63 "wire"
set DataType63 "long long unsigned int"
set Port63 [list $PortName63 $Interface63 $DataType63 $Pointer63 $Dims63 $Const63 $Volatile63 $ArrayOpt63]
lappend structMem6 $Port63
set structParameter6 [list ]
set structArgument6 [list ]
set NameSpace6 [list ]
set structIsPacked6 "0"
set DataType6 [list "k2c_tensor" "struct k2c_tensor" $structMem6 0 0 $structParameter6 $structArgument6 $NameSpace6 $structIsPacked6]
set Port6 [list $PortName6 $Interface6 $DataType6 $Pointer6 $Dims6 $Const6 $Volatile6 $ArrayOpt6 $Initializer6 $External6 $NameSpace6]
lappend globalVariable $Port6
set PortName7 "dense_15_bias"
set BitWidth7 "320448"
set ArrayOpt7 ""
set Const7 "0"
set Volatile7 "0"
set Pointer7 "0"
set Reference7 "0"
set Initializer7 ""
set External7 0
set Dims7 [list 0]
set Interface7 "wire"
set NameSpace7 [list ]
set structMem7 ""
set PortName70 "array"
set BitWidth70 "320000"
set ArrayOpt70 ""
set Const70 "0"
set Volatile70 "0"
set Pointer70 "0"
set Reference70 "0"
set Dims70 [list  10000]
set Interface70 "wire"
set DataType70 "float"
set Port70 [list $PortName70 $Interface70 $DataType70 $Pointer70 $Dims70 $Const70 $Volatile70 $ArrayOpt70]
lappend structMem7 $Port70
set PortName71 "ndim"
set BitWidth71 "64"
set ArrayOpt71 ""
set Const71 "0"
set Volatile71 "0"
set Pointer71 "0"
set Reference71 "0"
set Dims71 [list 0]
set Interface71 "wire"
set DataType71 "long long unsigned int"
set Port71 [list $PortName71 $Interface71 $DataType71 $Pointer71 $Dims71 $Const71 $Volatile71 $ArrayOpt71]
lappend structMem7 $Port71
set PortName72 "numel"
set BitWidth72 "64"
set ArrayOpt72 ""
set Const72 "0"
set Volatile72 "0"
set Pointer72 "0"
set Reference72 "0"
set Dims72 [list 0]
set Interface72 "wire"
set DataType72 "long long unsigned int"
set Port72 [list $PortName72 $Interface72 $DataType72 $Pointer72 $Dims72 $Const72 $Volatile72 $ArrayOpt72]
lappend structMem7 $Port72
set PortName73 "shape"
set BitWidth73 "320"
set ArrayOpt73 ""
set Const73 "0"
set Volatile73 "0"
set Pointer73 "0"
set Reference73 "0"
set Dims73 [list  5]
set Interface73 "wire"
set DataType73 "long long unsigned int"
set Port73 [list $PortName73 $Interface73 $DataType73 $Pointer73 $Dims73 $Const73 $Volatile73 $ArrayOpt73]
lappend structMem7 $Port73
set structParameter7 [list ]
set structArgument7 [list ]
set NameSpace7 [list ]
set structIsPacked7 "0"
set DataType7 [list "k2c_tensor" "struct k2c_tensor" $structMem7 0 0 $structParameter7 $structArgument7 $NameSpace7 $structIsPacked7]
set Port7 [list $PortName7 $Interface7 $DataType7 $Pointer7 $Dims7 $Const7 $Volatile7 $ArrayOpt7 $Initializer7 $External7 $NameSpace7]
lappend globalVariable $Port7
set PortName8 "dense_14_output"
set BitWidth8 "320448"
set ArrayOpt8 ""
set Const8 "0"
set Volatile8 "0"
set Pointer8 "0"
set Reference8 "0"
set Initializer8 ""
set External8 0
set Dims8 [list 0]
set Interface8 "wire"
set NameSpace8 [list ]
set structMem8 ""
set PortName80 "array"
set BitWidth80 "320000"
set ArrayOpt80 ""
set Const80 "0"
set Volatile80 "0"
set Pointer80 "0"
set Reference80 "0"
set Dims80 [list  10000]
set Interface80 "wire"
set DataType80 "float"
set Port80 [list $PortName80 $Interface80 $DataType80 $Pointer80 $Dims80 $Const80 $Volatile80 $ArrayOpt80]
lappend structMem8 $Port80
set PortName81 "ndim"
set BitWidth81 "64"
set ArrayOpt81 ""
set Const81 "0"
set Volatile81 "0"
set Pointer81 "0"
set Reference81 "0"
set Dims81 [list 0]
set Interface81 "wire"
set DataType81 "long long unsigned int"
set Port81 [list $PortName81 $Interface81 $DataType81 $Pointer81 $Dims81 $Const81 $Volatile81 $ArrayOpt81]
lappend structMem8 $Port81
set PortName82 "numel"
set BitWidth82 "64"
set ArrayOpt82 ""
set Const82 "0"
set Volatile82 "0"
set Pointer82 "0"
set Reference82 "0"
set Dims82 [list 0]
set Interface82 "wire"
set DataType82 "long long unsigned int"
set Port82 [list $PortName82 $Interface82 $DataType82 $Pointer82 $Dims82 $Const82 $Volatile82 $ArrayOpt82]
lappend structMem8 $Port82
set PortName83 "shape"
set BitWidth83 "320"
set ArrayOpt83 ""
set Const83 "0"
set Volatile83 "0"
set Pointer83 "0"
set Reference83 "0"
set Dims83 [list  5]
set Interface83 "wire"
set DataType83 "long long unsigned int"
set Port83 [list $PortName83 $Interface83 $DataType83 $Pointer83 $Dims83 $Const83 $Volatile83 $ArrayOpt83]
lappend structMem8 $Port83
set structParameter8 [list ]
set structArgument8 [list ]
set NameSpace8 [list ]
set structIsPacked8 "0"
set DataType8 [list "k2c_tensor" "struct k2c_tensor" $structMem8 0 0 $structParameter8 $structArgument8 $NameSpace8 $structIsPacked8]
set Port8 [list $PortName8 $Interface8 $DataType8 $Pointer8 $Dims8 $Const8 $Volatile8 $ArrayOpt8 $Initializer8 $External8 $NameSpace8]
lappend globalVariable $Port8
set PortName9 "dense_14_kernel"
set BitWidth9 "320448"
set ArrayOpt9 ""
set Const9 "0"
set Volatile9 "0"
set Pointer9 "0"
set Reference9 "0"
set Initializer9 ""
set External9 0
set Dims9 [list 0]
set Interface9 "wire"
set NameSpace9 [list ]
set structMem9 ""
set PortName90 "array"
set BitWidth90 "320000"
set ArrayOpt90 ""
set Const90 "0"
set Volatile90 "0"
set Pointer90 "0"
set Reference90 "0"
set Dims90 [list  10000]
set Interface90 "wire"
set DataType90 "float"
set Port90 [list $PortName90 $Interface90 $DataType90 $Pointer90 $Dims90 $Const90 $Volatile90 $ArrayOpt90]
lappend structMem9 $Port90
set PortName91 "ndim"
set BitWidth91 "64"
set ArrayOpt91 ""
set Const91 "0"
set Volatile91 "0"
set Pointer91 "0"
set Reference91 "0"
set Dims91 [list 0]
set Interface91 "wire"
set DataType91 "long long unsigned int"
set Port91 [list $PortName91 $Interface91 $DataType91 $Pointer91 $Dims91 $Const91 $Volatile91 $ArrayOpt91]
lappend structMem9 $Port91
set PortName92 "numel"
set BitWidth92 "64"
set ArrayOpt92 ""
set Const92 "0"
set Volatile92 "0"
set Pointer92 "0"
set Reference92 "0"
set Dims92 [list 0]
set Interface92 "wire"
set DataType92 "long long unsigned int"
set Port92 [list $PortName92 $Interface92 $DataType92 $Pointer92 $Dims92 $Const92 $Volatile92 $ArrayOpt92]
lappend structMem9 $Port92
set PortName93 "shape"
set BitWidth93 "320"
set ArrayOpt93 ""
set Const93 "0"
set Volatile93 "0"
set Pointer93 "0"
set Reference93 "0"
set Dims93 [list  5]
set Interface93 "wire"
set DataType93 "long long unsigned int"
set Port93 [list $PortName93 $Interface93 $DataType93 $Pointer93 $Dims93 $Const93 $Volatile93 $ArrayOpt93]
lappend structMem9 $Port93
set structParameter9 [list ]
set structArgument9 [list ]
set NameSpace9 [list ]
set structIsPacked9 "0"
set DataType9 [list "k2c_tensor" "struct k2c_tensor" $structMem9 0 0 $structParameter9 $structArgument9 $NameSpace9 $structIsPacked9]
set Port9 [list $PortName9 $Interface9 $DataType9 $Pointer9 $Dims9 $Const9 $Volatile9 $ArrayOpt9 $Initializer9 $External9 $NameSpace9]
lappend globalVariable $Port9
set PortName10 "dense_14_bias"
set BitWidth10 "320448"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Initializer10 ""
set External10 0
set Dims10 [list 0]
set Interface10 "wire"
set NameSpace10 [list ]
set structMem10 ""
set PortName100 "array"
set BitWidth100 "320000"
set ArrayOpt100 ""
set Const100 "0"
set Volatile100 "0"
set Pointer100 "0"
set Reference100 "0"
set Dims100 [list  10000]
set Interface100 "wire"
set DataType100 "float"
set Port100 [list $PortName100 $Interface100 $DataType100 $Pointer100 $Dims100 $Const100 $Volatile100 $ArrayOpt100]
lappend structMem10 $Port100
set PortName101 "ndim"
set BitWidth101 "64"
set ArrayOpt101 ""
set Const101 "0"
set Volatile101 "0"
set Pointer101 "0"
set Reference101 "0"
set Dims101 [list 0]
set Interface101 "wire"
set DataType101 "long long unsigned int"
set Port101 [list $PortName101 $Interface101 $DataType101 $Pointer101 $Dims101 $Const101 $Volatile101 $ArrayOpt101]
lappend structMem10 $Port101
set PortName102 "numel"
set BitWidth102 "64"
set ArrayOpt102 ""
set Const102 "0"
set Volatile102 "0"
set Pointer102 "0"
set Reference102 "0"
set Dims102 [list 0]
set Interface102 "wire"
set DataType102 "long long unsigned int"
set Port102 [list $PortName102 $Interface102 $DataType102 $Pointer102 $Dims102 $Const102 $Volatile102 $ArrayOpt102]
lappend structMem10 $Port102
set PortName103 "shape"
set BitWidth103 "320"
set ArrayOpt103 ""
set Const103 "0"
set Volatile103 "0"
set Pointer103 "0"
set Reference103 "0"
set Dims103 [list  5]
set Interface103 "wire"
set DataType103 "long long unsigned int"
set Port103 [list $PortName103 $Interface103 $DataType103 $Pointer103 $Dims103 $Const103 $Volatile103 $ArrayOpt103]
lappend structMem10 $Port103
set structParameter10 [list ]
set structArgument10 [list ]
set NameSpace10 [list ]
set structIsPacked10 "0"
set DataType10 [list "k2c_tensor" "struct k2c_tensor" $structMem10 0 0 $structParameter10 $structArgument10 $NameSpace10 $structIsPacked10]
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10 $Initializer10 $External10 $NameSpace10]
lappend globalVariable $Port10
set PortName11 "dense_13_output"
set BitWidth11 "320448"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Initializer11 ""
set External11 0
set Dims11 [list 0]
set Interface11 "wire"
set NameSpace11 [list ]
set structMem11 ""
set PortName110 "array"
set BitWidth110 "320000"
set ArrayOpt110 ""
set Const110 "0"
set Volatile110 "0"
set Pointer110 "0"
set Reference110 "0"
set Dims110 [list  10000]
set Interface110 "wire"
set DataType110 "float"
set Port110 [list $PortName110 $Interface110 $DataType110 $Pointer110 $Dims110 $Const110 $Volatile110 $ArrayOpt110]
lappend structMem11 $Port110
set PortName111 "ndim"
set BitWidth111 "64"
set ArrayOpt111 ""
set Const111 "0"
set Volatile111 "0"
set Pointer111 "0"
set Reference111 "0"
set Dims111 [list 0]
set Interface111 "wire"
set DataType111 "long long unsigned int"
set Port111 [list $PortName111 $Interface111 $DataType111 $Pointer111 $Dims111 $Const111 $Volatile111 $ArrayOpt111]
lappend structMem11 $Port111
set PortName112 "numel"
set BitWidth112 "64"
set ArrayOpt112 ""
set Const112 "0"
set Volatile112 "0"
set Pointer112 "0"
set Reference112 "0"
set Dims112 [list 0]
set Interface112 "wire"
set DataType112 "long long unsigned int"
set Port112 [list $PortName112 $Interface112 $DataType112 $Pointer112 $Dims112 $Const112 $Volatile112 $ArrayOpt112]
lappend structMem11 $Port112
set PortName113 "shape"
set BitWidth113 "320"
set ArrayOpt113 ""
set Const113 "0"
set Volatile113 "0"
set Pointer113 "0"
set Reference113 "0"
set Dims113 [list  5]
set Interface113 "wire"
set DataType113 "long long unsigned int"
set Port113 [list $PortName113 $Interface113 $DataType113 $Pointer113 $Dims113 $Const113 $Volatile113 $ArrayOpt113]
lappend structMem11 $Port113
set structParameter11 [list ]
set structArgument11 [list ]
set NameSpace11 [list ]
set structIsPacked11 "0"
set DataType11 [list "k2c_tensor" "struct k2c_tensor" $structMem11 0 0 $structParameter11 $structArgument11 $NameSpace11 $structIsPacked11]
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11 $Initializer11 $External11 $NameSpace11]
lappend globalVariable $Port11
set PortName12 "dense_13_kernel"
set BitWidth12 "320448"
set ArrayOpt12 ""
set Const12 "0"
set Volatile12 "0"
set Pointer12 "0"
set Reference12 "0"
set Initializer12 ""
set External12 0
set Dims12 [list 0]
set Interface12 "wire"
set NameSpace12 [list ]
set structMem12 ""
set PortName120 "array"
set BitWidth120 "320000"
set ArrayOpt120 ""
set Const120 "0"
set Volatile120 "0"
set Pointer120 "0"
set Reference120 "0"
set Dims120 [list  10000]
set Interface120 "wire"
set DataType120 "float"
set Port120 [list $PortName120 $Interface120 $DataType120 $Pointer120 $Dims120 $Const120 $Volatile120 $ArrayOpt120]
lappend structMem12 $Port120
set PortName121 "ndim"
set BitWidth121 "64"
set ArrayOpt121 ""
set Const121 "0"
set Volatile121 "0"
set Pointer121 "0"
set Reference121 "0"
set Dims121 [list 0]
set Interface121 "wire"
set DataType121 "long long unsigned int"
set Port121 [list $PortName121 $Interface121 $DataType121 $Pointer121 $Dims121 $Const121 $Volatile121 $ArrayOpt121]
lappend structMem12 $Port121
set PortName122 "numel"
set BitWidth122 "64"
set ArrayOpt122 ""
set Const122 "0"
set Volatile122 "0"
set Pointer122 "0"
set Reference122 "0"
set Dims122 [list 0]
set Interface122 "wire"
set DataType122 "long long unsigned int"
set Port122 [list $PortName122 $Interface122 $DataType122 $Pointer122 $Dims122 $Const122 $Volatile122 $ArrayOpt122]
lappend structMem12 $Port122
set PortName123 "shape"
set BitWidth123 "320"
set ArrayOpt123 ""
set Const123 "0"
set Volatile123 "0"
set Pointer123 "0"
set Reference123 "0"
set Dims123 [list  5]
set Interface123 "wire"
set DataType123 "long long unsigned int"
set Port123 [list $PortName123 $Interface123 $DataType123 $Pointer123 $Dims123 $Const123 $Volatile123 $ArrayOpt123]
lappend structMem12 $Port123
set structParameter12 [list ]
set structArgument12 [list ]
set NameSpace12 [list ]
set structIsPacked12 "0"
set DataType12 [list "k2c_tensor" "struct k2c_tensor" $structMem12 0 0 $structParameter12 $structArgument12 $NameSpace12 $structIsPacked12]
set Port12 [list $PortName12 $Interface12 $DataType12 $Pointer12 $Dims12 $Const12 $Volatile12 $ArrayOpt12 $Initializer12 $External12 $NameSpace12]
lappend globalVariable $Port12
set PortName13 "dense_13_bias"
set BitWidth13 "320448"
set ArrayOpt13 ""
set Const13 "0"
set Volatile13 "0"
set Pointer13 "0"
set Reference13 "0"
set Initializer13 ""
set External13 0
set Dims13 [list 0]
set Interface13 "wire"
set NameSpace13 [list ]
set structMem13 ""
set PortName130 "array"
set BitWidth130 "320000"
set ArrayOpt130 ""
set Const130 "0"
set Volatile130 "0"
set Pointer130 "0"
set Reference130 "0"
set Dims130 [list  10000]
set Interface130 "wire"
set DataType130 "float"
set Port130 [list $PortName130 $Interface130 $DataType130 $Pointer130 $Dims130 $Const130 $Volatile130 $ArrayOpt130]
lappend structMem13 $Port130
set PortName131 "ndim"
set BitWidth131 "64"
set ArrayOpt131 ""
set Const131 "0"
set Volatile131 "0"
set Pointer131 "0"
set Reference131 "0"
set Dims131 [list 0]
set Interface131 "wire"
set DataType131 "long long unsigned int"
set Port131 [list $PortName131 $Interface131 $DataType131 $Pointer131 $Dims131 $Const131 $Volatile131 $ArrayOpt131]
lappend structMem13 $Port131
set PortName132 "numel"
set BitWidth132 "64"
set ArrayOpt132 ""
set Const132 "0"
set Volatile132 "0"
set Pointer132 "0"
set Reference132 "0"
set Dims132 [list 0]
set Interface132 "wire"
set DataType132 "long long unsigned int"
set Port132 [list $PortName132 $Interface132 $DataType132 $Pointer132 $Dims132 $Const132 $Volatile132 $ArrayOpt132]
lappend structMem13 $Port132
set PortName133 "shape"
set BitWidth133 "320"
set ArrayOpt133 ""
set Const133 "0"
set Volatile133 "0"
set Pointer133 "0"
set Reference133 "0"
set Dims133 [list  5]
set Interface133 "wire"
set DataType133 "long long unsigned int"
set Port133 [list $PortName133 $Interface133 $DataType133 $Pointer133 $Dims133 $Const133 $Volatile133 $ArrayOpt133]
lappend structMem13 $Port133
set structParameter13 [list ]
set structArgument13 [list ]
set NameSpace13 [list ]
set structIsPacked13 "0"
set DataType13 [list "k2c_tensor" "struct k2c_tensor" $structMem13 0 0 $structParameter13 $structArgument13 $NameSpace13 $structIsPacked13]
set Port13 [list $PortName13 $Interface13 $DataType13 $Pointer13 $Dims13 $Const13 $Volatile13 $ArrayOpt13 $Initializer13 $External13 $NameSpace13]
lappend globalVariable $Port13
set PortList ""
set PortName0 "dense_13_input_input"
set BitWidth0 "64"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "1"
set Reference0 "0"
set Dims0 [list 0]
set Interface0 "wire"
set structMem0 ""
set PortName00 "array"
set BitWidth00 "320000"
set ArrayOpt00 ""
set Const00 "0"
set Volatile00 "0"
set Pointer00 "0"
set Reference00 "0"
set Dims00 [list  10000]
set Interface00 "wire"
set DataType00 "float"
set Port00 [list $PortName00 $Interface00 $DataType00 $Pointer00 $Dims00 $Const00 $Volatile00 $ArrayOpt00]
lappend structMem0 $Port00
set PortName01 "ndim"
set BitWidth01 "64"
set ArrayOpt01 ""
set Const01 "0"
set Volatile01 "0"
set Pointer01 "0"
set Reference01 "0"
set Dims01 [list 0]
set Interface01 "wire"
set DataType01 "long long unsigned int"
set Port01 [list $PortName01 $Interface01 $DataType01 $Pointer01 $Dims01 $Const01 $Volatile01 $ArrayOpt01]
lappend structMem0 $Port01
set PortName02 "numel"
set BitWidth02 "64"
set ArrayOpt02 ""
set Const02 "0"
set Volatile02 "0"
set Pointer02 "0"
set Reference02 "0"
set Dims02 [list 0]
set Interface02 "wire"
set DataType02 "long long unsigned int"
set Port02 [list $PortName02 $Interface02 $DataType02 $Pointer02 $Dims02 $Const02 $Volatile02 $ArrayOpt02]
lappend structMem0 $Port02
set PortName03 "shape"
set BitWidth03 "320"
set ArrayOpt03 ""
set Const03 "0"
set Volatile03 "0"
set Pointer03 "0"
set Reference03 "0"
set Dims03 [list  5]
set Interface03 "wire"
set DataType03 "long long unsigned int"
set Port03 [list $PortName03 $Interface03 $DataType03 $Pointer03 $Dims03 $Const03 $Volatile03 $ArrayOpt03]
lappend structMem0 $Port03
set structParameter0 [list ]
set structArgument0 [list ]
set NameSpace0 [list ]
set structIsPacked0 "0"
set DataType0 [list "k2c_tensor" "struct k2c_tensor" $structMem0 0 0 $structParameter0 $structArgument0 $NameSpace0 $structIsPacked0]
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "dense_16_output"
set BitWidth1 "64"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "1"
set Reference1 "0"
set Dims1 [list 0]
set Interface1 "wire"
set structMem1 ""
set PortName10 "array"
set BitWidth10 "320000"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list  10000]
set Interface10 "wire"
set DataType10 "float"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend structMem1 $Port10
set PortName11 "ndim"
set BitWidth11 "64"
set ArrayOpt11 ""
set Const11 "0"
set Volatile11 "0"
set Pointer11 "0"
set Reference11 "0"
set Dims11 [list 0]
set Interface11 "wire"
set DataType11 "long long unsigned int"
set Port11 [list $PortName11 $Interface11 $DataType11 $Pointer11 $Dims11 $Const11 $Volatile11 $ArrayOpt11]
lappend structMem1 $Port11
set PortName12 "numel"
set BitWidth12 "64"
set ArrayOpt12 ""
set Const12 "0"
set Volatile12 "0"
set Pointer12 "0"
set Reference12 "0"
set Dims12 [list 0]
set Interface12 "wire"
set DataType12 "long long unsigned int"
set Port12 [list $PortName12 $Interface12 $DataType12 $Pointer12 $Dims12 $Const12 $Volatile12 $ArrayOpt12]
lappend structMem1 $Port12
set PortName13 "shape"
set BitWidth13 "320"
set ArrayOpt13 ""
set Const13 "0"
set Volatile13 "0"
set Pointer13 "0"
set Reference13 "0"
set Dims13 [list  5]
set Interface13 "wire"
set DataType13 "long long unsigned int"
set Port13 [list $PortName13 $Interface13 $DataType13 $Pointer13 $Dims13 $Const13 $Volatile13 $ArrayOpt13]
lappend structMem1 $Port13
set structParameter1 [list ]
set structArgument1 [list ]
set NameSpace1 [list ]
set structIsPacked1 "0"
set DataType1 [list "k2c_tensor" "struct k2c_tensor" $structMem1 0 0 $structParameter1 $structArgument1 $NameSpace1 $structIsPacked1]
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 0 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
