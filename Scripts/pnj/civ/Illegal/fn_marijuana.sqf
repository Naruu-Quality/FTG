_this enableSimulation false;  _this allowDamage false;  _this addAction[localize""STR_Process_Marijuana"",life_fnc_processAction,""marijuana"",0,false,false,"""",' life_inv_cannabis > 0 && !life_is_processing'];  _this addAction[format[""%1 ($%2)"",localize (getText(missionConfigFile >> ""Licenses"" >> ""marijuana"" >> ""displayName"")), [(getNumber(missionConfigFile >> ""Licenses"" >> ""marijuana"" >> ""price""))] call life_fnc_numberText],life_fnc_buyLicense,""marijuana"",0,false,false,"""",' !license_civ_marijuana && playerSide == civilian '];