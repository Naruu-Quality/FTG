/*
	Author: IT07

	Description:
	Configuration and resource file for server menu. Should be used to adjust the content of menu.
*/

class SC_sMenuConfig
{
	class menuConfig
	{
		/////////////////////////////////////////////////////////
		///////  General config for the menu  ///////////////////
		///////  Please adjust these below to your needs  ///////
		/////////////////////////////////////////////////////////
		keyToOpenMenu = 0x43; // Change to false to disable. Works with useScrollAction. DEFAULT: 0x43 = F9 key. https://community.bistudio.com/wiki/DIK_KeyCodes
		useScrollAction = 1; // Change to false to disable. Can use any number to enable. Can be used in combo with keyToOpenMenu
		menuCategories[] = {"Infos Général","Règles","Donation"}; // Try to keep amount as low as possible for optimal speed/load
		serverIPandPort = "62.210.251.243:2502"; // Speaks for itself
		serverLocation = "France"; // Location of your server. Keep as short as possible
		maxPlayers = 100; // This should be exactly the same as the maximum slot count of your server
		restartInterval = 6; // Number of hours your server will be online before it automatically restarts. Set to 0 if you use a restart schedule.
		serverMods = "A3 Altis Life Boosted"; // Put whatever mods you want to show here
		serverAllowedMods = "Altis Life"; // This example shows how to make a clickable text
		serverMission = "A3 Altis Life FTG"; // Name of the mission
		serverMap = "Altis"; // Name of map used on the server
		serverGameType = "PvP/PvE"; // The type of the mission
		serverAH = "Infistar"; // Put the name of your antihack(s) here
		serverManagedBy = "<a href='clanWebsiteUrlHere'>FrenchTeamGaming</a>"; // Should be clear enough, right?
		serverHostLogo = "addons\FTG_Infos_Menu\menuLogos\hosting\a3servers.jpg"; // use "" if you do not want to have this
		serverSquadLogo = ""; // use "" if you do not want to have this
		/////////////////////////////////////////////////////////
		///////  End of general config  /////////////////////////
		/////////////////////////////////////////////////////////
	}
	class configContent
	{
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////  Config for the content of each menu category  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////  == Instructions for editing the content ==  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////  step 1: Adjust the amount of class items (below) to the amount of categories you have set in _menuCategories  ///////////////////////////////////////////////////////////
		///////  step 2: Configure contentArray. Please look at the examples to see how to do it. contentArray is used to divide the text into pieces for easier configuration  //////////
		///////  step 2b: it does not matter how you name the items in contentArray. They just have to match the actual item names that are defined in contentArray[]  ///////////////////
		///////  step 3: go nuts! :)  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////  NOTE 1: Do not put the title in contentArray because the title is already put into the title bar automatically  /////////////////////////////////////////////////////////
		///////  NOTE 2: Less items in contentArray[] is faster  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////  NOTE 3: <br /> is a linebreak, <img image'path\to\Image.jpg' /> is an image and <a href='url'>this is a link</a>  ///////////////////////////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		class 1 // First in _menuCategories
 		{
			title = "GENERAL INFO";
			contentArray[] = {"txtOne","txtTwo","txtThree","txtFour","txtFive","txtSix","txtSeven"};
			txtOne = "<t size='1.5'><a href='url' color='#D13B3B'>Serveur FTG ALTIS LIFE</a></t><br />";
			txtTwo = "<t size='1.5'>French Team Gaming</t> <br /><br /> <img image='textures\ftg.paa' size='7' /> <br /><br />";
			txtThree = "<t size='1.5'>Paramètres du serveur</t> <br /> - Serveur Dédié <br /> - Maximum en bank : Illimité <br /> - Mission Custom <br /> - Fps serveur optimisés <br /> - <a href='url' color='#298A08'>VIP Menu</a> <br /><br />";
			txtFour = "<t size='1.5'>Site Web</t> <br /><a href='http://frenchteamgaming.com' color='#D13B3B'>frenchteamgaming.com</a> <br /><br />";
			txtFive = "<t size='1.5'>Teamspeak</t><br /> Un Teamspeak Publique est à votre dispotion à cette adresse <a href='frenchteamgaming.fr' color='#D13B3B'>frenchteamgaming.fr</a> <br /><br />";
			txtSix =  "<t size='1.5'>Nos Serveurs</t><br />Cliquer ici pour voir la liste de nos serveurs<br /><a href='http://www.gametracker.com/clan/frenchteamgaming/' color='#D13B3B'>Gametracker</a> <br /><br />";
			txtSeven = "<t size='1.5'>Admins serveur</t><br /> - Magik BZH [Admin Serveur] <br /> - AmZToon [Admin Serveur] <br /> - Gi.Tix [Admin serveur] <br /> - Ami_ral [Modérateur serveur] <br /> - Pere-Benjamin [Modérateur serveur] <br /> - Rix [Modérateur serveur] <br /> - Dji [Modérateur serveur]";
		};
		
