// Psikyo driver Korean patched roms for fc2 and fbneo - 2022-08-01 written by chamcham425 aka zansword
// Based by fightcade fbneo v50 sources
// tengai and gunbird

static INT32 gunbirdjktCheckSleep(INT32)
{
	return 0;
}

	if (!strcmp(BurnDrvGetTextA(DRV_NAME), "gunbird") || !strcmp(BurnDrvGetTextA(DRV_NAME), "gunbirdj") || !strcmp(BurnDrvGetTextA(DRV_NAME), "gunbirdjkt") || !strcmp(BurnDrvGetTextA(DRV_NAME), "gunbirdk") || !strcmp(BurnDrvGetTextA(DRV_NAME), "btlkroad") || !strcmp(BurnDrvGetTextA(DRV_NAME), "btlkroadk") || !strcmp(BurnDrvGetTextA(DRV_NAME), "s1945n") || !strcmp(BurnDrvGetTextA(DRV_NAME), "s1945nj")) {
		PsikyoHardwareVersion = PSIKYO_HW_GUNBIRD;

		CheckSleep = psikyoCheckSleep;

		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "gunbird")) {
			CheckSleep = gunbirdCheckSleep;
		}
		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "gunbirdj")) {
			CheckSleep = gunbirdjCheckSleep;
		}
		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "gunbirdjkt")) {
			CheckSleep = gunbirdjktCheckSleep;
		}		
		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "gunbirdk")) {
			CheckSleep = gunbirdkCheckSleep;
		}
		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "s1945n")) {
			CheckSleep = s1945nCheckSleep;
		}
		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "s1945nj")) {
			CheckSleep = s1945njCheckSleep;
		}

		PsikyoTileROMSize = 0x0400000;
		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "btlkroad") || !strcmp(BurnDrvGetTextA(DRV_NAME), "btlkroadk")) {
			PsikyoSpriteROMSize = 0x0C00000;
		} else {
			PsikyoSpriteROMSize = 0x1000000;
		}

		PsikyoSampleROM01Size = 0x080000;
		PsikyoSampleROM02Size = 0x100000;

		if (!strcmp(BurnDrvGetTextA(DRV_NAME), "s1945n") ||  !strcmp(BurnDrvGetTextA(DRV_NAME), "s1945nj")) {
			bPsikyoClearBackground = false;
		} else {
			bPsikyoClearBackground = true;
		}
	}


	if (!strcmp(BurnDrvGetTextA(DRV_NAME), "tengai") || !strcmp(BurnDrvGetTextA(DRV_NAME), "tengaij") || !strcmp(BurnDrvGetTextA(DRV_NAME), "tengaijkt") ) {
		PsikyoHardwareVersion = PSIKYO_HW_TENGAI;

		CheckSleep = psikyoCheckSleep;

		TengaiMCUInit(s1945_table);

		PsikyoTileROMSize = 0x0800000;
		PsikyoSpriteROMSize = 0x0C00000;

		PsikyoSampleROM01Size = 0;
		PsikyoSampleROM02Size = 0x400000;

		bPsikyoClearBackground = false;
	}		
	
	
static struct BurnRomInfo gunbirdjktRomDesc[] = {
	{ "1.u46",        0x040000, 0x8066b6f3, BRF_ESS | BRF_PRG }, //  0 CPU #0 code
	{ "2.u39",        0x040000, 0x0a425ce0, BRF_ESS | BRF_PRG }, //  1

	{ "u14.bin",      0x200000, 0xe143090a, BRF_GRA },			 //  2 Sprite data
	{ "u24.bin",      0x200000, 0x5e3ffc9d, BRF_GRA },			 //  3
	{ "u15.bin",      0x200000, 0xe5f6bfb6, BRF_GRA },			 //  4
	{ "u25.bin",      0x100000, 0xcf571ff8, BRF_GRA },			 //  5

	{ "u3.bin",       0x040000, 0x0905aeb2, BRF_GRA },			 //  6 Sprite LUT

