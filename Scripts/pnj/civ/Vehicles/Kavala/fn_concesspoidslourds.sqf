/*
	File: fn_concesspoidslourds.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Concessionnaire poids lourds" at Kavala

*/

_this enableSimulation false; _this allowDamage false; _this addAction[localize""STR_MAR_Truck_Shop"",life_fnc_vehicleShopMenu,[""civ_truck"",civilian,""civ_truck_1"",""civ"",""Bruce's New & Used Trucks""]];