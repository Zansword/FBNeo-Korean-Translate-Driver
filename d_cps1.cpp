// CPS-1 driver Korean patched roms for fc2 and fbneo - 2022-08-01 written by chamcham425 aka zansword
// Based by fightcade fbneo v50 sources
// 

static const struct GameConfig ConfigTable[] =
{
	{ "captcommjkt"   , CPS_B_21_BT3, mapper_CC63B , 0, NULL                },	
	{ "captcommjr1kt" , CPS_B_21_BT3, mapper_CC63B , 0, NULL                },
	{ "ffightkt"    , CPS_B_04    , mapper_S224B , 0, NULL                },	
	{ "ffightaekt"  , CPS_B_21_DEF, mapper_S224B , 0, NULL                },	
	{ "ffightakt"   , CPS_B_04    , mapper_S224B , 0, NULL                },	
	{ "ffightjkt"   , CPS_B_04    , mapper_S224B , 0, NULL                },	
	{ "ffightj1kt"  , CPS_B_01    , mapper_S224B , 0, NULL                },	
	{ "ffightj2kt"  , CPS_B_02    , mapper_S224B , 0, NULL                },	
	{ "ffightj3kt"  , CPS_B_03    , mapper_S224B , 0, NULL                },	
	{ "ffightj4kt"  , CPS_B_05    , mapper_S224B , 0, NULL                },	
	{ "daimakaikt"  , CPS_B_01    , mapper_DM22A , 0, NULL                },
	{ "daimakairkt" , CPS_B_21_DEF, mapper_DAM63B, 0, NULL                },
	{ "knightsjkt"  , CPS_B_21_BT4, mapper_KR63B , 0, NULL                },
	{ "knightsjakt" , CPS_B_21_BT4, mapper_KR63B , 0, NULL                },
	{ "kodjkt"      , CPS_B_21_BT2, mapper_KD29B , 0, NULL                },
	{ "kodjakt"     , CPS_B_21_BT2, mapper_KD29B , 0, NULL                },
	{ "rockmanjkt"  , CPS_B_21_DEF, mapper_RCM63B, 0, NULL                },	
	{ "punisherjkt" , CPS_B_21_QS3, mapper_PS63B , 0, punisher_decode     },		
	{ "striderjrkt" , CPS_B_21_DEF, mapper_ST24M1, 1, NULL                },
	{ "striderjkt"  , CPS_B_01    , mapper_ST22B , 1, NULL                },	
	{ "area88kt"    , CPS_B_11    , mapper_AR22B , 0, NULL                },	
	{ "area88rkt"   , CPS_B_21_DEF, mapper_AR22B , 0, NULL                },		
	{ "wofjkt"      , CPS_B_21_QS1, mapper_TK263B, 0, wof_decode          },		
	{ "sfzchkt"       , CPS_B_21_DEF, mapper_sfzch , 0, NULL                },
	{ "wofchkt"       , CPS_B_21_DEF, mapper_sfzch , 0, wof_decode          },		
}

static struct BurnRomInfo CaptcommjktRomDesc[] = {
	{ "ccj_23f.8f",    0x080000, 0x5b482b62, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "ccj_22f.7f",    0x080000, 0x216fe8e9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "ccj_24f.9e",    0x020000, 0x6856b740, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ccj_28f.9f",    0x020000, 0xb5ec9706, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "cc_01.3a",      0x080000, 0x7261d8ba, BRF_GRA | CPS1_TILES },
	{ "cc_02.4a",      0x080000, 0x6a60f949, BRF_GRA | CPS1_TILES },
	{ "cc_03.5a",      0x080000, 0x00637302, BRF_GRA | CPS1_TILES },
	{ "cc_04.6a",      0x080000, 0xcc87cf61, BRF_GRA | CPS1_TILES },
	{ "cc_05.7a",      0x080000, 0x3c7b514c, BRF_GRA | CPS1_TILES },
	{ "cc_06.8a",      0x080000, 0xdbcf6c0e, BRF_GRA | CPS1_TILES },
	{ "cc_07.9a",      0x080000, 0x18632bf0, BRF_GRA | CPS1_TILES },
	{ "cc_08.10a",     0x080000, 0x10fd12a3, BRF_GRA | CPS1_TILES },

