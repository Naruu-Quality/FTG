/*
	File: fn_borderbar.sqf
	Author: FTG
	
	Description:
	Systeme d'ouverture et fermeture de la douane

*/

	_stopbar1 = bar_bor_1;
	_stopbar2 = bar_bor_2;
	_stopbar3 = bar_bor_3;
	_stopbar4 = bar_bor_4;
	_stopbar5 = bar_bor_5;
	_stopbar6 = bar_bor_6;
	

			hint "Ouverture de la douane";
			_stopbar1 animate ["Door_1_rot", 1];
			_stopbar2 animate ["Door_1_rot", 1];
			_stopbar3 animate ["Door_1_rot", 1];
			_stopbar4 animate ["Door_1_rot", 1];
			_stopbar5 animate ["Door_1_rot", 1];
	        _stopbar6 animate ["Door_1_rot", 1];