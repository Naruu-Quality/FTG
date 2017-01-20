/*
	File: fn_garage.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Garage" at Kavala
*/

_this enableSimulation false; _this allowDamage false; _this addAction[localize""STR_Garage_Title"",  {   [getPlayerUID player,playerSide,""Car"",player] remoteExecCall [""TON_fnc_getVehicles"",2]; life_garage_type = ""Car"";   createDialog ""Life_impound_menu"";   disableSerialization;   ctrlSetText[2802,""Fetching Vehicles....""];   life_garage_sp = ""car_g_1"";  }];  _this addAction[localize""STR_MAR_Store_vehicle_in_Garage"",life_fnc_storeVehicle,"""",0,false,false,"""",'!life_garage_store'];