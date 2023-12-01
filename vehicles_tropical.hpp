// ------------
// Vehicles - Tropical
// ------------

// AR-2
class I_UAV_01_F;
class I_CA2035_T_AR_2Darter_F : I_UAV_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "AR-2 Darter";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_AR_2Darter_F.jpg";
	crew="I_UAV_AI";
    typicalCargo[]=
    {
        "I_CA2035_T_Soldier_F"
    };
	class assembleInfo
	{
		primary=1;
		base="";
		assembleTo="";
		displayName="";
		dissasembleTo[]=
		{
			"I_CA2035_UAV_01_backpack_F"
		};
	};
    
	forceInGarage=0;

	hiddenSelections[]=
	{
		"Camo1"
	};

	hiddenSelectionsTextures[] =
	{
		"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
	};

	textureList[]=
	{
		"CA2035",
		1
	};
};
// Quadbike
class B_T_Quadbike_01_F;
class I_CA2035_T_Quad_Bike_F : B_T_Quadbike_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Quad Bike";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Quad_Bike_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};

	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
		"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
	};

	textureList[]=
	{
		"CA2035_GREEN",
		1,
		"CA2035_TAN",
		0
	};

	class TextureSources
	{

		class CA2035_TAN
		{
			author="$STR_A3_Bohemia_Interactive";
			displayName="$STR_A3_TEXTURESOURCES_Sand0";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
		};
		class CA2035_GREEN
		{
			author="$STR_A3_Bohemia_Interactive";
			displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
				"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_olive_CO.paa",
				"\A3\Soft_F_Exp\Quadbike_01\Data\Quadbike_01_wheel_olive_CO.paa"
			};
		};
	};

    class VehicleTransport
    {
        class Cargo
        {
            parachuteClass="B_Parachute_02_F";
            parachuteHeightLimit=5;
            canBeTransported=1;
            dimensions[]=
            {
                "BBox_1_1_pos",
                "BBox_1_2_pos"
            };
        };
    };
    transportSoldier=0;

	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,2);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
	};

    class CargoTurret;
    class Turrets
    {
        class CargoTurret_01: CargoTurret
        {
            gunnerAction="passenger_inside_3";
            gunnerCompartments="Compartment1";
            gunnerName="$STR_A3_TURRETS_CARGOTURRET_F";
            memoryPointsGetInGunner="pos cargo";
            memoryPointsGetInGunnerDir="pos cargo dir";
            gunnerGetOutAction="GetOutBoat";
            proxyIndex=1;
            isPersonTurret=1;
            ejectDeadGunner=0;
            class dynamicViewLimits
            {
            };
            class TurnOut
            {
                limitsArrayTop[]=
                {
                    {28.5, -72.6},
                    {33.5, -28.6},
                    {32.7, 5.3},
                    {29.1, 51.2},
                    {25.5, 92.5}
                };
                limitsArrayBottom[]=
                {
                    {-40.7, -99},
                    {-44.5, -60.5},
                    {11.6, -27.4},
                    {20.8, 4.3},
                    {-0.3, 33.8},
                    {-50.2, 62.6},
                    {-49.2, 84.3}
                };
            };
            class TurnIn: TurnOut
            {
            };
        };
    };
};
// Offroad HMG
class I_G_Offroad_01_armed_F;
class I_CA2035_T_Offroad_HMG_F : I_G_Offroad_01_armed_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    // displayName = "Offroad (HMG)";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Offroad_HMG_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"Camo",
		"Camo1"
	};

	hiddenSelectionsTextures[] =
	{
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa",
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa",
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa",
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_mgreen_co.paa",
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_mgreen_co.paa"
			};
		};
	};
    
	animationList[]=
	{
		"HideBumper1",
		1,
		"HideBumper2",
		0,
		"HideDoor1",
		0,
		"HideDoor2",
		0,
		"HideDoor3",
		0.3,
		"HideBackpacks",
		1,
		"Hide_Shield",
		1,
		"Hide_Rail",
		0
	};

	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,12);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShell,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,1);
	};
};
// Offroad
class I_G_Offroad_01_F;
class I_CA2035_T_Offroad_F : I_G_Offroad_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Offroad";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Offroad_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;
    
	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"Camo",
		"Camo1"
	};

	hiddenSelectionsTextures[] =
	{
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa",
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa",
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa",
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_mgreen_co.paa",
                "\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_mgreen_co.paa"
			};
		};
	};
    
	animationList[]=
	{
		"HidePolice",
		1,
		"HideBumper1",
		1,
		"HideBumper2",
		0,
		"HideConstruction",
		1,
		"HideDoor1",
		0,
		"HideDoor2",
		0,
		"HideDoor3",
		0.3,
		"HideBackpacks",
		1
	};

	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,12);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShell,6);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,1);
	};
};