		class 2 // Second in _menuCategories
		{
			title = "THE RULES";
			contentArray[] = {"txtOne","txtTwo","txtThree","txtFour","txtFive","txtSix"};
			txtOne = "<t size='1.5'><a href='url' color='#D13B3B'>Règles du Serveur</a></t><br />";
			txtTwo = "<t size='1.5'>Règles Générales</t> <br /> - Il ne s agit pas d un serveur full RP (Rôle Play) mais évitez de parler HRP (Hors Rôle Play) en jeu ( bugs de co, bug serveur, mort accidentelle, ... ). Pour les demandes, allez dans le channel TS HELP ALTIS LIFE. <br /> - Il est obligatoire de posséder un pseudo RP (Nom + prénom) sous peine kick. <br />- Il est interdit d’avoir un pseudo insultant, sous peine de ban. <br />- Il est interdit de tuer sans raison. <br />- Il est interdit de menacer de bannissement une personne si vous n’êtes pas un membre du staff Altis Life. <br />- Il est interdit de prendre en otage les Médecins / dépanneurs ou de les braquer, sauf Event prévu avec l administration, Pas plus de 1 prise d otage toutes les heures, et interdiction quand il reste 1 heure avant le reboot. <br />- Les Véhicules Armés (Hunter HMG, Pick-Up HMG) peuvent être tirés à vue par les Gendarmes/Rebelles <br />- Si vous êtes arrêté par les gendarmes et qu ils confisquent vos moyens de communications, vous n avez plus de radio, ni de GPS, vous ne pouvez plus parler avec votre équipe et celle-ci ne sait pas où vous êtes. <br />- Après une mort RP Il est strictement interdit de revenir sur zone durant l action, vous pourrez y retourner 20 minutes après la fin de celle-ci. Durant une action si il n y a plus de coups de feu durant 5 minutes celle-ci est terminée ! <br />- Les forces de l ordres ne connaissent aucun lieu illégaux. Ni Champs, ni Traitements , ni Dealers, ne sont connus, à pars si ils reçoivent des informations de civils ou rebelles. Ces informations restent connu jusqu au reboot suivant. <br />- Les RAID de gendarmerie sur des plantations, traitements ou dealers, doivent êtres espacés de minimum 30min. <br />- Les gendarmes, ont droit à leur vie civile. Mais il est INTERDIT pour ceux qui rejoignent la gendarmerie de jouer un RP Rebelle! Cela signifie que tout Gendarme en civil prit en train de faire de l illégale, en tenue rebelle ou jouant avec un rebelle sera expulsé de la gendarmerie! <br />- Les zones safes sont : Garage, ATM , camp rebelle, vendeurs D items, Kavala, Poste Gendarmerie, Frontière et Athira. Il est donc interdit de braquer à ces endroits, de tuer une personne sans raisons, de carkill ..etc <br />- Il est STRICTEMENT INTERDIT de looter les cadavres de gendarmes pour récupérer leur équipement sous peine de lourdes sanctions ! <br />- Les EMS N ont pas le droit de soigner et remettre sur pied que ce soit des gendarmes ou des rebelles lors d une action ! <br />- Il est STRICTEMENT INTERDIT d insulter et dire des propos racistes sous peine d un ban de 24h voir plus ! <br />- Il est INTERDIT de faire un ALT F4 pour se déconnecter, sous peine de ban 24h-48h ! <br />- Il est interdit de braquer aux zones de départ (Mine de cuivre, Pêches ..etc) <br />- Il est STRICTEMENT INTERDIT aux rebelles de capturer, d entrer et d attaquer Kavala sans raison RP ! Il faut envoyer un post forum pour demander un event, et qu il soit approuvé par un Administrateur/Modérateur ! Sous peine de Ban 1 semaine de toute la TEAM !! <br />";
            txtThree = "<t size='1.5'>En véhicule TERRESTRE</t> <br /> -  - Vous devez posséder un permis pour pouvoir conduire un véhicule. En cas de conduite illégale votre véhicule est immobilisé de plus vous devrez régler une amende. <br />- Il est interdit de rouler en dehors des routes et chemins prévus à la circulation, dans le cas contraire vous aurez une amende. <br />- Il est interdit d’adopter une conduite dangereuse, (Griller un stop, une priorité ..) sous peine d avoir une amende, votre véhicule se verra immobilisé de plus il y aura retrait du permis. <br />- A l’approche d’un point de contrôle ou de la frontière, ralentissez ! (Dans le cas contraire vous serez une menace, les gendarmes sur zone auront l autorisation d ouvrir le feu). Mettez vous à l’arrêt complet au niveau de la barrière ou d’un Gendarme, de plus si vous désirez passer à la frontière vous subirez une fouille de votre inventaire ainsi qu a votre véhicule, si vous avez des équipements et/ou objets illégaux tel des armes de type militaire (Calibre 5.56mm, 6.5mm, 7.62mm et plus) ou de la drogue, ces derniers seront confisqués, vous aurait une amende à payer, si vous refusez vous serez en détention durant une durée déterminée par un agent et confiscation du véhicule. <br />- Les vitesses sur l île sont: 50km/h en ville / 70km/h autour des villes / 90km/h hors agglomération / 130km/h sur autoroute ( grande ligne droite aéroport) <br />";
            txtFour = "<t size='1.5'>En véhicule AERIEN</t> <br /> -  - Vous devrez avoir le Diplôme de pilote <br />- Il peut y avoir des contrôles aériens par la gendarmerie, si vous entendez un Ghost Hawk ayant les sirènes posez vous à un endroit dégagé (plein champs par exemple), dans le cas contraire il y aura des somations à cotés de vous (tirs de Gatling), vous aurez alors 1 minute pour vous poser, sinon vous serez abattu. <br />- Il est interdit de voler à basse altitude (-100m) <br />- Il est interdit de survoler Kavala et Pyrgos, villes sous la protection du maire, sous peine d être abattu. <br />- Il est interdit de se poser dans un endroit autre qu’une piste d atterrissage ou une balise d’hélicoptère civil. Une demande d autorisation d atterrissage devra être faites aux forces de l ordre pour Kavala. <br />- Il est interdit de passer à au dessus du poste de la frontière sous peine de se prendre des tirs de suppressions ! <br />";
            txtFive = "<t size='1.5'>Règles CIVIL</t> <br /> - - Il est interdit de rentrer dans un avant poste de gendarmerie sans autorisations. <br />- Il est interdit de faire arrêter une patrouille pour aucunes raisons valables ou vous aurez une amende à payer pour la perte de temps des agents. <br />- Les civils auront accès à certaines armes (Rook-40, Zubr, ACP-C2, PDW, la SDAR, la TRG, la Vermin), de petits calibre certes, mais pourront se défendre et appeler tout de suite les gendarmes pour expliquer la situation, cependant il est strictement interdit d attaquer, sous peine de devenir un ennemi des forces de l’ordre. <br /> - Votre propriété est privée. Cependant, les Gendarmes peuvent faire un contrôle de celle-ci, quelque soit la raison, si vous êtes rebelle vous aurez le droit de la défendre, mais interdiction de spawner dans la maison durant la fouille. <br />- Il est interdit pour un Civil de discuter avec un rebelle, ou il sera aux yeux des gendarmes un complice, il sera donc considéré comme tel et sera ennemi des forces de l ordre. <br />";
            txtSix = "<t size='1.5'>Règles REBELLE</t> <br />- Il est interdit de braquer plusieurs fois le même civil. <br />- Il est interdit de prendre plus de 25% de la marchandise légale d’un civil si celui-ci coopère, à l inverse 50% de la marchandise pourra lui être prise. <br />- il est autorisé de prendre 50% de la marchandise d un rebelle. <br />- Il est autorisé de prendre 50% de la marchandise illégale d un véhicule civil, même si celui-ci coopère. <br />- Il est interdit de braquer dans un lieu de revente de matériaux ou de marchandises. <br />- Il est interdit de tirer à vue sur un Gendarme sauf en cas de contexte RP (Attentat, menaces de l’un des deux camps ou event). <br />- Il est possible de braquer la même team à 15 minutes d’intervalles. Soyez Fair Play ! <br />- Il est obligatoire d être minimum 2 en PickUp armé (HMG), un pilote et un tireur (Applicable à la gendarmerie également). <br />- Il est possible pour vous d’attaquer un avant poste de Gendarmerie. Cependant, il est interdit d’attaquer sans raisons. Les seules raisons valables sont les suivantes : <br />.Récupération de l’un de vos hommes <br />.Récupération de preuves importantes (véhicule, témoin) <br />.Cible importante réfugiée <br />.Attaque a la ceinture explosive (aprés envoie d un message aux gendarmes pour dire qu une attaque va avoir lieu. <br />- Régle spéciale concernant les sectes (notamment les sacrifices) : Lors d une interaction RP avec quelqu un, vous devez choisir SOIT le braquage (les régles ci-dessus s appliquent toujours) SOIT le sacrifice. De plus, il est de votre devoir de respecter le fair play afin de ne pas dégouter les nouveaux joueurs, pour cela, avant un sacrifice, expliquez qui vous êtes et pourquoi vous faites ce sacrifice. N’hésitez pas a accompagner le joueur jusqu à un ATM afin qu il puisse sauver son argent (Pour raison RP bien sur, telle que subvenir aux besoins de sa famille etc ...). Lors d un sacrifice vous recherchez le RP avant tout, et non l appât du gain. Pour finir, un message au admin via le jeu afin de prévenir qu un sacrifice est en cours n est pas une mauvaise chose (ainsi nous pouvons voir que le RP est respecté des deux côtés.)- L attaque de banque peut être lancée une seule fois par reboot, et seulement si il y a au moins 5 Gendarmes connectés ! Au risque de lourdes sanctions ! <br />";
		};
		class 3 // Third in _menuCategories
		{
			title = "SUPPORT SERVER";
			contentArray[] = {"txtOne","txtTwo","txtThree","txtFive","txtSix"};
			txtOne = "<t size='1.5'><a href='url' color='#D13B3B'>Donation</a></t><br />";
			txtTwo = "<t size='1.5'>Faites un don</t> <br />Si vous aimez jouer sur notre serveur et qu'il vous plaît, vous pouvez faire un don pour nous soutenir et participer au coûts du serveur !<br />";
			txtThree = "<t size='1.5'><a href='url' color='#298A08'>Avantages donateur</a></t><br /> - Accès aux slots donateurs <br /> - Salaire multiplié par 3 <br /> - Matériel supplémentaire lors du premier spawn <br />";
			txtFive = "<t size='1.5'>Devenir Donateur</t> <br />Veuillez vous rendre sur le <a href='url' color='#D13B3B'>Site Web</a> : FrenchTeamGaming.com<br /><br />";
			txtSix = "<a href='http://frenchteamgaming.com/donation/' color='#D13B3B'>Cliquez ici pour faire un don</a> <br /><br />";
		};

	};
};

