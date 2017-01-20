/*
	File: fn_concessvehicle.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Concessionnaire véhicule" at Kavala's Place

*/

_this enableSimulation false; _this allowDamage false; _this addAction[localize ""STR_MAR_Car_shop"",life_fnc_vehicleShopMenu,[""civ_car"",civilian,[""civ_car_1"",""civ_car_1_1""],""civ"",""Bruce's New & Used Auto's""]]; _this setVariable[""realname"", ""Car Shop""];