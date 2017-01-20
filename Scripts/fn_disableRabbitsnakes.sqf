/*
File: fn_disableRabbit.sqf
Author: ColinM
Description: Remove ambient rabbit.
Credits: Lala14
*/

[] spawn {    
while {true} do {
{           
if ((agent _x isKindOf "Snake_random_F") || (agent _x isKindOf "Rabbit_F")) then { deleteVehicle agent _x; };
}forEach agents;
sleep 2;
};
}; 