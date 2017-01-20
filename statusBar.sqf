waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

waitUntil{!isNull (findDisplay 38500)};
waitUntil{isNull (findDisplay 38500)};

_rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["osefStatusBar","PLAIN"];

[] spawn {
	sleep 5;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetText format["FPS: %1 | Police: %2 | Civil: %3 | Medecin: %4 | Liquide: %5 | Bank: %6 | TS3 : frenchteamgaming.fr",
		round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmbank] call life_fnc_numberText,_counter];
	}; 
};