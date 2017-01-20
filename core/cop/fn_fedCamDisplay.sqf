#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Turns on and displays a security cam like feed via PiP to the laptop display.
*/
_laptop = SEL(_this,0);
_mode = SEL(_this,3);

if(!isPiPEnabled) exitWith {hint localize "STR_Cop_EnablePiP";};
if(isNil "life_fed_scam") then {
	life_fed_scam = "camera" camCreate [0,0,0];
	life_fed_scam camSetFov 0.5;
	life_fed_scam camCommit 0;
	"rendertarget0" setPiPEffect [0];
	life_fed_scam cameraEffect ["INTERNAL", "BACK", "rendertarget0"];
	_laptop setObjectTexture [0,"#(argb,256,256,1)r2t(rendertarget0,1.0)"];
};

switch (_mode) do {
	case "side": {
		life_fed_scam camSetPos [23741,16204.9,5.23];
		life_fed_scam camSetTarget [23742.8,16228.7,5.26641];
		life_fed_scam camCommit 0;
	};
	
	case "vault": {
		life_fed_scam camSetPos [23735.3,16224.5,5.25522];
		life_fed_scam camSetTarget [23757.2,16223.9,5.24556];
		life_fed_scam camCommit 0;
	};
	
	case "front": {
		life_fed_scam camSetPos [23674.5,16238.2,5.29492] ;
		life_fed_scam camSetTarget [23685.6,16236.9,5.28842];
		life_fed_scam camCommit 0;
	};
	
	case "back": {
		life_fed_scam camSetPos [23674.5,16238.2,5.29492];
		life_fed_scam camSetTarget [23802.3,16236.5,5.23];
		life_fed_scam camCommit 0;
	};
	
	case "off" :{
		life_fed_scam cameraEffect ["terminate", "back"];
		camDestroy life_fed_scam;
		_laptop setObjectTexture [0,""];
		life_fed_scam = nil;
	};
};
