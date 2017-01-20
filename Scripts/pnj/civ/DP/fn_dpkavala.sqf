/*
	File: fn_dp.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Mission de livraison" at Kavala's Place

*/

_this allowDamage false; _this enableSimulation false; _this addAction[localize""STR_MAR_Get_Delivery_Mission"",life_fnc_getDPMission,""dp_1"",0,false,false,"""",' isNil ""life_dp_point"" && !life_delivery_in_progress '];
