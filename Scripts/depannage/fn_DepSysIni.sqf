/*
        fn_DepSysIni.sqf
		Author: FTG
		for www.Frenchteamgamin.com
		
		Description:
		Init the (un)loading and repair system for  mechanics worker
*/

//
if (playerSide != independent) exitWith {};
cutText ["Verif. des licences independent...","PLAIN",2];
sleep (random 30);
if (!license_med_depanneur) exitWith {};

if ((license_med_depanneur) && (playerSide == independent))then
	{
	hint "Vous ètes dépanneur ajout des fonctions ...";
	sleep 5;
	player addAction["<t color='#7FFF00'>Systeme de chargement</t>","scripts\depannage\fn_DepSysLoad.sqf","",-6,false,false,"",'((vehicle player isKindOf "B_Truck_01_transport_F") or (vehicle player isKindOf "C_Offroad_01_F") or (vehicle player isKindOf "B_G_Offroad_01_F")) && ((cursortarget isKindOf "Car") or (cursortarget isKindOf "Air"))'];
	//player addAction["<t color='#7FFF00'>Reparer le vehicule</t>",life_fnc_serviceTruck,"",-8,false,false,"",'(( cursortarget isKindOf "Car") && (vehicle player == player) && (player distance (cursorTarget) < 5))'];
	//player addAction["<t color='#7FFF00'>Forcer le vehicule</t>",life_fnc_lockpick,"",-9,false,false,"",'(( cursortarget isKindOf "Car") && (vehicle player == player) && (player distance (cursorTarget) < 5))'];
	};
	