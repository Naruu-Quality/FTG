private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};


if ((getPlayerUID player) in ["76561198089589030","76561197988943076","76561197969425268","76561198128027780","76561198004308047","76561198011844598","76561198003863155","76561198029797595","76561198031779126","76561198031779126","76561198071633173","76561198015532101","76561198133845539","76561198066592588","76561198040566947","76561198030158328","76561198028200082","76561198060867685","76561198081070239","76561197969768927","76561198065000480","76561198188678689","76561198022002575","76561198319058105","76561198076378106","76561198086854321","76561197988864923","76561198082282339","76561197973143823","76561198200686609","76561198035207780","76561198200686609","76561197970787820","76561198048021635","76561198146416421","76561198279875357","76561198070899299","76561198055770668","76561197997536799","76561198095946160","76561198093574178","76561198011008664","76561198070805668","76561198232969036","76561198006924554","45","76561198095252645","76561197991188349","76561198008034812","76561198052934167","76561198070441483","76561198053934751","76561198021161704","76561197970040407","76561197993969029","76561198057876923","76561198098203294","76561198284447633","76561198071680488","76561198189471889","76561198175305134","76561198011008664","76561198015877237","76561198078802861","76561197964464903","76561198147036719","76561198175412395","76561198140714206","76561198202890684","76561198131072307","76561198135477718","76561197967550784","76561198096411966","76561198019160539","76561198023992732"]) then
{
_clothings = ["U_IG_Guerilla2_3"];
player addUniform (_clothings select (floor(random (count _clothings))));

player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
player addItem "FirstAidKit";
player addItem "FirstAidKit";
player addBackPack "B_Carryall_oli";
}
else
{
_clothings = ["U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour","U_C_Poloshirt_salmon","U_C_Poloshirt_redwhite","U_C_Commoner1_1"];
player addUniform (_clothings select (floor(random (count _clothings))));

player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
};

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
