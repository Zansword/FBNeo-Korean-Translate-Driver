// Neogeo Korean patched roms for fc2 and fbneo - 2022-08-01 written by chamcham425 aka zansword
// Based by fightcade fbneo v50 sources
// 

// Art of Fighting / Ryuuko no Ken (NGM-044)(NGH-044)

static struct BurnRomInfo aofktRomDesc[] = {
	{ "044-p1.p1",    0x080000, 0xa69b9af2, 1 | BRF_ESS | BRF_PRG }, //  0 68K code 		/ TC534200

	{ "044-s1.s1",    0x020000, 0x6e7c531e, 2 | BRF_GRA },           //  1 Text layer tiles / TC531000//

	{ "044-c1.c1",    0x200000, 0xddab98a7, 3 | BRF_GRA },           //  2 Sprite data 		/ TC5316200
	{ "044-c2.c2",    0x200000, 0xd8ccd575, 3 | BRF_GRA },           //  3 					/ TC5316200
	{ "044-c3.c3",    0x200000, 0x403e898a, 3 | BRF_GRA },           //  4 					/ TC5316200
	{ "044-c4.c4",    0x200000, 0x6235fbaa, 3 | BRF_GRA },           //  5 					/ TC5316200

	{ "044-m1.m1",    0x020000, 0x0987e4bb, 4 | BRF_ESS | BRF_PRG }, //  6 Z80 code 		/ TC531001

	{ "044-v2.v2",    0x200000, 0x3ec632ea, 5 | BRF_SND },           //  7 Sound data 		/ TC5316200
	{ "044-v4.v4",    0x200000, 0x4b0f8e23, 5 | BRF_SND },           //  8 					/ TC5316200
};

STDROMPICKEXT(aofkt, aofkt, neogeo)
STD_ROM_FN(aofkt)

struct BurnDriver BurnDrvAofkt = {
	"aofkt", NULL, "neogeo", NULL, "1992",
	"Art of Fighting / Ryuuko no Ken (Korean Translate)\0", NULL, "SNK", "Neo Geo MVS",
	L"Art of Fighting\0\u9F8D\u864E\u306E\u62F3 (NGM-044)(NGH-044)\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_SWAPC, GBF_VSFIGHT, 0,
	NULL, aofktRomInfo, aofktRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

//
//	KOF KOREAN PATCH BY DSNO - Added by chamcham425(kof94 ~ 2000)
//

static struct BurnRomInfo kof94ktRomDesc[] = {
	{ "055-p1.p1",    0x200000, 0xdbecb405, 1 | BRF_ESS | BRF_PRG }, //  0 68K code 		/ mask rom TC5316200

	{ "055-s1.s1",    0x020000, 0x825976c1, 2 | BRF_GRA },           //  1 Text layer tiles / mask rom TC531000

	{ "055-c1.c1",    0x200000, 0xbf987727, 3 | BRF_GRA },           //  2 Sprite data 		/ mask rom TC5316200
	{ "055-c2.c2",    0x200000, 0x15e096a7, 3 | BRF_GRA },           //  3 					/ mask rom TC5316200
	{ "055-c3.c3",    0x200000, 0x54f66254, 3 | BRF_GRA },           //  4 					/ mask rom TC5316200
	{ "055-c4.c4",    0x200000, 0x0b01765f, 3 | BRF_GRA },           //  5 					/ mask rom TC5316200
	{ "055-c5.c5",    0x200000, 0xee759363, 3 | BRF_GRA },           //  6 					/ mask rom TC5316200
	{ "055-c6.c6",    0x200000, 0x498da52c, 3 | BRF_GRA },           //  7 					/ mask rom TC5316200
	{ "055-c7.c7",    0x200000, 0x62f66888, 3 | BRF_GRA },           //  8 					/ mask rom TC5316200
	{ "055-c8.c8",    0x200000, 0xfe0a235d, 3 | BRF_GRA },           //  9 					/ mask rom TC5316200

