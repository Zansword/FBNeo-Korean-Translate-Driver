// CPS-2 driver Korean patched roms for fc2 and fbneo - 2022-08-01 written by chamcham425 aka zansword
// Based by fightcade fbneo v50 sources
// 

static struct BurnRomInfo AvspktRomDesc[] = {
	{ "avpe.03d",      0x080000, 0xf69b80f5, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avpe.04d",      0x080000, 0xbbae0c79, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.05d",       0x080000, 0xd91a8dd6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.06",        0x080000, 0x190b817f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "avp.13m",       0x200000, 0x8f8b5ae4, CPS2_GFX | BRF_GRA },
	{ "avp.15m",       0x200000, 0xb00280df, CPS2_GFX | BRF_GRA },
	{ "avp.17m",       0x200000, 0x94403195, CPS2_GFX | BRF_GRA },
	{ "avp.19m",       0x200000, 0xe1981245, CPS2_GFX | BRF_GRA },
	{ "avp.14m",       0x100000, 0x9f2d4e17, CPS2_GFX | BRF_GRA },
	{ "avp.16m",       0x100000, 0x39cf7494, CPS2_GFX | BRF_GRA },
	{ "avp.18m",       0x100000, 0x88959e0f, CPS2_GFX | BRF_GRA },
	{ "avp.20m",       0x100000, 0x58f7d1ee, CPS2_GFX | BRF_GRA },

