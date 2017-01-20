/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "FTG", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Gamer", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Deadpool", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Game Over", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Jeux video", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Legalize", 350, { "", "", -1 } },
			{ "U_C_Commoner1_1", "Monster", 350, { "", "", -1 } },
			{ "U_C_Commoner1_2", "Rebelle", 350, { "", "", -1 } },
			{ "U_C_Commoner1_3", "Redbull", 350, { "", "", -1 } },
			{ "U_C_Poor_shorts_1", "Troll", 350, { "", "", -1 } },
			{ "U_C_Man_casual_1_F", "Apex Civ", 350, { "", "", -1 } },
			{ "U_C_Man_casual_2_F", "Apex Civ", 350, { "", "", -1 } },
			{ "U_C_Man_casual_3_F", "Apex Civ", 350, { "", "", -1 } },
			{ "U_C_Man_casual_4_F", "Apex Civ", 350, { "", "", -1 } },
			{ "U_C_Man_casual_5_F", "Apex Civ", 350, { "", "", -1 } },
			{ "U_C_Man_casual_6_F", "Apex Civ", 350, { "", "", -1 } },
			{ "U_I_C_Soldier_Bandit_1_F", "APEX", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_2_F", "APEX", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_3_F", "APEX", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_4_F", "APEX", 5000, {"", "", -1} },
			{ "U_I_C_Soldier_Bandit_5_F", "APEX", 5000, {"", "", -1} },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "U_C_Journalist", "Journaliste", 4000, { "", "", -1 } },
			{ "U_Competitor", "Polo noir et jaune", 4000, { "", "", -1 } },
			{ "U_Marshal", "Polo blanc", 4000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Retirer Uniforme", 0, { "", "", -1 } },
            { "U_B_CTRG_1", "Gendarmerie", 0, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CTRG_2", "Uniforme de combat", 0, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CTRG_3", "Grand Froid", 0, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam", "G.I.G.N", 0, { "life_coplevel", "SCALAR", 5 } },
            { "U_B_HeliPilotCoveralls", "Tenue Pilote", 0, { "life_coplevel", "SCALAR", 5 } },
            { "U_B_Wetsuit", "Tenue Plongée", 0, { "life_coplevel", "SCALAR", 1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Beret_02", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetB_TI_tna_F", "", 0, { "life_coplevel", "SCALAR", 1 } },
            { "H_HelmetCrew_B", "", 0, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Balaclava_blk", "Cagoule Noir", 0, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_combat", "Cagoule Noir Combat", 0, { "life_coplevel", "SCALAR", 1 } },
            { "G_Balaclava_TI_blk_F", "Furtive Noir", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "G_Balaclava_TI_G_blk_F", "Furtive Noir Combat", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "G_Balaclava_TI_tna_F", "Furtive Vert", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "G_Balaclava_TI_G_tna_F", "Furtive Vert Combat", 0, { "life_coplevel", "SCALAR", 1 } },
            { "G_B_Diving", "", 0, { "life_coplevel", "SCALAR", 1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_rgr_noflag_F", "Gilet Léger", 800, { "life_coplevel", "SCALAR", 1 } },
			{ "V_PlateCarrier2_rgr_noflag_F", "Gilet Lourd", 800, { "life_coplevel", "SCALAR", 1 } },
			{ "V_RebreatherB", "Recycleur", 800, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Bergen_mcamo_F", "Sac a Dos", 800, { "life_coplevel", "SCALAR", 1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4700, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1700, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class admin {
        title = "Vêtements Admin";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Protagonist_VR", "ADMIN", 0, { "life_adminlevel", "SCALAR", 2 } },
            { "U_I_Protagonist_VR", "MODO", 0, { "life_adminlevel", "SCALAR", 2 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier2_blk", "", 0, { "life_adminlevel", "SCALAR", 5 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } },
			{ "C_scientist_F", "DIR Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 300, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 800, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_I_CombatUniform", "", 15000, {"", "", -1} },
			{ "U_I_CombatUniform_tshirt", "", 15000, {"", "", -1} },
			{ "U_I_CombatUniform_shortsleeve", "", 15000, {"", "", -1} },
			{ "U_I_OfficerUniform", "", 15000, {"", "", -1} },
			{ "U_IG_leader", "", 15000, {"", "", -1} },
			{ "U_I_C_Soldier_Camo_F", "APEX", 10000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_1_F", "APEX", 10000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_2_F", "APEX", 10000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_3_F", "APEX", 10000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_4_F", "APEX", 10000, {"", "", -1} },
			{ "U_I_C_Soldier_Para_5_F", "APEX", 10000, {"", "", -1} },
			{ "U_O_T_Officer_F", "APEX", 10000, {"", "", -1} },
			{ "U_O_T_Sniper_F", "APEX", 10000, {"", "", -1} },
			{ "U_O_T_Soldier_F", "APEX", 10000, {"", "", -1} },
            { "U_B_GhillieSuit", "", 70000, { "", "", -1 } },
            { "U_I_GhillieSuit", "", 70000, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 70000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
            { "H_Shemag_olive", "", 850, { "", "", -1 } },
            { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
            { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 2200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 850, { "", "", -1 } },
            { "H_Cap_headphones", "", 850, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 800, { "", "", -1 } },
            { "H_HelmetB_camo", "", 2500, { "", "", -1 } },
            { "H_HelmetB_light_grass", "", 2200, { "", "", -1 } },
			{ "H_HelmetB_light_snakeskin", "", 2850, { "", "", -1 } },
            { "H_HelmetB_light_black", "", 2850, { "", "", -1 } },
            { "H_HelmetB_light_desert", "", 2800, { "", "", -1 } },
            { "H_HelmetB_grass", "", 2500, { "", "", -1 } },
            { "H_HelmetB_desert", "", 2200, { "", "", -1 } },
			{ "H_HelmetIA", "", 2200, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2000, { "", "", -1 } },
			{ "H_HelmetLeaderO_ocamo", "", 2000, { "", "", -1 } },
			{ "H_BandMask_khk", "", 2000, { "", "", -1 } },
			{ "H_BandMask_reaper", "", 2000, { "", "", -1 } },
			{ "H_BandMask_demon", "", 2000, { "", "", -1 } },
			{ "H_HelmetO_oucamo", "", 2000, { "", "", -1 } },
			{ "H_HelmetLeaderO_oucamo", "", 2000, { "", "", -1 } },
			{ "H_HelmetSpecO_ocamo", "", 2000, { "", "", -1 } },
			{ "H_HelmetSpecO_blk", "", 2000, { "", "", -1 } },
			{ "H_Booniehat_tna_F", "APEX", 850, { "", "", -1 } },
			{ "H_HelmetB_tna_F", "APEX", 850, { "", "", -1 } },
			{ "H_HelmetCrew_O_ghex_F", "APEX", 850, { "", "", -1 } },
			{ "H_HelmetB_Enh_tna_F", "APEX", 850, { "", "", -1 } },
			{ "H_HelmetB_Light_tna_F", "APEX", 850, { "", "", -1 } },
			{ "H_MilCap_tna_F", "APEX", 850, { "", "", -1 } },
            { "H_HelmetB_sand", "", 2650, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 12500, { "", "", -1 } },
            { "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
            { "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "V_PlateCarrierIA1_dgtl", "", 35000, { "", "", -1 } },
            { "V_PlateCarrierIA2_dgtl", "", 34500, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "", 37500, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr", "", 32500, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "", 34500, { "", "", -1 } },
            { "V_PlateCarrier3_rgr", "", 37500, { "", "", -1 } },
			{ "V_PlateCarrierGL_rgr", "", 42500, { "", "", -1 } },
            { "V_PlateCarrierSpec_rgr", "", 44500, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 37500, { "", "", -1 } },
			{ "V_BandollierB_ghex_F", "APEX", 7500, { "", "", -1 } },
			{ "V_HarnessO_ghex_F", "APEX", 7500, { "", "", -1 } },
			{ "V_HarnessOGL_ghex_F", "APEX", 7500, { "", "", -1 } },
			{ "V_PlateCarrier1_tna_F", "APEX", 7500, { "", "", -1 } },
			{ "V_PlateCarrier2_tna_F", "APEX", 7500, { "", "", -1 } },
			{ "V_PlateCarrierSpec_tna_F", "APEX", 7500, { "", "", -1 } },
			{ "V_TacChestrig_cbr_F", "APEX", 7500, { "", "", -1 } },
			{ "V_TacChestrig_grn_F", "APEX", 7500, { "", "", -1 } },
			{ "V_TacChestrig_oli_F", "APEX", 7500, { "", "", -1 } },
			{ "V_HarnessOGL_gry", "Veste Explosive", 50000000, { "", "", -1 } }
		};
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
			{ "B_AssaultPack_tna_F", "APEX", 7500, { "", "", -1 } },
			{ "B_Carryall_ghex_F", "APEX", 7500, { "", "", -1 } },
			{ "B_FieldPack_ghex_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperHarness_ghex_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperHarness_hex_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperHarness_khk_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperHarness_oli_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperLightHarness_ghex_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperLightHarness_hex_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperLightHarness_khk_F", "APEX", 7500, { "", "", -1 } },
			{ "B_ViperLightHarness_oli_F", "APEX", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