// T-100
class O_MBT_02_cannon_F;
class I_CA2035_T_T100_F : O_MBT_02_cannon_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-100M Tremblement";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_T100_F.jpg";
    crew = "I_CA2035_T_Crew_F";
    
	forceInGarage=0;

    // Export version - same overall armor as MBT-52
	armor=800;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2",
		"Camo3",
		"CamoNet"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_trp1_CO.paa",
        "\CA2035\armor\mbt_02\data\MBT_02_turret_CA2035_trp1_CO.paa",
        "\CA2035\armor\mbt_02\data\MBT_02_CA2035_trp1_CO.paa",
		//"A3\Armor_F\Data\camonet_green_co.paa"
		"A3\Armor_F\Data\camonet_nato_green_co.paa"
		// "A3\Armor_F\Data\camonet_csat_stripe_green_co.paa"
		// "A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa"
		// "A3\Armor_F\Data\camonet_greenbeige_co.paa"
		// "A3\Armor_F\Data\camonet_nato_desert_co.paa"
		// "A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa"
		// "A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa"
	};

	textureList[]=
	{
		"CA2035_GREEN",
		0,
		"CA2035_ARD",
		0,
		"CA2035_TRP",
		1,
		"CA2035_TAN",
		0
	};

	class TextureSources
	{
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
	            "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_mgreen_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_turret_CA2035_mgreen_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_CA2035_mgreen_CO.paa",
				"A3\Armor_F\Data\camonet_green_co.paa"
			};
		};
		class CA2035_ard1
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
	            "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_ard3_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_turret_CA2035_ard3_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_CA2035_ard3_CO.paa",
				"A3\Armor_F\Data\camonet_nato_desert_co.paa"
			};
		};
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
	            "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_trp1_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_turret_CA2035_trp1_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_CA2035_trp1_CO.paa",
				"A3\Armor_F\Data\camonet_nato_green_co.paa"
			};
		};
		class CA2035_TAN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_Sand0";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
	            "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_tan_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_turret_CA2035_tan_CO.paa",
	            "\CA2035\armor\mbt_02\data\MBT_02_CA2035_tan_CO.paa",
				"A3\Armor_F\Data\camonet_nato_desert_co.paa"
			};
		};
    };

	animationList[]=
	{
		"showCamonetHull",
		0.5,
		"showCamonetTurret",
		0.2,
		"showLog",
		1
	};
	
    class TransportWeapons
    {
        weap_xx(arifle_AK12_F,2);
    };
    
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,12);
		mag_xx(HandGrenade,6);
		mag_xx(SmokeShell,6);
	};
};

