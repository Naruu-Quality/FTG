class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 1250, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 9500, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 12500, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 30000, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 35000, { "driver" }, { "", "", -1 } },
			{ "C_Offroad_02_unarmed_F", 70000, { "driver" }, { "", "", -1 } },
			{ "B_T_LSV_01_unarmed_F", 80000, { "driver" }, { "", "", -1 } },
            { "C_Van_01_transport_F", 60000, { "driver" }, { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 15000 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 15000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", 10000, { "" }, { "", "", -1 } },
			{ "C_Hatchback_01_F", 12000, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 25000, { "" }, { "", "", -1 } },
            { "C_SUV_01_F", 17500, { "" }, { "", "", -1 } },
			{ "C_Van_01_transport_F", 15000, { "" }, { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", 200000, { "mAir" }, { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F", 800000, { "mAir" }, { "", "", -1 } },
			{ "B_Heli_Transport_03_unarmed_green_F", 800000, { "mAir" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 150000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 200000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 350000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 500000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 2000000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 2750000, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 1250, { "" }, { "", "", -1 } },
            { "C_SUV_01_F", 17500, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 12500, { "" }, { "", "", -1 } },
			{ "O_T_LSV_02_unarmed_F", 80000, { "" }, { "", "", -1 } },
            { "O_MRAP_02_F", 2000000, { "rebel" }, { "", "", -1 } },
			{ "O_Truck_03_covered_F", 750000, { "rebel" }, { "", "", -1 } },
			{ "O_Truck_03_device_F", 2500000, { "rebel" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 325000, { "rebel" }, { "", "", -1 } },
			{ "I_Heli_Transport_02_F", 1250000, { "rebel" }, { "", "", -1 } },
			{ "B_Heli_Transport_03_unarmed_F", 10000000, { "rebel" }, { "", "", -1 } },
			{ "I_Heli_light_03_unarmed_F",4000000, { "rebel" }, { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", 2500000, { "rebel" }, { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", 12000, { "" }, { "life_coplevel", "SCALAR", 1 } },
			{ "B_GEN_Offroad_01_gen_F", 12000, { "" }, { "life_coplevel", "SCALAR", 1 } },
            { "C_Hatchback_01_F", 10000, { "" }, { "life_coplevel", "SCALAR", 1 } },
			{ "B_Quadbike_01_F", 5000, { "" }, { "life_coplevel", "SCALAR", 1 } },
			{ "C_SUV_01_F", 35000, { "" }, { "life_coplevel", "SCALAR", 2 } },
			{ "I_Truck_02_fuel_F", 50000, { "" }, { "life_coplevel", "SCALAR", 6 } },
			{ "B_Truck_01_covered_F", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } },
            { "C_Hatchback_01_sport_F", 55000, { "" }, { "life_coplevel", "SCALAR", 3 } },
			{ "I_MRAP_03_F", 100000, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "B_MRAP_01_F", 50000, { "" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_CTRG_LSV_01_light_F", 50000, { "" }, { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 600000, { "pilot" }, { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", 1000000, { "pilot" }, { "", "", -1 } },
			{ "C_Plane_Civil_01_F", 1500000, { "pilot" }, { "", "", -1 } },
            { "I_Heli_Transport_02_F", 1750000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 150000, { "cAir" }, { "life_coplevel", "SCALAR", 2 } },
			{ "O_Heli_Light_02_unarmed_F", 400000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
			{ "B_Heli_Transport_01_F", 550000, { "cAir" }, { "life_coplevel", "SCALAR", 5 } },
			{ "I_Heli_light_03_unarmed_F", 1500000, { "cAir" }, { "life_coplevel", "SCALAR", 4 } },
            { "B_Heli_Transport_03_unarmed_F", 2350000, { "cAir" }, { "life_coplevel", "SCALAR", 5 } },
            { "B_CTRG_Heli_Transport_01_tropic_F", 235000, { "cAir" }, { "life_coplevel", "SCALAR", 7 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 3000, { "cg" }, { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", 20000, { "cg" }, { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", 75000, { "cg" }, { "life_coplevel", "SCALAR", 4 } },
            { "B_SDV_01_F", 100000, { "cg" }, { "cg", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 100000, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 250000, { "boat" }, { "", "", -1 } },
			{ "I_C_Boat_Transport_02_F", 500000, { "boat" }, { "", "", -1 } },
			{ "C_Scoooter_Transport_01_F", 40000, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 150000, { "boat" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    	INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 0, 0, 0, 0 };
        chopShop = 1200;
        textures[] = {};
    };
	
	class B_CTRG_Heli_Transport_01_tropic_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 1000, 1000, 1000, 1000 };
        insurance[] = { 10000, 10000, 10000, 10000 };
        chopShop = 450000;
        textures[] = {};
    };

	class C_Scooter_Transport_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 20000, 20000, 20000, 0 };
        insurance[] = { 15000, 15000, 15000, 0 };
        chopShop = 15000;
        textures[] = {
			{ "Noir", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            } },
			{ "Bleu", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            } },
			{ "Gris", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            } },
			{ "Vert", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            } },
			{ "Rouge", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            } },
			{ "Blanc", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            } },
			{ "Jaune", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            } }
		};
    };


	class I_C_Boat_Transport_02_F {
        vItemSpace = 350;
        storageFee[] = { 50000, 50000, 50000, 1000 };
        garageSell[] = { 250000, 250000, 250000, 0 };
        insurance[] = { 40000, 40000, 40000, 0 };
        chopShop = 200000;
        textures[] = {};
    };

	class C_Plane_Civil_01_F {
        vItemSpace = 180;
        storageFee[] = { 30000, 30000, 30000, 30000 };
        garageSell[] = { 500000, 500000, 500000, 0 };
        insurance[] = { 70000, 70000, 70000, 0 };
        chopShop = 400000;
        textures[] = {
			{ "Course (Interieur brun clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Course", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Ligne rouge (Interieur brun clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Ligne rouge", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Souche(Interieur brun clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Souche", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Blue wave (Interieur brun clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Blue wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}
			}
		};
    };


	class B_T_LSV_01_unarmed_F {
        vItemSpace = 80;
        storageFee[] = { 15000, 15000, 15000, 15000 };
        garageSell[] = { 40000, 40000, 40000, 0 };
        insurance[] = { 20000, 20000, 20000, 0 };
        chopShop = 35000;
        textures[] = {};
    };

	class O_T_LSV_02_unarmed_F {
        vItemSpace = 80;
        storageFee[] = { 15000, 15000, 15000, 15000 };
        garageSell[] = { 40000, 40000, 40000, 0 };
        insurance[] = { 20000, 20000, 20000, 0 };
        chopShop = 35000;
        textures[] = {};
    };

	class C_Offroad_02_unarmed_F {
        vItemSpace = 70;
        storageFee[] = { 15000, 150000, 15000, 1000 };
        garageSell[] = { 40000, 40000, 40000, 0 };
        insurance[] = { 20000, 20000, 20000, 0 };
        chopShop = 35000;
        textures[] = {};
    };

	class B_Heli_Attack_01_F {
        vItemSpace = 20;
        storageFee[] = { 100000, 100000, 100000, 100000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 0, 150000, 0, 0 };
        chopShop = 1000000;
        textures[] = {};
    };

	class O_Heli_Transport_04_covered_F {
        vItemSpace = 30;
        storageFee[] = { 75000, 1000, 1000, 1000 };
        garageSell[] = { 400000, 0, 0, 0 };
        insurance[] = { 75000, 0, 0, 0 };
        chopShop = 350000;
        textures[] = {};
    };

    class O_MRAP_02_hmg_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 10000, 10000, 0 };
        garageSell[] = { 65000, 1000, 10000, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 75000;
        textures[] = {
			{ "FTG", "reb", {
				"textures\FTG\Civil\Blinde\FTG_iFirt_BODY.jpg",
				"textures\FTG\Civil\Blinde\FTG_iFrit_BACK.jpg"
			} },
			{ "Forest", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_forest_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_forest_back.jpg"
			} },
			{ "Grey", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_grey_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_grey_back.jpg"
			} },
			{ "Lion", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_lion_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_lion_back.jpg"
			} },
			{ "Black", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_noir2_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_noir2_back.jpg"
			} },
			{ "Red", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_red_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_red_back.jpg"
			} }
        };
    };


	class I_Truck_02_ammo_F {
        vItemSpace = 400;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 1000, 1000, 1000, 1000 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 1200;
        textures[] = {};
    };

	class I_Heli_light_03_unarmed_F {
        vItemSpace = 40;
        storageFee[] = { 60000, 7000, 7000, 70000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 350000, 75000, 75000, 0 };
		chopShop = 120000;
        textures[] = {
			{ "ERT", "med", {
                "textures\FTG\Medecin\hellcatERT.jpg"
            } },
			{ "Rebelle", "reb", {
                "textures\FTG\Civil\Helicoptere\FTG_Hellcat.jpg"
            } },
			{ "Gendarmerie", "cop", {
                "textures\FTG\Gendarmerie\Helicoptere\FTG_Hellcat_Gendarmerie.jpg"
			 } }
        };
    };

	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 50;
        storageFee[] = { 80000, 80000, 80000, 80000 };
        garageSell[] = { 9000000, 1000000, 0, 0 };
        insurance[] = { 350000, 75000, 75000, 0 };
        chopShop = 2000000;
        textures[] = {
            { "Gendarmerie", "cop", {
				"textures\FTG\Gendarmerie\Helicoptere\FTG_HuronFrontGendarmerie.jpg",
                "textures\FTG\Gendarmerie\Helicoptere\FTG_HuronBackGendarmerie.jpg"
            } },
			{ "ERT", "med", {
				"textures\FTG\Medecin\huronFrontERT.jpg",
                "textures\FTG\Medecin\huronBackERT.jpg"
            } },
			{ "Rebelle", "reb", {
                "textures\FTG\Civil\Helicoptere\FTG_huron_front.jpg",
                "textures\FTG\Civil\Helicoptere\FTG_huron_back.jpg"
            } }
        };
    };

	class B_Heli_Transport_03_unarmed_green_F {
        vItemSpace = 50;
        storageFee[] = { 80000, 80000, 80000, 80000 };
        garageSell[] = { 9000000, 1000000, 0, 0 };
        insurance[] = { 350000, 75000, 75000, 0 };
        chopShop = 2000000;
        textures[] = {
			{ "ERT", "med", {
				"textures\FTG\Medecin\huronFrontERT.jpg",
                "textures\FTG\Medecin\huronBackERT.jpg"
            } },
        };
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 12500;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 3000, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 22500;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 6500, 0 };
        garageSell[] = { 0, 0, 25000, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 30000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 200;
        storageFee[] = { 400, 300, 0, 0 };
        garageSell[] = { 950, 350, 0, 0 };
        insurance[] = { 50000,10000, 10000, 0 };
        chopShop = 2500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 40;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance[] = { 350000, 75000, 75000, 0 };
        chopShop = 45000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 100000, 45000, 45000, 0 };
        chopShop = 100000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Av_Gendarmerie.jpg",
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Arr_Gendarmerie.jpg"
            } },
			{ "Hunter War", "civ", {
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Av_war.jpg",
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Arr_war.jpg"
            } }
        };
    };

    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
        garageSell[] = { 0, 21000, 0, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 100000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
        garageSell[] = { 185000, 0, 0, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 225000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 0, 0, 0, 0 };
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 0, 0, 0, 0 };
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 0, 0, 0, 0 };
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 6250;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance[] = { 75000, 75000, 0, 0 };
        chopShop = 100000;
        textures[] = { };
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 300;
        storageFee[] = { 4500, 2500, 0, 0 };
        garageSell[] = { 6800, 3500, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 110000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
        garageSell[] = { 0, 4950, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 1500;
        storageFee[] = { 35000, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 175000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
        garageSell[] = { 135000, 0, 0, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 127500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 10000, 10000, 0 };
        garageSell[] = { 65000, 1000, 10000, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 75000;
        textures[] = {
			{ "FTG", "reb", {
				"textures\FTG\Civil\Blinde\FTG_iFirt_BODY.jpg",
				"textures\FTG\Civil\Blinde\FTG_iFrit_BACK.jpg"
			} },
			{ "Forest", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_forest_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_forest_back.jpg"
			} },
			{ "Grey", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_grey_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_grey_back.jpg"
			} },
			{ "Lion", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_lion_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_lion_back.jpg"
			} },
			{ "Black", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_noir2_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_noir2_back.jpg"
			} },
			{ "Red", "reb", {
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_red_front.jpg",
				"textures\Autre\Vehicles\Civil\Blinde\ifrit_red_back.jpg"
			} }
        };
    };


    class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 5000;
        textures[] = {
			{ "Intervention", "cop", {
				"textures\FTG\Gendarmerie\Blinde\strider_Gendarmerie.jpg"
			} }
		};
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 6250;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
			{ "ERT", "med", {
                "textures\FTG\Medecin\offroadERT.jpg"
            } },
			{ "FTG", "civ", {
                "textures\FTG\Civil\Voiture\FTG_offroad.jpg"
            } },
			{ "Ouvrier", "civ", {
                "textures\FTG\Civil\Voiture\FTG_Offroad_Ouvrier.jpg"
            } },
            { "Taxi", "civ", {
                "textures\Autre\Vehicles\taxi\Voiture\offroad_taxi.paa"
            } },
            { "Civil Blanc", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Civil Bleu", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 250, 250, 250, 0 };
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 250, 250, 250, 0 };
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 250, 250, 250, 0 };
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance[] = { 250, 250, 250, 0 };
        chopShop = 7500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance[] = { 35000, 5000, 5000, 0 };
        chopShop = 15000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
			{ "FTG", "civ", {
                "textures\FTG\Civil\Voiture\FTG_Hatchback.jpg"
            } },
			{ "Pedobear", "civ", {
                "textures\FTG\Civil\Voiture\hatchbear_pedo.jpg"
            } },
			{ "ERT", "med", {
                "textures\FTG\Medecin\hatchbackERT.jpg"
            } },
            { "Gendarmerie", "cop", {
                "textures\FTG\Gendarmerie\Voiture\FTG_Hatchback_Gendarmerie.jpg"
            } },
			{ "Civil Noir/blanc", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 950, 0, 0, 0 };
        insurance[] = { 2500, 500, 500, 0 };
        chopShop = 1250;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
        garageSell[] = { 62000, 0, 0, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 50000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
			{ "FTG", "civ", {
                "textures\FTG\Civil\Camion\FTG_Zamak.jpg",
                "textures\FTG\Civil\Camion\FTG_Zamak_bache.jpg"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
        garageSell[] = { 49800, 3500, 0, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 37500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        storageFee[] = { 25000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance[] = { 150000, 50000, 50000, 0 };
        chopShop = 125000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 4500, 3500, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 4750;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
			{ "FTG", "civ", {
                "textures\FTG\Civil\Voiture\FTG_Hatchback.jpg"
            } },
			{ "Pedobear", "civ", {
                "textures\FTG\Civil\Voiture\hatchbear_pedo.jpg"
            } },
			{ "SMUR", "med", {
                "textures\FTG\Medecin\hatchbackERT.jpg"
            } },
			{ "Gendarmerie", "cop", {
                "textures\FTG\Gendarmerie\Voiture\FTG_Hatchback_Gendarmerie.jpg"
            } },
			{ "Civil Black", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 64;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 15000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
			{ "Monster", "civ", {
                "textures\Autre\Vehicles\Civil\Voiture\monster.jpg"
            } },
			{ "Monster 2", "civ", {
                "textures\Autre\Vehicles\Civil\Voiture\monster_suv.jpg"
            } },
			{ "Camo", "reb", {
                "textures\Autre\Vehicles\Civil\Voiture\suvcamo.jpg"
            } },
			{ "FTG", "civ", {
                "textures\FTG\Civil\Voiture\FTG_SUV.jpg"
            } },
			{ "SMUR", "med", {
                "textures\FTG\Medecin\suvERT.jpg"
            } },
			{ "TAXI", "civ", {
                "textures\Autre\Vehicles\taxi\Voiture\suv_taxi.paa"
            } },
            { "Gendarmerie", "cop", {
                "textures\FTG\Gendarmerie\Voiture\FTG_SUV_gendarmerie.jpg"
            } },
			{ "Civil Grey", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Civil Dark Red", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 25000, 0, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 22500;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "DIR", "med", {
                "\textures\FTG\Medecin\dirtrucktransport.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 200;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 35000, 0, 0, 0 };
        insurance[] = { 25000, 5000, 5000, 0 };
        chopShop = 30000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 15000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Av_Gendarmerie.jpg",
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Arr_Gendarmerie.jpg"
            } },
			{ "Hunter War", "civ", {
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Av_war.jpg",
                "textures\FTG\Gendarmerie\Blinde\FTG_Hunter_Arr_war.jpg"
            } }
        };
    };

    class B_CTRG_LSV_01_light_F {
        vItemSpace = 20;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 15000;
        textures[] = {};
    };

    class B_Heli_Light_01_F {
        vItemSpace = 10;
        storageFee[] = { 45000, 19500, 0, 0 };
        garageSell[] = { 57000, 35000, 0, 0 };
        insurance[] = { 350000, 75000, 75000, 0 };
        chopShop = 125000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\FTG\Gendarmerie\Helicoptere\FTG_LB_Gendarmerie.jpg"
            } },
			{ "GIGN", "cop", {
                "textures\FTG\Gendarmerie\Helicoptere\littlebird_gign.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "FTG", "civ", {
                "textures\FTG\Civil\Helicoptere\FTG_LB.jpg"
            } },
            { "EMS White", "med", {
                "textures\FTG\Medecin\humminbirdERT.jpg"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 40;
        storageFee[] = { 55000, 0, 22000, 0 };
        garageSell[] = { 72500, 0, 35000, 0 };
        insurance[] = { 350000, 75000, 75000, 0 };
        chopShop = 375000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "textures\Autre\Vehicles\Gendarmerie\Helicoptere\Orcagend.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
		};
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 50;
        storageFee[] = { 75000, 0, 0, 0 };
        garageSell[] = { 125000, 0, 0, 0 };
        insurance[] = { 350000, 75000, 75000, 0 };
        chopShop = 5000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 100;
        storageFee[] = { 37500, 10000, 0, 0 };
        garageSell[] = { 75000, 50000, 0, 0 };
        insurance[] = { 75000, 15000, 15000, 0 };
        chopShop = 75000;
        textures[] = {};
    };
};
