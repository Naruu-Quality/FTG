/*
	File: fn_copper.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes copper transformation for mission

*/

_this allowDamage false; _this enableSimulation false; _this addAction[localize""STR_Process_Copper"",life_fnc_processAction,""copper"",0,false,false,"""",' life_inv_copperUnrefined > 0 && !life_is_processing'];  _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""copper"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""copper"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""copper"",0,false,false,"""",' !license_civ_copper && playerSide == civilian '];