// Strider
class I_MRAP_03_F;
class I_CA2035_T_Strider_F : I_MRAP_03_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Strider";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Strider_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_trp1_co.paa",
        "\CA2035\data\vehicles\turret_CA2035_trp1_co.paa"
    };

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0,
		"CA2035_TAN",
		0,
		"CA2035_WHITE",
		0,
		"CA2035_BLACK",
		0
	};

	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
	            "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_trp1_co.paa",
	            "\CA2035\data\vehicles\turret_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
	            "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_ard3_co.paa",
	            "\CA2035\data\vehicles\turret_CA2035_ard3_co.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
	            "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_mgreen_co.paa",
	            "\CA2035\data\vehicles\turret_CA2035_mgreen_co.paa"
			};
		};
		class CA2035_TAN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_Sand0";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
	            // "\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa",
	            // "\a3\data_f\vehicles\turret_co.paa"
	            "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_tan_co.paa",
	            "\CA2035\data\vehicles\turret_CA2035_tan_co.paa"
			};
		};
		class CA2035_WHITE
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_WHITE0";
			factions[]=
			{
				"IND_CA2035_T_F",
				"IND_CA2035_D_F"
			};
			textures[]=
			{
	            "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_white_co.paa",
	            "\CA2035\data\vehicles\turret_CA2035_white_co.paa"
			};
		};
		class CA2035_BLACK
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_BLACK0";
			factions[]=
			{
				"IND_CA2035_T_F",
				"IND_CA2035_D_F"
			};
			textures[]=
			{
	            "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_black_co.paa",
	            "\CA2035\data\vehicles\turret_CA2035_black_co.paa"
			};
		};
    };
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,16);
		mag_xx(75rnd_762x39_AK12_Mag_F,8);
		mag_xx(HandGrenade,10);
		mag_xx(SmokeShell,6);
		mag_xx(1Rnd_HE_Grenade_shell,10);
		mag_xx(10Rnd_9x21_Mag,12);
		mag_xx(RPG7_F,2);
		mag_xx(RPG32_F,4);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
};
// WY-55
class I_Heli_light_03_dynamicLoadout_F;
class I_CA2035_T_WY_55_F : I_Heli_light_03_dynamicLoadout_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "WY-55 Tonnerre";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_WY_55_F.jpg";
    crew = "I_CA2035_T_HeliPilot_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo"
	};

    textureList[]=
    {
        "CA2035_GREEN",
        0,
        "CA2035_ARD",
        0,
        "CA2035_TRP",
        1,
        "CA2035_TAN",
        0
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_trp1_co.paa"
    };

    class TextureSources
    {
        class CA2035_GREEN
        {
            author="kenoxite";
            displayName="$STR_A3_TEXTURESOURCES_GREEN0";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {                    
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_mgreen_co.paa"
            };
        };
        class CA2035_ard1
        {
            author="kenoxite";
            displayName="CAAF (Semi-Arid)";
            factions[]=
            {
                "IND_CA2035_D_F"
            };
            textures[]=
            {
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_ard3_co.paa"
            };
        };
        class CA2035_TRP
        {
            author="kenoxite";
            displayName="CAAF (Tropic)";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_trp1_co.paa"
            };
        };
        class CA2035_TAN
        {
            author="kenoxite";
            displayName="$STR_A3_TEXTURESOURCES_Sand0";
            factions[]=
            {
                "IND_CA2035_D_F"
            };
            textures[]=
            {                    
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_tan_co.paa"
            };
        };
    };
    
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,6);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(ItemGPS,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
};
// WY-55 Unarmed
class I_Heli_light_03_unarmed_F;
class I_CA2035_T_WY_55_Unarmed_F : I_Heli_light_03_unarmed_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "WY-55 Tonnerre (Unarmed)";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_WY_55_Unarmed_F.jpg";
    crew = "I_CA2035_T_HeliPilot_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo"
	};

    textureList[]=
    {
        "CA2035_GREEN",
        0,
        "CA2035_ARD",
        0,
        "CA2035_TRP",
        1,
        "CA2035_TAN",
        0
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_trp1_co.paa"
    };

    class TextureSources
    {
        class CA2035_GREEN
        {
            author="kenoxite";
            displayName="$STR_A3_TEXTURESOURCES_GREEN0";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {                    
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_mgreen_co.paa"
            };
        };
        class CA2035_ard1
        {
            author="kenoxite";
            displayName="CAAF (Semi-Arid)";
            factions[]=
            {
                "IND_CA2035_D_F"
            };
            textures[]=
            {
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_ard3_co.paa"
            };
        };
        class CA2035_TRP
        {
            author="kenoxite";
            displayName="CAAF (Tropic)";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_trp1_co.paa"
            };
        };
        class CA2035_TAN
        {
            author="kenoxite";
            displayName="$STR_A3_TEXTURESOURCES_Sand0";
            factions[]=
            {
                "IND_CA2035_D_F"
            };
            textures[]=
            {                    
                "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_tan_co.paa"
            };
        };
    };
	
	class TransportBackpacks
	{
		bag_xx(B_Parachute,6);
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,6);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
		item_xx(ItemGPS,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,4);
		mag_xx(SmokeShell,2);
		mag_xx(SmokeShellGreen,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
	};
};
// MK6 Mortar
class I_Mortar_01_F;
class I_CA2035_T_Mk6_Mortar_F : I_Mortar_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Mk6 Mortar";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Mk6_Mortar_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;
};
// HMG 50
class HMG_02_base_F;
class HMG_02_CA2035_base_F:HMG_02_base_F {
	class AnimationSources
	{
		class Hide_Shield
		{
			displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Shield0";
			useSource=1;
			source="user";
			animPeriod=0.0099999998;
			initPhase=1;
		};
		class Hide_Rail
		{
			displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Rail0";
			useSource=1;
			source="user";
			animPeriod=0.0099999998;
			initPhase=0;
		};
		class muzzle_source
		{
			source="reload";
			weapon="HMG_M2_Mounted";
		};
		class muzzle_source_rot
		{
			source="ammorandom";
			weapon="HMG_M2_Mounted";
		};
		class ReloadAnim
		{
			source="reload";
			weapon="HMG_M2_Mounted";
		};
		class ReloadMagazine
		{
			source="reloadmagazine";
			weapon="HMG_M2_Mounted";
		};
		class Revolving
		{
			source="revolving";
			weapon="HMG_M2_Mounted";
		};
	};
};

