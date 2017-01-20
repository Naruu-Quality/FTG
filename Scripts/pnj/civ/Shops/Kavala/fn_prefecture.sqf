/*
	File: fn_prefecture.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Préfécture d'Altis" at Kavala's Place

*/

_this allowDamage false; _this enableSimulation false; _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""driver"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""driver"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""driver"",0,false,false,"""",' !license_civ_driver && playerSide == civilian ']; _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""boat"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""boat"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""boat"",0,false,false,"""",' !license_civ_boat && playerSide == civilian ']; _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""pilot"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""pilot"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""pilot"",0,false,false,"""",' !license_civ_pilot && playerSide == civilian ']; _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""trucking"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""trucking"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""trucking"",0,false,false,"""",' !license_civ_trucking && playerSide == civilian ']; _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""home"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""home"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""home"",0,false,false,"""",' !license_civ_home && playerSide == civilian ']; _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""avocat"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""avocat"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""avocat"",0,false,false,"""",' !license_civ_avocat && playerSide == civilian ']; _this setVariable[""realname"",""License Shop""];