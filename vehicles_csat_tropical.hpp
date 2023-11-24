// ------------
// Vehicles - CSAT
// ------------

    // AR-2
    class O_UAV_01_F;
    class O_CA2035_UAV_01_F : O_UAV_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
        crew="O_UAV_AI";
        typicalCargo[]=
        {
            "O_CA2035_Soldier_F"
        };
        class assembleInfo
        {
            primary=1;
            base="";
            assembleTo="";
            displayName="";
            dissasembleTo[]=
            {
                "O_UAV_01_backpack_F"
            };
        };
    };

	// Ifrit
    class O_T_MRAP_02_ghex_F;
    class O_CA2035_MRAP_02_ghex_F : O_T_MRAP_02_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_MRAP_02_hmg_ghex_F;
    class O_CA2035_MRAP_02_hmg_ghex_F : O_T_MRAP_02_hmg_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_MRAP_02_gmg_ghex_F;
    class O_CA2035_MRAP_02_gmg_ghex_F : O_T_MRAP_02_gmg_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

	// BTR-K
    class O_T_APC_Tracked_02_AA_ghex_F;
    class O_CA2035_APC_Tracked_02_AA_ghex_F : O_T_APC_Tracked_02_AA_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_crew_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
    };
    class O_T_APC_Tracked_02_cannon_ghex_F;
    class O_CA2035_APC_Tracked_02_cannon_ghex_F : O_T_APC_Tracked_02_cannon_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_crew_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
    };

	// MSE-3
    class O_T_APC_Wheeled_02_rcws_v2_ghex_F;
    class O_CA2035_APC_Wheeled_02_rcws_v2_ghex_F : O_T_APC_Wheeled_02_rcws_v2_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_crew_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
    };

	// Y-32 Xi'an
    class O_T_VTOL_02_infantry_dynamicLoadout_F;
    class O_CA2035_VTOL_02_infantry_dynamicLoadout_F : O_T_VTOL_02_infantry_dynamicLoadout_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Pilot_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_VTOL_02_vehicle_dynamicLoadout_F;
    class O_CA2035_VTOL_02_vehicle_dynamicLoadout_F : O_T_VTOL_02_vehicle_dynamicLoadout_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Pilot_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
    };


	// PO-30 Orca
    class O_Heli_Light_02_dynamicLoadout_F;
    class O_CA2035_Heli_Light_02_dynamicLoadout_F : O_Heli_Light_02_dynamicLoadout_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Helipilot_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\CA2035\air\heli_light_02\data\heli_light_02_ext_china_co"
		};
		textureList[]=
		{
			"CA2035_CSAT",
			1,
            "CA2035_BLACK",
            0
		};
		class TextureSources
		{
			class CA2035_CSAT
			{
				author="kenoxite";
				displayName="CSAT (Central Africa)";
				factions[]=
				{
					"OPF_CA2035_F"
				};
				textures[]=
				{
					"\CA2035\air\heli_light_02\data\heli_light_02_ext_china_co"
				};
			};
            class CA2035_BLACK
            {
                author="kenoxite";
                displayName="$STR_A3_TEXTURESOURCES_BLACK0";
                factions[]=
                {
                    "OPF_CA2035_F"
                };
                textures[]=
                {
                    "A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
                };
            };
		};

        class TransportBackpacks
        {
            bag_xx(B_Parachute,8);
        };
        class TransportItems
        {
            item_xx(FirstAidKit,8);
            item_xx(ItemGPS,1);
            item_xx(ToolKit,1);
        };
        class TransportMagazines
        {
            mag_xx(30Rnd_580x42_Mag_F,4);
            mag_xx(SmokeShellRed,2);
            mag_xx(SmokeShell,2);
        };
        class TransportWeapons
        {
            weap_xx(arifle_CTAR_blk_F,2);
        };
    };

    class O_Heli_Light_02_unarmed_F;
    class O_CA2035_Heli_Light_02_unarmed_F : O_Heli_Light_02_unarmed_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Helipilot_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\CA2035\air\heli_light_02\data\heli_light_02_ext_china_co"
		};
		textureList[]=
		{
			"CA2035_CSAT",
			1,
			"CA2035_BLACK",
			0
		};
		class TextureSources
		{
			class CA2035_CSAT
			{
				author="kenoxite";
				displayName="CSAT (Central Africa)";
				factions[]=
				{
					"OPF_CA2035_F"
				};
				textures[]=
				{
					"\CA2035\air\heli_light_02\data\heli_light_02_ext_china_co"
				};
			};
			class CA2035_BLACK
			{
				author="kenoxite";
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				factions[]=
				{
					"OPF_CA2035_F"
				};
				textures[]=
				{
					"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
				};
			};
		};

        class TransportBackpacks
        {
            bag_xx(B_Parachute,8);
        };
        class TransportItems
        {
            item_xx(FirstAidKit,8);
            item_xx(ItemGPS,1);
            item_xx(ToolKit,1);
        };
        class TransportMagazines
        {
            mag_xx(30Rnd_580x42_Mag_F,4);
            mag_xx(SmokeShellRed,2);
            mag_xx(SmokeShell,2);
        };
        class TransportWeapons
        {
            weap_xx(arifle_CTAR_blk_F,2);
        };
    };


	// Static AA
    class O_Static_AA_F;
    class O_CA2035_Static_AA_F : O_Static_AA_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			// "\a3\weapons_f_beta\launchers\titan\data\launcher_OPFOR_co.paa",
			// "\a3\weapons_f_beta\launchers\titan\data\tubel_OPFOR_co.paa"
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_01_co.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_B_Titan_tna_F_02_co.paa"
		};
    };

	// Static AT
    class O_Static_AT_F;
    class O_CA2035_Static_AT_F : O_Static_AT_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		hiddenSelections[]=
		{
			"camo_launcher",
			"camo_tube"
		};
		hiddenSelectionsTextures[]=
		{
			// "\a3\weapons_f_beta\launchers\titan\data\launcher_OPFOR_co.paa",
			// "\a3\weapons_f_beta\launchers\titan\data\tubel_OPFOR_co.paa"
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_01_co.paa",
			"\A3\Weapons_F_Exp\Launchers\Titan\Data\launch_O_Titan_ghex_F_02_co.paa"
		};
    };

	// Static HMG
    class O_HMG_01_F;
    class O_CA2035_HMG_01_F : O_HMG_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
    };

    class O_HMG_01_high_F;
    class O_CA2035_HMG_01_high_F : O_HMG_01_high_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
    };

	// Static GMG
    class O_GMG_01_F;
    class O_CA2035_GMG_01_F : O_GMG_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
    };

    class O_GMG_01_high_F;
    class O_CA2035_GMG_01_high_F : O_GMG_01_high_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
    };

	// Static Mortar
    class O_Mortar_01_F;
    class O_CA2035_Mortar_01_F : O_Mortar_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
    };

	/*// Static SAM
    class O_AAA_System_01_F;
    class O_CA2035_AAA_System_01_F : O_AAA_System_01_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
    };*/

	// Tempest truck
    class O_T_Truck_03_transport_ghex_F;
    class O_CA2035_Truck_03_transport_ghex_F : O_T_Truck_03_transport_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_Truck_03_covered_ghex_F;
    class O_CA2035_Truck_03_covered_ghex_F : O_T_Truck_03_covered_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_Truck_03_repair_ghex_F;
    class O_CA2035_Truck_03_repair_ghex_F : O_T_Truck_03_repair_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_Truck_03_ammo_ghex_F;
    class O_CA2035_Truck_03_ammo_ghex_F : O_T_Truck_03_ammo_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_Truck_03_fuel_ghex_F;
    class O_CA2035_Truck_03_fuel_ghex_F : O_T_Truck_03_fuel_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    class O_T_Truck_03_medical_ghex_F;
    class O_CA2035_Truck_03_medical_ghex_F : O_T_Truck_03_medical_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_Soldier_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

	// T-100
    class O_T_MBT_02_cannon_ghex_F;
    class O_CA2035_MBT_02_cannon_ghex_F : O_T_MBT_02_cannon_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_crew_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };
    
    // 2S9 Sochor
    class O_T_MBT_02_arty_ghex_F;
    class O_CA2035_MBT_02_arty_ghex_F : O_T_MBT_02_arty_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
		crew="O_CA2035_crew_F";
		typicalCargo[]=
		{
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F",
			"O_CA2035_Soldier_F"
		};
    };

    // Assault Boat
    class O_T_Boat_Transport_01_F;
    class O_CA2035_Boat_Transport_01_F : O_T_Boat_Transport_01_F{
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
        crew = "O_CA2035_Soldier_F";

		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
    };
    // Speedboat
    class O_T_Boat_Armed_01_hmg_F;
    class O_CA2035_Boat_Armed_01_hmg_F : O_T_Boat_Armed_01_hmg_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
        crew = "O_CA2035_Soldier_F";

		typicalCargo[]=
		{
			"O_CA2035_Soldier_F"
		};
    };
    // Quadbike
    class O_T_Quadbike_01_ghex_F;
    class O_CA2035_Quadbike_01_ghex_F : O_T_Quadbike_01_ghex_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        faction = "OPF_CA2035_F";
        crew = "O_CA2035_Soldier_F";
    };