	{ "avp.01",        0x020000, 0x2d3b4220, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	
	{ "avp.11m",       0x200000, 0x83499817, CPS2_QSND | BRF_SND },
	{ "avp.12m",       0x200000, 0xf4110d49, CPS2_QSND | BRF_SND },
	
	{ "avsp.key",      0x000014, 0xe69fa35b, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Avspkt)
STD_ROM_FN(Avspkt)

static struct BurnRomInfo AvspaktRomDesc[] = {
	{ "avpa.03d",      0x080000, 0x6b22b569, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avpa.04d",      0x080000, 0x50f3301c, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.05d",       0x080000, 0xd91a8dd6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.06",        0x080000, 0x190b817f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "avp.13m",       0x200000, 0x8f8b5ae4, CPS2_GFX | BRF_GRA },
	{ "avp.15m",       0x200000, 0xb00280df, CPS2_GFX | BRF_GRA },
	{ "avp.17m",       0x200000, 0x94403195, CPS2_GFX | BRF_GRA },
	{ "avp.19m",       0x200000, 0xe1981245, CPS2_GFX | BRF_GRA },
	{ "avp.14m",       0x100000, 0x9f2d4e17, CPS2_GFX | BRF_GRA },
	{ "avp.16m",       0x100000, 0x39cf7494, CPS2_GFX | BRF_GRA },
	{ "avp.18m",       0x100000, 0x88959e0f, CPS2_GFX | BRF_GRA },
	{ "avp.20m",       0x100000, 0x58f7d1ee, CPS2_GFX | BRF_GRA },

	{ "avp.01",        0x020000, 0x2d3b4220, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	
	{ "avp.11m",       0x200000, 0x83499817, CPS2_QSND | BRF_SND },
	{ "avp.12m",       0x200000, 0xf4110d49, CPS2_QSND | BRF_SND },
	
	{ "avspa.key",     0x000014, 0x728efc00, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Avspakt)
STD_ROM_FN(Avspakt)


static struct BurnRomInfo AvsphktRomDesc[] = {
	{ "avph.03d",      0x080000, 0x85e83ce9, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avph.04d",      0x080000, 0x6b69f33f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.05d",       0x080000, 0xd91a8dd6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.06",        0x080000, 0x190b817f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	
	{ "avp.13m",       0x200000, 0x8f8b5ae4, CPS2_GFX | BRF_GRA },
	{ "avp.15m",       0x200000, 0xb00280df, CPS2_GFX | BRF_GRA },
	{ "avp.17m",       0x200000, 0x94403195, CPS2_GFX | BRF_GRA },
	{ "avp.19m",       0x200000, 0xe1981245, CPS2_GFX | BRF_GRA },
	{ "avp.14m",       0x100000, 0x9f2d4e17, CPS2_GFX | BRF_GRA },
	{ "avp.16m",       0x100000, 0x39cf7494, CPS2_GFX | BRF_GRA },
	{ "avp.18m",       0x100000, 0x88959e0f, CPS2_GFX | BRF_GRA },
	{ "avp.20m",       0x100000, 0x58f7d1ee, CPS2_GFX | BRF_GRA },

	{ "avp.01",        0x020000, 0x2d3b4220, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	
	{ "avp.11m",       0x200000, 0x83499817, CPS2_QSND | BRF_SND },
	{ "avp.12m",       0x200000, 0xf4110d49, CPS2_QSND | BRF_SND },
	
	{ "avsph.key",     0x000014, 0xcae7b680, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Avsphkt)
STD_ROM_FN(Avsphkt)

static struct BurnRomInfo AvspjktRomDesc[] = {
	{ "avpj.03d",      0x080000, 0xa25bbd1f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avpj.04d",      0x080000, 0x48d480b8, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.05d",       0x080000, 0xd91a8dd6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.06",        0x080000, 0x190b817f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "avp.13m",       0x200000, 0x8f8b5ae4, CPS2_GFX | BRF_GRA },
	{ "avp.15m",       0x200000, 0xb00280df, CPS2_GFX | BRF_GRA },
	{ "avp.17m",       0x200000, 0x94403195, CPS2_GFX | BRF_GRA },
	{ "avp.19m",       0x200000, 0xe1981245, CPS2_GFX | BRF_GRA },
	{ "avp.14m",       0x100000, 0x9f2d4e17, CPS2_GFX | BRF_GRA },
	{ "avp.16m",       0x100000, 0x39cf7494, CPS2_GFX | BRF_GRA },
	{ "avp.18m",       0x100000, 0x88959e0f, CPS2_GFX | BRF_GRA },
	{ "avp.20m",       0x100000, 0x58f7d1ee, CPS2_GFX | BRF_GRA },

	{ "avp.01",        0x020000, 0x2d3b4220, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	
	{ "avp.11m",       0x200000, 0x83499817, CPS2_QSND | BRF_SND },
	{ "avp.12m",       0x200000, 0xf4110d49, CPS2_QSND | BRF_SND },
	
	{ "avspj.key",     0x000014, 0x3d5ccc08, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Avspjkt)
STD_ROM_FN(Avspjkt)

static struct BurnRomInfo AvspuktRomDesc[] = {
	{ "avpu.03d",      0x080000, 0xd11387a8, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avpu.04d",      0x080000, 0x9ebae5f6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.05d",       0x080000, 0xd91a8dd6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "avp.06",        0x080000, 0x190b817f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "avp.13m",       0x200000, 0x8f8b5ae4, CPS2_GFX | BRF_GRA },
	{ "avp.15m",       0x200000, 0xb00280df, CPS2_GFX | BRF_GRA },
	{ "avp.17m",       0x200000, 0x94403195, CPS2_GFX | BRF_GRA },
	{ "avp.19m",       0x200000, 0xe1981245, CPS2_GFX | BRF_GRA },
	{ "avp.14m",       0x100000, 0x9f2d4e17, CPS2_GFX | BRF_GRA },
	{ "avp.16m",       0x100000, 0x39cf7494, CPS2_GFX | BRF_GRA },
	{ "avp.18m",       0x100000, 0x88959e0f, CPS2_GFX | BRF_GRA },
	{ "avp.20m",       0x100000, 0x58f7d1ee, CPS2_GFX | BRF_GRA },

	{ "avp.01",        0x020000, 0x2d3b4220, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	
	{ "avp.11m",       0x200000, 0x83499817, CPS2_QSND | BRF_SND },
	{ "avp.12m",       0x200000, 0xf4110d49, CPS2_QSND | BRF_SND },
	
	{ "avspu.key",     0x000014, 0x4e68e346, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Avspukt)
STD_ROM_FN(Avspukt)

static struct BurnRomInfo Csclub1dktRomDesc[] = {
	{ "csce_d.03",     0x080000, 0x07e6f49f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "csce_d.04",     0x080000, 0xa3d9aa25, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "csce_d.05",     0x080000, 0x0915c9d1, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "csce_d.06",     0x080000, 0x09c77d99, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "csc_d.07",      0x080000, 0xb252666f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "csc.73",        0x080000, 0x42bdce56, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.74",        0x080000, 0xab215357, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.75",        0x080000, 0xa2367381, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.76",        0x080000, 0x728aac1f, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.63",        0x080000, 0x67c90364, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.64",        0x080000, 0x828a06d8, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.65",        0x080000, 0x86ee4569, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.66",        0x080000, 0xc24f577f, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.83",        0x080000, 0xc52e73e4, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.84",        0x080000, 0x90a92f39, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.85",        0x080000, 0xd08ab012, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.86",        0x080000, 0x41652583, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.93",        0x080000, 0xdc4b99c2, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.94",        0x080000, 0xfb7ccc73, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.95",        0x080000, 0x4d014297, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.96",        0x080000, 0x6754b1ef, CPS2_GFX_SPLIT4 | BRF_GRA },

	{ "csc.01",        0x020000, 0xee162111, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "csc.51",        0x080000, 0x5a52afd5, CPS2_QSND | BRF_SND },
	{ "csc.52",        0x080000, 0x1408a811, CPS2_QSND | BRF_SND },
	{ "csc.53",        0x080000, 0x4fb9f57c, CPS2_QSND | BRF_SND },
	{ "csc.54",        0x080000, 0x9a8f40ec, CPS2_QSND | BRF_SND },
	{ "csc.55",        0x080000, 0x91529a91, CPS2_QSND | BRF_SND },
	{ "csc.56",        0x080000, 0x9a345334, CPS2_QSND | BRF_SND },
	{ "csc.57",        0x080000, 0xaedc27f2, CPS2_QSND | BRF_SND },
	{ "csc.58",        0x080000, 0x2300b7b3, CPS2_QSND | BRF_SND },
	
	{ "phoenix.key",   0x000014, 0x2cf772b0, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Csclub1dkt)
STD_ROM_FN(Csclub1dkt)

static struct BurnRomInfo CsclubjktRomDesc[] = {
	{ "cscj.03",       0x080000, 0xb146e8db, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "cscj.04",       0x080000, 0x60c632bb, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "cscj.05",       0x080000, 0xad042003, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "cscj.06",       0x080000, 0x169e4d40, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "csc.07",        0x080000, 0x01b05caa, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "csc.14m",       0x200000, 0xbbc331b6, CPS2_GFX | BRF_GRA },
	{ "csc.16m",       0x200000, 0x6b3e7280, CPS2_GFX | BRF_GRA },
	{ "csc.18m",       0x200000, 0xdf65f3ee, CPS2_GFX | BRF_GRA },
	{ "csc.20m",       0x200000, 0x1ccb5969, CPS2_GFX | BRF_GRA },

	{ "csc.01",        0x020000, 0xee162111, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "csc.11m",       0x200000, 0xa027b827, CPS2_QSND | BRF_SND },
	{ "csc.12m",       0x200000, 0xcb7f6e55, CPS2_QSND | BRF_SND },
	
	{ "csclubj.key",   0x000014, 0x519a04db, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Csclubjkt)
STD_ROM_FN(Csclubjkt)

static struct BurnRomInfo CsclubjyktRomDesc[] = {
// this is fairly redundant, same code as csclubj, same gfx as csclub (yellow case - all eprom), but it's a valid shipped combination
	{ "cscj.03",       0x080000, 0xb146e8db, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "cscj.04",       0x080000, 0x60c632bb, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "cscj.05",       0x080000, 0xad042003, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "cscj.06",       0x080000, 0x169e4d40, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "csc.07",        0x080000, 0x01b05caa, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "csc.73",        0x080000, 0x42bdce56, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.74",        0x080000, 0xab215357, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.75",        0x080000, 0xa2367381, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.76",        0x080000, 0x728aac1f, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.63",        0x080000, 0x67c90364, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.64",        0x080000, 0x828a06d8, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.65",        0x080000, 0x86ee4569, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.66",        0x080000, 0xc24f577f, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.83",        0x080000, 0x8b56ad87, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.84",        0x080000, 0x90a92f39, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.85",        0x080000, 0xd08ab012, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.86",        0x080000, 0x41652583, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.93",        0x080000, 0xdc4b99c2, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.94",        0x080000, 0xfb7ccc73, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.95",        0x080000, 0x4d014297, CPS2_GFX_SPLIT4 | BRF_GRA },
	{ "csc.96",        0x080000, 0x6754b1ef, CPS2_GFX_SPLIT4 | BRF_GRA },

	{ "csc.01",        0x020000, 0xee162111, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "csc.51",        0x080000, 0x5a52afd5, CPS2_QSND | BRF_SND },
	{ "csc.52",        0x080000, 0x1408a811, CPS2_QSND | BRF_SND },
	{ "csc.53",        0x080000, 0x4fb9f57c, CPS2_QSND | BRF_SND },
	{ "csc.54",        0x080000, 0x9a8f40ec, CPS2_QSND | BRF_SND },
	{ "csc.55",        0x080000, 0x91529a91, CPS2_QSND | BRF_SND },
	{ "csc.56",        0x080000, 0x9a345334, CPS2_QSND | BRF_SND },
	{ "csc.57",        0x080000, 0xaedc27f2, CPS2_QSND | BRF_SND },
	{ "csc.58",        0x080000, 0x2300b7b3, CPS2_QSND | BRF_SND },
	
	{ "csclubj.key",   0x000014, 0x519a04db, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Csclubjykt)
STD_ROM_FN(Csclubjykt)

static struct BurnRomInfo DdsomaktRomDesc[] = {
	{ "dd2a.03g",      0x080000, 0x20a53ecb, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2a.04g",      0x080000, 0xe2fc9c29, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.05g",       0x080000, 0x5eb1991c, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.06g",       0x080000, 0x14c46332, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.07",        0x080000, 0x9c6706d7, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.08",        0x080000, 0xe53c4d01, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.09",        0x080000, 0x09ac4b22, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.10",        0x080000, 0xad954c26, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "dd2.13m",       0x400000, 0x651786dd, CPS2_GFX | BRF_GRA },
	{ "dd2.15m",       0x400000, 0x173ce940, CPS2_GFX | BRF_GRA },
	{ "dd2.17m",       0x400000, 0xc18c9b32, CPS2_GFX | BRF_GRA },
	{ "dd2.19m",       0x400000, 0x0436a109, CPS2_GFX | BRF_GRA },
	{ "dd2.14m",       0x200000, 0xfca8f094, CPS2_GFX | BRF_GRA },
	{ "dd2.16m",       0x200000, 0xaa1a1481, CPS2_GFX | BRF_GRA },
	{ "dd2.18m",       0x200000, 0xb278079a, CPS2_GFX | BRF_GRA },
	{ "dd2.20m",       0x200000, 0x60540da9, CPS2_GFX | BRF_GRA },

	{ "dd2.01",        0x020000, 0x99d657e5, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "dd2.02",        0x020000, 0x117a3824, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "dd2.11m",       0x200000, 0x98d0c325, CPS2_QSND | BRF_SND },
	{ "dd2.12m",       0x200000, 0x5ea2e7fa, CPS2_QSND | BRF_SND },
	
	{ "ddsoma.key",    0x000014, 0x8c3cc560, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Ddsomakt)
STD_ROM_FN(Ddsomakt)

static struct BurnRomInfo DdsomjktRomDesc[] = {
	{ "dd2j.03g",      0x080000, 0xce684dd4, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2j.04g",      0x080000, 0x64212c8d, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.05g",       0x080000, 0x5eb1991c, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.06g",       0x080000, 0x14c46332, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.07",        0x080000, 0x9c6706d7, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.08",        0x080000, 0xe53c4d01, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.09",        0x080000, 0x09ac4b22, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dd2.10",        0x080000, 0xad954c26, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "dd2.13m",       0x400000, 0x651786dd, CPS2_GFX | BRF_GRA },
	{ "dd2.15m",       0x400000, 0x173ce940, CPS2_GFX | BRF_GRA },
	{ "dd2.17m",       0x400000, 0xc18c9b32, CPS2_GFX | BRF_GRA },
	{ "dd2.19m",       0x400000, 0x2172DF84, CPS2_GFX | BRF_GRA },
	{ "dd2.14m",       0x200000, 0xFCA8F094, CPS2_GFX | BRF_GRA },
	{ "dd2.16m",       0x200000, 0xaa1a1481, CPS2_GFX | BRF_GRA },
	{ "dd2.18m",       0x200000, 0xb278079a, CPS2_GFX | BRF_GRA },
	{ "dd2.20m",       0x200000, 0x60540da9, CPS2_GFX | BRF_GRA },

	{ "dd2.01",        0x020000, 0x99d657e5, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "dd2.02",        0x020000, 0x117a3824, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "dd2.11m",       0x200000, 0x98d0c325, CPS2_QSND | BRF_SND },
	{ "dd2.12m",       0x200000, 0x5ea2e7fa, CPS2_QSND | BRF_SND },
	
	{ "ddsomj.key",    0x000014, 0xd8dadb22, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Ddsomjkt)
STD_ROM_FN(Ddsomjkt)

static struct BurnRomInfo DdtodjktRomDesc[] = {
	{ "dadj.03c",      0x080000, 0x84ba3e82, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dadj.04c",      0x080000, 0x8112a66f, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dadj.05c",      0x080000, 0x189b15fe, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dad.06a",       0x080000, 0xd842d2f6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "dad.07a",       0x080000, 0xb3480ec3, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "dad.13m",       0x200000, 0x8f910453, CPS2_GFX | BRF_GRA },
	{ "dad.15m",       0x200000, 0x68867061, CPS2_GFX | BRF_GRA },
	{ "dad.17m",       0x200000, 0xFED892AD, CPS2_GFX | BRF_GRA },
	{ "dad.19m",       0x200000, 0xf3074c70, CPS2_GFX | BRF_GRA },
	{ "dad.14m",       0x100000, 0x2c8917c5, CPS2_GFX | BRF_GRA },
	{ "dad.16m",       0x100000, 0x84bbbe5f, CPS2_GFX | BRF_GRA },
	{ "dad.18m",       0x100000, 0x6104eb15, CPS2_GFX | BRF_GRA },
	{ "dad.20m",       0x100000, 0xfd792b1a, CPS2_GFX | BRF_GRA },

	{ "dad.01",        0x020000, 0x3f5e2424, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "dad.11m",       0x200000, 0x0c499b67, CPS2_QSND | BRF_SND },
	{ "dad.12m",       0x200000, 0x2f0b5a4e, CPS2_QSND | BRF_SND },
	
	{ "ddtodj.key",    0x000014, 0x5414dfca, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Ddtodjkt)
STD_ROM_FN(Ddtodjkt)

static struct BurnRomInfo PfghtjktRomDesc[] = {
	{ "pcfj.03",       0x080000, 0xafd95539, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "pcf.04",        0x080000, 0x6c882837, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "pcf.05",        0x080000, 0x215655f6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "pcf.06",        0x080000, 0xea6f13ea, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "pcf.07",        0x080000, 0x5ac6d5ea, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "pcf.13m",       0x400000, 0x54b3cae4, CPS2_GFX | BRF_GRA },
	{ "pcf.15m",       0x400000, 0x7dd93dcc, CPS2_GFX | BRF_GRA },
	{ "pcf.17m",       0x400000, 0x7b8b32dd, CPS2_GFX | BRF_GRA },
	{ "pcf.19m",       0x400000, 0x16b4c270, CPS2_GFX | BRF_GRA },
	{ "pcf.14m",       0x100000, 0x0383897c, CPS2_GFX | BRF_GRA },
	{ "pcf.16m",       0x100000, 0x76f91084, CPS2_GFX | BRF_GRA },
	{ "pcf.18m",       0x100000, 0x756c3754, CPS2_GFX | BRF_GRA },
	{ "pcf.20m",       0x100000, 0x9ec9277d, CPS2_GFX | BRF_GRA },

	{ "pcf.01",        0x020000, 0x254e5f33, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "pcf.02",        0x020000, 0x6902f4f9, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "pcf.11m",       0x400000, 0xa5dea005, CPS2_QSND | BRF_SND },
	{ "pcf.12m",       0x400000, 0x4ce235fe, CPS2_QSND | BRF_SND },
	
	{ "pfghtj.key",    0x000014, 0x62297638, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Pfghtjkt)
STD_ROM_FN(Pfghtjkt)

static struct BurnRomInfo Rmancp2jktRomDesc[] = {
	{ "rcmj.03a",      0x080000, 0x09512f87, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "rcmj.04a",      0x080000, 0x09c95de1, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "rcm.05a",       0x080000, 0x517ccde2, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "rcm.73",        0x080000, 0x11542F04, CPS2_GFX | BRF_GRA },
	{ "rcm.63",        0x080000, 0x922ece19, CPS2_GFX | BRF_GRA },
	{ "rcm.83",        0x080000, 0x0ceb4599, CPS2_GFX | BRF_GRA },
	{ "rcm.93",        0x080000, 0x44d9e31d, CPS2_GFX | BRF_GRA },
	{ "rcm.74",        0x080000, 0x004ec725, CPS2_GFX | BRF_GRA },
	{ "rcm.64",        0x080000, 0x65c0464e, CPS2_GFX | BRF_GRA },
	{ "rcm.84",        0x080000, 0xfb3097cc, CPS2_GFX | BRF_GRA },
	{ "rcm.94",        0x080000, 0x2e16557a, CPS2_GFX | BRF_GRA },
	{ "rcm.75",        0x080000, 0xB346F994, CPS2_GFX | BRF_GRA },
	{ "rcm.65",        0x080000, 0xc49b7155, CPS2_GFX | BRF_GRA },
	{ "rcm.85",        0x080000, 0xc1205f95, CPS2_GFX | BRF_GRA },
	{ "rcm.95",        0x080000, 0x32f96719, CPS2_GFX | BRF_GRA },
	{ "rcm.76",        0x080000, 0x89a889ad, CPS2_GFX | BRF_GRA },
	{ "rcm.66",        0x080000, 0x1300eb7b, CPS2_GFX | BRF_GRA },
	{ "rcm.86",        0x080000, 0x6d974ebd, CPS2_GFX | BRF_GRA },
	{ "rcm.96",        0x080000, 0x7da4cd24, CPS2_GFX | BRF_GRA },

	{ "rcm.01",        0x020000, 0xd60cf8a3, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "rcm.51",        0x080000, 0xb6d07080, CPS2_QSND | BRF_SND },
	{ "rcm.52",        0x080000, 0xdfddc493, CPS2_QSND | BRF_SND },
	{ "rcm.53",        0x080000, 0x6062ae3a, CPS2_QSND | BRF_SND },
	{ "rcm.54",        0x080000, 0x08c6f3bf, CPS2_QSND | BRF_SND },
	{ "rcm.55",        0x080000, 0xf97dfccc, CPS2_QSND | BRF_SND },
	{ "rcm.56",        0x080000, 0xade475bc, CPS2_QSND | BRF_SND },
	{ "rcm.57",        0x080000, 0x075effb3, CPS2_QSND | BRF_SND },
	{ "rcm.58",        0x080000, 0xf6c1f87b, CPS2_QSND | BRF_SND },
	
	{ "rmancp2j.key",  0x000014, 0x17309a70, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Rmancp2jkt)
STD_ROM_FN(Rmancp2jkt)

static struct BurnRomInfo Rockman2jktRomDesc[] = {
	{ "rm2j.03",       0x080000, 0x6ba5e8d2, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "rm2j.04",       0x080000, 0x211105c9, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "rm2.05",        0x080000, 0x02ee9efc, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "rm2.14m",       0x200000, 0x712ccd27, CPS2_GFX | BRF_GRA },
	{ "rm2.16m",       0x200000, 0xba4cc30b, CPS2_GFX | BRF_GRA },
	{ "rm2.18m",       0x200000, 0x53cb1a05, CPS2_GFX | BRF_GRA },
	{ "rm2.20m",       0x200000, 0x7b019f2c, CPS2_GFX | BRF_GRA },

	{ "rm2.01a",       0x020000, 0xd18e7859, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "rm2.02",        0x020000, 0xc463ece0, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "rm2.11m",       0x200000, 0x2106174d, CPS2_QSND | BRF_SND },
	{ "rm2.12m",       0x200000, 0x546c1636, CPS2_QSND | BRF_SND },
	
	{ "rockman2j.key", 0x000014, 0xc590187a, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Rockman2jkt)
STD_ROM_FN(Rockman2jkt)

static struct BurnRomInfo Sfz2aljktRomDesc[] = {
	{ "szaj.03a",      0x080000, 0x3b795a57, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.04a",      0x080000, 0x9559af19, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.05a",      0x080000, 0xd2cb29fa, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.06a",      0x080000, 0x35ed5b7a, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.07a",      0x080000, 0x975dcb3e, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.08a",      0x080000, 0xdc73f2d7, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "sza.13m",       0x400000, 0x10ef2d2b, CPS2_GFX | BRF_GRA },
	{ "sza.15m",       0x400000, 0xfcc1f004, CPS2_GFX | BRF_GRA },
	{ "sza.17m",       0x400000, 0xe364b775, CPS2_GFX | BRF_GRA },
	{ "sza.19m",       0x400000, 0xea68b6a9, CPS2_GFX | BRF_GRA },
	{ "sza.14m",       0x100000, 0x0560c6aa, CPS2_GFX | BRF_GRA },
	{ "sza.16m",       0x100000, 0xae940f87, CPS2_GFX | BRF_GRA },
	{ "sza.18m",       0x100000, 0x4bc3c8bc, CPS2_GFX | BRF_GRA },
	{ "sza.20m",       0x100000, 0x39e674c0, CPS2_GFX | BRF_GRA },

	{ "sza.01",        0x020000, 0x1bc323cf, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "sza.02",        0x020000, 0xba6a5013, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "sza.11m",       0x200000, 0xaa47a601, CPS2_QSND | BRF_SND },
	{ "sza.12m",       0x200000, 0x2237bc53, CPS2_QSND | BRF_SND },
	
	{ "sfz2alj.key",   0x000014, 0x4c42320f, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Sfz2aljkt)
STD_ROM_FN(Sfz2aljkt)

static struct BurnRomInfo Sfz2aljkthRomDesc[] = {
	{ "szaj.03a",      0x080000, 0x3c545a2a, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.04a",      0x080000, 0x9559af19, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.05a",      0x080000, 0xd2cb29fa, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.06a",      0x080000, 0x35ed5b7a, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.07a",      0x080000, 0x975dcb3e, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "szaj.08a",      0x080000, 0xdc73f2d7, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "sza.13m",       0x400000, 0x10ef2d2b, CPS2_GFX | BRF_GRA },
	{ "sza.15m",       0x400000, 0xfcc1f004, CPS2_GFX | BRF_GRA },
	{ "sza.17m",       0x400000, 0xe364b775, CPS2_GFX | BRF_GRA },
	{ "sza.19m",       0x400000, 0xea68b6a9, CPS2_GFX | BRF_GRA },
	{ "sza.14m",       0x100000, 0x0560c6aa, CPS2_GFX | BRF_GRA },
	{ "sza.16m",       0x100000, 0xae940f87, CPS2_GFX | BRF_GRA },
	{ "sza.18m",       0x100000, 0x4bc3c8bc, CPS2_GFX | BRF_GRA },
	{ "sza.20m",       0x100000, 0x39e674c0, CPS2_GFX | BRF_GRA },

	{ "sza.01",        0x020000, 0x1bc323cf, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "sza.02",        0x020000, 0xba6a5013, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "sza.11m",       0x200000, 0xaa47a601, CPS2_QSND | BRF_SND },
	{ "sza.12m",       0x200000, 0x2237bc53, CPS2_QSND | BRF_SND },
	
	{ "sfz2alj.key",   0x000014, 0x4c42320f, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Sfz2aljkth)
STD_ROM_FN(Sfz2aljkth)

static struct BurnRomInfo Sfz2jktRomDesc[] = {
	{ "sz2j.03b",      0x080000, 0xe46526a9, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.04b",      0x080000, 0x5f8f5bc3, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.05b",      0x080000, 0xdd224156, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.06b",      0x080000, 0xa45a75a6, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.07b",      0x080000, 0x515ceb77, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.08b",      0x080000, 0x92b66e01, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "sz2.13m",       0x400000, 0x10ef2d2b, CPS2_GFX | BRF_GRA },
	{ "sz2.15m",       0x400000, 0xfcc1f004, CPS2_GFX | BRF_GRA },
	{ "sz2.17m",       0x400000, 0xe364b775, CPS2_GFX | BRF_GRA },
	{ "sz2.19m",       0x400000, 0xea68b6a9, CPS2_GFX | BRF_GRA },
	{ "sz2.14m",       0x100000, 0x0560c6aa, CPS2_GFX | BRF_GRA },
	{ "sz2.16m",       0x100000, 0xae940f87, CPS2_GFX | BRF_GRA },
	{ "sz2.18m",       0x100000, 0x4bc3c8bc, CPS2_GFX | BRF_GRA },
	{ "sz2.20m",       0x100000, 0x39e674c0, CPS2_GFX | BRF_GRA },

	{ "sz2.01a",       0x020000, 0x1bc323cf, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "sz2.02a",       0x020000, 0xba6a5013, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "sz2.11m",       0x200000, 0xaa47a601, CPS2_QSND | BRF_SND },
	{ "sz2.12m",       0x200000, 0x2237bc53, CPS2_QSND | BRF_SND },
	
	{ "sfz2j.key",     0x000014, 0x455bd098, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Sfz2jkt)
STD_ROM_FN(Sfz2jkt)

static struct BurnRomInfo Sfz2jr1ktRomDesc[] = {
	{ "sz2j.03a",      0x080000, 0xbaaea2b2, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.04a",      0x080000, 0x13cc798b, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2.05a",       0x080000, 0x98e8e992, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2.06",        0x080000, 0x5b1d49c0, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.07a",      0x080000, 0x213368e7, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2.08",        0x080000, 0x0fe8585d, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "sz2.13m",       0x400000, 0x10ef2d2b, CPS2_GFX | BRF_GRA },
	{ "sz2.15m",       0x400000, 0xfcc1f004, CPS2_GFX | BRF_GRA },
	{ "sz2.17m",       0x400000, 0xe364b775, CPS2_GFX | BRF_GRA },
	{ "sz2.19m",       0x400000, 0xea68b6a9, CPS2_GFX | BRF_GRA },
	{ "sz2.14m",       0x100000, 0x0560c6aa, CPS2_GFX | BRF_GRA },
	{ "sz2.16m",       0x100000, 0xae940f87, CPS2_GFX | BRF_GRA },
	{ "sz2.18m",       0x100000, 0x4bc3c8bc, CPS2_GFX | BRF_GRA },
	{ "sz2.20m",       0x100000, 0x39e674c0, CPS2_GFX | BRF_GRA },

	{ "sz2.01a",       0x020000, 0x1bc323cf, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "sz2.02a",       0x020000, 0xba6a5013, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "sz2.11m",       0x200000, 0xaa47a601, CPS2_QSND | BRF_SND },
	{ "sz2.12m",       0x200000, 0x2237bc53, CPS2_QSND | BRF_SND },
	
	{ "sfz2j.key",     0x000014, 0x455bd098, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Sfz2jr1kt)
STD_ROM_FN(Sfz2jr1kt)

static struct BurnRomInfo Sfz2jr1kthRomDesc[] = {
	{ "sz2j.03a",      0x080000, 0x671306bd, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.04a",      0x080000, 0x13cc798b, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2.05a",       0x080000, 0x98e8e992, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2.06",        0x080000, 0x5b1d49c0, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2j.07a",      0x080000, 0x213368e7, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sz2.08",        0x080000, 0x0fe8585d, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "sz2.13m",       0x400000, 0x10ef2d2b, CPS2_GFX | BRF_GRA },
	{ "sz2.15m",       0x400000, 0xfcc1f004, CPS2_GFX | BRF_GRA },
	{ "sz2.17m",       0x400000, 0xe364b775, CPS2_GFX | BRF_GRA },
	{ "sz2.19m",       0x400000, 0xea68b6a9, CPS2_GFX | BRF_GRA },
	{ "sz2.14m",       0x100000, 0x0560c6aa, CPS2_GFX | BRF_GRA },
	{ "sz2.16m",       0x100000, 0xae940f87, CPS2_GFX | BRF_GRA },
	{ "sz2.18m",       0x100000, 0x4bc3c8bc, CPS2_GFX | BRF_GRA },
	{ "sz2.20m",       0x100000, 0x39e674c0, CPS2_GFX | BRF_GRA },

	{ "sz2.01a",       0x020000, 0x1bc323cf, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "sz2.02a",       0x020000, 0xba6a5013, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "sz2.11m",       0x200000, 0xaa47a601, CPS2_QSND | BRF_SND },
	{ "sz2.12m",       0x200000, 0x2237bc53, CPS2_QSND | BRF_SND },
	
	{ "sfz2j.key",     0x000014, 0x455bd098, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Sfz2jr1kth)
STD_ROM_FN(Sfz2jr1kth)

static struct BurnRomInfo SfzjktRomDesc[] = {
	{ "sfzj.03c",      0x080000, 0xff9f72cc, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sfz.04b",       0x080000, 0x8b73b0e5, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sfz.05a",       0x080000, 0x0810544d, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sfz.06",        0x080000, 0x806e8f38, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "sfz.14m",       0x200000, 0x2abed9af, CPS2_GFX | BRF_GRA },
	{ "sfz.16m",       0x200000, 0xe30c4e37, CPS2_GFX | BRF_GRA },
	{ "sfz.18m",       0x200000, 0xa5a760b9, CPS2_GFX | BRF_GRA },
	{ "sfz.20m",       0x200000, 0xc72b7c2d, CPS2_GFX | BRF_GRA },

	{ "sfz.01",        0x020000, 0xffffec7d, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "sfz.02",        0x020000, 0x45f46a08, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "sfz.11m",       0x200000, 0xc4b093cd, CPS2_QSND | BRF_SND },
	{ "sfz.12m",       0x200000, 0x8bdbc4b4, CPS2_QSND | BRF_SND },
	
	{ "sfzj.key",      0x000014, 0x355d85b8, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Sfzjkt)
STD_ROM_FN(Sfzjkt)

static struct BurnRomInfo SfzjkthRomDesc[] = {
	{ "sfzj.03c",      0x080000, 0x61d85553, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sfz.04b",       0x080000, 0x8b73b0e5, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sfz.05a",       0x080000, 0x0810544d, CPS2_PRG_68K | BRF_ESS | BRF_PRG },
	{ "sfz.06",        0x080000, 0xe7bb5d20, CPS2_PRG_68K | BRF_ESS | BRF_PRG },

	{ "sfz.14m",       0x200000, 0x2abed9af, CPS2_GFX | BRF_GRA },
	{ "sfz.16m",       0x200000, 0xe30c4e37, CPS2_GFX | BRF_GRA },
	{ "sfz.18m",       0x200000, 0xa5a760b9, CPS2_GFX | BRF_GRA },
	{ "sfz.20m",       0x200000, 0xc72b7c2d, CPS2_GFX | BRF_GRA },

	{ "sfz.01",        0x020000, 0xffffec7d, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },
	{ "sfz.02",        0x020000, 0x45f46a08, CPS2_PRG_Z80 | BRF_ESS | BRF_PRG },

	{ "sfz.11m",       0x200000, 0xc4b093cd, CPS2_QSND | BRF_SND },
	{ "sfz.12m",       0x200000, 0x8bdbc4b4, CPS2_QSND | BRF_SND },
	
	{ "sfzj.key",      0x000014, 0x355d85b8, CPS2_ENCRYPTION_KEY },
};

STD_ROM_PICK(Sfzjkth)
STD_ROM_FN(Sfzjkth)


struct BurnDriver BurnDrvCpsAvspkt = {
	"avspkt", "avsp", NULL, NULL, "1994",
	"Alien vs Predator (940520 Euro)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, AvspktRomInfo, AvspktRomName, NULL, NULL, NULL, NULL, AvspInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsAvspakt = {
	"avspakt", "avsp", NULL, NULL, "1994",
	"Alien vs Predator (940520 Asia)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, AvspaktRomInfo, AvspaktRomName, NULL, NULL, NULL, NULL, AvspInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsAvsphkt = {
	"avsphkt", "avsp", NULL, NULL, "1994",
	"Alien vs Predator (940520 Hispanic)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, AvsphktRomInfo, AvsphktRomName, NULL, NULL, NULL, NULL, AvspInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsAvspjkt = {
	"avspjkt", "avsp", NULL, NULL, "1994",
	"Alien vs Predator (940520 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, AvspjktRomInfo, AvspjktRomName, NULL, NULL, NULL, NULL, AvspInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsAvspukt = {
	"avspukt", "avsp", NULL, NULL, "1994",
	"Alien vs Predator (940520 USA)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 3, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, AvspuktRomInfo, AvspuktRomName, NULL, NULL, NULL, NULL, AvspInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsCsclubjkt = {
	"csclubjkt", "csclub", NULL, NULL, "1997",
	"Capcom Sports Club (970722 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_SPORTSMISC, 0,
	NULL, CsclubjktRomInfo, CsclubjktRomName, NULL, NULL, NULL, NULL, CsclubInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsCsclubjykt = {
	"csclubjykt", "csclub", NULL, NULL, "1997",
	"Capcom Sports Club (970722 Japan, yellow case)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_SPORTSMISC, 0,
	NULL, CsclubjyktRomInfo, CsclubjyktRomName, NULL, NULL, NULL, NULL, CsclubInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsDdsomakt = {
	"ddsomakt", "ddsom", NULL, NULL, "1996",
	"Dungeons & Dragons - shadow over mystara (960619 Asia)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 4, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, DdsomaktRomInfo, DdsomaktRomName, NULL, NULL, NULL, NULL, DdsomInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsDdsomjkt = {
	"ddsomjkt", "ddsom", NULL, NULL, "1996",
	"Dungeons & Dragons - shadow over mystara (960619 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 4, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, DdsomjktRomInfo, DdsomjktRomName, NULL, NULL, NULL, NULL, DdsomInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsDdtodjkt = {
	"ddtodjkt", "ddtod", NULL, NULL, "1994",
	"Dungeons & Dragons - tower of doom (940412 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 4, HARDWARE_CAPCOM_CPS2, GBF_SCRFIGHT, 0,
	NULL, DdtodjktRomInfo, DdtodjktRomName, NULL, NULL, NULL, NULL, DdtodInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsPfghtjkt = {
	"pfghtjkt", "sgemf", NULL, NULL, "1997",
	"Pocket Fighter (970904 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, PfghtjktRomInfo, PfghtjktRomName, NULL, NULL, NULL, NULL, SgemfInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsRockman2jkt = {
	"rockman2jkt", "megaman2", NULL, NULL, "1996",
	"Rockman 2 - the power fighters (960708 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, 0,
	NULL, Rockman2jktRomInfo, Rockman2jktRomName, NULL, NULL, NULL, NULL, Megaman2InputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsRmancp2jkt = {
	"rmancp2jkt", "megaman", NULL, NULL, "1999",
	"Rockman: The Power Battle (950922 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, 0,
	NULL, Rmancp2jktRomInfo, Rmancp2jktRomName, NULL, NULL, NULL, NULL, Mmancp2uInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfzjkt = {
	"sfzjkt", "sfa", NULL, NULL, "1995",
	"Street Fighter Zero (950727 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, SfzjktRomInfo, SfzjktRomName, NULL, NULL, NULL, NULL, Cps2FightingInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfzjkth = {
	"sfzjkth", "sfa", NULL, NULL, "1995",
	"Street Fighter Zero (Korean Translate + Hidden Character)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, SfzjkthRomInfo, SfzjkthRomName, NULL, NULL, NULL, NULL, Cps2FightingInputInfo, NULL,
	Cps2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfz2jkt = {
	"sfz2jkt", "sfa2", NULL, NULL, "1996",
	"Street Fighter Zero 2 (960430 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, Sfz2jktRomInfo, Sfz2jktRomName, NULL, NULL, NULL, NULL, Cps2FightingInputInfo, NULL,
	Sfa2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfz2jr1kt = {
	"sfz2jr1kt", "sfa2", NULL, NULL, "1996",
	"Street Fighter Zero 2 (960227 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, Sfz2jr1ktRomInfo, Sfz2jr1ktRomName, NULL, NULL, NULL, NULL, Cps2FightingInputInfo, NULL,
	Sfa2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfz2jr1kth = {
	"sfz2jr1kth", "sfa2", NULL, NULL, "1996",
	"Street Fighter Zero 2 (Korean Translate + Hidden Character)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, Sfz2jr1kthRomInfo, Sfz2jr1kthRomName, NULL, NULL, NULL, NULL, Cps2FightingInputInfo, NULL,
	Sfa2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfz2aljkt = {
	"sfz2aljkt", "sfz2al", NULL, NULL, "1996",
	"Street Fighter Zero 2 Alpha (960805 Japan)(Korean Translate)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, Sfz2aljktRomInfo, Sfz2aljktRomName, NULL, NULL, NULL, NULL, Cps2FightingInputInfo, NULL,
	Sfa2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};

struct BurnDriver BurnDrvCpsSfz2aljkth = {
	"sfz2aljkth", "sfz2al", NULL, NULL, "1996",
	"Street Fighter Zero 2 Alpha(Korean Translate + Hidden character)\0", NULL, "Capcom", "CPS2",
	NULL, NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_CAPCOM_CPS2, GBF_VSFIGHT, FBF_SF,
	NULL, Sfz2aljkthRomInfo, Sfz2aljkthRomName, NULL, NULL, NULL, NULL, Cps2FightingInputInfo, NULL,
	Sfa2Init, DrvExit, Cps2Frame, CpsRedraw, CpsAreaScan,
	&CpsRecalcPal, 0x1000, 384, 224, 4, 3
};