	{ "ccj_09.12a",    0x010000, 0x698e8b58, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ccj_18.11c",    0x020000, 0x6de2c2db, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ccj_19.12c",    0x020000, 0xb99091ae, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "cc63b.1a",      0x000117, 0xcae8f0f9, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "ccprg1.11d",    0x000117, 0xe1c225c4, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632b.ic1",     0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Captcommjkt)
STD_ROM_FN(Captcommjkt)

static struct BurnRomInfo Captcommjr1ktRomDesc[] = {
	{ "ccj_23b.8f",    0x080000, 0xe2a2d80e, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "ccj_22c.7f",    0x080000, 0x71899696, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "ccj_24b.9e",    0x020000, 0x6aa73ca8, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ccj_28b.9f",    0x020000, 0xfb71cd30, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "cc_01.3a",      0x080000, 0x7261d8ba, BRF_GRA | CPS1_TILES },
	{ "cc_02.4a",      0x080000, 0x6a60f949, BRF_GRA | CPS1_TILES },
	{ "cc_03.5a",      0x080000, 0x00637302, BRF_GRA | CPS1_TILES },
	{ "cc_04.6a",      0x080000, 0xcc87cf61, BRF_GRA | CPS1_TILES },
	{ "cc_05.7a",      0x080000, 0x3c7b514c, BRF_GRA | CPS1_TILES },
	{ "cc_06.8a",      0x080000, 0xdbcf6c0e, BRF_GRA | CPS1_TILES },
	{ "cc_07.9a",      0x080000, 0x18632bf0, BRF_GRA | CPS1_TILES },
	{ "cc_08.10a",     0x080000, 0x10fd12a3, BRF_GRA | CPS1_TILES },

	{ "ccj_09.12a",    0x010000, 0x698e8b58, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ccj_18.11c",    0x020000, 0x6de2c2db, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ccj_19.12c",    0x020000, 0xb99091ae, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "cc63b.1a",      0x000117, 0xcae8f0f9, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "ccprg.11d",     0x000117, 0xe1c225c4, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Captcommjr1kt)
STD_ROM_FN(Captcommjr1kt)

static struct BurnRomInfo FfightktRomDesc[] = {
	{ "ff_36.11f",     0x020000, 0xf9a5ce83, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_42.11h",     0x020000, 0x65f11215, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_37.12f",     0x020000, 0x7f277e22, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffe_43.12h",    0x020000, 0x2e0c3bf7, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff-32m.8h",     0x080000, 0xc747696e, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "ff-5m.7a",      0x080000, 0xfbbc0319, BRF_GRA | CPS1_TILES },
	{ "ff-7m.9a",      0x080000, 0xdeea3b24, BRF_GRA | CPS1_TILES },
	{ "ff-1m.3a",      0x080000, 0x6cf41c55, BRF_GRA | CPS1_TILES },
	{ "ff-3m.5a",      0x080000, 0x2b9b6a0d, BRF_GRA | CPS1_TILES },

	{ "ff_09.12b",     0x010000, 0xb8367eb5, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ff_18.11c",     0x020000, 0x375c66e7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ff_19.12c",     0x020000, 0x1ef137f9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "s224b.1a",      0x000117, 0xcdc4413e, BRF_OPT },	// b-board PLDs
	{ "iob1.11e",      0x000117, 0x3abc0700, BRF_OPT },
};

STD_ROM_PICK(Ffightkt)
STD_ROM_FN(Ffightkt)

static struct BurnRomInfo FfightaktRomDesc[] = {
	{ "ffe_30.11f",    0x020000, 0x2347bf51, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffe_35.11h",    0x020000, 0x5f694ecc, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffe_31.12f",    0x020000, 0xd85ee1ee, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffe_36.12h",    0x020000, 0xc3d31235, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff-32m.8h",     0x080000, 0xc747696e, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "ff-5m.7a",      0x080000, 0xfbbc0319, BRF_GRA | CPS1_TILES },
	{ "ff-7m.9a",      0x080000, 0xdeea3b24, BRF_GRA | CPS1_TILES },
	{ "ff-1m.3a",      0x080000, 0x6cf41c55, BRF_GRA | CPS1_TILES },
	{ "ff-3m.5a",      0x080000, 0x2b9b6a0d, BRF_GRA | CPS1_TILES },

	{ "ffe_23.12b",    0x010000, 0xb8367eb5, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ff_18.11c",     0x020000, 0x375c66e7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ff_19.12c",     0x020000, 0x1ef137f9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "s224b.1a",      0x000117, 0xcdc4413e, BRF_OPT },	// b-board PLDs
	{ "lwio.11e",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Ffightakt)
STD_ROM_FN(Ffightakt)

static struct BurnRomInfo FfightjktRomDesc[] = {
	{ "ff36.bin",      0x020000, 0xf9a5ce83, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff42.bin",      0x020000, 0x65f11215, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff37.bin",      0x020000, 0x7f277e22, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff43.bin",      0x020000, 0x2e0c3bf7, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_34.10f",    0x020000, 0x0c8dc3fc, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_40.10h",    0x020000, 0x8075bab9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_35.11f",    0x020000, 0x4a934121, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_41.11h",    0x020000, 0x2af68154, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "ffj_09.4b",     0x020000, 0x5b116d0d, BRF_GRA | CPS1_TILES },
	{ "ffj_01.4a",     0x020000, 0x815b1797, BRF_GRA | CPS1_TILES },
	{ "ffj_13.9b",     0x020000, 0x8721a7da, BRF_GRA | CPS1_TILES },
	{ "ffj_05.9a",     0x020000, 0xd0fcd4b5, BRF_GRA | CPS1_TILES },
	{ "ffj_24.5e",     0x020000, 0xa1ab607a, BRF_GRA | CPS1_TILES },
	{ "ffj_17.5c",     0x020000, 0x2dc18cf4, BRF_GRA | CPS1_TILES },
	{ "ffj_38.8h",     0x020000, 0x6535a57f, BRF_GRA | CPS1_TILES },
	{ "ffj_32.8f",     0x020000, 0xc8bc4a57, BRF_GRA | CPS1_TILES },
	{ "ffj_10.5b",     0x020000, 0xaef14517, BRF_GRA | CPS1_TILES },
	{ "ffj_02.5a",     0x020000, 0xaf04aff3, BRF_GRA | CPS1_TILES },
	{ "ffj_14.10b",    0x020000, 0x401628be, BRF_GRA | CPS1_TILES },
	{ "ffj_06.10a",    0x020000, 0xa70601f2, BRF_GRA | CPS1_TILES },
	{ "ffj_25.7e",     0x020000, 0xa23a56b7, BRF_GRA | CPS1_TILES },
	{ "ffj_18.7c",     0x020000, 0x430b873e, BRF_GRA | CPS1_TILES },
	{ "ffj_39.9h",     0x020000, 0xde2e0dc8, BRF_GRA | CPS1_TILES },
	{ "ffj_33.9f",     0x020000, 0xc8770bb7, BRF_GRA | CPS1_TILES },

	{ "ff_23.bin",     0x010000, 0xb8367eb5, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ffj_30.bin",    0x020000, 0x375c66e7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ffj_31.bin",    0x020000, 0x1ef137f9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "s222b.1a",      0x000117, 0x6d86b45e, BRF_OPT }, // b-board PLDs
	{ "lwio.12c",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Ffightjkt)
STD_ROM_FN(Ffightjkt)

static struct BurnRomInfo Ffightj1ktRomDesc[] = {
	{ "ffj_36.12f",    0x020000, 0xe2a48af9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_42.12h",    0x020000, 0xf4bb480e, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_37.13f",    0x020000, 0xcdf1a6ac, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_43.13h",    0x020000, 0xf77ad76f, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_34.10f",    0x020000, 0x0c8dc3fc, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_40.10h",    0x020000, 0x8075bab9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_35.11f",    0x020000, 0x4a934121, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_41.11h",    0x020000, 0x2af68154, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "ffj_09.4b",     0x020000, 0x5b116d0d, BRF_GRA | CPS1_TILES },
	{ "ffj_01.4a",     0x020000, 0x815b1797, BRF_GRA | CPS1_TILES },
	{ "ffj_13.9b",     0x020000, 0x8721a7da, BRF_GRA | CPS1_TILES },
	{ "ffj_05.9a",     0x020000, 0xd0fcd4b5, BRF_GRA | CPS1_TILES },
	{ "ffj_24.5e",     0x020000, 0xa1ab607a, BRF_GRA | CPS1_TILES },
	{ "ffj_17.5c",     0x020000, 0x2dc18cf4, BRF_GRA | CPS1_TILES },
	{ "ffj_38.8h",     0x020000, 0x6535a57f, BRF_GRA | CPS1_TILES },
	{ "ffj_32.8f",     0x020000, 0xc8bc4a57, BRF_GRA | CPS1_TILES },
	{ "ffj_10.5b",     0x020000, 0xaef14517, BRF_GRA | CPS1_TILES },
	{ "ffj_02.5a",     0x020000, 0xaf04aff3, BRF_GRA | CPS1_TILES },
	{ "ffj_14.10b",    0x020000, 0x401628be, BRF_GRA | CPS1_TILES },
	{ "ffj_06.10a",    0x020000, 0xa70601f2, BRF_GRA | CPS1_TILES },
	{ "ffj_25.7e",     0x020000, 0xa23a56b7, BRF_GRA | CPS1_TILES },
	{ "ffj_18.7c",     0x020000, 0x430b873e, BRF_GRA | CPS1_TILES },
	{ "ffj_39.9h",     0x020000, 0xde2e0dc8, BRF_GRA | CPS1_TILES },
	{ "ffj_33.9f",     0x020000, 0xc8770bb7, BRF_GRA | CPS1_TILES },

	{ "ff_23.13b",     0x010000, 0xb8367eb5, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ffj_30.12c",    0x020000, 0x375c66e7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ffj_31.13c",    0x020000, 0x1ef137f9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "s222b.1a",      0x000117, 0x6d86b45e, BRF_OPT }, // b-board PLDs
	{ "lwio.12e",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Ffightj1kt)
STD_ROM_FN(Ffightj1kt)

static struct BurnRomInfo Ffightj2ktRomDesc[] = {
	{ "ffj_36a.12f",   0x020000, 0x088ed1c9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_42a.12h",   0x020000, 0xc4c491e6, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_37a.13f",   0x020000, 0xc2fded97, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_43a.13h",   0x020000, 0x81885edb, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_34.10f",     0x020000, 0x0c8dc3fc, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_40.10h",     0x020000, 0x8075bab9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_35.11f",     0x020000, 0x4a934121, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_41.11h",     0x020000, 0x2af68154, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "ff_09.4b",      0x020000, 0x5b116d0d, BRF_GRA | CPS1_TILES },
	{ "ff_01.4a",      0x020000, 0x815b1797, BRF_GRA | CPS1_TILES },
	{ "ff_13.9b",      0x020000, 0x8721a7da, BRF_GRA | CPS1_TILES },
	{ "ff_05.9a",      0x020000, 0xd0fcd4b5, BRF_GRA | CPS1_TILES },
	{ "ff_24.5e",      0x020000, 0xa1ab607a, BRF_GRA | CPS1_TILES },
	{ "ff_17.5c",      0x020000, 0x2dc18cf4, BRF_GRA | CPS1_TILES },
	{ "ff_38.8h",      0x020000, 0x6535a57f, BRF_GRA | CPS1_TILES },
	{ "ff_32.8f",      0x020000, 0xc8bc4a57, BRF_GRA | CPS1_TILES },
	{ "ff_10.5b",      0x020000, 0xaef14517, BRF_GRA | CPS1_TILES },
	{ "ff_02.5a",      0x020000, 0xaf04aff3, BRF_GRA | CPS1_TILES },
	{ "ff_14.10b",     0x020000, 0x401628be, BRF_GRA | CPS1_TILES },
	{ "ff_06.10a",     0x020000, 0xa70601f2, BRF_GRA | CPS1_TILES },
	{ "ff_25.7e",      0x020000, 0xa23a56b7, BRF_GRA | CPS1_TILES },
	{ "ff_18.7c",      0x020000, 0x430b873e, BRF_GRA | CPS1_TILES },
	{ "ff_39.9h",      0x020000, 0xde2e0dc8, BRF_GRA | CPS1_TILES },
	{ "ff_33.9f",      0x020000, 0xc8770bb7, BRF_GRA | CPS1_TILES },

	{ "ff_23.13c",     0x010000, 0xb8367eb5, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ff_30.12e",     0x020000, 0x375c66e7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ff_31.13e",     0x020000, 0x1ef137f9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "s222b.1a",      0x000117, 0x6d86b45e, BRF_OPT }, // b-board PLDs
	{ "lwio.12c",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Ffightj2kt)
STD_ROM_FN(Ffightj2kt)

static struct BurnRomInfo Ffightj3ktRomDesc[] = {
	{ "ffj_36.12f",    0x020000, 0xe619eb30, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_42.12h",    0x020000, 0xbca85263, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_37.13f",    0x020000, 0x801abbaf, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_43.13h",    0x020000, 0x403c3d8c, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_34.10f",    0x020000, 0x0c8dc3fc, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_40.10h",    0x020000, 0x8075bab9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_35.11f",    0x020000, 0x4a934121, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_41.11h",    0x020000, 0x2af68154, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "ff_09.4b",      0x020000, 0x5b116d0d, BRF_GRA | CPS1_TILES },
	{ "ff_01.4a",      0x020000, 0x815b1797, BRF_GRA | CPS1_TILES },
	{ "ff_13.9b",      0x020000, 0x8721a7da, BRF_GRA | CPS1_TILES },
	{ "ff_05.9a",      0x020000, 0xd0fcd4b5, BRF_GRA | CPS1_TILES },
	{ "ff_24.5e",      0x020000, 0xa1ab607a, BRF_GRA | CPS1_TILES },
	{ "ff_17.5c",      0x020000, 0x2dc18cf4, BRF_GRA | CPS1_TILES },
	{ "ff_38.8h",      0x020000, 0x6535a57f, BRF_GRA | CPS1_TILES },
	{ "ff_32.8f",      0x020000, 0xc8bc4a57, BRF_GRA | CPS1_TILES },
	{ "ff_10.5b",      0x020000, 0xaef14517, BRF_GRA | CPS1_TILES },
	{ "ff_02.5a",      0x020000, 0xaf04aff3, BRF_GRA | CPS1_TILES },
	{ "ff_14.10b",     0x020000, 0x401628be, BRF_GRA | CPS1_TILES },
	{ "ff_06.10a",     0x020000, 0xa70601f2, BRF_GRA | CPS1_TILES },
	{ "ff_25.7e",      0x020000, 0xa23a56b7, BRF_GRA | CPS1_TILES },
	{ "ff_18.7c",      0x020000, 0x430b873e, BRF_GRA | CPS1_TILES },
	{ "ff_39.9h",      0x020000, 0xde2e0dc8, BRF_GRA | CPS1_TILES },
	{ "ff_33.9f",      0x020000, 0xc8770bb7, BRF_GRA | CPS1_TILES },

	{ "ff_23.13b",     0x010000, 0xb8367eb5, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ffj_30.12e",    0x020000, 0x375c66e7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ffj_31.13e",    0x020000, 0x1ef137f9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "s222b.1a",      0x000117, 0x6d86b45e, BRF_OPT }, // b-board PLDs
	{ "lwio.12e",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Ffightj3kt)
STD_ROM_FN(Ffightj3kt)

static struct BurnRomInfo Ffightj4ktRomDesc[] = {
	{ "ff_36.12f",     0x020000, 0xed988977, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_42.12h",    0x020000, 0x07bf1c21, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_37.13f",     0x020000, 0x0144e630, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_43.13h",    0x020000, 0x793b4caf, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_34.10f",     0x020000, 0x0c8dc3fc, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_40.10h",    0x020000, 0x8075bab9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ff_35.11f",     0x020000, 0x4a934121, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ffj_41.11h",    0x020000, 0x2af68154, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "ff_09.4b",      0x020000, 0x5b116d0d, BRF_GRA | CPS1_TILES },
	{ "ff_01.4a",      0x020000, 0x815b1797, BRF_GRA | CPS1_TILES },
	{ "ff_13.9b",      0x020000, 0x8721a7da, BRF_GRA | CPS1_TILES },
	{ "ff_05.9a",      0x020000, 0xd0fcd4b5, BRF_GRA | CPS1_TILES },
	{ "ff_24.5e",      0x020000, 0xa1ab607a, BRF_GRA | CPS1_TILES },
	{ "ff_17.5c",      0x020000, 0x2dc18cf4, BRF_GRA | CPS1_TILES },
	{ "ffj_38.8h",     0x020000, 0x6535a57f, BRF_GRA | CPS1_TILES }, // == ff_38.8h 
	{ "ff_32.8f",      0x020000, 0xc8bc4a57, BRF_GRA | CPS1_TILES },
	{ "ff_10.5b",      0x020000, 0xaef14517, BRF_GRA | CPS1_TILES },
	{ "ff_02.5a",      0x020000, 0xaf04aff3, BRF_GRA | CPS1_TILES },
	{ "ff_14.10b",     0x020000, 0x0a2e9101, BRF_GRA | CPS1_TILES },
	{ "ff_06.10a",     0x020000, 0xa70601f2, BRF_GRA | CPS1_TILES },
	{ "ff_25.7e",      0x020000, 0xa23a56b7, BRF_GRA | CPS1_TILES },
	{ "ff_18.7c",      0x020000, 0x335038e1, BRF_GRA | CPS1_TILES },
	{ "ffj_39.9h",     0x020000, 0xde2e0dc8, BRF_GRA | CPS1_TILES }, // == ff_39.9h
	{ "ff_33.9f",      0x020000, 0xc8770bb7, BRF_GRA | CPS1_TILES },

	{ "ff_23.13b",     0x010000, 0xb8367eb5, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ff_30.12c",     0x020000, 0x375c66e7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "ff_31.13c",     0x020000, 0x1ef137f9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "s222b.1a",      0x000117, 0x6d86b45e, BRF_OPT }, // b-board PLDs
	{ "lwio.12e",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Ffightj4kt)
STD_ROM_FN(Ffightj4kt)

static struct BurnRomInfo DaimakaiktRomDesc[] = {
	{ "dmj_38.12f",    0x020000, 0xc970babe, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "dmj_39.12h",    0x020000, 0x5441a3e1, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "dmj_40.13f",    0x020000, 0x0d559369, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "dmj_41.13h",    0x020000, 0x9a5eae6f, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "dm_33.10f",     0x020000, 0x384d60c4, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "dm_34.10h",     0x020000, 0x19abe30f, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "dm_35.11f",     0x020000, 0xc04b85c8, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "dm_36.11h",     0x020000, 0x89be83de, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "dm_02.4b",      0x020000, 0x9b7a9e4d, BRF_GRA | CPS1_TILES },
	{ "dm_01.4a",      0x020000, 0xebc2dfb2, BRF_GRA | CPS1_TILES },
	{ "dm_10.9b",      0x020000, 0xb8dafc20, BRF_GRA | CPS1_TILES },
	{ "dm_09.9a",      0x020000, 0xb3f98a6a, BRF_GRA | CPS1_TILES },
	{ "dm_18.5e",      0x020000, 0x0a42999c, BRF_GRA | CPS1_TILES },
	{ "dm_17.5c",      0x020000, 0xb7256b2c, BRF_GRA | CPS1_TILES },
	{ "dm_30.8h",      0x020000, 0xa3eedd72, BRF_GRA | CPS1_TILES },
	{ "dm_29.8f",      0x020000, 0x3399A259, BRF_GRA | CPS1_TILES },
	{ "dm_04.5b",      0x020000, 0xa4f4f8f0, BRF_GRA | CPS1_TILES },
	{ "dm_03.5a",      0x020000, 0xb1033e62, BRF_GRA | CPS1_TILES },
	{ "dm_12.10b",     0x020000, 0x10fdd76a, BRF_GRA | CPS1_TILES },
	{ "dm_11.10a",     0x020000, 0x9040cb04, BRF_GRA | CPS1_TILES },
	{ "dm_20.7e",      0x020000, 0x281d0b3e, BRF_GRA | CPS1_TILES },
	{ "dm_19.7c",      0x020000, 0x2623b52f, BRF_GRA | CPS1_TILES },
	{ "dm_32.9h",      0x020000, 0x99692344, BRF_GRA | CPS1_TILES },
	{ "dm_31.9f",      0x020000, 0x54acb729, BRF_GRA | CPS1_TILES },
	{ "dm_06.7b",      0x010000, 0xa156a133, BRF_GRA | CPS1_TILES },
	{ "dm_05.7a",      0x010000, 0xaf5235c1, BRF_GRA | CPS1_TILES },
	{ "dm_14.11b",     0x010000, 0x973eece6, BRF_GRA | CPS1_TILES },
	{ "dm_13.11a",     0x010000, 0x03824bc9, BRF_GRA | CPS1_TILES },
	{ "dm_22.8e",      0x010000, 0x7c0ea715, BRF_GRA | CPS1_TILES },
	{ "dm_21.8c",      0x010000, 0xd3c0ca93, BRF_GRA | CPS1_TILES },
	{ "dm_26.10e",     0x010000, 0x2379a091, BRF_GRA | CPS1_TILES },
	{ "dm_25.10c",     0x010000, 0x2ec40b73, BRF_GRA | CPS1_TILES },
	{ "dm_08.8b",      0x010000, 0xbcc0f28c, BRF_GRA | CPS1_TILES },
	{ "dm_07.8a",      0x010000, 0x2a40166a, BRF_GRA | CPS1_TILES },
	{ "dm_16.12b",     0x010000, 0x20f85c03, BRF_GRA | CPS1_TILES },
	{ "dm_15.12a",     0x010000, 0x8426144b, BRF_GRA | CPS1_TILES },
	{ "dm_24.9e",      0x010000, 0xda088d61, BRF_GRA | CPS1_TILES },
	{ "dm_23.9c",      0x010000, 0x17e11df0, BRF_GRA | CPS1_TILES },
	{ "dm_28.11e",     0x010000, 0xf187ba1c, BRF_GRA | CPS1_TILES },
	{ "dm_27.11c",     0x010000, 0x29f79c78, BRF_GRA | CPS1_TILES },

	{ "37.13c",        0x010000, 0x3692f6e5, BRF_PRG | CPS1_Z80_PROGRAM },
	
	A_BOARD_PLDS
	
	{ "dm22a.1a",      0x000117, 0xd4776116, BRF_OPT }, // b-board PLDs
	{ "lwio.12c",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Daimakaikt)
STD_ROM_FN(Daimakaikt)

static struct BurnRomInfo DaimakairktRomDesc[] = {
	{ "damj_23.8f",    0x080000, 0x5bfe5720, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "damj_22.7f",    0x080000, 0x595ff2f3, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "dam_01.3a",     0x080000, 0xccd4adba, BRF_GRA | CPS1_TILES },
	{ "dam_02.4a",     0x080000, 0xf1fe27ee, BRF_GRA | CPS1_TILES },
	{ "dam_03.5a",     0x080000, 0x8cd46653, BRF_GRA | CPS1_TILES },
	{ "dam_04.6a",     0x080000, 0xe756c489, BRF_GRA | CPS1_TILES },
	{ "dam_05.7a",     0x080000, 0x13d68dc9, BRF_GRA | CPS1_TILES },
	{ "dam_06.8a",     0x080000, 0x09e0745e, BRF_GRA | CPS1_TILES },
	{ "dam_07.9a",     0x080000, 0x48f57a62, BRF_GRA | CPS1_TILES },
	{ "dam_08.10a",    0x080000, 0xd40350cc, BRF_GRA | CPS1_TILES },

	{ "dam_09.12a",    0x020000, 0x0656ff53, BRF_PRG | CPS1_Z80_PROGRAM },
	
	A_BOARD_PLDS
	
	{ "dam63b.1a",     0x000117, 0x474b3c8a, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Daimakairkt)
STD_ROM_FN(Daimakairkt)

static struct BurnRomInfo KnightsjktRomDesc[] = {
	{ "kr_23j.8f",     0x080000, 0x165868ca, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "kr_22.7f",      0x080000, 0xd0b671a9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "kr_01.3a",      0x080000, 0x9e36c1a4, BRF_GRA | CPS1_TILES },
	{ "kr_02.4a",      0x080000, 0xc5832cae, BRF_GRA | CPS1_TILES },
	{ "kr_03.5a",      0x080000, 0xf095be2d, BRF_GRA | CPS1_TILES },
	{ "kr_04.6a",      0x080000, 0x179dfd96, BRF_GRA | CPS1_TILES },
	{ "kr_05.7a",      0x080000, 0xd3844920, BRF_GRA | CPS1_TILES },
	{ "kr_06.8a",      0x080000, 0x492f65a7, BRF_GRA | CPS1_TILES },
	{ "kr_07.9a",      0x080000, 0xcec66dcf, BRF_GRA | CPS1_TILES },
	{ "kr_08.10a",     0x080000, 0x75675611, BRF_GRA | CPS1_TILES },

	{ "kr_09.12a",     0x010000, 0x5e44d9ee, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "kr_18.11c",     0x020000, 0xda69d15f, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "kr_19.12c",     0x020000, 0xbfc654e9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "kr63b.1a",      0x000117, 0xfd5b6522, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Knightsjkt)
STD_ROM_FN(Knightsjkt)

static struct BurnRomInfo KnightsjaktRomDesc[] = {
	{ "krj_36.12f",    0x020000, 0xad3d1a8e, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "krj_42.12h",    0x020000, 0xe694a491, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "krj_37.13f",    0x020000, 0xe758863e, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "krj_43.13h",    0x020000, 0x658de67a, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kr_34.10f",     0x020000, 0xfe6eb08d, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kr_40.10h",     0x020000, 0x1172806d, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kr_35.11f",     0x020000, 0xf854b020, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kr_41.11h",     0x020000, 0xeb52e78d, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "kr_09.4b",      0x020000, 0x08b76e10, BRF_GRA | CPS1_TILES },
	{ "kr_01.4a",      0x020000, 0x40cecf5c, BRF_GRA | CPS1_TILES },
	{ "kr_13.9b",      0x020000, 0x435aaa03, BRF_GRA | CPS1_TILES },
	{ "kr_05.9a",      0x020000, 0x5b8a615b, BRF_GRA | CPS1_TILES },
	{ "kr_24.5e",      0x020000, 0xde65153e, BRF_GRA | CPS1_TILES },
	{ "kr_17.5c",      0x020000, 0xb171c968, BRF_GRA | CPS1_TILES },
	{ "kr_38.8h",      0x020000, 0xf4466bf4, BRF_GRA | CPS1_TILES },
	{ "kr_32.8f",      0x020000, 0x87380ddd, BRF_GRA | CPS1_TILES },
	{ "kr_10.5b",      0x020000, 0x37006d66, BRF_GRA | CPS1_TILES },
	{ "kr_02.5a",      0x020000, 0xb54612e3, BRF_GRA | CPS1_TILES },
	{ "kr_14.10b",     0x020000, 0x0ae88766, BRF_GRA | CPS1_TILES },
	{ "kr_06.10a",     0x020000, 0xecb1a09a, BRF_GRA | CPS1_TILES },
	{ "kr_25.7e",      0x020000, 0x9aace189, BRF_GRA | CPS1_TILES },
	{ "kr_18.7c",      0x020000, 0x09fa14a5, BRF_GRA | CPS1_TILES },
	{ "kr_39.9h",      0x020000, 0xfd8a9aeb, BRF_GRA | CPS1_TILES },
	{ "kr_33.9f",      0x020000, 0x11803e95, BRF_GRA | CPS1_TILES },
	{ "kr_11.7b",      0x020000, 0x026517c2, BRF_GRA | CPS1_TILES },
	{ "kr_03.7a",      0x020000, 0x422284b7, BRF_GRA | CPS1_TILES },
	{ "kr_15.11b",     0x020000, 0x41a01f93, BRF_GRA | CPS1_TILES },
	{ "kr_07.11a",     0x020000, 0xe23e5a74, BRF_GRA | CPS1_TILES },
	{ "kr_26.8e",      0x020000, 0x2367011a, BRF_GRA | CPS1_TILES },
	{ "kr_19.8c",      0x020000, 0xaaad150e, BRF_GRA | CPS1_TILES },
	{ "kr_28.10e",     0x020000, 0x9f645e87, BRF_GRA | CPS1_TILES },
	{ "kr_21.10c",     0x020000, 0x897c0c59, BRF_GRA | CPS1_TILES },
	{ "kr_12.8b",      0x020000, 0x03d945b1, BRF_GRA | CPS1_TILES },
	{ "kr_04.8a",      0x020000, 0xe30c8388, BRF_GRA | CPS1_TILES },
	{ "kr_16.12b",     0x020000, 0x40c39d1b, BRF_GRA | CPS1_TILES },
	{ "kr_08.12a",     0x020000, 0xd310c9e8, BRF_GRA | CPS1_TILES },
	{ "kr_27.9e",      0x020000, 0x3e041444, BRF_GRA | CPS1_TILES },
	{ "kr_20.9c",      0x020000, 0xbd4bffb8, BRF_GRA | CPS1_TILES },
	{ "kr_29.11e",     0x020000, 0x1387a076, BRF_GRA | CPS1_TILES },
	{ "kr_22.11c",     0x020000, 0xfd351922, BRF_GRA | CPS1_TILES },
	
	{ "kr_23.13b",     0x010000, 0x5e44d9ee, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "kr_30.12c",     0x020000, 0xda69d15f, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "kr_31.13c",     0x020000, 0xbfc654e9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "kr22b.1a",      0x000117, 0xf15b2c0f, BRF_OPT }, // b-board PLDs
	{ "lwio.12e",      0x000117, 0xad52b90c, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Knightsjakt)
STD_ROM_FN(Knightsjakt)

static struct BurnRomInfo KodjktRomDesc[] = {
	{ "kdj_30a.11e",   0x020000, 0xDCCCCF4F, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kdj_37a.11f",   0x020000, 0x1cb9a149, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kdj_31a.12e",   0x020000, 0x622dd533, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kdj_38a.12f",   0x020000, 0x4cb36b59, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kd_33.6f",      0x080000, 0x9bd7ad4b, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "kd_06.8a",      0x080000, 0xe45b8701, BRF_GRA | CPS1_TILES },
	{ "kd_08.10a",     0x080000, 0xa7750322, BRF_GRA | CPS1_TILES },
	{ "kd_05.7a",      0x080000, 0x5f74bf78, BRF_GRA | CPS1_TILES },
	{ "kd_07.9a",      0x080000, 0x5e5303bf, BRF_GRA | CPS1_TILES },
	{ "kd_15.8c",      0x080000, 0x2cd36c2a, BRF_GRA | CPS1_TILES },
	{ "kd_17.10c",     0x080000, 0xbee4e3ab, BRF_GRA | CPS1_TILES },
	{ "kd_14.7c",      0x080000, 0xa31352dd, BRF_GRA | CPS1_TILES },
	{ "kd_16.9c",      0x080000, 0xc64a44a0, BRF_GRA | CPS1_TILES },

	{ "kd_09.12a",     0x010000, 0xbac6ec26, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "kd_18.11c",     0x020000, 0x4c63181d, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "kd_19.12c",     0x020000, 0x92941b80, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "kd29b.1a",      0x000117, 0x6b892f82, BRF_OPT }, // b-board PLDs
	{ "iob1.11d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Kodjkt)
STD_ROM_FN(Kodjkt)

static struct BurnRomInfo KodjaktRomDesc[] = {
	{ "kdj_36a.12f",   0x020000, 0xdccccf4f, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kdj_42a.12h",   0x020000, 0x1cb9a149, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kdj_37a.13f",   0x020000, 0x622DD533, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kdj_43a.13h",   0x020000, 0x4cb36b59, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kd_34.10f",     0x020000, 0x9367bcd9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kd_40.10h",     0x020000, 0x4ca6a48a, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kd_35.11f",     0x020000, 0xd2d9028d, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "kd_41a.11h",    0x020000, 0xbe571d86, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "kd_9.4b",       0x020000, 0x401a98e3, BRF_GRA | CPS1_TILES },
	{ "kd_1.4a",       0x020000, 0x5894399a, BRF_GRA | CPS1_TILES },
	{ "kd_13.9b",      0x020000, 0xb6685131, BRF_GRA | CPS1_TILES },
	{ "kd_5.9a",       0x020000, 0xc29b9ab3, BRF_GRA | CPS1_TILES },
	{ "kd_24.5e",      0x020000, 0x97008fdb, BRF_GRA | CPS1_TILES },
	{ "kd_17.5c",      0x020000, 0xdc9a83d3, BRF_GRA | CPS1_TILES },
	{ "kd_38.8h",      0x020000, 0x9c3dd2d1, BRF_GRA | CPS1_TILES },
	{ "kd_32.8f",      0x020000, 0x1b2a802a, BRF_GRA | CPS1_TILES },
	{ "kd_10.5b",      0x020000, 0xe788ae96, BRF_GRA | CPS1_TILES },
	{ "kd_2.5a",       0x020000, 0xb022e3e3, BRF_GRA | CPS1_TILES },
	{ "kd_14.10b",     0x020000, 0x4840c5ef, BRF_GRA | CPS1_TILES },
	{ "kd_6.10a",      0x020000, 0x519faee4, BRF_GRA | CPS1_TILES },
	{ "kd_25.7e",      0x020000, 0x5d0fa853, BRF_GRA | CPS1_TILES },
	{ "kd_18.7c",      0x020000, 0x6ad3b2bb, BRF_GRA | CPS1_TILES },
	{ "kd_39.9h",      0x020000, 0xd7920213, BRF_GRA | CPS1_TILES },
	{ "kd_33.9f",      0x020000, 0x65c2bed6, BRF_GRA | CPS1_TILES },
	{ "kd_11.7b",      0x020000, 0x147e3310, BRF_GRA | CPS1_TILES },
	{ "kd_3.7a",       0x020000, 0x5d18bc83, BRF_GRA | CPS1_TILES },
	{ "kd_15.11b",     0x020000, 0x57359746, BRF_GRA | CPS1_TILES },
	{ "kd_7.11a",      0x020000, 0x7fe03079, BRF_GRA | CPS1_TILES },
	{ "kd_26.8e",      0x020000, 0x57e5fab5, BRF_GRA | CPS1_TILES },
	{ "kd_19.8c",      0x020000, 0xb1f30f7c, BRF_GRA | CPS1_TILES },
	{ "kd_28.10e",     0x020000, 0x3a424135, BRF_GRA | CPS1_TILES },
	{ "kd_21.10c",     0x020000, 0xce10d2c3, BRF_GRA | CPS1_TILES },
	{ "kd_12.8b",      0x020000, 0xc1831b38, BRF_GRA | CPS1_TILES },
	{ "kd_4.8a",       0x020000, 0xc00fc2f8, BRF_GRA | CPS1_TILES },
	{ "kd_16.12b",     0x020000, 0x246bcc68, BRF_GRA | CPS1_TILES },
	{ "kd_8.12a",      0x020000, 0x3a81bb15, BRF_GRA | CPS1_TILES },
	{ "kd_27.9e",      0x020000, 0x27508e77, BRF_GRA | CPS1_TILES },
	{ "kd_20.9c",      0x020000, 0xcd2e8b51, BRF_GRA | CPS1_TILES },
	{ "kd_29.11e",     0x020000, 0xe659d78b, BRF_GRA | CPS1_TILES },
	{ "kd_22.11c",     0x020000, 0xa6c45450, BRF_GRA | CPS1_TILES },

	{ "kd_23.13b",     0x010000, 0xbac6ec26, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "kd_30.12c",     0x020000, 0x4c63181d, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "kd_31.13c",     0x020000, 0x92941b80, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "kd22b.1a",      0x000117, 0xbd1a6035, BRF_OPT }, // b-board PLDs
	{ "iob1.12e",      0x000117, 0x3abc0700, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Kodjakt)
STD_ROM_FN(Kodjakt)

static struct BurnRomInfo RockmanjktRomDesc[] = {
	{ "rcm_23a.8f",    0x080000, 0xcb60d510, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "rcm_22a.7f",    0x080000, 0xee2b97ff, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "rcm_21a.6f",    0x080000, 0x517ccde2, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "rcm_01.3a",     0x080000, 0x4c736693, BRF_GRA | CPS1_TILES },
	{ "rcm_02.4a",     0x080000, 0xab0ef46b, BRF_GRA | CPS1_TILES },
	{ "rcm_03.5a",     0x080000, 0x144d9090, BRF_GRA | CPS1_TILES },
	{ "rcm_04.6a",     0x080000, 0x6ba5999b, BRF_GRA | CPS1_TILES },
	{ "rcm_05.7a",     0x080000, 0x5dd131fd, BRF_GRA | CPS1_TILES },
	{ "rcm_06.8a",     0x080000, 0xf0faf813, BRF_GRA | CPS1_TILES },
	{ "rcm_07.9a",     0x080000, 0x826de013, BRF_GRA | CPS1_TILES },
	{ "rcm_08.10a",    0x080000, 0xfbff64cf, BRF_GRA | CPS1_TILES },
	{ "rcm_10.3c",     0x080000, 0xc4b5a6fc, BRF_GRA | CPS1_TILES },
	{ "rcm_11.4c",     0x080000, 0xd837cd36, BRF_GRA | CPS1_TILES },
	{ "rcm_12.5c",     0x080000, 0x263804b5, BRF_GRA | CPS1_TILES },
	{ "rcm_13.6c",     0x080000, 0xdad13d11, BRF_GRA | CPS1_TILES },
	{ "rcm_14.7c",     0x080000, 0x303be3bd, BRF_GRA | CPS1_TILES },
	{ "rcm_15.8c",     0x080000, 0x4f2d372f, BRF_GRA | CPS1_TILES },
	{ "rcm_16.9c",     0x080000, 0x93d97fde, BRF_GRA | CPS1_TILES },
	{ "rcm_17.10c",    0x080000, 0x92371042, BRF_GRA | CPS1_TILES },

	{ "rcm_09.12a",    0x020000, 0x9632d6ef, BRF_PRG | CPS1_Z80_PROGRAM },
	
	{ "rcm_18.11c",    0x020000, 0x80f1f8aa, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "rcm_19.12c",    0x020000, 0xf257dbe1, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "rcm63b.1a",     0x000117, 0x84acd494, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Rockmanjkt)
STD_ROM_FN(Rockmanjkt)

static struct BurnRomInfo PunisherjktRomDesc[] = {
	{ "psj_23.8f",     0x080000, 0x6b2fda52, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "psj_22.7f",     0x080000, 0x06b27d76, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "psj_21.6f",     0x080000, 0x8affa5a9, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "ps_01.3a",      0x080000, 0xd3ab3ef8, BRF_GRA | CPS1_TILES },
	{ "ps_02.4a",      0x080000, 0x2c8286ea, BRF_GRA | CPS1_TILES },
	{ "ps_03.5a",      0x080000, 0xC0E6AA87, BRF_GRA | CPS1_TILES },
	{ "ps_04.6a",      0x080000, 0x4d7ab629, BRF_GRA | CPS1_TILES },
	{ "ps_05.7a",      0x080000, 0xc54ea839, BRF_GRA | CPS1_TILES },
	{ "ps_06.8a",      0x080000, 0x04c5acbd, BRF_GRA | CPS1_TILES },
	{ "ps_07.9a",      0x080000, 0xa544f4cc, BRF_GRA | CPS1_TILES },
	{ "ps_08.10a",     0x080000, 0x8f02f436, BRF_GRA | CPS1_TILES },

	{ "ps_q.5k",       0x020000, 0x49ff4446, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ps-q1.1k",      0x080000, 0x31fd8726, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "ps-q2.2k",      0x080000, 0x980a9eef, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "ps-q3.3k",      0x080000, 0x0dd44491, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "ps-q4.4k",      0x080000, 0xbed42f03, BRF_SND | CPS1_QSOUND_SAMPLES },
	
	A_BOARD_QSOUND_PLDS
	
	{ "ps63b.1a",      0x000117, 0x03a758b0, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	{ "ioc1.ic1",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "d7l1.7l",       0x000117, 0x27b7410d, BRF_OPT },	// d-board PLDs
	{ "d8l1.8l",       0x000117, 0x539fc7da, BRF_OPT },
	{ "d9k2.9k",       0x000117, 0xcd85a156, BRF_OPT },
	{ "d10f1.10f",     0x000117, 0x6619c494, BRF_OPT },
};

STD_ROM_PICK(Punisherjkt)
STD_ROM_FN(Punisherjkt)

static struct BurnRomInfo StriderjrktRomDesc[] = {
	{ "sthj_23.8f",    0x080000, 0x75bbe661, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "sthj_22.7f",    0x080000, 0x9b3cfc08, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "sth_01.3a",     0x080000, 0x04c36c00, BRF_GRA | CPS1_TILES },
	{ "sth_02.4a",     0x080000, 0xc4ee13e0, BRF_GRA | CPS1_TILES },
	{ "sth_03.5a",     0x080000, 0x96d36cb7, BRF_GRA | CPS1_TILES },
	{ "sth_04.6a",     0x080000, 0x808e37b7, BRF_GRA | CPS1_TILES },
	{ "sth_05.7a",     0x080000, 0x678c7875, BRF_GRA | CPS1_TILES },
	{ "sth_06.8a",     0x080000, 0x4955a2ba, BRF_GRA | CPS1_TILES },
	{ "sth_07.9a",     0x080000, 0x49b558b4, BRF_GRA | CPS1_TILES },
	{ "sth_08.10a",    0x080000, 0x04f93716, BRF_GRA | CPS1_TILES },

	{ "sth_09.12a",    0x010000, 0x08d63519, BRF_PRG | CPS1_Z80_PROGRAM }, 

	{ "sth_18.11c",    0x020000, 0x4386bc80, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "sth_19.12c",    0x020000, 0x444536d7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "sth63b.1a",     0x000117, 0xc706b773, BRF_OPT }, // b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Striderjrkt)
STD_ROM_FN(Striderjrkt)

static struct BurnRomInfo StriderjktRomDesc[] = {
	{ "sth_36.12f",    0x020000, 0x81928ddd, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "sth_42.12h",    0x020000, 0x52c23218, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "sth_37.13f",    0x020000, 0x80e8877d, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "sth_43.13h",    0x020000, 0x6b3fa466, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "sth_34.10f",    0x020000, 0xbea770b5, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "sth_40.10h",    0x020000, 0x43b922dc, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "sth_35.11f",    0x020000, 0x5cc429da, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "sth_41.11h",    0x020000, 0x50af457f, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	
	{ "sth_09.4b",     0x020000, 0x1ef6bfbd, BRF_GRA | CPS1_TILES },
	{ "sth_01.4a",     0x020000, 0x1e21b0c1, BRF_GRA | CPS1_TILES },
	{ "sth_13.9b",     0x020000, 0x063263ae, BRF_GRA | CPS1_TILES },
	{ "sth_05.9a",     0x020000, 0xec9f8714, BRF_GRA | CPS1_TILES },	
	{ "sth_24.5e",     0x020000, 0x6356f4d2, BRF_GRA | CPS1_TILES },	
	{ "sth_17.5c",     0x020000, 0xb4f73d86, BRF_GRA | CPS1_TILES },
	{ "sth_38.8h",     0x020000, 0xee5abfc2, BRF_GRA | CPS1_TILES },
	{ "sth_32.8f",     0x020000, 0x44a206a3, BRF_GRA | CPS1_TILES },	
	{ "sth_10.5b",     0x020000, 0xAF00A9B9, BRF_GRA | CPS1_TILES },	
	{ "sth_02.5a",     0x020000, 0x103497e2, BRF_GRA | CPS1_TILES },
	{ "sth_14.10b",    0x020000, 0x4EBD5D3D, BRF_GRA | CPS1_TILES },
	{ "sth_06.10a",    0x020000, 0xf270f2bc, BRF_GRA | CPS1_TILES },	
	{ "sth_25.7e",     0x020000, 0x75eb8837, BRF_GRA | CPS1_TILES },
	{ "sth_18.7c",     0x020000, 0x8f64e7c3, BRF_GRA | CPS1_TILES },
	{ "sth_39.9h",     0x020000, 0xed440709, BRF_GRA | CPS1_TILES },
	{ "sth_33.9f",     0x020000, 0x288e8a0b, BRF_GRA | CPS1_TILES },	
	{ "sth_11.7b",     0x020000, 0x37538690, BRF_GRA | CPS1_TILES },
	{ "sth_03.7a",     0x020000, 0x68bf93b1, BRF_GRA | CPS1_TILES },
	{ "sth_15.11b",    0x020000, 0xa36d5e5f, BRF_GRA | CPS1_TILES },
	{ "sth_07.11a",    0x020000, 0x1C903837, BRF_GRA | CPS1_TILES },
	{ "sth_26.8e",     0x020000, 0x23a87d6c, BRF_GRA | CPS1_TILES },
	{ "sth_19.8c",     0x020000, 0xb0b71658, BRF_GRA | CPS1_TILES },
	{ "sth_28.10e",    0x020000, 0x0863374a, BRF_GRA | CPS1_TILES },
	{ "sth_21.10c",    0x020000, 0xc8acbfdc, BRF_GRA | CPS1_TILES },
	{ "sth_12.8b",     0x020000, 0xf670a477, BRF_GRA | CPS1_TILES },
	{ "sth_04.8a",     0x020000, 0x853d3e01, BRF_GRA | CPS1_TILES },
	{ "sth_16.12b",    0x020000, 0x4092019f, BRF_GRA | CPS1_TILES },
	{ "sth_08.12a",    0x020000, 0x2ce9b4c7, BRF_GRA | CPS1_TILES },
	{ "sth_27.9e",     0x020000, 0xf82c88d9, BRF_GRA | CPS1_TILES },
	{ "sth_20.9c",     0x020000, 0xeb584dd4, BRF_GRA | CPS1_TILES },
	{ "sth_29.11e",    0x020000, 0x34ae2997, BRF_GRA | CPS1_TILES },
	{ "sth_22.11c",    0x020000, 0x78dd9c48, BRF_GRA | CPS1_TILES },

	{ "sth_23.13c",    0x010000, 0x2ed403bc, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "sth_30.12e",    0x020000, 0x4386bc80, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "sth_31.13e",    0x020000, 0x444536d7, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "st22b.1a",      0x000117, 0x68fecc55, BRF_OPT },	// b-board PLDs
	{ "lwio.12c",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Striderjkt)
STD_ROM_FN(Striderjkt)

static struct BurnRomInfo Area88ktRomDesc[] = {
	{ "ar_36.12f",     0x020000, 0xFDF943F8, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ar_42.12h",     0x020000, 0x12D6B949, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ar_37.13f",     0x020000, 0xAB132921, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ar_43.13h",     0x020000, 0xAA9F3209, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ar_34.10f",     0x020000, 0x862D6ACD, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ar_40.10h",     0x020000, 0xEEDAAFC6, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ar_35.11f",     0x020000, 0x3296DE2E, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },
	{ "ar_41.11h",     0x020000, 0xF683C73B, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_BYTESWAP },

	{ "ar_09.4b",      0x020000, 0xb9c90526, BRF_GRA | CPS1_TILES },
	{ "ar_01.4a",      0x020000, 0x8ea8c199, BRF_GRA | CPS1_TILES },
	{ "ar_13.9b",      0x020000, 0xEFA00A7A, BRF_GRA | CPS1_TILES },
	{ "ar_05.9a",      0x020000, 0xddc566c7, BRF_GRA | CPS1_TILES },
	{ "ar_24.5e",      0x020000, 0xFE8C917D, BRF_GRA | CPS1_TILES },
	{ "ar_17.5c",      0x020000, 0xBC079DD9, BRF_GRA | CPS1_TILES },
	{ "ar_38.8h",      0x020000, 0xE57D1B42, BRF_GRA | CPS1_TILES },
	{ "ar_32.8f",      0x020000, 0xE4E94697, BRF_GRA | CPS1_TILES },
	{ "ar_10.5b",      0x020000, 0xcae95f23, BRF_GRA | CPS1_TILES },
	{ "ar_02.5a",      0x020000, 0x372cb9ba, BRF_GRA | CPS1_TILES },
	{ "ar_14.10b",     0x020000, 0xb64f66ac, BRF_GRA | CPS1_TILES },
	{ "ar_06.10a",     0x020000, 0x424f6874, BRF_GRA | CPS1_TILES },
	{ "ar_25.7e",      0x020000, 0x2f4fe749, BRF_GRA | CPS1_TILES },
	{ "ar_18.7c",      0x020000, 0xb1f8c0be, BRF_GRA | CPS1_TILES },
	{ "ar_39.9h",      0x020000, 0xea9d99c5, BRF_GRA | CPS1_TILES },
	{ "ar_33.9f",      0x020000, 0x04873733, BRF_GRA | CPS1_TILES },

	{ "ar_23.13c",     0x010000, 0xf3dd1367, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ar_30.12e",     0x020000, 0x584b43a9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "ar22b.1a",      0x000117, 0xf1db9030, BRF_OPT },	// b-board PLDs
	{ "lwio.12c",      0x000117, 0xad52b90c, BRF_OPT },
};

STD_ROM_PICK(Area88kt)
STD_ROM_FN(Area88kt)

static struct BurnRomInfo Area88rktRomDesc[] = {
	{ "araj_23.8f",    0x080000, 0x3bc63457, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "araj_22.7f",    0x080000, 0x91ff2031, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "ara_01.3a",     0x080000, 0xeaff9ad0, BRF_GRA | CPS1_TILES },
	{ "ara_02.4a",     0x080000, 0x23cb00f8, BRF_GRA | CPS1_TILES },
	{ "ara_03.5a",     0x080000, 0x561fcaaf, BRF_GRA | CPS1_TILES },
	{ "ara_04.6a",     0x080000, 0x294dc71f, BRF_GRA | CPS1_TILES },

	{ "ara_09.12a",    0x020000, 0xaf88359c, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "ara_18.11c",    0x020000, 0x584b43a9, BRF_SND | CPS1_OKIM6295_SAMPLES },
	
	A_BOARD_PLDS
	
	{ "ara63b.1a",     0x000117, 0xf5569c93, BRF_OPT },// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
};

STD_ROM_PICK(Area88rkt)
STD_ROM_FN(Area88rkt)

static struct BurnRomInfo WofjktRomDesc[] = {
	{ "tk2j_23c.8f",   0x080000, 0x78a63855, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "tk2j_22c.7f",   0x080000, 0x13dccd83, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "tk2_01.3a",     0x080000, 0x0d9cb9bf, BRF_GRA | CPS1_TILES },
	{ "tk2_02.4a",     0x080000, 0x45227027, BRF_GRA | CPS1_TILES },
	{ "tk2_03.5a",     0x080000, 0xc5ca2460, BRF_GRA | CPS1_TILES },
	{ "tk2_04.6a",     0x080000, 0xe349551c, BRF_GRA | CPS1_TILES },
	{ "tk2_05.7a",     0x080000, 0x188be08a, BRF_GRA | CPS1_TILES },
	{ "tk2_06.8a",     0x080000, 0x3a02b86b, BRF_GRA | CPS1_TILES },
	{ "tk2_07.9a",     0x080000, 0x22d0f9fd, BRF_GRA | CPS1_TILES },
	{ "tk2_08.10a",    0x080000, 0xaa00fe36, BRF_GRA | CPS1_TILES },

	{ "tk2_qa.5k",     0x020000, 0xc9183a0d, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "tk2-q1.1k",     0x080000, 0x611268cf, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "tk2-q2.2k",     0x080000, 0x20f55ca9, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "tk2-q3.3k",     0x080000, 0xbfcf6f52, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "tk2-q4.4k",     0x080000, 0x36642e88, BRF_SND | CPS1_QSOUND_SAMPLES },
	
	A_BOARD_QSOUND_PLDS
	
	{ "tk263b.1a",     0x000117, 0xc4b0349b, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	
	{ "ioc1.ic1",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	
	{ "d7l1.7l",       0x000117, 0x27b7410d, BRF_OPT },	// d-board PLDs
	{ "d8l1.8l",       0x000117, 0x539fc7da, BRF_OPT },
	{ "d9k1.9k",       0x000117, 0x6c35c805, BRF_OPT },
	{ "d10f1.10f",     0x000117, 0x6619c494, BRF_OPT },
};

STD_ROM_PICK(Wofjkt)
STD_ROM_FN(Wofjkt)

static struct BurnRomInfo SfzchktRomDesc[] = {
	{ "sfzch23",       0x080000, 0x827e7b8f, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "sfza22",        0x080000, 0x8d9b2480, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "sfzch21",       0x080000, 0x5435225d, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "sfza20",        0x080000, 0x806e8f38, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "sfz_01.3a",     0x080000, 0x0dd53e62, BRF_GRA | CPS1_TILES },
	{ "sfz_02.4a",     0x080000, 0x94c31e3f, BRF_GRA | CPS1_TILES },
	{ "sfz_03.5a",     0x080000, 0x9584ac85, BRF_GRA | CPS1_TILES },
	{ "sfz_04.6a",     0x080000, 0xb983624c, BRF_GRA | CPS1_TILES },
	{ "sfz_05.7a",     0x080000, 0x2b47b645, BRF_GRA | CPS1_TILES },
	{ "sfz_06.8a",     0x080000, 0x74fd9fb1, BRF_GRA | CPS1_TILES },
	{ "sfz_07.9a",     0x080000, 0xbb2c734d, BRF_GRA | CPS1_TILES },
	{ "sfz_08.10a",    0x080000, 0x454f7868, BRF_GRA | CPS1_TILES },
	{ "sfz_10.3c",     0x080000, 0x2a7d675e, BRF_GRA | CPS1_TILES },
	{ "sfz_11.4c",     0x080000, 0xe35546c8, BRF_GRA | CPS1_TILES },
	{ "sfz_12.5c",     0x080000, 0xf122693a, BRF_GRA | CPS1_TILES },
	{ "sfz_13.6c",     0x080000, 0x7cf942c8, BRF_GRA | CPS1_TILES },
	{ "sfz_14.7c",     0x080000, 0x95e0cf7e, BRF_GRA | CPS1_TILES },
	{ "sfz_15.8c",     0x080000, 0xb3dea987, BRF_GRA | CPS1_TILES },
	{ "sfz_16.9c",     0x080000, 0x323b32ca, BRF_GRA | CPS1_TILES },
	{ "sfz_17.10c",    0x080000, 0x9b3c2d26, BRF_GRA | CPS1_TILES },
	
	{ "sfz_09.12a",    0x010000, 0xc772628b, BRF_PRG | CPS1_Z80_PROGRAM },
	
	{ "sfz_18.11c",    0x020000, 0x61022b2d, BRF_SND | CPS1_OKIM6295_SAMPLES },
	{ "sfz_19.12c",    0x020000, 0x3b5886d5, BRF_SND | CPS1_OKIM6295_SAMPLES },
};

STD_ROM_PICK(Sfzchkt)
STD_ROM_FN(Sfzchkt)

static struct BurnRomInfo WofchktRomDesc[] = {
	{ "tk2=ch=_23.8f", 0x080000, 0x65fd9fb8, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },
	{ "tk2=ch=_22.7f", 0x080000, 0x27b2af50, BRF_ESS | BRF_PRG | CPS1_68K_PROGRAM_NO_BYTESWAP },

	{ "tk2-1m.3a",     0x080000, 0x0d9cb9bf, BRF_GRA | CPS1_TILES },
	{ "tk2-3m.5a",     0x080000, 0x45227027, BRF_GRA | CPS1_TILES },
	{ "tk2-2m.4a",     0x080000, 0xc5ca2460, BRF_GRA | CPS1_TILES },
	{ "tk2-4m.6a",     0x080000, 0xe349551c, BRF_GRA | CPS1_TILES },
	{ "tk2=ch=_05.7a", 0x080000, 0xf59df70c, BRF_GRA | CPS1_TILES },
	{ "tk2=ch=_06.8a", 0x080000, 0x87f99cc0, BRF_GRA | CPS1_TILES },
	{ "tk2=ch=_07.9a", 0x080000, 0xd450be3c, BRF_GRA | CPS1_TILES }, // 1 byte different from wofj, pcb verified
	{ "tk2=ch=_08.10a",0x080000, 0x17fbda9d, BRF_GRA | CPS1_TILES },
	
	{ "tk2_qa.5k",     0x020000, 0xc9183a0d, BRF_PRG | CPS1_Z80_PROGRAM },

	{ "tk2-q1.1k",     0x080000, 0x611268cf, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "tk2-q2.2k",     0x080000, 0x20f55ca9, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "tk2-q3.3k",     0x080000, 0xbfcf6f52, BRF_SND | CPS1_QSOUND_SAMPLES },
	{ "tk2-q4.4k",     0x080000, 0x36642e88, BRF_SND | CPS1_QSOUND_SAMPLES },
	
	{ "buf1",          0x000117, 0xeb122de7, BRF_OPT }, // a-board PLDs
	{ "ioa1",          0x000117, 0x59c7ee3b, BRF_OPT },
	{ "prg2",          0x000117, 0x4386879a, BRF_OPT },
	{ "rom1",          0x000117, 0x41dc73b9, BRF_OPT },
	{ "sou1",          0x000117, 0x84f4b2fe, BRF_OPT },
	
	{ "tk263b.1a",     0x000117, 0xc4b0349b, BRF_OPT },	// b-board PLDs
	{ "iob1.12d",      0x000117, 0x3abc0700, BRF_OPT },
	{ "bprg1.11d",     0x000117, 0x31793da7, BRF_OPT },
	
	{ "ioc1.ic7",      0x000104, 0xa399772d, BRF_OPT },	// c-board PLDs
	{ "c632.ic1",      0x000117, 0x0fbd9270, BRF_OPT },
	
	{ "d7l1.7l",       0x000117, 0x27b7410d, BRF_OPT },	// d-board PLDs
	{ "d8l1.8l",       0x000117, 0x539fc7da, BRF_OPT },
	{ "d9k1.9k",       0x000117, 0x6c35c805, BRF_OPT },
	{ "d10f1.10f",     0x000117, 0x6619c494, BRF_OPT },
};

STD_ROM_PICK(Wofchkt)
STD_ROM_FN(Wofchkt)

struct BurnDriver BurnDrvCpsCaptcommjkt = {
	"captcommjkt", "captcomm", NULL, NULL, "1991",
	"Captain Commando (911202 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 4, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, CaptcommjktRomInfo, CaptcommjktRomName, NULL, NULL, NULL, NULL, CaptcommInputInfo, CaptcommDIPInfo,
	Cps1RasterInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsCaptcommjr1kt = {
	"captcommjr1kt", "captcomm", NULL, NULL, "1991",
	"Captain Commando (910928 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 4, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, Captcommjr1ktRomInfo, Captcommjr1ktRomName, NULL, NULL, NULL, NULL, CaptcommInputInfo, CaptcommDIPInfo,
	Cps1RasterInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsFfightkt = {
	"ffightkt", "ffight", NULL, NULL, "1989",
	"Final Fight (World, set 1)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, ffightktRomInfo, ffightktRomName, NULL, NULL, NULL, NULL, FfightInputInfo, FfightDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsFfightakt = {
	"ffightakt", "ffight", NULL, NULL, "1989",
	"Final Fight (World, set 2)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, FfightaktRomInfo, FfightaktRomName, NULL, NULL, NULL, NULL, FfightInputInfo, FfightDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsFfightjkt = {
	"ffightjkt", "ffight", NULL, NULL, "1989",
	"Final Fight (Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, FfightjktRomInfo, FfightjktRomName, NULL, NULL, NULL, NULL, FfightInputInfo, FfightDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsFfightj1kt = {
	"ffightj1kt", "ffight", NULL, NULL, "1989",
	"Final Fight (900112 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, Ffightj1ktRomInfo, Ffightj1ktRomName, NULL, NULL, NULL, NULL, FfightInputInfo, FfightDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsFfightj2kt = {
	"ffightj2kt", "ffight", NULL, NULL, "1989",
	"Final Fight (900305 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, Ffightj2ktRomInfo, Ffightj2ktRomName, NULL, NULL, NULL, NULL, FfightInputInfo, FfightDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsFfightj3kt = {
	"ffightj3kt", "ffight", NULL, NULL, "1989",
	"Final Fight (900405 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, Ffightj3ktRomInfo, Ffightj3ktRomName, NULL, NULL, NULL, NULL, FfightInputInfo, FfightDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsFfightj4kt = {
	"ffightj4kt", "ffight", NULL, NULL, "1989",
	"Final Fight (900613 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, Ffightj4ktRomInfo, Ffightj4ktRomName, NULL, NULL, NULL, NULL, FfightInputInfo, FfightDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsDaimakaikt = {
	"daimakaikt", "ghouls", NULL, NULL, "1988",
	"Dai Makai-Mura (Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	L"\u5927\u9B54\u754C\u6751\0Dai Makai-Mura (Japan)(Korean Translate)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_RUNGUN, 0,
	NULL, DaimakaiktRomInfo, DaimakaiktRomName, NULL, NULL, NULL, NULL, GhoulsInputInfo, DaimakaiDIPInfo,
	DaimakaiInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsDaimakairkt = {
	"daimakairkt", "ghouls", NULL, NULL, "1988",
	"Dai Makai-Mura (Japan Resale Ver.)\0", NULL, "Capcom", "CPS1",
	L"\u5927\u9B54\u754C\u6751\0Dai Makai-Mura (Japan Resale Ver.)(Korean Translate)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_RUNGUN, 0,
	NULL, DaimakairktRomInfo, DaimakairktRomName, NULL, NULL, NULL, NULL, GhoulsInputInfo, DaimakaiDIPInfo,
	TwelveMhzInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsKnightsjkt = {
	"knightsjkt", "knights", NULL, NULL, "1991",
	"Knights of the Round (911127 Japan, B-Board 91634B-2)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, KnightsjktRomInfo, KnightsjktRomName, NULL, NULL, NULL, NULL, KnightsInputInfo, KnightsDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsKnightsjakt = {
	"knightsjakt", "knights", NULL, NULL, "1991",
	"Knights of the Round (911127 Japan, B-Board 89625B-1)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, KnightsjaktRomInfo, KnightsjaktRomName, NULL, NULL, NULL, NULL, KnightsInputInfo, KnightsDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsKodjkt = {
	"kodjkt", "kod", NULL, NULL, "1991",
	"The King of Dragons (Japan 910805, B-Board 90629B-3)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, KodjktRomInfo, KodjktRomName, NULL, NULL, NULL, NULL, KodInputInfo, KodDIPInfo,
	Cps1RasterInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsKodjakt = {
	"kodjakt", "kod", NULL, NULL, "1991",
	"The King of Dragons (Japan 910805, B-Board 89625B-1)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS1, GBF_SCRFIGHT, 0,
	NULL, KodjaktRomInfo, KodjaktRomName, NULL, NULL, NULL, NULL, KodInputInfo, KodDIPInfo,
	Cps1RasterInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsRockmanjkt = {
	"rockmanjkt", "megaman", NULL, NULL, "1995",
	"Rockman - the power battle (950922 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_VSFIGHT, 0,
	NULL, RockmanjktRomInfo, RockmanjktRomName, NULL, NULL, NULL, NULL, MegamanInputInfo, RockmanjDIPInfo,
	TwelveMhzInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsPunisherjkt = {
	"punisherjkt", "punisher", NULL, NULL, "1993",
	"The Punisher (930422 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1 / QSound",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1_QSOUND, GBF_SCRFIGHT, 0,
	NULL, PunisherjktRomInfo, PunisherjktRomName, NULL, NULL, NULL, NULL, PunisherInputInfo, PunisherDIPInfo,
	TwelveMhzInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsStriderjkt = {
	"striderjkt", "strider", NULL, NULL, "1989",
	"Strider Hiryu (Japan)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	L"\u30B9\u30C8\u30E9\u30A4\u30C0\u30FC\u98DB\u7ADC\0Strider Hiryu (Japan)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_PLATFORM, 0,
	NULL, StriderjktRomInfo, StriderjktRomName, NULL, NULL, NULL, NULL, StriderInputInfo, StriderDIPInfo,
	StriderjInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsStriderjrkt = {
	"striderjrkt", "strider", NULL, NULL, "1989",
	"Strider Hiryu (Japan Resale Ver.)(Korean Translate)\0", NULL, "Capcom", "CPS1",
	L"\u30B9\u30C8\u30E9\u30A4\u30C0\u30FC\u98DB\u7ADC\0Strider Hiryu (Japan Resale Ver.)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 2, HARDWARE_CAPCOM_CPS1, GBF_PLATFORM, 0,
	NULL, StriderjrktRomInfo, StriderjrktRomName, NULL, NULL, NULL, NULL, StriderInputInfo, StriderDIPInfo,
	StriderjrInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsArea88kt = {
	"area88kt", "unsquad", NULL, NULL, "1989",
	"Area 88 (Korean Translate)\0", NULL, "Daipro / Capcom", "CPS1",
	L"\u30A8\u30EA\u30A2\uFF18\uFF18\0Area 88 (Japan)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_HORSHOOT, 0,
	NULL, Area88ktRomInfo, Area88ktRomName, NULL, NULL, NULL, NULL, UnsquadInputInfo, UnsquadDIPInfo,
	DrvInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsArea88rkt = {
	"area88rkt", "unsquad", NULL, NULL, "1989",
	"Area 88 (Japan Resale ver.)(Korean Translate)\0", NULL, "Daipro / Capcom", "CPS1",
	L"\u30A8\u30EA\u30A2\uFF18\uFF18\0Area 88 (Japan Resale ver.)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS1, GBF_HORSHOOT, 0,
	NULL, Area88rktRomInfo, Area88rktRomName, NULL, NULL, NULL, NULL, UnsquadInputInfo, UnsquadDIPInfo,
	TwelveMhzInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsWofjkt = {
	"wofjkt", "wof", NULL, NULL, "1992",
	"Tenchi wo Kurau II - Sekiheki no Tatakai (921031 Japan)(Korean Translate V1.0)\0", NULL, "Capcom", "CPS1 / QSound",
	L"\u5929\u5730\u3092\u55B0\u3089\u3046 II - \u8D64\u58C1\u306E\u6226\u3044\0Tenchi wo Kurau II - Sekiheki no Tatakai (921031 Japan)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS1_QSOUND, GBF_SCRFIGHT, 0,
	NULL, WofjktRomInfo, WofjktRomName, NULL, NULL, NULL, NULL, WofInputInfo, WofDIPInfo,
	TwelveMhzInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfzchkt = {
	"sfzchkt", "sfzch", NULL, NULL, "1995",
	"Street Fighter Zero (CPS Changer, 951020 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS Changer",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING, 2, HARDWARE_CAPCOM_CPSCHANGER, GBF_VSFIGHT, FBF_SF,
	NULL, SfzchktRomInfo, SfzchktRomName, NULL, NULL, NULL, NULL, SfzchInputInfo, NULL,
	SfzchInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsWofchkt = {
	"wofchkt", NULL, NULL, NULL, "1992",
	"Tenchi wo Kurau II - Sekiheki no Tatakai (CPS Changer, 921031 Japan)(Korean Translate V1.1)\0", NULL, "Capcom", "CPS Changer",
	L"\u5929\u5730\u3092\u55B0\u3089\u3046 II - \u8D64\u58C1\u306E\u6226\u3044\0Tenchi wo Kurau II - Sekiheki no Tatakai (CPS Changer, 921031 Japan)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING, 3, HARDWARE_CAPCOM_CPSCHANGER, GBF_SCRFIGHT, 0,
	NULL, WofchktRomInfo, WofchktRomName, NULL, NULL, NULL, NULL, WofchInputInfo, NULL,
	WofchInit, DrvExit, Cps1Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