// class I_HMG_02_F:HMG_02_base_F { class AnimationSources; };
class I_CA2035_T_MHMG_50_F : HMG_02_CA2035_base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "M2 HMG .50";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_MHMG_50_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;        
};
// HMG 50 Raised
class HMG_02_high_base_F;
class HMG_02_CA2035_high_base_F:HMG_02_high_base_F {
	class AnimationSources
	{
		class Hide_Shield
		{
			displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Shield0";
			useSource=1;
			source="user";
			animPeriod=0.0099999998;
			initPhase=0;
		};
		class Hide_Rail
		{
			displayName="$STR_A3_C_CfgVehicles_HMG_02_base_F_AnimationSources_Hide_Rail0";
			useSource=1;
			source="user";
			animPeriod=0.0099999998;
			initPhase=0;
		};
		class muzzle_source
		{
			source="reload";
			weapon="HMG_M2_Mounted";
		};
		class muzzle_source_rot
		{
			source="ammorandom";
			weapon="HMG_M2_Mounted";
		};
		class ReloadAnim
		{
			source="reload";
			weapon="HMG_M2_Mounted";
		};
		class ReloadMagazine
		{
			source="reloadmagazine";
			weapon="HMG_M2_Mounted";
		};
		class Revolving
		{
			source="revolving";
			weapon="HMG_M2_Mounted";
		};
	};
};
	class I_CA2035_T_MHMG_50_Raised_F : HMG_02_CA2035_high_base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "M2 HMG .50 (Raised)";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_MHMG_50_Raised_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;
};
// MK32 GMG
class I_GMG_01_F;
class I_CA2035_T_GMG_20_mm_F : I_GMG_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Mk32 GMG 20 mm";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_GMG_20_mm_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;
};
// MK32 GMG Raised
class I_GMG_01_high_F;
class I_CA2035_T_GMG_20_mm_Raised_F : I_GMG_01_high_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Mk32 GMG 20 mm (Raised)";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_GMG_20_mm_Raised_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;
};
// Static Titan Launcher (AT)
class I_static_AT_F;
class I_CA2035_T_static_AT_F : I_static_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Static Titan Launcher (AT) [CAAF]";
    side = 2;
    faction = "IND_CA2035_T_F";
	editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_static_AT_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;
};
// Static Titan Launcher (AA)
class I_static_AA_F;
class I_CA2035_T_static_AA_F : I_static_AA_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Static Titan Launcher (AA) [CAAF]";
    side = 2;
    faction = "IND_CA2035_T_F";
	editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_static_AA_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;
    hiddenSelections[]=
    {
        "camo_launcher",
        "camo_tube"
    };
    hiddenSelectionsTextures[]=
    {
        "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
        "\CA2035\weapons\launchers\data\tubel_caaf_co.paa"
    };

    textureList[]=
    {
        "CA2035",
        1
    };

    class TextureSources
    {
        class CA2035
        {
            author="kenoxite";
            displayName="CAAF";
            factions[]=
            {
                "IND_CA2035_T_F",
                "IND_CA2035_D_F"
            };
            textures[]=
            {
                "\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa",
                "\CA2035\weapons\launchers\data\tubel_caaf_co.paa"
            };
        };
    };
};
// Assault Boat
class I_Boat_Transport_01_F;
class I_CA2035_T_Assault_Boat_F : I_Boat_Transport_01_F{
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Assault Boat";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Assault_Boat_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa"
	};

	textureList[]=
	{
		"CA2035",
		1
	};
	
	class TransportItems
	{
		item_xx(FirstAidKit,1);
	};
};
// Speedboat
class I_Boat_Armed_01_minigun_F;
class I_CA2035_T_Speedboat_Minigun_F : I_Boat_Armed_01_minigun_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Speedboat Minigun";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Speedboat_Minigun_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Boat_F\Boat_Armed_01\Data\Boat_Armed_01_ext_CO.paa"
	};

	textureList[]=
	{
		"CA2035",
		1
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
	};
};
// Zamak Transport
class I_Truck_02_transport_F;
class I_CA2035_T_Zamak_Transport_F : I_Truck_02_transport_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Transport";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Zamak_Transport_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F",
		"I_CA2035_T_Soldier_F",
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_trp1_co.paa"
	};


	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_mgreen_co.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_mgreen_co.paa"
			};
		};
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(ToolKit,1);
	};
};
// Zamak Transport (Covered)
class I_Truck_02_covered_F;
class I_CA2035_T_Zamak_Covered_F : I_Truck_02_covered_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Transport (Covered)";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Zamak_Covered_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F",
		"I_CA2035_T_Soldier_F",
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_trp1_co.paa"
	};


	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_mgreen_co.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_mgreen_co.paa"
			};
		};
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(ToolKit,1);
	};
};
// Zamak Fuel
class I_Truck_02_fuel_F;
class I_CA2035_T_Zamak_Fuel_F : I_Truck_02_fuel_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Fuel";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Zamak_Fuel_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
        "\CA2035\soft\truck_02\data\truck_02_fuel_CA2035_mgreen_co.paa"
	};


	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
                "\CA2035\soft\truck_02\data\truck_02_fuel_CA2035_mgreen_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
                "\CA2035\soft\truck_02\data\truck_02_fuel_CA2035_mgreen_co.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_mgreen_co.paa",
                "\CA2035\soft\truck_02\data\truck_02_fuel_CA2035_mgreen_co.paa"
			};
		};
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(ToolKit,1);
	};
};
// Zamak Ammo
class I_Truck_02_ammo_F;
class I_CA2035_T_Zamak_Ammo_F : I_Truck_02_Ammo_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Ammo";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Zamak_Ammo_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
        "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
                "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
                "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_mgreen_co.paa",
                "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_mgreen_co.paa"
			};
		};
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(ToolKit,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,48);
		mag_xx(75rnd_762x39_AK12_Mag_F,24);
		mag_xx(HandGrenade,12);
		mag_xx(MiniGrenade,12);
		mag_xx(1Rnd_HE_Grenade_shell,12);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellPurple,8);
		mag_xx(RPG7_F,12);
		mag_xx(RPG32_F,12);
		mag_xx(Titan_AT,4);
		mag_xx(Titan_AP,4);
		mag_xx(Titan_AA,4);
	};
};
// Zamak Repair
class I_Truck_02_box_F;
class I_CA2035_T_Zamak_Repair_F : I_Truck_02_Box_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Repair";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Zamak_Repair_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
        "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
                "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
                "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_mgreen_co.paa",
                "\CA2035\soft\truck_02\data\truck_02_repair_CA2035_mgreen_co.paa"
			};
		};
	};

	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(ToolKit,3);
	};
};
// Zamak Medical
class I_Truck_02_medical_F;
class I_CA2035_T_Zamak_Medical_F : I_Truck_02_Medical_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "Zamak Medical";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Zamak_Medical_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_trp1_co.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
                "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_mgreen_co.paa",
                "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_mgreen_co.paa"
			};
		};
	};

	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,3);
		item_xx(ToolKit,1);
	};
};

