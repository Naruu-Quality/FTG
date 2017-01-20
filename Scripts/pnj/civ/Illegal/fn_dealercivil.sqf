/*
	File: fn_copper.sqf
	Author: Aroun MCF & Herschelll

	Description:
	Initializes "Dealeur Civil" for mission

*/

_this allowDamage false; _this enableSimulation false; _this addAction[localize""STR_MAR_Meth_Dealer"",life_fnc_virt_menu,""drugdealer2"",0,false,false,"""",' vehicle player == player && player distance _target < 5 && playerSide == civilian ']; _this addAction[localize""STR_MAR_Question_Dealer"",life_fnc_questionDealer,"""",0,false,false,"""",' vehicle player == player && player distance _target < 5 && playerSide == west && !life_action_inUse '];