////////////////////////////////////////////////////////
/////// Do not change anything below this line  ////////
////////////////////////////////////////////////////////
#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)
#define THEMECOLOR { 0.82, 0.231, 0.231, 0.8 }

class SC_sMenu
{
	idd = 297;
	//onLoad = "";
	movingEnable = 1;
	class controls
	{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by IT07, v1.063, #Sahycu)
////////////////////////////////////////////////////////

class sMenuTitle: RscText1
{
	colorBackground[] = THEMECOLOR;

	idc = 1000;
	text = "SERVER INFO MENU"; //--- ToDo: Localize;
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 0 * GUI_GRID_H + GUI_GRID_Y;
	w = 19 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
};
class sMenuContentSelector: RscCombo1
{
	onLBSelChanged = "[297, 1100, _this] call SC_fnc_getContent";

	idc = 2100;
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 14.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class sMenuContentTitle: RscText1
{
	colorBackground[] = THEMECOLOR;

	idc = 1008;
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 35 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
};
class sMenuTitleHostedBy: RscText1
{
	idc = 1004;
	x = 35.5 * GUI_GRID_W + GUI_GRID_X;
	y = 0 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class sMenuLogoHostedBy: RscPicture1
{
	style = 2096;

	idc = 1201;
	x = 35.5 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 2.6 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class sMenuSquadLogo: RscPicture1
{
	style = 2096;

	idc = 1200;
	x = -4 * GUI_GRID_W + GUI_GRID_X;
	y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 3 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
};
class sMenuTitleServerInfo: RscText1
{
	colorBackground[] = THEMECOLOR;

	idc = 1003;
	text = "SERVER INFO"; //--- ToDo: Localize;
	x = 35.5 * GUI_GRID_W + GUI_GRID_X;
	y = 8 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
};
class sMenuTitleServerStats: RscText1
{
	colorBackground[] = THEMECOLOR;

	idc = 1005;
	text = "SERVER STATS"; //--- ToDo: Localize;
	x = 35.5 * GUI_GRID_W + GUI_GRID_X;
	y = 4 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
};
class sMenuTxtServerStats: RscText1
{
	shadow = 0;
	style = 528;
	sizeEx = 0.03;

	idc = 1006;
	x = 35.5 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,0.8};
	colorBackground[] = {0,0,0,0.8};
};
class sMenuRefreshStats: RscButton1
{
	action = ["STATS","Stats refreshed! (Manual)"] call SC_fnc_f5Reload;

