closeDialog 0;

hint "T'ES UN PUTAIN DE CHEVALIER COUSIN, DEFONCE TOUT, FUME TOUT, SNIF TOUT, BOIT TOUT COCAINEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE...";
sleep 3;

"chromAberration" ppEffectEnable true; // Liste des effets activés
"radialBlur" ppEffectEnable true;
enableCamShake true;

for "_i" from 0 to 44 do // 45 secondes d'effets
{
    "chromAberration" ppEffectAdjust [random 1,random 1,true];
    "chromAberration" ppEffectCommit 1;   
    "radialBlur" ppEffectAdjust  [random 1,random 1,1,1];
    "radialBlur" ppEffectCommit 1;
    addcamShake[random 6, 1, random 6];
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