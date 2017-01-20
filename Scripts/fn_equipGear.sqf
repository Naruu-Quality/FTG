/*
	File: fn_equipGear.sqf
	Author: John "Paratus" VanderZwet
	
	Description:
	Initializes custom gear textures
	
	U_Rangemaster = Polo bleu Rangemaster
	U_B_CTRG_1 = Manches longues
	U_B_CTRG_3 = Manches courtes grandfroid
	
*/

if (playerSide == west) then {
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

if (playerSide == independent) then {
	if ((uniform player) == "U_Rangemaster") then
	{
		player setObjectTextureGlobal [0, "textures\Autre\Uniforme\Medic\medic_uniform.jpg"];
	};
};