	idc = 1603;
	text = "REFRESH (F5)"; //--- ToDo: Localize;
	x = 35.5 * GUI_GRID_W + GUI_GRID_X;
	y = 6.6 * GUI_GRID_H + GUI_GRID_Y;
	w = 6.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
	tooltip = "Click to refresh server stats or press F5"; //--- ToDo: Localize;
};
class sMenuContentBg: IGUIBack1
{
	idc = 2200;
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 35 * GUI_GRID_W;
	h = 19.8 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class contentGroup: RscControlsGroup1
{
	idc = 2300;
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 35 * GUI_GRID_W;
	h = 19.6 * GUI_GRID_H;
	class controls
	{
		class sMenuContentTxt: RscStructuredText1
		{
			idc = 1100;
			x = 0.5 * GUI_GRID_W;
			y = 0.5 * GUI_GRID_H;
			w = 27 * GUI_GRID_W;
			h = 0.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0};
		};
	};
};
class sMenuGroupServerInfo: RscControlsGroup1
{
	idc = 2301;
	x = 35.5 * GUI_GRID_W + GUI_GRID_X;
	y = 9 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 16 * GUI_GRID_H;
	class controls
	{
		class sMenuStrTxtServerInfo: RscStructuredText1
		{
			idc = 1101;
			x = 0 * GUI_GRID_W;
			y = 0 * GUI_GRID_H;
			w = 10 * GUI_GRID_W;
			h = 16 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.8};
		};
	};
};
class sMenuBgCopy: IGUIBack1
{
	idc = 2201;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 31 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.5};
};
class sMenuCopyUID: RscButton1
{
	action = [297, 1400, format["Name: %1 and UID: %2", name player, getPlayerUID player], 0] call SC_fnc_handleCtrlText;

	idc = 1601;
	text = "COPY PLAYER NAME & UID"; //--- ToDo: Localize;
	x = 11.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23.8 * GUI_GRID_H + GUI_GRID_Y;
	w = 12 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class sMenuClose: RscButton1
{
	action = closeDialog 0;

	idc = 1600;
	text = "CLOSE"; //--- ToDo: Localize;
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class sMenuButtonCopyIPandPort: RscButton1
{
	action = [["serverIPandPort"],[1400,"IP:PORT = "]] call SC_fnc_getCfgSetting;

	idc = 1602;
	text = "COPY IP:PORT"; //--- ToDo: Localize;
	x = 4.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23.8 * GUI_GRID_H + GUI_GRID_Y;
	w = 6.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class sMenuOutputBg: IGUIBack1
{
	idc = 2202;
	x = 24 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class sMenuOutputBar: RscEdit1
{
	idc = 1400;
	x = 24.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23.8 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,0.8};
	tooltip = "Ctrl+C to copy, Ctrl+V to paste"; //--- ToDo: Localize;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};