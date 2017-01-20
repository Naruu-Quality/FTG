/*
        fn_DepSys.sqf
		Author: FTG
		for www.Frenchteamgamin.com
		
		Description:
		Execute the (un)loading system for  mechanics worker
*/
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Liste des véhicules d'assistances :																									//
// 																																		//
//      OFFROAD = ["C_Offroad_01_F","B_G_Offroad_01_F"]																					//
//		HEMTT = ["B_Truck_01_transport_F"]																								//
//																																		//
//  Liste des véhicules dépannables par OFFROAD :																						//
// 																																		//
//        Kart = ["C_Kart_01_Blu_F","C_Kart_01_Fuel_F","C_Kart_01_Red_F","C_Kart_01_Vrana_F","C_Kart_01_F"]								//
//        Quadbike = ["I_Quadbike_01_F", "C_Quadbike_01_F","O_Quadbike_01_F","B_G_Quadbike_01_F","B_Quadbike_01_F"]						//
//																																		//
//  Liste des véhicules dépannables par HEMTT :																							//
//																																		//
//        Hatchback = ["C_Hatchback_01_F","C_Hatchback_01_sport_F"]																		//
//        Offroad = ["C_Offroad_01_F","B_G_Offroad_01_F","B_G_Offroad_01_armed_F"]														//
//        SUV = ["C_SUV_01_F"]																											//
//        Ifrit = ["O_MRAP_02_F","O_MRAP_02_gmg_F","O_MRAP_02_hmg_F"]																	//
//        Strider = ["I_MRAP_03_F","I_MRAP_03_gmg_F","I_MRAP_03_hmg_F"]																	//
//        Hunter = ["B_MRAP_01_F","B_MRAP_01_gmg_F","B_MRAP_01_hmg_F"]																	//
//        MH9 = ["B_Heli_Light_01_F","B_Heli_Light_01_armed_F","C_Heli_Light_01_civil_F"]												//
//		  Orca = ["O_Heli_Light_02_v2_F","O_Heli_Light_02_unarmed_F"]	
//		  Petits Camions = ["C_Van_01_transport_F","C_Van_01_box_F"]																//
//																																		//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		
        _assisTruck = vehicle player;
        _targetCar = cursorTarget;
 