	{ "u33.bin",      0x200000, 0x54494e6b, BRF_GRA },			 //  7 Tile data

	{ "3.u71",        0x020000, 0x2168e4ba, BRF_ESS | BRF_PRG }, //  8 CPU #1 code

	{ "u64.bin",      0x080000, 0xe187ed4f, BRF_SND },			 //  9 YM2610 ADPCM (delta-t) data
	{ "u56.bin",      0x100000, 0x9e07104d, BRF_SND },			 // 10 YM2610 ADPCM data
};

STD_ROM_PICK(gunbirdjkt)
STD_ROM_FN(gunbirdjkt)	
	
struct BurnDriver BurnDrvGunbirdjkt = {
	"gunbirdjkt", "gunbird", NULL, NULL, "1994",
	"Gunbird (Korean Translate)\0", NULL, "Psikyo", "Psikyo 68EC020",
	L"Gunbird (J) - (Korean Translate)\0\u30AC\u30F3\u30D0\u30FC\u30C9\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_CLONE | BDF_ORIENTATION_VERTICAL | BDF_16BIT_ONLY | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PSIKYO, GBF_VERSHOOT, 0,
	NULL, gunbirdjktRomInfo, gunbirdjktRomName, NULL, NULL, NULL, NULL, gunbirdInputInfo, gunbirdDIPInfo,
	DrvInit, DrvExit, DrvFrame, DrvDraw, DrvScan, &PsikyoRecalcPalette, 0x1000,
	224, 320, 3, 4
};	
	
static struct BurnRomInfo tengaijktRomDesc[] = {
	{ "2-u40.bin",    0x080000, 0x279f7493, BRF_ESS | BRF_PRG }, //  0 CPU #0 code
	{ "3-u41.bin",    0x080000, 0x59fe486e, BRF_ESS | BRF_PRG }, //  1

	{ "u20.bin",      0x200000, 0x0bdc0c2d, BRF_GRA },			 //  2 Sprite data
	{ "u22.bin",      0x200000, 0x8d21caee, BRF_GRA },			 //  3
	{ "u21.bin",      0x200000, 0x435669ca, BRF_GRA },			 //  4

	{ "u1.bin",       0x040000, 0x681d7d55, BRF_GRA },			 //  5 Sprite LUT

	{ "u34.bin",      0x400000, 0x801fc802, BRF_GRA },			 //  6 Tile data

	{ "1-u63.bin",    0x020000, 0x2025e387, BRF_ESS | BRF_PRG }, //  7 CPU #1 code

	{ "u61.bin",      0x200000, 0xa63633c5, BRF_SND },			 //  8 PCM data
	{ "u62.bin",      0x200000, 0x3ad0c357, BRF_SND },			 //   9
	
	{ "4-u59.bin",    	   256, 0x00000000, BRF_NODUMP },
};

STD_ROM_PICK(tengaijkt)
STD_ROM_FN(tengaijkt)

struct BurnDriver BurnDrvTengaijkt = {
	"tengaijkt", NULL, NULL, NULL, "1996",
	"Tengai\0Sengoku Blade - sengoku Ace episode II(Korean Translate)\0", NULL, "Psikyo", "Psikyo 68EC020",
	L"Tengai\0\u6226\u56FD\u30D6\u30EC\u30FC\u30C9 - sengoku Ace episode II\0", NULL, NULL, NULL,
	BDF_GAME_WORKING | BDF_16BIT_ONLY | BDF_CLONE | BDF_HISCORE_SUPPORTED, 2, HARDWARE_PSIKYO, GBF_HORSHOOT, 0,
	NULL, tengaijktRomInfo, tengaijktRomName, NULL, NULL, NULL, NULL, gunbirdInputInfo, tengaijDIPInfo,
	DrvInit, DrvExit, DrvFrame, DrvDraw, DrvScan, &PsikyoRecalcPalette, 0x1000,
	320, 224, 4, 3
};	
	