// IREM M92 Korean patched roms for fc2 and fbneo - 2022-08-01 written by chamcham425 aka zansword
// Based by fightcade fbneo v50 sources
// 

// Undercover Cops (Japan) - Korean Translate

static struct BurnRomInfo uccopsjktRomDesc[] = {
	{ "uc_h0_a.ic28",	0x040000, 0x9e17cada, 1 | BRF_PRG | BRF_ESS }, //  0 V33 Code
	{ "uc_l0_a.ic39",	0x040000, 0x4a4e3208, 1 | BRF_PRG | BRF_ESS }, //  1
	{ "uc_h1_a.ic27",	0x020000, 0x891c0678, 1 | BRF_PRG | BRF_ESS }, //  2
	{ "uc_l1_a.ic38",	0x020000, 0x77beea06, 1 | BRF_PRG | BRF_ESS }, //  3

	{ "uc_sh0.ic30",	0x010000, 0xf0ca1b03, 2 | BRF_PRG | BRF_ESS }, //  4 V30 Code
	{ "uc_sl0.ic31",	0x010000, 0xd1661723, 2 | BRF_PRG | BRF_ESS }, //  5

	{ "uc_c0.ic26",		0x080000, 0xDC672F1B, 3 | BRF_GRA },           //  6 Background Tiles
	{ "uc_c1.ic25",		0x080000, 0xbb73ca75, 3 | BRF_GRA },           //  7
	{ "uc_c2.ic24",		0x080000, 0x96397ac6, 3 | BRF_GRA },           //  8
	{ "uc_c3.ic23",		0x080000, 0x5d07d10d, 3 | BRF_GRA },           //  9

	{ "uc_030.ic37",	0x100000, 0x97f7775e, 4 | BRF_GRA },           // 10 Sprites
	{ "uc_020.ic36",	0x100000, 0x5e0b1d65, 4 | BRF_GRA },           // 11
	{ "uc_010.ic35",	0x100000, 0xbdc224b3, 4 | BRF_GRA },           // 12
	{ "uc_000.ic34",	0x100000, 0x7526daec, 4 | BRF_GRA },           // 13

	{ "uc_da.bin",		0x080000, 0x0b2855e9, 5 | BRF_SND },           // 14 Irem GA20 Samples
};

STD_ROM_PICK(uccopsjkt)
STD_ROM_FN(uccopsjkt)

struct BurnDriver BurnDrvUccopsjkt = {
	"uccopsjkt", "uccops", NULL, NULL, "1992",
	"Undercover Cops (Korean Translate)\0", NULL, "Irem", "Irem M92",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 3, HARDWARE_IREM_M92, GBF_SCRFIGHT, 0,
	NULL, uccopsjktRomInfo, uccopsjktRomName, NULL, NULL, NULL, NULL, p3CommonInputInfo, UccopsDIPInfo,
	uccopsInit, DrvExit, DrvFrame, DrvReDraw, DrvScan, &bRecalcPalette, 0x800,
	320, 240, 4, 3
};

// Yakyuu Kakutou League-Man (Japan) - Korean Patch

static struct BurnRomInfo leaguemnktRomDesc[] = {
	{ "lma1-h0.34",		0x040000, 0x738c9356, 1 | BRF_PRG | BRF_ESS }, //  0 V33 Code
	{ "lma1-l0.31",		0x040000, 0xc540c3a6, 1 | BRF_PRG | BRF_ESS }, //  1
	{ "a1-h1-.33",		0x040000, 0x3ce2aab5, 1 | BRF_PRG | BRF_ESS }, //  2
	{ "a1-l1-.32",		0x040000, 0x116d9bcc, 1 | BRF_PRG | BRF_ESS }, //  3

	{ "a1-sh0-.14",		0x010000, 0xb7fae3e6, 2 | BRF_PRG | BRF_ESS }, //  4 V30 Code
	{ "a1-sl0-.17",		0x010000, 0xb26d54fc, 2 | BRF_PRG | BRF_ESS }, //  5

	{ "lh534k0c.9",		0x080000, 0x9015f7d9, 3 | BRF_GRA },           //  6 Background Tiles
	{ "lh534k0e.10",	0x080000, 0xd93e5593, 3 | BRF_GRA },           //  7
	{ "lh534k0f.11",	0x080000, 0xce824cc3, 3 | BRF_GRA },           //  8
	{ "lh534k0g.12",	0x080000, 0xe90050fa, 3 | BRF_GRA },           //  9

	{ "lh538393.42",	0x100000, 0x66248464, 4 | BRF_GRA },           // 10 Sprites
	{ "lh538394.43",	0x100000, 0xa7a0963b, 4 | BRF_GRA },           // 11
	{ "lh538395.44",	0x100000, 0x3f096442, 4 | BRF_GRA },           // 12
	{ "lh538396.45",	0x100000, 0x970ec749, 4 | BRF_GRA },           // 13

	{ "lh534k0k.8",		0x080000, 0x735e6380, 5 | BRF_SND },           // 14 Irem GA20 Samples
};

STD_ROM_PICK(leaguemnkt)
STD_ROM_FN(leaguemnkt)

struct BurnDriver BurnDrvLeaguemnkt = {
	"leaguemnkt", "nbbatman", NULL, NULL, "1993",
	"Yakyuu Kakutou League-Man (Korean Translate)\0", NULL, "Irem", "Irem M92",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE, 4, HARDWARE_IREM_M92, GBF_SCRFIGHT, 0,
	NULL, leaguemnktRomInfo, leaguemnktRomName, NULL, NULL, NULL, NULL, nbbatmanInputInfo, NbbatmanDIPInfo,
	nbbatmanInit, DrvExit, DrvFrame, DrvReDraw, DrvScan, &bRecalcPalette, 0x800,
	320, 240, 4, 3
};