//if(attachedObjects isKindOf "Car") then { _assisTruck setVariable ["vehicleIsLoad",1];};
if(isNil {_assisTruck getVariable "vehicleIsLoad"}) then { _assisTruck setVariable ["vehicleIsLoad",0];};
if((speed _assisTruck) > 0) exitWith {hint "Il faut etre a l'arret";};
if((speed _targetCar) > 0) exitWith {hint "Le véhicule doit etre a l'arret";};
if(_assisTruck distance (_targetCar) > 10) exitWith {hint "Tu es trop loin";};

 if ((_assisTruck getVariable "vehicleIsLoad") == 0) exitWith 
 {
 
 //OFFRAD
	if (((_assisTruck isKindOf "C_Offroad_01_F") or (_assisTruck isKindOf "B_G_Offroad_01_F")) && ( _targetCar isKindOf "Car")) then 
	{
		
		//Karts
		if((_targetCar isKindOf "C_Kart_01_Blu_F") or (_targetCar isKindOf "C_Kart_01_Fuel_F") or (_targetCar isKindOf "C_Kart_01_Red_F") or (_targetCar isKindOf "C_Kart_01_Vrana_F") or (_targetCar isKindOf "C_Kart_01_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-1.9,0.5]];
			hint "Véhicule chargé";
		};
		
		//Quads 
		if((_targetCar isKindOf "I_Quadbike_01_F") or (_targetCar isKindOf "C_Quadbike_01_F") or (_targetCar isKindOf "O_Quadbike_01_F") or (_targetCar isKindOf "B_G_Quadbike_01_F") or (_targetCar isKindOf "B_Quadbike_01_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-1.8,0.7]];
			hint "Véhicule chargé";
		};		
               
	};
 
//HEMTT	
	if ((_assisTruck isKindOf "B_Truck_01_transport_F") && ( _targetCar isKindOf "Car")) then 
	{
		//Hayons
		if((_targetCar isKindOf "C_Hatchback_01_F") or (_targetCar isKindOf "C_Hatchback_01_sport_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-2.2,1]];
			hint "Véhicule chargé";
		};
			
		//Offroads
		if((_targetCar isKindOf "C_Offroad_01_F") or (_targetCar isKindOf "B_G_Offroad_01_F") or (_targetCar isKindOf "B_G_Offroad_01_armed_F") or (_targetCar isKindOf "O_G_Offroad_01_F") or (_targetCar isKindOf "O_G_Offroad_01_armed_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-2.2,1.5]];
			hint "Véhicule chargé";
		};
			
		//SUV
		if(_targetCar isKindOf "C_SUV_01_F") then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-2.2,1.2]];
			hint "Véhicule chargé";
		};
		
		//Petits camions
		if((_targetCar isKindOf "C_Van_01_transport_F") or (_targetCar isKindOf "C_Van_01_box_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-1.6,1.1]];
			hint "Véhicule chargé";
		};
			
		//Iftit
		if((_targetCar isKindOf "O_MRAP_02_F") or (_targetCar isKindOf "O_MRAP_02_gmg_F") or (_targetCar isKindOf "O_MRAP_02_hmg_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-1.1,1.7]];
			hint "Véhicule chargé";
		};
			
		//Hunter
		if((_targetCar isKindOf "B_MRAP_01_F") or (_targetCar isKindOf "B_MRAP_01_gmg_F") or (_targetCar isKindOf "B_MRAP_01_hmg_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-1.1,1.5]];
			hint "Véhicule chargé";
		};
	};

	if ((_assisTruck isKindOf "B_Truck_01_transport_F") && ( _targetCar isKindOf "Air")) then 
	{
		//MH9
		if((_targetCar isKindOf "B_Heli_Light_01_F") or (_targetCar isKindOf "B_Heli_Light_01_armed_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			_targetCar setHitPointDamage ["HitHRotor",1];
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-2.5,1]];
			hint "Véhicule chargé";
		};

		//M900
		if(_targetCar isKindOf "C_Heli_Light_01_civil_F") then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			_targetCar setHitPointDamage ["HitHRotor",1];
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-2.8,0]];
			hint "Véhicule chargé";
		};

		//Orca
		if((_targetCar isKindOf "O_Heli_Light_02_v2_F") or (_targetCar isKindOf "O_Heli_Light_02_unarmed_F")) then
		{
			_assisTruck setVariable ["vehicleIsLoad",1];
			hint "Chargement en cours";
			_targetCar setHitPointDamage ["HitHRotor",1];
			sleep 5;
			_targetCar attachTo [_assisTruck,[0,-5.5,1.7]];
			hint "Véhicule chargé";
		};		
 
    };
 
};

if (((_assisTruck getVariable "vehicleIsLoad") == 1) && (_assisTruck isKindOf "B_Truck_01_transport_F")) then {
	
	_assisTruck setVariable ["vehicleIsLoad",0];
	hint "Déchargement en cours";
	sleep 5;
	_targetCar attachTo [_assisTruck,[0,-4,1.5]];
	sleep 0.5;
	_targetCar attachTo [_assisTruck,[0,-6,1]];
	sleep 0.5;
	_targetCar attachTo [_assisTruck,[0,-8,0.5]];
	sleep 0.5;
	_targetCar attachTo [_assisTruck,[0,-11,0]];
	detach _targetCar;
	hint "Véhicule déchargé";
	};

if (((_assisTruck getVariable "vehicleIsLoad") == 1) && ((_assisTruck isKindOf "C_Offroad_01_F") or (_assisTruck isKindOf "B_G_Offroad_01_F"))) then {
	
	_assisTruck setVariable ["vehicleIsLoad",0];
	hint "Déchargement en cours";
	sleep 5;
	_targetCar attachTo [_assisTruck,[0,-2,1.5]];
	sleep 0.5;
	_targetCar attachTo [_assisTruck,[0,-3,1]];
	sleep 0.5;
	_targetCar attachTo [_assisTruck,[0,-4,0.5]];
	sleep 0.5;
	_targetCar attachTo [_assisTruck,[0,-5,0]];
	detach _targetCar;
	hint "Véhicule déchargé";
	};
