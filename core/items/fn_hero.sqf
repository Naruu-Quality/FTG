closeDialog 0;

hint "Un petit fix ? Fais gaffe tu saignes du nez ...";
sleep 3;

"chromAberration" ppEffectEnable true; // Liste des effets activés
"radialBlur" ppEffectEnable true;
enableCamShake true;

for "_i" from 0 to 44 do // 45 secondes d'effets
{
    "chromAberration" ppEffectAdjust [random 0.75,random 0.75,true];
    "chromAberration" ppEffectCommit 1;   
    "radialBlur" ppEffectAdjust  [random 0.04,random 0.04,0.45,0.45];
    "radialBlur" ppEffectCommit 1;
    addcamShake[random 4, 1, random 4];
    sleep 1;
};

"chromAberration" ppEffectAdjust [0,0,true]; // Fin des effets
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

"chromAberration" ppEffectEnable false;
"radialBlur" ppEffectEnable false;
resetCamShake;