	{ "055-m1.m1",    0x020000, 0xf6e77cf5, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code 		/ mask rom TC531001

	{ "055-v1.v1",    0x200000, 0x8889596d, 5 | BRF_SND },           // 11 Sound data 		/ mask rom TC5316200
	{ "055-v2.v2",    0x200000, 0x25022b27, 5 | BRF_SND },           // 12 					/ mask rom TC5316200
	{ "055-v3.v3",    0x200000, 0x83cf32c0, 5 | BRF_SND },           // 13 					/ mask rom TC5316200
};

STDROMPICKEXT(kof94kt, kof94kt, neogeo)
STD_ROM_FN(kof94kt)

struct BurnDriver BurnDrvKof94kt = {
	"kof94kt", NULL, "neogeo", NULL, "1994",
	"The King of Fighters '94 (Korean translate)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_SWAPP, GBF_VSFIGHT, FBF_KOF,
	NULL, kof94ktRomInfo, kof94ktRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo kof95ktRomDesc[] = {
	{ "084-p1.p1",    0x200000, 0x18A87211, 1 | BRF_ESS | BRF_PRG }, //  0 68K code			/ TC5316200

	{ "084-s1.s1",    0x020000, 0x0d07a5ab, 2 | BRF_GRA },           //  1 Text layer tiles / TC531000

	{ "084-c1.c1",    0x400000, 0x4bb4eb90, 3 | BRF_GRA },           //  2 Sprite data		/ TC5332202
	{ "084-c2.c2",    0x400000, 0x7e94c968, 3 | BRF_GRA },           //  3 					/ TC5332202
	{ "084-c3.c3",    0x400000, 0xa4e65d1b, 3 | BRF_GRA },           //  4 					/ TC5332202
	{ "084-c4.c4",    0x400000, 0xc1ace468, 3 | BRF_GRA },           //  5 					/ TC5332202
	{ "084-c5.c5",    0x200000, 0x8a2c1edc, 3 | BRF_GRA },           //  6 					/ TC5316200
	{ "084-c6.c6",    0x200000, 0xf593ac35, 3 | BRF_GRA },           //  7 					/ TC5316200
	{ "084-c7.c7",    0x100000, 0x9904025f, 3 | BRF_GRA },           //  8 					/ TC538200
	{ "084-c8.c8",    0x100000, 0x78eb0f9b, 3 | BRF_GRA },           //  9 					/ TC538200

	{ "084-m1.m1",    0x020000, 0x6f2d7429, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code			/ TC531001

	{ "084-v1.v1",    0x400000, 0x84861b56, 5 | BRF_SND },           // 11 Sound data		/ TC5332201
	{ "084-v2.v2",    0x200000, 0xb38a2803, 5 | BRF_SND },           // 12 					/ TC5316200
	{ "084-v3.v3",    0x100000, 0xd683a338, 5 | BRF_SND },           // 13 					/ TC538200
};

STDROMPICKEXT(kof95kt, kof95kt, neogeo)
STD_ROM_FN(kof95kt)

struct BurnDriver BurnDrvkof95kt = {
	"kof95kt", NULL, "neogeo", NULL, "1995",
	"The King of Fighters '95 (Korean Translate)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_SWAPP, GBF_VSFIGHT, FBF_KOF,
	NULL, kof95ktRomInfo, kof95ktRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo kof96ktRomDesc[] = {
	{ "214-p1.p1",   0x100000, 0xa54e1812, 1 | BRF_ESS | BRF_PRG }, //  0 68K code			/ TC538200
	{ "214-p2.p2",   0x200000, 0xa7e05e29, 1 | BRF_ESS | BRF_PRG }, //  1 					/ TC5316200

	{ "214-s1.s1",    0x020000, 0x1254cbdb, 2 | BRF_GRA },           //  2 Text layer tiles / TC531000

	{ "214-c1.c1",  0x400000, 0x0524e33e, 3 | BRF_GRA },           //  3 Sprite data		/ TC5332205
	{ "214-c2.c2",  0x400000, 0xe1374ccc, 3 | BRF_GRA },           //  4 					/ TC5332205
	{ "214-c3.c3",    0x400000, 0x64989a65, 3 | BRF_GRA },           //  5 					/ TC5332205
	{ "214-c4.c4",    0x400000, 0xafbea515, 3 | BRF_GRA },           //  6 					/ TC5332205
	{ "214-c5.c5",    0x400000, 0x2a3bbd26, 3 | BRF_GRA },           //  7 					/ TC5332205
	{ "214-c6.c6",    0x400000, 0x44d30dc7, 3 | BRF_GRA },           //  8 					/ TC5332205
	{ "214-c7.c7",    0x400000, 0x3687331b, 3 | BRF_GRA },           //  9 					/ TC5332205
	{ "214-c8.c8",    0x400000, 0xfa1461ad, 3 | BRF_GRA },           // 10 					/ TC5332205

	{ "214-m1.m1",    0x020000, 0xdabc427c, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code			/ TC531001

	{ "214-v1.v1",    0x400000, 0x63f7b045, 5 | BRF_SND },           // 12 Sound data		/ TC5332204
	{ "214-v2.v2",    0x400000, 0x25929059, 5 | BRF_SND },           // 13 					/ TC5332204
	{ "214-v3.v3",    0x200000, 0x92a2257d, 5 | BRF_SND },           // 14 					/ TC5316200
};

STDROMPICKEXT(kof96kt, kof96kt, neogeo)
STD_ROM_FN(kof96kt)

struct BurnDriver BurnDrvkof96kt = {
	"kof96kt", NULL, "neogeo", NULL, "1996",
	"The King of Fighters '96 (Korean Translate)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO,  GBF_VSFIGHT, FBF_KOF,
	NULL, kof96ktRomInfo, kof96ktRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo kof97ktRomDesc[] = {
	{ "232-p1.p1",    0x100000, 0x4756695c, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "232-p2.sp2", 0x400000, 0x3c9aa01c, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "232-s1.s1",    0x020000, 0x8514ecf5, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "232-c1.c1",  0x800000, 0x63e04fd2, 3 | BRF_GRA },           //  3 Sprite data
	{ "232-c2.c2",  0x800000, 0xc3e5db31, 3 | BRF_GRA },           //  4
	{ "232-c3.c3",    0x800000, 0x581d6618, 3 | BRF_GRA },           //  5
	{ "232-c4.c4",    0x800000, 0x49bb1e68, 3 | BRF_GRA },           //  6
	{ "232-c5.c5",    0x400000, 0x34fc4e51, 3 | BRF_GRA },           //  7
	{ "232-c6.c6",    0x400000, 0x4ff4d47b, 3 | BRF_GRA },           //  8

	{ "232-m1.m1",    0x020000, 0x45348747, 4 | BRF_ESS | BRF_PRG }, //  9 Z80 code

	{ "232-v1.v1",    0x400000, 0x22a2b5b5, 5 | BRF_SND },           // 10 Sound data
	{ "232-v2.v2",    0x400000, 0x2304e744, 5 | BRF_SND },           // 11
	{ "232-v3.v3",    0x400000, 0x759eb954, 5 | BRF_SND },           // 12
};

STDROMPICKEXT(kof97kt, kof97kt, neogeo)
STD_ROM_FN(kof97kt)

struct BurnDriver BurnDrvkof97kt = {
	"kof97kt", NULL, "neogeo", NULL, "1997",
	"The King of Fighters '97 (Korean Translate)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_VSFIGHT, FBF_KOF,
	NULL, kof97ktRomInfo, kof97ktRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo kof98hktRomDesc[] = {
	{ "242-pn1.p1",   0x100000, 0xBB9AC000, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "242-p2.sp2",   0x400000, 0xf53ca29a, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "242-s1.s1",    0x020000, 0xAE72DE31, 2 | BRF_GRA },           //  2 Text layer tiles

	{ "242-c1.c1",    0x800000, 0x905E2F75, 3 | BRF_GRA },           //  3 Sprite data
	{ "242-c2.c2",    0x800000, 0xDCD6D171, 3 | BRF_GRA },           //  4
	{ "242-c3.c3",    0x800000, 0x22127b4f, 3 | BRF_GRA },           //  5
	{ "242-c4.c4",    0x800000, 0x0b4fa044, 3 | BRF_GRA },           //  6
	{ "242-c5.c5",    0x800000, 0x9d10bed3, 3 | BRF_GRA },           //  7
	{ "242-c6.c6",    0x800000, 0xda07b6a2, 3 | BRF_GRA },           //  8
	{ "242-c7.c7",    0x800000, 0xf6d7a38a, 3 | BRF_GRA },           //  9
	{ "242-c8.c8",    0x800000, 0xc823e045, 3 | BRF_GRA },           // 10

	{ "242-mg1.m1",   0x040000, 0x4e7a6b1b, 4 | BRF_ESS | BRF_PRG }, // 11 Z80 code

	{ "242-v1.v1",    0x400000, 0xb9ea8051, 5 | BRF_SND },           // 12 Sound data
	{ "242-v2.v2",    0x400000, 0xcc11106e, 5 | BRF_SND },           // 13
	{ "242-v3.v3",    0x400000, 0x044ea4e1, 5 | BRF_SND },           // 14
	{ "242-v4.v4",    0x400000, 0x7985ea30, 5 | BRF_SND },           // 15
};

STDROMPICKEXT(kof98hkt, kof98hkt, neogeo)
STD_ROM_FN(kof98hkt)

struct BurnDriver BurnDrvkof98hkt = {
	"kof98hkt", NULL, "neogeo", NULL, "1998",
	"The King of Fighters '98 - The Slugfest (Korean Translate)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO, GBF_VSFIGHT, FBF_KOF,
	NULL, kof98hktRomInfo, kof98hktRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	NeoInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo kof99kaktRomDesc[] = {
	{ "152-p1.p1",   0x100000, 0xB98C12C5, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "152-p2.p2",   0x400000, 0xD87F8748, 1 | BRF_ESS | BRF_PRG }, //  1

	{ "251-c1.c1",    0x800000, 0xf33bf984, 3 | BRF_GRA },           //  2 Sprite data
	{ "251-c2.c2",    0x800000, 0x2fbe50f6, 3 | BRF_GRA },           //  3 
	{ "251-c3.c3",    0x800000, 0xeb3ade75, 3 | BRF_GRA },           //  4 
	{ "251-c4.c4",    0x800000, 0x11ae7b23, 3 | BRF_GRA },           //  5 
	{ "251-c5.c5",    0x800000, 0x58b22d03, 3 | BRF_GRA },           //  6 
	{ "251-c6.c6",    0x800000, 0x80c5ef85, 3 | BRF_GRA },           //  7 
	{ "251-c7.c7",    0x800000, 0x634c5fa5, 3 | BRF_GRA },           //  8 
	{ "251-c8.c8",    0x800000, 0xdf6786aa, 3 | BRF_GRA },           //  9 

	{ "251-m1.m1",    0x020000, 0x5e74539c, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "251-v1.v1",    0x400000, 0xef2eecc8, 5 | BRF_SND },           // 11 Sound data
	{ "251-v2.v2",    0x400000, 0x73e211ca, 5 | BRF_SND },           // 12 
	{ "251-v3.v3",    0x400000, 0x821901da, 5 | BRF_SND },           // 13 
	{ "251-v4.v4",    0x200000, 0xb49e6178, 5 | BRF_SND },           // 14 

};

STDROMPICKEXT(kof99kakt, kof99kakt, neogeo)
STD_ROM_FN(kof99kakt)

struct BurnDriver BurnDrvkof99kakt = {
	"kof99kakt", "kof99", "neogeo", NULL, "1999",
	"The King of Fighters '99 - Millennium Battle (Korean Translate)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC42, GBF_VSFIGHT, FBF_KOF,
	NULL, kof99kaRomInfo, kof99kaRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	kof99kaInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000, 304, 224, 4, 3
};

static struct BurnRomInfo kof2000nktRomDesc[] = {
	{ "257-pg1.p1",   0x100000, 0xa146e714, 1 | BRF_ESS | BRF_PRG }, //  0 68K code
	{ "257-pg2.sp2",  0x400000, 0xb0c817ca, 1 | BRF_ESS | BRF_PRG }, //  1 
	
	/* The Encrypted Boards do not have an s1 rom, data for it comes from the Cx ROMs */
	/* Encrypted */
	{ "257-c1.c1",    0x800000, 0x7e606bdc, 3 | BRF_GRA },           //  2 Sprite data
	{ "257-c2.c2",    0x800000, 0xada31353, 3 | BRF_GRA },           //  3 
	{ "257-c3.c3",    0x800000, 0xb01e0c52, 3 | BRF_GRA },           //  4 
	{ "257-c4.c4",    0x800000, 0x380f8c5f, 3 | BRF_GRA },           //  5 
	{ "257-c5.c5",    0x800000, 0xf3295dd7, 3 | BRF_GRA },           //  6 
	{ "257-c6.c6",    0x800000, 0x7d37f1cb, 3 | BRF_GRA },           //  7 
	{ "257-c7.c7",    0x800000, 0x7828c548, 3 | BRF_GRA },           //  8 
	{ "257-c8.c8",    0x800000, 0x17ac5c3e, 3 | BRF_GRA },           //  9 

	{ "257-m1.m1",    0x040000, 0x4b749113, 4 | BRF_ESS | BRF_PRG }, // 10 Z80 code

	{ "257-v1.v1",    0x400000, 0x17cde847, 5 | BRF_SND },           // 11 Sound data
	{ "257-v2.v2",    0x400000, 0x1afb20ff, 5 | BRF_SND },           // 12 
	{ "257-v3.v3",    0x400000, 0x4605036a, 5 | BRF_SND },           // 13 
	{ "257-v4.v4",    0x400000, 0x764bbd6b, 5 | BRF_SND },           // 14 
};	

STDROMPICKEXT(kof2000nkt, kof2000nkt, neogeo)
STD_ROM_FN(kof2000nkt)


struct BurnDriver BurnDrvkof2000nkt = {
	"kof2000nkt", "kof2000", "neogeo", NULL, "2000",
	"The King of Fighters 2000 (Korean Translate)\0", NULL, "SNK", "Neo Geo MVS",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PREFIX_CARTRIDGE | HARDWARE_SNK_NEOGEO | HARDWARE_SNK_CMC50 | HARDWARE_SNK_ALTERNATE_TEXT | HARDWARE_SNK_ENCRYPTED_M1, GBF_VSFIGHT, FBF_KOF,
	NULL, kof2000nktRomInfo, kof2000nktRomName, NULL, NULL, NULL, NULL, neogeoInputInfo, neogeoDIPInfo,
	kof2000nInit, NeoExit, NeoFrame, NeoRender, NeoScan, &NeoRecalcPalette,
	0x1000,	304, 224, 4, 3
};
