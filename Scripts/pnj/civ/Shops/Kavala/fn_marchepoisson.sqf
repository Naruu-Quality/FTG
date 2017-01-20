/*
	File: fn_marchepoisson.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Marche aux poissons" at Kavala's Place

*/

_this allowDamage false; _this enableSimulation false; _this addAction[localize ""STR_MAR_Fish_Market"",life_fnc_virt_menu,""fishmarket""];