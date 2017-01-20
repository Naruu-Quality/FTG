/*
	File: fn_copper.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes Kavala Boat Shop for mission

*/

_this enableSimulation false;  _this allowDamage false;  _this addAction[localize""STR_MAR_Boat_Shop"",life_fnc_vehicleShopMenu,[""civ_ship"",civilian,""civ_ship_1"",""civ"",""Billys Boat Rentals & Ownership""]];  _this addAction[localize""STR_Garage_Title"",  {   [getPlayerUID player,playerSide,""Ship"",player] remoteExecCall [""TON_fnc_getVehicles"",2];   createDialog ""Life_impound_menu"";   disableSerialization;   ctrlSetText[2802,""Fetching Vehicles....""];   life_garage_sp = ""civ_ship_1""; life_garage_type = ""Ship"";  },"""",0,false,false,"""",'playerSide == civilian'];  _this addAction[localize""STR_MAR_Store_vehicle_in_Garage"",life_fnc_storeVehicle,"""",0,false,false,"""",'!life_garage_store'];