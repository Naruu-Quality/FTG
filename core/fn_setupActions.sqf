/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
	case civilian: {
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
		// Suicide Bomb
		life_actions = life_actions + [player addAction["Active explosive vest",life_fnc_suicideBomb,"",0,false,false,"",
		'vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
		//Présenter le Passeport
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Présenter le passeport</t>",life_fnc_civPasseport,"",1,false,true,"",' playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && player distance cursorTarget < 10']];
		//Kidnapping
		life_actions = [player addAction["<t color='#00FF00'>Start Kidnapping</t>",life_fnc_restrainAction,cursorTarget,9999999,false,false,"",'
        !isNull cursorTarget && player distance cursorTarget < 5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable "Escorting") && !(cursorTarget getVariable "restrained") && speed cursorTarget < 1 ']];
	};
	
	case west: {
		//insigne de police
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Insigne de police</t>",life_fnc_copShowLicense,"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
	};
};