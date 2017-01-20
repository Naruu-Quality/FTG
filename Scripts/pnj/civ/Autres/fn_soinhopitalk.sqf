/*
	File: fn_soinhopital.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Heal" action at Kavala Hospital

*/

_this enableSimulation false; _this allowDamage false; _this addAction[localize""STR_MAR_Medical_Assistance"",life_fnc_healHospital];