// AFV-4 Gorgon
class I_APC_Wheeled_03_base_F;
class I_APC_Wheeled_03_cannon_F: I_APC_Wheeled_03_base_F { class AnimationSources; };
class I_CA2035_T_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_cannon_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "AFV-4 Pionnier";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_APC_Wheeled_03_cannon_F.jpg";
    crew = "I_CA2035_T_Crew_F";

	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"CamoNet",
		"CamoSlat"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_trp1_co.paa",
		"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext2_trp1_co.paa",
		"\CA2035\armor\apc_wheeled_03\data\rcws30_trp1_co.paa",
		"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_trp1_co.paa",
		//"A3\Armor_F\Data\camonet_green_co.paa",
		"A3\Armor_F\Data\camonet_nato_green_co.paa",
		// "A3\Armor_F\Data\camonet_csat_stripe_green_co.paa",
		// "A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa",
		// "A3\Armor_F\Data\camonet_greenbeige_co.paa",
		// "A3\Armor_F\Data\camonet_nato_desert_co.paa",
		// "A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa",
		// "A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa",
		"A3\armor_f\data\cage_olive_co.paa"
        //"A3\armor_f\data\cage_sand_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_trp1_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext2_trp1_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\rcws30_trp1_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_trp1_co.paa",
                "A3\Armor_F\Data\camonet_nato_green_co.paa",
                "A3\armor_f\data\cage_olive_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_ard3_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext2_ard3_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\rcws30_ard3_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_ard3_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa",
                "A3\armor_f\data\cage_sand_co.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_mgreen_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext2_mgreen_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\rcws30_mgreen_co.paa",
				"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_mgreen_co.paa",
				"A3\Armor_F\Data\camonet_green_co.paa",
				"A3\armor_f\data\cage_olive_co.paa"
			};
		};
	};
    
	animationList[]=
	{
		"showCamonetHull",
		0.5,
		"showBags",
		0,
		"showBags2",
		0.8,
		"showTools",
		0.3,
		"showSLATHull",
		0.5
	};

	class EventHandlers
	{
		fired="_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		killed="_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
	};

	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,10);
		item_xx(Medikit,1);
		item_xx(ToolKit,1);
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_762x39_AK12_Mag_F,24);
		mag_xx(75rnd_762x39_AK12_Mag_F,10);
		mag_xx(HandGrenade,6);
		mag_xx(MiniGrenade,6);
		mag_xx(1Rnd_HE_Grenade_shell,6);
		mag_xx(1Rnd_Smoke_Grenade_shell,3);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
		mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
		mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
		mag_xx(SmokeShell,8);
		mag_xx(SmokeShellGreen,8);
		mag_xx(SmokeShellPurple,8);
		mag_xx(RPG7_F,3);
		mag_xx(RPG32_F,6);
		mag_xx(Titan_AT,2);
		mag_xx(Titan_AP,2);
		mag_xx(Titan_AA,2);
	};
	class TransportWeapons
	{
		weap_xx(arifle_AK12_F,2);
		weap_xx(arifle_RPK12_F,1);
		weap_xx(launch_RPG32_green_F,1);
	};
};

