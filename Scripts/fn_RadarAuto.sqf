/*
	fn_RadarAuto.sqf
	Based from the original script created by 
	BayLife Server and modified by FTG
	
*/
private ["_veh", "_limitation", "_Location", "_speed", "_contravention"];
if (isNil "RadarOn" || RadarOn) Then {
RadarOn = false;
_veh = vehicle player;
_limitation = _this select 0;
_Location = _this select 1;
_speed = round (sqrt(speed _veh)^2);
_contravention = (_speed-_limitation)*100;
	if (_veh isKindOf "CAR" && (driver _veh) == player && (_speed-(_limitation + 5)) > 0) Then {
			if ((side player == civilian)) then {

			hint parseText format["Vous avez été flashé à <t color='#ff0000'>%1</t> km/h dans une zone limité à <t color='#8cff9b'>%2</t> km/h sur <t color='#08abc4'>%3</t>.<br/>Par conséquent <t color='#ff0000'>%4</t> € on été prélevés de votre compte en banque",_speed,_limitation,_Location,_contravention];
			[[player, "RadarFlash",10],"bay_fnc_playSound",true,false] call bay_fnc_MP;
			2 cutText["","WHITE IN", 0];
			2 cutFadeOut 2;
			if (life_atmcash > _contravention) then 
			{
				life_atmcash = life_atmcash - _contravention
			}else
			{
				life_atmcash = 0;
			};
		};
	};
};
