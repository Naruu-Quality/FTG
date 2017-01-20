StartProgress = false;
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "Scripts\MessageServeur.sqf";
[] ExecVM "Addons\FTG_Infos_Menu\sMenuInit.sqf";
[] execVM "Scripts\fastrope.sqf";
[] execVM "scripts\fn_disableRabbitsnakes.sqf";
[] execVM "Scripts\Teargas\teargas.sqf";
[] execVM "Addons\scripts\welcome.sqf";
[] execVM 'Addons\scripts\repetitive_cleanup.sqf';
[] execVM "statusBar.sqf";
StartProgress = true;
