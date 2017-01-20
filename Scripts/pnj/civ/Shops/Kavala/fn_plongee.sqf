/*
	File: fn_plongee.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Magasin de plongée" at Kavala's Place

*/

_this allowDamage false;  removeallWeapons _this;  _this enableSimulation false;  _this addAction[localize""STR_MAR_Diving_Shop"",life_fnc_clothingMenu,""dive""];  _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""dive"" >> ""displayName"")),[(getNumber(missionConfigFile >> ""Licenses"" >> ""dive"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""dive"",0,false,false,"""",' !license_civ_dive && playerSide == civilian '];