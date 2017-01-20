[] spawn {
		waitUntil{player == player};
		playsound "kickass";
		_worldName = switch(toLower worldName)do{
                case "chernarus"             :{"Chernarus"};
                case "taviana"               :{"Taviana"};
		case "Altis"                 :{"Altis"};
                default{worldName};
        };
        /* This is the advertisement. */
        [[format["Bienvenue sur |FTG| %1 Life ", _worldName],"","","","","",""," ","","","",""], -.5, .85] call BIS_fnc_typeText;
        //sleep 2;
        [["Rejoignez nous sur teamspeak","frenchteamgaming.fr","Appuyez sur F9 pour voir les Règles/Informations/Donation","Bon jeu !"], .5, .85] call BIS_fnc_typeText;
        /* End of advertisement */
};