// MB 4WD
class C_Offroad_02_unarmed_F;
class I_CA2035_T_Offroad_02_unarmed_F : C_Offroad_02_unarmed_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "MB 4WD";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Offroad_02_unarmed_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F",
				"IND_CA2035_G_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa"
			};
		};
	};
	animationList[]=
	{
		"hideLeftDoor",
		0.69999999,
		"hideRightDoor",
		0.69999999,
		"hideRearDoor",
		0.40000001,
		"hideBullbar",
		0,
		"hideFenders",
		0.69999999,
		"hideHeadSupportFront",
		0.5,
		"hideHeadSupportRear",
		0.69999999,
		"hideRollcage",
		0,
		"hideSeatsRear",
		0,
		"hideSpareWheel",
		0.80000001
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(ToolKit,1);
	};
};

class I_C_Offroad_02_AT_F;
class I_CA2035_T_Offroad_02_AT_F : I_C_Offroad_02_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "MB 4WD (AT)";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Offroad_02_AT_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F",
				"IND_CA2035_G_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa"
			};
		};
	};

	animationList[]=
	{
		"hideLeftDoor",
		0.69999999,
		"hideRightDoor",
		0.69999999,
		"hideRearDoor",
		0.40000001,
		"hideBullbar",
		1,
		"hideFenders",
		0.69999999,
		"hideHeadSupportFront",
		0.5,
		"hideHeadSupportRear",
		0.69999999,
		"hideRollcage",
		1,
		"hideSpareWheel",
		0.80000001,
		"hideSeatsRear",
		1
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(ToolKit,1);
	};
    class TransportMagazines
    {
        mag_xx(RPG32_F,4);
    };
};

class I_C_Offroad_02_LMG_F;
class I_CA2035_T_Offroad_02_LMG_F : I_C_Offroad_02_LMG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    // displayName = "MB 4WD (LMG)";
    side = 2;
    faction = "IND_CA2035_T_F";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Offroad_02_LMG_F.jpg";
    crew = "I_CA2035_T_Soldier_F";
    
	forceInGarage=0;

	typicalCargo[]=
	{
		"I_CA2035_T_Soldier_F"
	};

	hiddenSelections[]=
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa"
	};

	textureList[]=
	{
		"CA2035_TRP",
		1,
		"CA2035_ARD",
		0,
		"CA2035_GREEN",
		0
	};
	class TextureSources
	{
		class CA2035_TRP
		{
			author="kenoxite";
			displayName="CAAF (Tropic)";
			factions[]=
			{
				"IND_CA2035_T_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_trp1_co.paa"
			};
		};
		class CA2035_ARD
		{
			author="kenoxite";
			displayName="CAAF (Semi-Arid)";
			factions[]=
			{
				"IND_CA2035_D_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa"
			};
		};
		class CA2035_GREEN
		{
			author="kenoxite";
			displayName="$STR_A3_TEXTURESOURCES_GREEN0";
			factions[]=
			{
				"IND_CA2035_T_F",
				"IND_CA2035_G_F"
			};
			textures[]=
			{
				"\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa",
				"\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa"
			};
		};
	};
	animationList[]=
	{
		"hideLeftDoor",
		0.69999999,
		"hideRightDoor",
		0.69999999,
		"hideRearDoor",
		0.40000001,
		"hideBullbar",
		1,
		"hideFenders",
		0.69999999,
		"hideHeadSupportFront",
		0.5,
		"hideHeadSupportRear",
		0.69999999,
		"hideRollcage",
		1,
		"hideSpareWheel",
		0.80000001,
		"hideSeatsRear",
		1
	};
	
	class TransportBackpacks
	{
		bag_xx(B_FieldPack_green_F,1);
	};
	class TransportItems
	{
		item_xx(FirstAidKit,4);
		item_xx(ToolKit,1);
	};
};


