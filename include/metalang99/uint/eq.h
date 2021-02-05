#ifndef METALANG99_UINT_EQ_H
#define METALANG99_UINT_EQ_H

#include <metalang99/priv/variadics/get.h>

#define METALANG99_PRIV_uintEq(x, y) METALANG99_PRIV_uintEq_AUX(x, y)
#define METALANG99_PRIV_uintEq_AUX(x, y)                                                           \
    METALANG99_PRIV_VARIADICS_SND(METALANG99_PRIV_UINT_EQ_##x##_##y(), 0, ~)

#define METALANG99_PRIV_UINT_EQ_0_0()     ~, 1
#define METALANG99_PRIV_UINT_EQ_1_1()     ~, 1
#define METALANG99_PRIV_UINT_EQ_2_2()     ~, 1
#define METALANG99_PRIV_UINT_EQ_3_3()     ~, 1
#define METALANG99_PRIV_UINT_EQ_4_4()     ~, 1
#define METALANG99_PRIV_UINT_EQ_5_5()     ~, 1
#define METALANG99_PRIV_UINT_EQ_6_6()     ~, 1
#define METALANG99_PRIV_UINT_EQ_7_7()     ~, 1
#define METALANG99_PRIV_UINT_EQ_8_8()     ~, 1
#define METALANG99_PRIV_UINT_EQ_9_9()     ~, 1
#define METALANG99_PRIV_UINT_EQ_10_10()   ~, 1
#define METALANG99_PRIV_UINT_EQ_11_11()   ~, 1
#define METALANG99_PRIV_UINT_EQ_12_12()   ~, 1
#define METALANG99_PRIV_UINT_EQ_13_13()   ~, 1
#define METALANG99_PRIV_UINT_EQ_14_14()   ~, 1
#define METALANG99_PRIV_UINT_EQ_15_15()   ~, 1
#define METALANG99_PRIV_UINT_EQ_16_16()   ~, 1
#define METALANG99_PRIV_UINT_EQ_17_17()   ~, 1
#define METALANG99_PRIV_UINT_EQ_18_18()   ~, 1
#define METALANG99_PRIV_UINT_EQ_19_19()   ~, 1
#define METALANG99_PRIV_UINT_EQ_20_20()   ~, 1
#define METALANG99_PRIV_UINT_EQ_21_21()   ~, 1
#define METALANG99_PRIV_UINT_EQ_22_22()   ~, 1
#define METALANG99_PRIV_UINT_EQ_23_23()   ~, 1
#define METALANG99_PRIV_UINT_EQ_24_24()   ~, 1
#define METALANG99_PRIV_UINT_EQ_25_25()   ~, 1
#define METALANG99_PRIV_UINT_EQ_26_26()   ~, 1
#define METALANG99_PRIV_UINT_EQ_27_27()   ~, 1
#define METALANG99_PRIV_UINT_EQ_28_28()   ~, 1
#define METALANG99_PRIV_UINT_EQ_29_29()   ~, 1
#define METALANG99_PRIV_UINT_EQ_30_30()   ~, 1
#define METALANG99_PRIV_UINT_EQ_31_31()   ~, 1
#define METALANG99_PRIV_UINT_EQ_32_32()   ~, 1
#define METALANG99_PRIV_UINT_EQ_33_33()   ~, 1
#define METALANG99_PRIV_UINT_EQ_34_34()   ~, 1
#define METALANG99_PRIV_UINT_EQ_35_35()   ~, 1
#define METALANG99_PRIV_UINT_EQ_36_36()   ~, 1
#define METALANG99_PRIV_UINT_EQ_37_37()   ~, 1
#define METALANG99_PRIV_UINT_EQ_38_38()   ~, 1
#define METALANG99_PRIV_UINT_EQ_39_39()   ~, 1
#define METALANG99_PRIV_UINT_EQ_40_40()   ~, 1
#define METALANG99_PRIV_UINT_EQ_41_41()   ~, 1
#define METALANG99_PRIV_UINT_EQ_42_42()   ~, 1
#define METALANG99_PRIV_UINT_EQ_43_43()   ~, 1
#define METALANG99_PRIV_UINT_EQ_44_44()   ~, 1
#define METALANG99_PRIV_UINT_EQ_45_45()   ~, 1
#define METALANG99_PRIV_UINT_EQ_46_46()   ~, 1
#define METALANG99_PRIV_UINT_EQ_47_47()   ~, 1
#define METALANG99_PRIV_UINT_EQ_48_48()   ~, 1
#define METALANG99_PRIV_UINT_EQ_49_49()   ~, 1
#define METALANG99_PRIV_UINT_EQ_50_50()   ~, 1
#define METALANG99_PRIV_UINT_EQ_51_51()   ~, 1
#define METALANG99_PRIV_UINT_EQ_52_52()   ~, 1
#define METALANG99_PRIV_UINT_EQ_53_53()   ~, 1
#define METALANG99_PRIV_UINT_EQ_54_54()   ~, 1
#define METALANG99_PRIV_UINT_EQ_55_55()   ~, 1
#define METALANG99_PRIV_UINT_EQ_56_56()   ~, 1
#define METALANG99_PRIV_UINT_EQ_57_57()   ~, 1
#define METALANG99_PRIV_UINT_EQ_58_58()   ~, 1
#define METALANG99_PRIV_UINT_EQ_59_59()   ~, 1
#define METALANG99_PRIV_UINT_EQ_60_60()   ~, 1
#define METALANG99_PRIV_UINT_EQ_61_61()   ~, 1
#define METALANG99_PRIV_UINT_EQ_62_62()   ~, 1
#define METALANG99_PRIV_UINT_EQ_63_63()   ~, 1
#define METALANG99_PRIV_UINT_EQ_64_64()   ~, 1
#define METALANG99_PRIV_UINT_EQ_65_65()   ~, 1
#define METALANG99_PRIV_UINT_EQ_66_66()   ~, 1
#define METALANG99_PRIV_UINT_EQ_67_67()   ~, 1
#define METALANG99_PRIV_UINT_EQ_68_68()   ~, 1
#define METALANG99_PRIV_UINT_EQ_69_69()   ~, 1
#define METALANG99_PRIV_UINT_EQ_70_70()   ~, 1
#define METALANG99_PRIV_UINT_EQ_71_71()   ~, 1
#define METALANG99_PRIV_UINT_EQ_72_72()   ~, 1
#define METALANG99_PRIV_UINT_EQ_73_73()   ~, 1
#define METALANG99_PRIV_UINT_EQ_74_74()   ~, 1
#define METALANG99_PRIV_UINT_EQ_75_75()   ~, 1
#define METALANG99_PRIV_UINT_EQ_76_76()   ~, 1
#define METALANG99_PRIV_UINT_EQ_77_77()   ~, 1
#define METALANG99_PRIV_UINT_EQ_78_78()   ~, 1
#define METALANG99_PRIV_UINT_EQ_79_79()   ~, 1
#define METALANG99_PRIV_UINT_EQ_80_80()   ~, 1
#define METALANG99_PRIV_UINT_EQ_81_81()   ~, 1
#define METALANG99_PRIV_UINT_EQ_82_82()   ~, 1
#define METALANG99_PRIV_UINT_EQ_83_83()   ~, 1
#define METALANG99_PRIV_UINT_EQ_84_84()   ~, 1
#define METALANG99_PRIV_UINT_EQ_85_85()   ~, 1
#define METALANG99_PRIV_UINT_EQ_86_86()   ~, 1
#define METALANG99_PRIV_UINT_EQ_87_87()   ~, 1
#define METALANG99_PRIV_UINT_EQ_88_88()   ~, 1
#define METALANG99_PRIV_UINT_EQ_89_89()   ~, 1
#define METALANG99_PRIV_UINT_EQ_90_90()   ~, 1
#define METALANG99_PRIV_UINT_EQ_91_91()   ~, 1
#define METALANG99_PRIV_UINT_EQ_92_92()   ~, 1
#define METALANG99_PRIV_UINT_EQ_93_93()   ~, 1
#define METALANG99_PRIV_UINT_EQ_94_94()   ~, 1
#define METALANG99_PRIV_UINT_EQ_95_95()   ~, 1
#define METALANG99_PRIV_UINT_EQ_96_96()   ~, 1
#define METALANG99_PRIV_UINT_EQ_97_97()   ~, 1
#define METALANG99_PRIV_UINT_EQ_98_98()   ~, 1
#define METALANG99_PRIV_UINT_EQ_99_99()   ~, 1
#define METALANG99_PRIV_UINT_EQ_100_100() ~, 1
#define METALANG99_PRIV_UINT_EQ_101_101() ~, 1
#define METALANG99_PRIV_UINT_EQ_102_102() ~, 1
#define METALANG99_PRIV_UINT_EQ_103_103() ~, 1
#define METALANG99_PRIV_UINT_EQ_104_104() ~, 1
#define METALANG99_PRIV_UINT_EQ_105_105() ~, 1
#define METALANG99_PRIV_UINT_EQ_106_106() ~, 1
#define METALANG99_PRIV_UINT_EQ_107_107() ~, 1
#define METALANG99_PRIV_UINT_EQ_108_108() ~, 1
#define METALANG99_PRIV_UINT_EQ_109_109() ~, 1
#define METALANG99_PRIV_UINT_EQ_110_110() ~, 1
#define METALANG99_PRIV_UINT_EQ_111_111() ~, 1
#define METALANG99_PRIV_UINT_EQ_112_112() ~, 1
#define METALANG99_PRIV_UINT_EQ_113_113() ~, 1
#define METALANG99_PRIV_UINT_EQ_114_114() ~, 1
#define METALANG99_PRIV_UINT_EQ_115_115() ~, 1
#define METALANG99_PRIV_UINT_EQ_116_116() ~, 1
#define METALANG99_PRIV_UINT_EQ_117_117() ~, 1
#define METALANG99_PRIV_UINT_EQ_118_118() ~, 1
#define METALANG99_PRIV_UINT_EQ_119_119() ~, 1
#define METALANG99_PRIV_UINT_EQ_120_120() ~, 1
#define METALANG99_PRIV_UINT_EQ_121_121() ~, 1
#define METALANG99_PRIV_UINT_EQ_122_122() ~, 1
#define METALANG99_PRIV_UINT_EQ_123_123() ~, 1
#define METALANG99_PRIV_UINT_EQ_124_124() ~, 1
#define METALANG99_PRIV_UINT_EQ_125_125() ~, 1
#define METALANG99_PRIV_UINT_EQ_126_126() ~, 1
#define METALANG99_PRIV_UINT_EQ_127_127() ~, 1
#define METALANG99_PRIV_UINT_EQ_128_128() ~, 1
#define METALANG99_PRIV_UINT_EQ_129_129() ~, 1
#define METALANG99_PRIV_UINT_EQ_130_130() ~, 1
#define METALANG99_PRIV_UINT_EQ_131_131() ~, 1
#define METALANG99_PRIV_UINT_EQ_132_132() ~, 1
#define METALANG99_PRIV_UINT_EQ_133_133() ~, 1
#define METALANG99_PRIV_UINT_EQ_134_134() ~, 1
#define METALANG99_PRIV_UINT_EQ_135_135() ~, 1
#define METALANG99_PRIV_UINT_EQ_136_136() ~, 1
#define METALANG99_PRIV_UINT_EQ_137_137() ~, 1
#define METALANG99_PRIV_UINT_EQ_138_138() ~, 1
#define METALANG99_PRIV_UINT_EQ_139_139() ~, 1
#define METALANG99_PRIV_UINT_EQ_140_140() ~, 1
#define METALANG99_PRIV_UINT_EQ_141_141() ~, 1
#define METALANG99_PRIV_UINT_EQ_142_142() ~, 1
#define METALANG99_PRIV_UINT_EQ_143_143() ~, 1
#define METALANG99_PRIV_UINT_EQ_144_144() ~, 1
#define METALANG99_PRIV_UINT_EQ_145_145() ~, 1
#define METALANG99_PRIV_UINT_EQ_146_146() ~, 1
#define METALANG99_PRIV_UINT_EQ_147_147() ~, 1
#define METALANG99_PRIV_UINT_EQ_148_148() ~, 1
#define METALANG99_PRIV_UINT_EQ_149_149() ~, 1
#define METALANG99_PRIV_UINT_EQ_150_150() ~, 1
#define METALANG99_PRIV_UINT_EQ_151_151() ~, 1
#define METALANG99_PRIV_UINT_EQ_152_152() ~, 1
#define METALANG99_PRIV_UINT_EQ_153_153() ~, 1
#define METALANG99_PRIV_UINT_EQ_154_154() ~, 1
#define METALANG99_PRIV_UINT_EQ_155_155() ~, 1
#define METALANG99_PRIV_UINT_EQ_156_156() ~, 1
#define METALANG99_PRIV_UINT_EQ_157_157() ~, 1
#define METALANG99_PRIV_UINT_EQ_158_158() ~, 1
#define METALANG99_PRIV_UINT_EQ_159_159() ~, 1
#define METALANG99_PRIV_UINT_EQ_160_160() ~, 1
#define METALANG99_PRIV_UINT_EQ_161_161() ~, 1
#define METALANG99_PRIV_UINT_EQ_162_162() ~, 1
#define METALANG99_PRIV_UINT_EQ_163_163() ~, 1
#define METALANG99_PRIV_UINT_EQ_164_164() ~, 1
#define METALANG99_PRIV_UINT_EQ_165_165() ~, 1
#define METALANG99_PRIV_UINT_EQ_166_166() ~, 1
#define METALANG99_PRIV_UINT_EQ_167_167() ~, 1
#define METALANG99_PRIV_UINT_EQ_168_168() ~, 1
#define METALANG99_PRIV_UINT_EQ_169_169() ~, 1
#define METALANG99_PRIV_UINT_EQ_170_170() ~, 1
#define METALANG99_PRIV_UINT_EQ_171_171() ~, 1
#define METALANG99_PRIV_UINT_EQ_172_172() ~, 1
#define METALANG99_PRIV_UINT_EQ_173_173() ~, 1
#define METALANG99_PRIV_UINT_EQ_174_174() ~, 1
#define METALANG99_PRIV_UINT_EQ_175_175() ~, 1
#define METALANG99_PRIV_UINT_EQ_176_176() ~, 1
#define METALANG99_PRIV_UINT_EQ_177_177() ~, 1
#define METALANG99_PRIV_UINT_EQ_178_178() ~, 1
#define METALANG99_PRIV_UINT_EQ_179_179() ~, 1
#define METALANG99_PRIV_UINT_EQ_180_180() ~, 1
#define METALANG99_PRIV_UINT_EQ_181_181() ~, 1
#define METALANG99_PRIV_UINT_EQ_182_182() ~, 1
#define METALANG99_PRIV_UINT_EQ_183_183() ~, 1
#define METALANG99_PRIV_UINT_EQ_184_184() ~, 1
#define METALANG99_PRIV_UINT_EQ_185_185() ~, 1
#define METALANG99_PRIV_UINT_EQ_186_186() ~, 1
#define METALANG99_PRIV_UINT_EQ_187_187() ~, 1
#define METALANG99_PRIV_UINT_EQ_188_188() ~, 1
#define METALANG99_PRIV_UINT_EQ_189_189() ~, 1
#define METALANG99_PRIV_UINT_EQ_190_190() ~, 1
#define METALANG99_PRIV_UINT_EQ_191_191() ~, 1
#define METALANG99_PRIV_UINT_EQ_192_192() ~, 1
#define METALANG99_PRIV_UINT_EQ_193_193() ~, 1
#define METALANG99_PRIV_UINT_EQ_194_194() ~, 1
#define METALANG99_PRIV_UINT_EQ_195_195() ~, 1
#define METALANG99_PRIV_UINT_EQ_196_196() ~, 1
#define METALANG99_PRIV_UINT_EQ_197_197() ~, 1
#define METALANG99_PRIV_UINT_EQ_198_198() ~, 1
#define METALANG99_PRIV_UINT_EQ_199_199() ~, 1
#define METALANG99_PRIV_UINT_EQ_200_200() ~, 1
#define METALANG99_PRIV_UINT_EQ_201_201() ~, 1
#define METALANG99_PRIV_UINT_EQ_202_202() ~, 1
#define METALANG99_PRIV_UINT_EQ_203_203() ~, 1
#define METALANG99_PRIV_UINT_EQ_204_204() ~, 1
#define METALANG99_PRIV_UINT_EQ_205_205() ~, 1
#define METALANG99_PRIV_UINT_EQ_206_206() ~, 1
#define METALANG99_PRIV_UINT_EQ_207_207() ~, 1
#define METALANG99_PRIV_UINT_EQ_208_208() ~, 1
#define METALANG99_PRIV_UINT_EQ_209_209() ~, 1
#define METALANG99_PRIV_UINT_EQ_210_210() ~, 1
#define METALANG99_PRIV_UINT_EQ_211_211() ~, 1
#define METALANG99_PRIV_UINT_EQ_212_212() ~, 1
#define METALANG99_PRIV_UINT_EQ_213_213() ~, 1
#define METALANG99_PRIV_UINT_EQ_214_214() ~, 1
#define METALANG99_PRIV_UINT_EQ_215_215() ~, 1
#define METALANG99_PRIV_UINT_EQ_216_216() ~, 1
#define METALANG99_PRIV_UINT_EQ_217_217() ~, 1
#define METALANG99_PRIV_UINT_EQ_218_218() ~, 1
#define METALANG99_PRIV_UINT_EQ_219_219() ~, 1
#define METALANG99_PRIV_UINT_EQ_220_220() ~, 1
#define METALANG99_PRIV_UINT_EQ_221_221() ~, 1
#define METALANG99_PRIV_UINT_EQ_222_222() ~, 1
#define METALANG99_PRIV_UINT_EQ_223_223() ~, 1
#define METALANG99_PRIV_UINT_EQ_224_224() ~, 1
#define METALANG99_PRIV_UINT_EQ_225_225() ~, 1
#define METALANG99_PRIV_UINT_EQ_226_226() ~, 1
#define METALANG99_PRIV_UINT_EQ_227_227() ~, 1
#define METALANG99_PRIV_UINT_EQ_228_228() ~, 1
#define METALANG99_PRIV_UINT_EQ_229_229() ~, 1
#define METALANG99_PRIV_UINT_EQ_230_230() ~, 1
#define METALANG99_PRIV_UINT_EQ_231_231() ~, 1
#define METALANG99_PRIV_UINT_EQ_232_232() ~, 1
#define METALANG99_PRIV_UINT_EQ_233_233() ~, 1
#define METALANG99_PRIV_UINT_EQ_234_234() ~, 1
#define METALANG99_PRIV_UINT_EQ_235_235() ~, 1
#define METALANG99_PRIV_UINT_EQ_236_236() ~, 1
#define METALANG99_PRIV_UINT_EQ_237_237() ~, 1
#define METALANG99_PRIV_UINT_EQ_238_238() ~, 1
#define METALANG99_PRIV_UINT_EQ_239_239() ~, 1
#define METALANG99_PRIV_UINT_EQ_240_240() ~, 1
#define METALANG99_PRIV_UINT_EQ_241_241() ~, 1
#define METALANG99_PRIV_UINT_EQ_242_242() ~, 1
#define METALANG99_PRIV_UINT_EQ_243_243() ~, 1
#define METALANG99_PRIV_UINT_EQ_244_244() ~, 1
#define METALANG99_PRIV_UINT_EQ_245_245() ~, 1
#define METALANG99_PRIV_UINT_EQ_246_246() ~, 1
#define METALANG99_PRIV_UINT_EQ_247_247() ~, 1
#define METALANG99_PRIV_UINT_EQ_248_248() ~, 1
#define METALANG99_PRIV_UINT_EQ_249_249() ~, 1
#define METALANG99_PRIV_UINT_EQ_250_250() ~, 1
#define METALANG99_PRIV_UINT_EQ_251_251() ~, 1
#define METALANG99_PRIV_UINT_EQ_252_252() ~, 1
#define METALANG99_PRIV_UINT_EQ_253_253() ~, 1
#define METALANG99_PRIV_UINT_EQ_254_254() ~, 1
#define METALANG99_PRIV_UINT_EQ_255_255() ~, 1

#endif // METALANG99_UINT_EQ_H