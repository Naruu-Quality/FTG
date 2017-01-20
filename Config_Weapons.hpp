/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Armurerie civile";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 2500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, 4000 },
            { "hgun_ACPC2_F", "", 11500, 6000 },
            { "hgun_PDW2000_F", "", 20000, 10000 },
            { "arifle_sdar_F", "", 30000, 10000 },
            { "arifle_TRG20_F", "", 40000, 20000 },
            { "optic_ACO_grn_smg", "", 2500, 250 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "20Rnd_556x45_UW_mag", "SDAR Munitions", 45 },
            { "30Rnd_556x45_Stanag", "TRG Munitions", 45 },
            { "30Rnd_45ACP_Mag_SMG_01", "Vermin Munitions", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class admin {
        name = "Armurerie Admin";
        side = "civ";
        license = "";
        level[] = { "life_adminlevel", "SCALAR", 5, "Vous devez faire parti du Staff !" };
        items[] = {
            { "LMG_03_F", "", 0, 0 },
            { "NVGoggles_OPFOR", "", 0, 0 },
            { "NVGogglesB_blk_F", "", 0, 0 },
            { "optic_ERCO_blk_F", "", 0 }
        };
        mags[] = {
            { "200Rnd_556x45_Box_F", "", 0 }
        };
    };

    class rebel {
        name = "Armurerie rebelle";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_02_F", "", 20000, 5000 },
            { "hgun_ACPC2_F", "", 20000, 5000 },
            { "hgun_Rook40_F", "", 20000, 5000 },
            { "hgun_PDW2000_F", "", 20000, 5000 },
            { "SMG_01_F", "", 30000, 5000 },
            { "arifle_Mk20_F", "", 40000, 5000 },
            { "arifle_TRG21_F", "", 40000, 5000 },
            { "arifle_TRG20_F", "", 40000, 5000 },
            { "arifle_Katiba_F", "", 45000, 5000 },
            { "arifle_Katiba_GL_F", "", 65000, 5000 },
            { "arifle_Katiba_C_F", "", 45000, 5000 },
            { "arifle_CTAR_hex_F", "CAR-95", 125000, 5000 },
            { "arifle_AKS_F", "AKS-74U", 150000, 5000 },
            { "arifle_AKM_F", "AKM", 150000, 5000 },
            { "arifle_AK12_F", "AK-12", 150000, 5000 },
            { "srifle_DMR_01_F", "Rahim 7.62mm", 350000, 5000 },
            { "srifle_DMR_06_olive_F", "Mk14 7.62mm", 550000, 5000 },
            { "srifle_DMR_03_multicam_F", "MK-I EMR", 600000, 5000 },
            { "srifle_DMR_04_Tan_F", "ASP-1 Kir", 700000, 5000 },
            { "srifle_DMR_07_hex_F", "CMR-76 6.5mm", 750000, 5000 },
            { "arifle_CTARS_hex_F", "CAR-95-1 5.8mm", 800000, 5000 },
            { "LMG_Zafir_F", "Zafir 7.62mm", 850000, 5000 },
            { "srifle_DMR_05_hex_F", "Cyrus 9.3mm", 900000, 5000 },
            { "arifle_ARX_hex_F", "Type 115 6.5mm", 1200000, 5000 },
            { "srifle_GM6_F", "GM6 Lynx 12.7mm", 1200000, 5000 },
            { "srifle_GM6_camo_F", "GM6 Lynx Camo", 1200000, 5000 },
            { "optic_ACO_grn", "", 3500, 350 },
      		{ "optic_ARCO", "", 3500, 350 },
      		{ "optic_MRCO", "", 3500, 350 },
      		{ "optic_AMS", "", 12500, 350 },
      		{ "optic_AMS_khk", "", 12500, 350 },
      		{ "optic_AMS_snd", "", 12500, 350 },
      		{ "optic_DMS", "", 23500, 350 },
      		{ "optic_LRPS", "", 23500, 350 },
      		{ "optic_KHS_hex", "", 13500, 350 },
      		{ "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
            { "optic_Hamr", "", 7500, 2000 },
            { "muzzle_snds_acp", "", 2500, 500 },
      		{ "muzzle_snds_H", "", 7500, 2000 },
      		{ "muzzle_snds_L", "", 7500, 2000 },
      		{ "muzzle_snds_B", "", 7500, 2000 },
            { "muzzle_snds_93mmg", "", 7500, 2000 },
      		{ "bipod_02_F_hex", "", 7500, 2000 },
      		{ "bipod_03_F_oli", "", 7500, 2000 },
      		{ "bipod_01_F_blk", "", 7500, 2000 },
            { "acc_flashlight", "", 1000, 500 },
            { "muzzle_snds_65_TI_blk_F", "", 7500, 500 },
            { "SmokeShellGreen", "Gaz Lacrymo", 5000, 2500 },
      		{ "Binocular", "", 150, -1 },
      		{ "Rangefinder", "", 1000, 450 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 5000, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 300 },
            { "6Rnd_45ACP_Cylinder", "", 300 },
            { "16Rnd_9x21_Mag", "", 300 },
            { "30Rnd_9x21_Mag", "", 500 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 500 },
            { "30Rnd_556x45_Stanag", "", 500 },
            { "30Rnd_65x39_caseless_green", "", 500 },
            { "30Rnd_545x39_Mag_F", "", 500 },
            { "30Rnd_580x42_Mag_F", "", 500 },
			{ "100Rnd_580x42_Mag_F", "", 500 },
            { "30Rnd_762x39_Mag_F", "AKM/AK12", 500 },
            { "10Rnd_762x54_Mag", "", 500 },
            { "20Rnd_762x51_Mag", "", 500 },
            { "10Rnd_127x54_Mag", "", 500 },
            { "150Rnd_762x54_Box", "", 500 },
            { "20Rnd_650x39_Cased_Mag_F", "", 500 },
            { "10Rnd_93x64_DMR_05_Mag", "", 500 },
            { "30Rnd_65x39_caseless_green", "", 750 },
            { "5Rnd_127x108_Mag", "", 1000 },
            { "5Rnd_127x108_APDS_Mag", "", 3000 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150 },
            { "ItemMap", "", 50 },
			{ "ItemGPS", "GPS", 250, -1 },
            { "ItemCompass", "", 50 },
            { "ItemWatch", "", 50 },
            { "ToolKit", "", 250 },
            { "FirstAidKit", "", 150 },
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemMap", "", 250, 35 },
			{ "ItemGPS", "GPS", 250, -1 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "ToolKit", "", 1250, 75 },
            { "FirstAidKit", "", 750, 65 },
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "G.A.V";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Vous devez être G.A.V !" };
        items[] = {
            { "hgun_P07_snds_F", "Tazer", 0 },
			{ "hgun_ACPC2_F", "4-five .45 ACP", 0 },
            { "SMG_02_F", "Sting 9 mm", 0 },
            { "SMG_05_F", "Protector 9 mm (APEX)", 0 },
            { "arifle_MXC_Black_F", "MXC 6.5 mm", 0 },
            { "arifle_MX_Black_F", "MX 6.5 mm", 0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munitions Tazer", 0, },
			{ "11Rnd_45ACP_Mag", ".45 ACP", 0, },
            { "30Rnd_9x21_Mag_SMG_02", "Munitions Protector|Sting", 0 },
            { "30Rnd_65x39_caseless_mag", "Munitions MX|MXC|MXM", 0 },
            { "30Rnd_556x45_Stanag", "Munitions SPAR-16", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18|SPAR-17|MK-I", 0 },
            { "100Rnd_65x39_caseless_mag", "Munitions MX-SW", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Munitions SPAR-16S", 0 },
            { "200Rnd_65x39_cased_Box", "Munitions MK200", 0 },
            { "200Rnd_556x45_Box_F", "Munitions LIM-85", 0 },
            { "10Rnd_338_Mag", "Munitions MAR-10", 0 },
            { "10Rnd_127x54_Mag", "Munitions ASP-1", 0 },
            { "10Rnd_93x64_DMR_05_Mag", "Munitions Cyrus", 0 },
			{ "20Rnd_762x51_Mag", "Munition Mk-14", 0 },
            { "7Rnd_408_Mag", "Munitions M320", 0 }
        };
    };

	//Cop Shops
    class cop_basic1 {
        name = "Brigadier/Brigadier-Chef";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Vous devez être Brigadier/Brigadier-Chef !" };
        items[] = {
            { "hgun_P07_snds_F", "Tazer", 0 },
			{ "hgun_ACPC2_F", "4-five .45 ACP", 0 },
            { "SMG_02_F", "Sting 9 mm", 0 },
            { "SMG_05_F", "Protector 9 mm (APEX)", 0 },
            { "arifle_MXC_Black_F", "MXC 6.5 mm", 0 },
            { "arifle_MX_Black_F", "MX 6.5 mm", 0 },
            { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm (APEX)", 0 },
            { "arifle_MX_SW_Black_F", "MX SW 6.5 mm", 0 },
            { "arifle_MXM_Black_F", "MXM 6.5 mm", 0 }

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munitions Tazer", 0, },
			{ "11Rnd_45ACP_Mag", ".45 ACP", 0, },
            { "30Rnd_9x21_Mag_SMG_02", "Munitions Protector|Sting", 0 },
            { "30Rnd_65x39_caseless_mag", "Munitions MX|MXC|MXM", 0 },
            { "30Rnd_556x45_Stanag", "Munitions SPAR-16", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18|SPAR-17|MK-I", 0 },
            { "100Rnd_65x39_caseless_mag", "Munitions MX-SW", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Munitions SPAR-16S", 0 },
            { "200Rnd_65x39_cased_Box", "Munitions MK200", 0 },
            { "200Rnd_556x45_Box_F", "Munitions LIM-85", 0 },
            { "10Rnd_338_Mag", "Munitions MAR-10", 0 },
            { "10Rnd_127x54_Mag", "Munitions ASP-1", 0 },
            { "10Rnd_93x64_DMR_05_Mag", "Munitions Cyrus", 0 },
			{ "20Rnd_762x51_Mag", "Munition Mk-14", 0 },
            { "7Rnd_408_Mag", "Munitions M320", 0 }
        };
    };
	
	//Cop Shops
    class cop_basic2 {
        name = "MaréchalDesLogis/MaréchalDesLogis-Chef";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Vous devez être MaréchalDesLogis/MaréchalDesLogis-Chef !" };
        items[] = {
            { "hgun_P07_snds_F", "Tazer", 0 },
			{ "hgun_ACPC2_F", "4-five .45 ACP", 0 },
            { "SMG_02_F", "Sting 9 mm", 0 },
            { "SMG_05_F", "Protector 9 mm (APEX)", 0 },
            { "arifle_MXC_Black_F", "MXC 6.5 mm", 0 },
            { "arifle_MX_Black_F", "MX 6.5 mm", 0 },
            { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm (APEX)", 0 },
            { "srifle_EBR_F", "Mk18 ABR 7.62 mm", 0 },
            { "arifle_MX_SW_Black_F", "MX SW 6.5 mm", 0 },
            { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56 mm (APEX)", 0 },
            { "arifle_MXM_Black_F", "MXM 6.5 mm", 0 }
		
		};
        mags[] = {
            { "16Rnd_9x21_Mag", "Munitions Tazer", 0, },
			{ "11Rnd_45ACP_Mag", ".45 ACP", 0, },
            { "30Rnd_9x21_Mag_SMG_02", "Munitions Protector|Sting", 0 },
            { "30Rnd_65x39_caseless_mag", "Munitions MX|MXC|MXM", 0 },
            { "30Rnd_556x45_Stanag", "Munitions SPAR-16", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18|SPAR-17|MK-I", 0 },
            { "100Rnd_65x39_caseless_mag", "Munitions MX-SW", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Munitions SPAR-16S", 0 },
            { "200Rnd_65x39_cased_Box", "Munitions MK200", 0 },
            { "200Rnd_556x45_Box_F", "Munitions LIM-85", 0 },
            { "10Rnd_338_Mag", "Munitions MAR-10", 0 },
            { "10Rnd_127x54_Mag", "Munitions ASP-1", 0 },
            { "10Rnd_93x64_DMR_05_Mag", "Munitions Cyrus", 0 },
			{ "20Rnd_762x51_Mag", "Munition Mk-14", 0 },
            { "7Rnd_408_Mag", "Munitions M320", 0 }
        };
    };
	
		//Cop Shops
    class cop_basic3 {
        name = "Adjudant/Adjudant-Chef/Major";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Vous devez être Adjudant/Adjudant-Chef/Major !" };
        items[] = {
            { "hgun_P07_snds_F", "Tazer", 0 },
			{ "hgun_ACPC2_F", "4-five .45 ACP", 0 },
            { "SMG_02_F", "Sting 9 mm", 0 },
            { "SMG_05_F", "Protector 9 mm (APEX)", 0 },
            { "arifle_MXC_Black_F", "MXC 6.5 mm", 0 },
            { "arifle_MX_Black_F", "MX 6.5 mm", 0 },
            { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm (APEX)", 0 },
            { "srifle_EBR_F", "Mk18 ABR 7.62 mm", 0 },
            { "arifle_MX_SW_Black_F", "MX SW 6.5 mm", 0 },
            { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56 mm (APEX)", 0 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 0 },
            { "LMG_03_F", "LIM-85 5.56 mm (APEX)", 0 },
            { "arifle_MXM_Black_F", "MXM 6.5 mm", 0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munitions Tazer", 0, },
			{ "11Rnd_45ACP_Mag", ".45 ACP", 0, },
            { "30Rnd_9x21_Mag_SMG_02", "Munitions Protector|Sting", 0 },
            { "30Rnd_65x39_caseless_mag", "Munitions MX|MXC|MXM", 0 },
            { "30Rnd_556x45_Stanag", "Munitions SPAR-16", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18|SPAR-17|MK-I", 0 },
            { "100Rnd_65x39_caseless_mag", "Munitions MX-SW", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Munitions SPAR-16S", 0 },
            { "200Rnd_65x39_cased_Box", "Munitions MK200", 0 },
            { "200Rnd_556x45_Box_F", "Munitions LIM-85", 0 },
            { "10Rnd_338_Mag", "Munitions MAR-10", 0 },
            { "10Rnd_127x54_Mag", "Munitions ASP-1", 0 },
            { "10Rnd_93x64_DMR_05_Mag", "Munitions Cyrus", 0 },
			{ "20Rnd_762x51_Mag", "Munition Mk-14", 0 },
            { "7Rnd_408_Mag", "Munitions M320", 0 }
        };
    };
	
		//Cop Shops
    class cop_basic4 {
        name = "Aspirant/Sous-Lieut/Lieut";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Vous devez être Aspirant/Sous-Lieut/Lieut !" };
        items[] = {
            { "hgun_P07_snds_F", "Tazer", 0 },
			{ "hgun_ACPC2_F", "4-five .45 ACP", 0 },
            { "SMG_02_F", "Sting 9 mm", 0 },
            { "SMG_05_F", "Protector 9 mm (APEX)", 0 },
            { "arifle_MXC_Black_F", "MXC 6.5 mm", 0 },
            { "arifle_MX_Black_F", "MX 6.5 mm", 0 },
            { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm (APEX)", 0 },
            { "srifle_EBR_F", "Mk18 ABR 7.62 mm", 0 },
            { "arifle_MX_SW_Black_F", "MX SW 6.5 mm", 0 },
            { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56 mm (APEX)", 0 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 0 },
            { "LMG_03_F", "LIM-85 5.56 mm (APEX)", 0 },
            { "arifle_MXM_Black_F", "MXM 6.5 mm", 0 },
            { "arifle_SPAR_03_blk_F", "SPAR-17 7.62 mm (APEX)", 0 },
            { "srifle_DMR_03_F", "Mk-I EMR 7.62 mm", 0 }

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munitions Tazer", 0, },
			{ "11Rnd_45ACP_Mag", ".45 ACP", 0, },
            { "30Rnd_9x21_Mag_SMG_02", "Munitions Protector|Sting", 0 },
            { "30Rnd_65x39_caseless_mag", "Munitions MX|MXC|MXM", 0 },
            { "30Rnd_556x45_Stanag", "Munitions SPAR-16", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18|SPAR-17|MK-I", 0 },
            { "100Rnd_65x39_caseless_mag", "Munitions MX-SW", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Munitions SPAR-16S", 0 },
            { "200Rnd_65x39_cased_Box", "Munitions MK200", 0 },
            { "200Rnd_556x45_Box_F", "Munitions LIM-85", 0 },
            { "10Rnd_338_Mag", "Munitions MAR-10", 0 },
            { "10Rnd_127x54_Mag", "Munitions ASP-1", 0 },
            { "10Rnd_93x64_DMR_05_Mag", "Munitions Cyrus", 0 },
			{ "20Rnd_762x51_Mag", "Munition Mk-14", 0 },
            { "7Rnd_408_Mag", "Munitions M320", 0 }
        };
    };
	
		//Cop Shops
    class cop_basic5 {
        name = "Capt/Commandant/Lieut-Colonel/Colonel";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Vous devez être Capt/Commandant/Lieut-Colonel/Colonel !" };
        items[] = {
            { "hgun_P07_snds_F", "Tazer", 0 },
			{ "hgun_ACPC2_F", "4-five .45 ACP", 0 },
            { "SMG_02_F", "Sting 9 mm", 0 },
            { "SMG_05_F", "Protector 9 mm (APEX)", 0 },
            { "arifle_MXC_Black_F", "MXC 6.5 mm", 0 },
            { "arifle_MX_Black_F", "MX 6.5 mm", 0 },
            { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm (APEX)", 0 },
            { "srifle_EBR_F", "Mk18 ABR 7.62 mm", 0 },
            { "arifle_MX_SW_Black_F", "MX SW 6.5 mm", 0 },
            { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56 mm (APEX)", 0 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 0 },
            { "LMG_03_F", "LIM-85 5.56 mm (APEX)", 0 },
            { "arifle_MXM_Black_F", "MXM 6.5 mm", 0 },
            { "arifle_SPAR_03_blk_F", "SPAR-17 7.62 mm (APEX)", 0 },
            { "srifle_DMR_03_F", "Mk-I EMR 7.62 mm", 0 },
            { "srifle_DMR_02_F", "MAR-10 .338", 0 },
            { "srifle_DMR_05_blk_F", "Cyrus 9.3 mm", 0 }

        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munitions Tazer", 0, },
			{ "11Rnd_45ACP_Mag", ".45 ACP", 0, },
            { "30Rnd_9x21_Mag_SMG_02", "Munitions Protector|Sting", 0 },
            { "30Rnd_65x39_caseless_mag", "Munitions MX|MXC|MXM", 0 },
            { "30Rnd_556x45_Stanag", "Munitions SPAR-16", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18|SPAR-17|MK-I", 0 },
            { "100Rnd_65x39_caseless_mag", "Munitions MX-SW", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Munitions SPAR-16S", 0 },
            { "200Rnd_65x39_cased_Box", "Munitions MK200", 0 },
            { "200Rnd_556x45_Box_F", "Munitions LIM-85", 0 },
            { "10Rnd_338_Mag", "Munitions MAR-10", 0 },
            { "10Rnd_127x54_Mag", "Munitions ASP-1", 0 },
            { "10Rnd_93x64_DMR_05_Mag", "Munitions Cyrus", 0 },
			{ "20Rnd_762x51_Mag", "Munition Mk-14", 0 },
            { "7Rnd_408_Mag", "Munitions M320", 0 }
        };
    };
	
		//Cop Shops
    class cop_basic6 {
        name = "Général";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Vous devez être Général !" };
        items[] = {
            { "hgun_P07_snds_F", "Tazer", 0 },
			{ "hgun_ACPC2_F", "4-five .45 ACP", 0 },
            { "SMG_02_F", "Sting 9 mm", 0 },
            { "SMG_05_F", "Protector 9 mm (APEX)", 0 },
            { "arifle_MXC_Black_F", "MXC 6.5 mm", 0 },
            { "arifle_MX_Black_F", "MX 6.5 mm", 0 },
            { "arifle_SPAR_01_blk_F", "SPAR-16 5.56 mm (APEX)", 0 },
            { "srifle_EBR_F", "Mk18 ABR 7.62 mm", 0 },
            { "arifle_MX_SW_Black_F", "MX SW 6.5 mm", 0 },
            { "arifle_SPAR_02_blk_F", "SPAR-16S 5.56 mm (APEX)", 0 },
            { "LMG_Mk200_F", "Mk200 6.5 mm", 0 },
            { "LMG_03_F", "LIM-85 5.56 mm (APEX)", 0 },
            { "arifle_MXM_Black_F", "MXM 6.5 mm", 0 },
            { "arifle_SPAR_03_blk_F", "SPAR-17 7.62 mm (APEX)", 0 },
            { "srifle_DMR_03_F", "Mk-I EMR 7.62 mm", 0 },
            { "srifle_DMR_02_F", "MAR-10 .338", 0 },
            { "srifle_DMR_04_F", "ASP-1 12.7 mm", 0 },
            { "srifle_DMR_05_blk_F", "Cyrus 9.3 mm", 0 },
			{ "srifle_DMR_06_camo_F", "Mk-14 7,62 mm", 0 },
			{ "LMG_Zafir_F", "Zafir 7,62 mm", 0 },
			{ "arifle_Katiba_ARCO_F", "Katiba 6.5 mm", 0 },
            { "srifle_LRR_F", "M320 LRR .408", 0 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Munitions Tazer", 0, },
			{ "11Rnd_45ACP_Mag", ".45 ACP", 0, },
            { "30Rnd_9x21_Mag_SMG_02", "Munitions Protector|Sting", 0 },
            { "30Rnd_65x39_caseless_mag", "Munitions MX|MXC|MXM", 0 },
            { "30Rnd_556x45_Stanag", "Munitions SPAR-16", 0 },
            { "20Rnd_762x51_Mag", "Munitions Mk18|SPAR-17|MK-I", 0 },
            { "100Rnd_65x39_caseless_mag", "Munitions MX-SW", 0 },
            { "150Rnd_556x45_Drum_Mag_F", "Munitions SPAR-16S", 0 },
            { "200Rnd_65x39_cased_Box", "Munitions MK200", 0 },
            { "200Rnd_556x45_Box_F", "Munitions LIM-85", 0 },
            { "10Rnd_338_Mag", "Munitions MAR-10", 0 },
            { "10Rnd_127x54_Mag", "Munitions ASP-1", 0 },
            { "10Rnd_93x64_DMR_05_Mag", "Munitions Cyrus", 0 },
			{ "20Rnd_762x51_Mag", "Munition Mk-14", 0 },
			{ "150Rnd_762x54_Box", "Munition Zafir", 0 },
			{ "30Rnd_65x39_caseless_green", "Munition Katiba", 0 },
            { "7Rnd_408_Mag", "Munitions M320", 0 }
        };
    };
	
	

    class cop_equip {
        name = "Equipementier";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Vous devez être Gendarme !" };
        items[] = {
			{ "ItemWatch", "Montre", 0, -1 },
            { "ItemCompass", "Compas", 0, -1 },
            { "ItemGPS", "GPS", 0, -1 },
            { "ItemRadio", "Radio", 0, -1 },
            { "NVGoggles_OPFOR", "JVN Noir", 0, -1 },
            { "NVGoggles", "JVN Marron", 0, -1 },
            { "NVGoggles_INDEP", "JVN Vert", 0, -1 },
            { "Laserdesignator_01_khk_F", "Désignateur Laser", 0, -1 },
            { "Laserbatteries", "Batterie Laser", 0, -1 },
            { "FirstAidKit", "Kit Premier Soin", 0, -1 },
            { "Medikit", "Trousse de Soin", 0, -1 },
            { "ToolKit", "Trousse à Outil", 0, -1 },
			{ "HandGrenade_Stone", "FlashBang", 0, -1 },
			{ "SmokeShell", "Fumigène Blanche", 0, -1 },
			{ "SmokeShellBlue", "Fumigène Bleu", 0, -1 },
			{ "B_IR_Grenade", "Strobe", 0, -1 },
            { "bipod_01_F_blk", "Bipied Noir", 0, -1 },
            { "bipod_01_F_snd", "Bipied Sable", 0, -1 },
            { "bipod_01_F_khk", "Bipied Kaki", 0, -1 },
            { "muzzle_snds_L", "Sil. 9 mm", 0, -1 },
            { "muzzle_snds_acp", "Sil. .45", 0, -1 },
            { "muzzle_snds_M", "Sil. 5.56 mm Noir", 0, -1 },
            { "muzzle_snds_m_snd_F", "Sil. 5.56 mm Sable", 0, -1 },
            { "muzzle_snds_m_khk_F", "Sil. 5.56 mm Kaki", 0, -1 },
            { "muzzle_snds_H", "Sil. 6.5 mm Noir", 0, -1 },
            { "muzzle_snds_H_snd_F", "Sil. 6.5 mm Sable", 0, -1 },
            { "muzzle_snds_H_khk_F", "Sil. 6.5 mm Kaki", 0, -1 },
            { "muzzle_snds_H_MG_blk_F", "Sil. MG 6.5 mm Noir", 0, -1 },
            { "muzzle_snds_H_MG", "Sil. MG 6.5 mm Sable", 0, -1 },
            { "muzzle_snds_H_MG_khk_F", "Sil. MG 6.5 mm Kaki", 0, -1 },
            { "muzzle_snds_B", "Sil. 7.62 mm Noir", 0, -1 },
            { "muzzle_snds_B_snd_F", "Sil. 7.62 mm Sable", 0, -1 },
            { "muzzle_snds_B_khk_F", "Sil. 7.62 mm Kaki", 0, -1 },
            { "muzzle_snds_93mmg", "Sil. 9.3 mm Noir", 0, -1 },
            { "muzzle_snds_93mmg_tan", "Sil. 9.3 mm Sable", 0, -1 },
            { "muzzle_snds_338_black", "Sil. .338 Noir", 0, -1 },
            { "muzzle_snds_338_sand", "Sil. .338 Sable", 0, -1 },
            { "muzzle_snds_338_green", "Sil. .338 Kaki", 0, -1 },
            { "optic_Hamr", "RCO Noir", 0, -1 },
            { "optic_Hamr_khk_F", "RCO Kaki", 0, -1 },
            { "optic_Arco_blk_F", "ARCO Noir", 0, -1 },
            { "optic_Arco", "ARCO Sable", 0, -1 },
            { "optic_ERCO_blk_F", "ERCO Noir", 0, -1 },
            { "optic_ERCO_snd_F", "ERCO Sable", 0, -1 },
            { "optic_ERCO_khk_F", "ERCO Kaki", 0, -1 },
            { "optic_SOS", "MOS Noir", 0, -1 },
            { "optic_SOS_khk_F", "MOS Kaki", 0, -1 },
            { "optic_LRPS_tna_F", "LRPS Noir", 0, -1 },
            { "optic_Aco", "ACO Rouge", 0, -1 },
            { "optic_ACO_grn", "ACO Vert", 0, -1 },
            { "optic_AMS", "AMS Noir", 0, -1 },
            { "optic_AMS_snd", "AMS Sable", 0, -1 },
            { "optic_AMS_khk", "AMS Kaki", 0, -1 },
            { "optic_MRCO", "MRCO Noir", 0, -1 },
            { "optic_Holosight_blk_F", "Holo Noir", 0, -1 },
            { "optic_Holosight", "Holo Sable", 0, -1 },
            { "optic_Holosight_khk_F", "Holo Kaki", 0, -1 },
            { "optic_Holosight_smg_blk_F", "Holo SMG Noir", 0, -1 },
            { "optic_Holosight_smg", "Holo SMG Sable", 0, -1 }
        };
        mags[] = {};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 90, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
            { "NVGoggles", "", 1200, 780 }
        };
        mags[] = {};
    };
};
