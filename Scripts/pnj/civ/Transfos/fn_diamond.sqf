_this enableSimulation false;  _this allowDamage false;  _this addAction[localize""STR_Process_Diamond"",life_fnc_processAction,""diamond"",0,false,false,"""",' life_inv_diamondUncut > 0 && !life_is_processing'];  _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""diamond"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""diamond"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""diamond"",0,false,false,"""",' !license_civ_diamond && playerSide == civilian '];