/*
// 2S9 Sochor
class O_T_MBT_02_arty_ghex_F;
class I_CA2035_T_2S9_F : O_T_MBT_02_arty_ghex_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "2S9 Levier";
    side = 2;
    faction = "IND_CA2035_T_F";
    crew="I_CA2035_T_Crew_F";
    typicalCargo[]=
    {
        "I_CA2035_T_Soldier_F",
        "I_CA2035_T_Soldier_F",
        "I_CA2035_T_Soldier_F"
    };

    textureList[]=
    {
        "CA2035_GREEN",
        0,
        "CA2035_ARD",
        0,
        "CA2035_TRP",
        1,
        "CA2035_TAN",
        0
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_trp1_CO.paa",
        "\CA2035\armor\mbt_01\data\mbt_01_scorcher_CA2035_trp1_co.paa",
        "\CA2035\armor\mbt_02\data\MBT_02_CA2035_trp1_CO.paa",
        "\CA2035\data\vehicles\turret_CA2035_trp1_co.paa",
        "A3\Armor_F\Data\camonet_nato_green_co.paa"
    };

    class TextureSources
    {
        class CA2035_GREEN
        {
            author="kenoxite";
            displayName="$STR_A3_TEXTURESOURCES_GREEN0";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {                    
                "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_mgreen_CO.paa",
                "\CA2035\armor\mbt_01\data\mbt_01_scorcher_CA2035_mgreen_co.paa",
                "\CA2035\armor\mbt_02\data\MBT_02_CA2035_mgreen_CO.paa",
                "\CA2035\data\vehicles\turret_CA2035_mgreen_co.paa",
                "A3\Armor_F\Data\camonet_green_co.paa"
            };
        };
        class CA2035_ard1
        {
            author="kenoxite";
            displayName="CAAF (Semi-Arid)";
            factions[]=
            {
                "IND_CA2035_D_F"
            };
            textures[]=
            {
                "\CA2035\armor\MBT_02\data\MBT_02_body_CA2035_ard3_CO.paa",
                "\CA2035\armor\mbt_01\data\mbt_01_scorcher_CA2035_ard3_co.paa",
                "\CA2035\armor\MBT_02\data\MBT_02_CA2035_ard3_CO.paa",
                "\CA2035\data\vehicles\turret_CA2035_ard3_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa"
            };
        };
        class CA2035_TRP
        {
            author="kenoxite";
            displayName="CAAF (Tropic)";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {
                "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_trp1_CO.paa",
                "\CA2035\armor\mbt_01\data\mbt_01_scorcher_CA2035_trp1_co.paa",
                "\CA2035\armor\mbt_02\data\MBT_02_CA2035_trp1_CO.paa",
                "\CA2035\data\vehicles\turret_CA2035_trp1_co.paa",
                "A3\Armor_F\Data\camonet_nato_green_co.paa"
            };
        };
        class CA2035_TAN
        {
            author="kenoxite";
            displayName="$STR_A3_TEXTURESOURCES_Sand0";
            factions[]=
            {
                "IND_CA2035_D_F"
            };
            textures[]=
            {                    
                "\CA2035\armor\mbt_02\data\MBT_02_body_CA2035_tan_CO.paa",
                "\CA2035\armor\mbt_01\data\mbt_01_scorcher_CA2035_tan_co.paa",
                "\CA2035\armor\mbt_02\data\MBT_02_CA2035_tan_CO.paa",
                "\CA2035\data\vehicles\turret_CA2035_tan_co.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa"
            };
        };
    };
    
    class TransportWeapons
    {
        weap_xx(arifle_AK12_F,2);
    };
    
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_762x39_AK12_Mag_F,4);
        mag_xx(SmokeShellYellow,2);
        mag_xx(SmokeShell,2);
    };
};
*/   

