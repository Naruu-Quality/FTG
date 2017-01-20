#include "..\script_macros.hpp"
/*
Master client initialization file
*/
life_firstSpawn = true;
life_session_completed = false;
private["_handle","_timeStamp"];
0 cutText["Setting up client, please wait...","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player};
[] call compile PreprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

diag_log "::Life Client:: Initialization Variables";
[] call compile PreprocessFileLineNumbers "core\configuration.sqf";

switch (playerSide) do
{
 case west:
 {
   BANK = LIFE_SETTINGS(getNumber,"bank_cop");
   if ((getPlayerUID player) in ["76561198089589030","76561197988943076","76561197969425268","76561198128027780","76561198004308047","76561198011844598","76561198003863155","76561198029797595","76561198031779126","76561198031779126","76561198071633173","76561198015532101","76561198133845539","76561198066592588","76561198040566947","76561198030158328","76561198028200082","76561198060867685","76561198081070239","76561197969768927","76561198065000480","76561198188678689","76561198022002575","76561198319058105","76561198076378106","76561198086854321","76561197988864923","76561198082282339","76561197973143823","76561198200686609","76561198035207780","76561198200686609","76561197970787820","76561198048021635","76561198146416421","76561198279875357","76561198070899299","76561198055770668","76561197997536799","76561198095946160","76561198093574178","76561198011008664","76561198070805668","76561198232969036","76561198006924554","45","76561198095252645","76561197991188349","76561198008034812","76561198052934167","76561198070441483","76561198053934751","76561198021161704","76561197970040407","76561197993969029","76561198057876923","76561198098203294","76561198284447633","76561198071680488","76561198189471889","76561198175305134","76561198011008664","76561198015877237","76561198078802861","76561197964464903","76561198147036719","76561198175412395","76561198140714206","76561198202890684","76561198131072307","76561198135477718","76561197967550784","76561198096411966","76561198019160539","76561198023992732"]) then
   {
     life_paycheck = 15000;
   }
   else
   {
     life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
   };
 };
 case civilian:
 {
   BANK = LIFE_SETTINGS(getNumber,"bank_civ");
   if ((getPlayerUID player) in ["76561198089589030","76561197988943076","76561197969425268","76561198128027780","76561198004308047","76561198011844598","76561198003863155","76561198029797595","76561198031779126","76561198031779126","76561198071633173","76561198015532101","76561198133845539","76561198066592588","76561198040566947","76561198030158328","76561198028200082","76561198060867685","76561198081070239","76561197969768927","76561198065000480","76561198188678689","76561198022002575","76561198319058105","76561198076378106","76561198086854321","76561197988864923","76561198082282339","76561197973143823","76561198200686609","76561198035207780","76561198200686609","76561197970787820","76561198048021635","76561198146416421","76561198279875357","76561198070899299","76561198055770668","76561197997536799","76561198095946160","76561198093574178","76561198011008664","76561198070805668","76561198232969036","76561198006924554","45","76561198095252645","76561197991188349","76561198008034812","76561198052934167","76561198070441483","76561198053934751","76561198021161704","76561197970040407","76561197993969029","76561198057876923","76561198098203294","76561198284447633","76561198071680488","76561198189471889","76561198175305134","76561198011008664","76561198015877237","76561198078802861","76561197964464903","76561198147036719","76561198175412395","76561198140714206","76561198202890684","76561198131072307","76561198135477718","76561197967550784","76561198096411966","76561198019160539","76561198023992732"]) then
   {
     life_paycheck = 10500;
   }
   else
   {
     life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
   };
 };
 case independent:
 {
   BANK = LIFE_SETTINGS(getNumber,"bank_med");
   if ((getPlayerUID player) in ["76561198089589030","76561197988943076","76561197969425268","76561198128027780","76561198004308047","76561198011844598","76561198003863155","76561198029797595","76561198031779126","76561198031779126","76561198071633173","76561198015532101","76561198133845539","76561198066592588","76561198040566947","76561198030158328","76561198028200082","76561198060867685","76561198081070239","76561197969768927","76561198065000480","76561198188678689","76561198022002575","76561198319058105","76561198076378106","76561198086854321","76561197988864923","76561198082282339","76561197973143823","76561198200686609","76561198035207780","76561198200686609","76561197970787820","76561198048021635","76561198146416421","76561198279875357","76561198070899299","76561198055770668","76561197997536799","76561198095946160","76561198093574178","76561198011008664","76561198070805668","76561198232969036","76561198006924554","45","76561198095252645","76561197991188349","76561198008034812","76561198052934167","76561198070441483","76561198053934751","76561198021161704","76561197970040407","76561197993969029","76561198057876923","76561198098203294","76561198284447633","76561198071680488","76561198189471889","76561198175305134","76561198011008664","76561198015877237","76561198078802861","76561197964464903","76561198147036719","76561198175412395","76561198140714206","76561198202890684","76561198131072307","76561198135477718","76561197967550784","76561198096411966","76561198019160539","76561198023992732"]) then
   {
     life_paycheck = 15000;
   }
   else
   {
     life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
   };
 };
};


diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil {TON_fnc_clientGangLeader})};

diag_log "::Life Client:: Received server functions.";
0 cutText ["Waiting for the server to be ready...","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_server_isReady"};
waitUntil{(life_server_isReady OR !isNil "life_server_extDB_notLoaded")};

if(!isNil "life_server_extDB_notLoaded" && {life_server_extDB_notLoaded != ""}) exitWith {
 diag_log life_server_extDB_notLoaded;
 999999 cutText [life_server_extDB_notLoaded,"BLACK FADED"];
 999999 cutFadeOut 99999999;
};

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText["Finishing client setup procedure","BLACK FADED"];
0 cutFadeOut 9999999;

[] spawn life_fnc_escInterupt;

switch (playerSide) do {
 case west: {
   _handle = [] spawn life_fnc_initCop;
   waitUntil {scriptDone _handle};
 };
 case civilian: {
   _handle = [] spawn life_fnc_initCiv;
   waitUntil {scriptDone _handle};
 };
 case independent: {
   _handle = [] spawn life_fnc_initMedic;
   waitUntil {scriptDone _handle};
 };
};

player SVAR ["restrained",false,true];
player SVAR ["Escorting",false,true];
player SVAR ["transporting",false,true];
player SVAR ["playerSurrender",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log format["                End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "------------------------------------------------------------------------------------------------------";

life_sidechat = true;
[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player SVAR ["steam64ID",steamid];
player SVAR ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
life_disable_getIn = false;
player moveInCargo (_this select 0);
life_disable_getOut = true;
";

[] spawn life_fnc_survival;
if(playerSide == west) then {(unitBackpack player) setObjectTextureGlobal [0,""];};
if(playerSide == independent) then {(unitBackpack player) setObjectTextureGlobal [0,""];};

[] spawn {
 while {true} do {
   waitUntil{(!isNull (findDisplay 49)) && (!isNull (findDisplay 602))};
   (findDisplay 49) closeDisplay 2;
   (findDisplay 602) closeDisplay 2;
 };
};

CONSTVAR(life_paycheck);
if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;};

if(EQUAL(LIFE_SETTINGS(getNumber,"Pump_service"),1)) then{
 [] execVM "core\fn_Setup_Sation_Service.sqf";
};

[getPlayerUID player,player getVariable["realname",name player]] remoteExec ["life_fnc_wantedProfUpdate",RSERV];

[] execVM "addons\TOParmaInfo\loadTOParmaInfo.sqf";
