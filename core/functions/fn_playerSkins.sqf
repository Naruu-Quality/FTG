#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
switch(playerSide) do {
	case civilian: {
		if(EQUAL(LIFE_SETTINGS(getNumber,"civ_skins"),1)) then {
			if(uniform player == "U_C_Poloshirt_blue") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_burgundy") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_stripped") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_tricolour") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_salmon") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
			};
			if(uniform player == "U_C_Poloshirt_redwhite") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
			};
			if(uniform player == "U_C_Commoner1_1") then {
				player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
			};
		};
	};
	
	case independent: {
		if(uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal [0, "textures\Autre\Uniforme\Medic\medic_uniform.jpg"];
		};
	};
	
	case west: {
		if ((uniform player) == "U_Rangemaster") then
		{
			player setObjectTextureGlobal [0, "textures\Autre\Uniforme\Gendarmerie\gendarme.paa"];
		};
		if ((uniform player) == "U_B_CTRG_1") then
		{
			player setObjectTextureGlobal [0, "textures\Autre\Uniforme\Gendarmerie\polairegend.paa"];
		};
		if ((uniform player) == "U_B_CTRG_2") then
		{
			player setObjectTextureGlobal [0, "textures\Autre\Uniforme\Gendarmerie\CombatUniform.paa"];
		};
		if ((uniform player) == "U_B_CTRG_3") then
		{
			player setObjectTextureGlobal [0, "textures\Autre\Uniforme\Gendarmerie\grandfroid.paa"];
		};
		if ((uniform player) == "U_B_CombatUniform_mcam") then
		{
			player setObjectTextureGlobal [0, "textures\Autre\Uniforme\Gendarmerie\gign.paa"];
		};
};
};