/* 
// MSE-3
class O_APC_Wheeled_02_rcws_v2_F;
class I_CA2035_T_MSE_3_F : O_APC_Wheeled_02_rcws_v2_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "MSE-3 Cri";
    side = 2;
    faction = "IND_CA2035_T_F";
    //editorPreview = "\CA2035\indep\previews\t\I_CA2035_FV_720_TRP_01.jpg";
    crew = "I_CA2035_T_Crew_F";
    
    forceInGarage=0;

    typicalCargo[]=
    {
        "I_CA2035_T_Soldier_F"
    };

    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3",
        "CamoNet",
        "CamoSlat"
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_01_CA2035_trp1_co.paa",
        "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_02_CA2035_trp1_co.paa",
        "\CA2035\data\vehicles\turret_CA2035_trp1_co.paa",
        //"A3\Armor_F\Data\camonet_green_co.paa",
        "A3\Armor_F\Data\camonet_nato_green_co.paa",
        // "A3\Armor_F\Data\camonet_csat_stripe_green_co.paa",
        // "A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa",
        // "A3\Armor_F\Data\camonet_greenbeige_co.paa",
        // "A3\Armor_F\Data\camonet_nato_desert_co.paa",
        // "A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa",
        // "A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa",
        "A3\armor_f\data\cage_olive_co.paa"
        //"A3\armor_f\data\cage_sand_co.paa"
    };

    textureList[]=
    {
        "CA2035_TRP",
        1,
        "CA2035_ARD",
        0,
        "CA2035_GREEN",
        0
    };
    class TextureSources
    {
        class CA2035_TRP
        {
            author="kenoxite";
            displayName="CAAF (Tropic)";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {
                "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_01_CA2035_TRP_co.paa",
                "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_02_CA2035_TRP_co.paa",
                "\CA2035\data\vehicles\turret_CA2035_TRP_co.paa",
                "A3\Armor_F\Data\camonet_nato_green_co.paa",
                "A3\armor_f\data\cage_olive_co.paa"
            };
        };
        class CA2035_ARD
        {
            author="kenoxite";
            displayName="CAAF (Semi-Arid)";
            factions[]=
            {
                "IND_CA2035_D_F"
            };
            textures[]=
            {
                "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_01_CA2035_ard3_CO.paa",
                "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_02_CA2035_ard3_CO.paa",
                "\CA2035\data\vehicles\turret_CA2035_ard3_CO.paa",
                "A3\Armor_F\Data\camonet_nato_desert_co.paa",
                "A3\armor_f\data\cage_sand_co.paa"
            };
        };
        class CA2035_GREEN
        {
            author="kenoxite";
            displayName="$STR_A3_TEXTURESOURCES_GREEN0";
            factions[]=
            {
                "IND_CA2035_T_F"
            };
            textures[]=
            {
                "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_01_CA2035_mgreen_co.paa",
                "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_02_CA2035_mgreen_co.paa",
                "\CA2035\data\vehicles\turret_CA2035_mgreen_co.paa",
                "A3\Armor_F\Data\camonet_green_co.paa",
                "A3\armor_f\data\cage_olive_co.paa"
            };
        };
    };
    
    animationList[]=
    {
        "showBags",
        0,
        "showCanisters",
        1,
        "showTools",
        0.3,
        "showCamonetHull",
        0.5,
        "showSLATHull",
        0
    };

    class TransportItems
    {
        item_xx(FirstAidKit,10);
        item_xx(Medikit,1);
        item_xx(ToolKit,1);
    };
    class TransportMagazines
    {
        mag_xx(30Rnd_762x39_AK12_Mag_F,24);
        mag_xx(75rnd_762x39_AK12_Mag_F,10);
        mag_xx(HandGrenade,6);
        mag_xx(MiniGrenade,6);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(1Rnd_Smoke_Grenade_shell,3);
        mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,3);
        mag_xx(1Rnd_SmokePurple_Grenade_shell,3);
        mag_xx(SmokeShell,8);
        mag_xx(SmokeShellGreen,8);
        mag_xx(SmokeShellPurple,8);
        mag_xx(RPG7_F,3);
        mag_xx(RPG32_F,6);
        mag_xx(Titan_AT,2);
        mag_xx(Titan_AP,2);
        mag_xx(Titan_AA,2);
    };
    class TransportWeapons
    {
        weap_xx(arifle_AK12_F,2);
        weap_xx(arifle_RPK12_F,1);
        weap_xx(launch_RPG32_green_F,1);
    };
};
*/
