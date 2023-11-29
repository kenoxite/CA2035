// ------------
// Vehicles - Arid
// ------------

// AR-2
class I_CA2035_D_AR_2Darter_F : I_CA2035_T_AR_2Darter_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_AR_2Darter_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew="I_UAV_AI";
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
    typicalCargo[]=
    {
        "I_CA2035_D_Soldier_F"
    };
};
// Quadbike
class I_CA2035_D_Quad_Bike_F : I_CA2035_T_Quad_Bike_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Quad_Bike_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	hiddenSelectionsTextures[] =
	{
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa",
		"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"
	};

	textureList[]=
	{
		"CA2035_TAN",
		1
	};
};
// Offroad HMG
class I_CA2035_D_Offroad_HMG_F : I_CA2035_T_Offroad_HMG_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Offroad_HMG_F.jpg";
    scope = 1;
    scopeCurator = 1;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};

	hiddenSelectionsTextures[] =
	{
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa",
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};
// Offroad
class I_CA2035_D_Offroad_F : I_CA2035_T_Offroad_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Offroad_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
    
	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};

	hiddenSelectionsTextures[] =
	{
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa",
		"\CA2035\soft\offroad_01\data\offroad_01_ext_CA2035_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};

// T-100
class I_CA2035_D_T100_F : I_CA2035_T_T100_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_T100_F.jpg";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-100M Tremor";
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Crew_F";

	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\armor\MBT_02\data\MBT_02_body_CA2035_ard3_CO.paa",
        "\CA2035\armor\MBT_02\data\MBT_02_turret_CA2035_ard3_CO.paa",
        "\CA2035\armor\MBT_02\data\MBT_02_CA2035_ard3_CO.paa",
		//"A3\Armor_F\Data\camonet_green_co.paa"
		// "A3\Armor_F\Data\camonet_nato_green_co.paa"
		// "A3\Armor_F\Data\camonet_csat_stripe_green_co.paa"
		// "A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa"
		// "A3\Armor_F\Data\camonet_greenbeige_co.paa"
		"A3\Armor_F\Data\camonet_nato_desert_co.paa"
		// "A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa"
		// "A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1,
		"CA2035_TAN",
		0
	};
};

// Strider
class I_CA2035_D_Strider_F : I_CA2035_T_Strider_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Strider_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\mrap_03\data\mrap_03_ext_CA2035_ard3_co.paa",
        "\CA2035\data\vehicles\turret_CA2035_ard3_co.paa"
    };

	textureList[]=
	{
		"CA2035_ARD",
		1,
		"CA2035_TAN",
		0
	};
};
// WY-55
class I_CA2035_D_WY_55_F : I_CA2035_T_WY_55_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_WY_55_F.jpg";
    scope = 2;
    scopeCurator = 2;
    displayName = "WY-55 Thunder";
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_HeliPilot_F";

	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};
    
    hiddenSelectionsTextures[]=
    {
        "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_ard3_co.paa"
    };

    textureList[]=
    {
        "CA2035_ARD",
        1,
        "CA2035_TAN",
        0
    };
};
// WY-55 Unarmed
class I_CA2035_D_WY_55_Unarmed_F : I_CA2035_T_WY_55_Unarmed_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_WY_55_Unarmed_F.jpg";
    scope = 2;
    scopeCurator = 2;
    displayName = "WY-55 Thunder (Unarmed)";
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_HeliPilot_F";

	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};
    
    hiddenSelectionsTextures[]=
    {
        "\CA2035\air\heli_light_03\data\heli_light_03_base_CA2035_ard3_co.paa"
    };

    textureList[]=
    {
        "CA2035_ARD",
        1,
        "CA2035_TAN",
        0
    };
};
// MK6 Mortar
class I_CA2035_D_Mk6_Mortar_F : I_CA2035_T_Mk6_Mortar_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Mk6_Mortar_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
};
// HMG 50
class I_CA2035_D_MHMG_50_F : I_CA2035_T_MHMG_50_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_MHMG_50_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
};
// HMG 50 Raised
class I_CA2035_D_MHMG_50_Raised_F : I_CA2035_T_MHMG_50_Raised_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_MHMG_50_Raised_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
};
// MK32 GMG Raised
class I_CA2035_D_GMG_20_mm_Raised_F : I_CA2035_T_GMG_20_mm_Raised_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_GMG_20_mm_Raised_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
};
// MK32 GMG
class I_CA2035_D_GMG_20_mm_F : I_CA2035_T_GMG_20_mm_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_GMG_20_mm_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
};
// Static Titan Launcher (AT)
class I_CA2035_D_static_AT_F : I_CA2035_T_static_AT_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_static_AT_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
};
// Static Titan Launcher (AA)
class I_CA2035_D_static_AA_F : I_CA2035_T_static_AA_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_static_AA_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
};
// Assault Boat
class I_CA2035_D_Assault_Boat_F : I_CA2035_T_Assault_Boat_F{
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Assault_Boat_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};
};
// Speedboat
class I_CA2035_D_Speedboat_Minigun_F : I_CA2035_T_Speedboat_Minigun_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Speedboat_Minigun_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};
};
// Zamak Transport
class I_CA2035_D_Zamak_Transport_F : I_CA2035_T_Zamak_Transport_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Zamak_Transport_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F",
		"I_CA2035_D_Soldier_F",
		"I_CA2035_D_Soldier_F"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};
// Zamak Transport (Covered)
class I_CA2035_D_Zamak_Covered_F : I_CA2035_T_Zamak_Covered_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Zamak_Covered_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F",
		"I_CA2035_D_Soldier_F",
		"I_CA2035_D_Soldier_F"
	};
	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};
// Zamak Fuel
class I_CA2035_D_Zamak_Fuel_F : I_CA2035_T_Zamak_Fuel_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Zamak_Fuel_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_fuel_CA2035_mgreen_co.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};
// Zamak Ammo
class I_CA2035_D_Zamak_Ammo_F : I_CA2035_T_Zamak_Ammo_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Zamak_Ammo_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_repair_CA2035_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};
// Zamak Repair
class I_CA2035_D_Zamak_Repair_F : I_CA2035_T_Zamak_Repair_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Zamak_Repair_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_repair_CA2035_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};
// Zamak Medical
class I_CA2035_D_Zamak_Medical_F : I_CA2035_T_Zamak_Medical_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Zamak_Medical_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";

	hiddenSelectionsTextures[]=
	{
        "\CA2035\soft\Truck_02\data\Truck_02_kab_CA2035_ard3_CO.paa",
        "\CA2035\soft\Truck_02\data\Truck_02_kuz_CA2035_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};

// AFV-4 Gorgon
class I_CA2035_D_APC_Wheeled_03_cannon_F : I_CA2035_T_APC_Wheeled_03_cannon_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "AFV-4 Pioneer";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_APC_Wheeled_03_cannon_F.jpg";
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Crew_F";
	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};

	hiddenSelectionsTextures[]=
	{
		"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_ard3_co.paa",
		"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext2_ard3_co.paa",
		"\CA2035\armor\apc_wheeled_03\data\rcws30_ard3_co.paa",
		"\CA2035\armor\apc_wheeled_03\data\apc_wheeled_03_ext_alpha_ard3_co.paa",
        "A3\Armor_F\Data\camonet_nato_desert_co.paa",
        "A3\armor_f\data\cage_sand_co.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};

// MB 4WD
class I_CA2035_D_Offroad_02_unarmed_F : I_CA2035_T_Offroad_02_unarmed_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Offroad_02_unarmed_F.jpg";
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};

	hiddenSelectionsTextures[]=
	{
		"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};

class I_CA2035_D_Offroad_02_AT_F : I_CA2035_T_Offroad_02_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Offroad_02_AT_F.jpg";
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};

	hiddenSelectionsTextures[]=
	{
		"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};

class I_CA2035_D_Offroad_02_LMG_F : I_CA2035_T_Offroad_02_LMG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Offroad_02_LMG_F.jpg";
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Soldier_F";
	typicalCargo[]=
	{
		"I_CA2035_D_Soldier_F"
	};

	hiddenSelectionsTextures[]=
	{
		"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_ext_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa",
		"\CA2035\soft\offroad_02\data\offroad_02_int_ard3_CO.paa"
	};

	textureList[]=
	{
		"CA2035_ARD",
		1
	};
};


/*
// 2S9 Sochor
class I_CA2035_D_2S9_F : I_CA2035_T_2S9_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "2S9 Crowbar";
    side = 2;
    faction = "IND_CA2035_D_F";
    crew="I_CA2035_D_Crew_F";
    typicalCargo[]=
    {
        "I_CA2035_D_Soldier_F",
        "I_CA2035_D_Soldier_F",
        "I_CA2035_D_Soldier_F"
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\armor\MBT_02\data\MBT_02_body_CA2035_ard3_CO.paa",
        "\CA2035\armor\mbt_01\data\mbt_01_scorcher_CA2035_ard3_co.paa",
        "\CA2035\armor\MBT_02\data\MBT_02_CA2035_ard3_CO.paa",
        "\CA2035\data\vehicles\turret_CA2035_ard3_co.paa",
        "A3\Armor_F\Data\camonet_nato_desert_co.paa"
    };

    textureList[]=
    {
        "CA2035_ARD",
        1,
        "CA2035_TAN",
        0
    };
};
*/


/*   
// MSE-3
class I_CA2035_D_MSE_3_F : I_CA2035_T_MSE_3_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_MSE_3_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_D_F";
    crew = "I_CA2035_D_Crew_F";

    typicalCargo[]=
    {
        "I_CA2035_D_Soldier_F"
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_01_CA2035_ard3_CO.paa",
        "\CA2035\armor\apc_wheeled_02\data\apc_wheeled_02_ext_02_CA2035_ard3_CO.paa",
        "\CA2035\data\vehicles\turret_CA2035_ard3_CO.paa",
        //"A3\Armor_F\Data\camonet_green_co.paa",
        "A3\Armor_F\Data\camonet_nato_green_co.paa",
        // "A3\Armor_F\Data\camonet_csat_stripe_green_co.paa",
        // "A3\Armor_F\Data\camonet_aaf_stripe_green_co.paa",
        // "A3\Armor_F\Data\camonet_greenbeige_co.paa",
        // "A3\Armor_F\Data\camonet_nato_desert_co.paa",
        // "A3\Armor_F\Data\camonet_csat_stripe_desert_co.paa",
        // "A3\Armor_F\Data\camonet_aaf_stripe_desert_co.paa",
        // "A3\armor_f\data\cage_olive_co.paa"
        "A3\armor_f\data\cage_sand_co.paa"
    };

    textureList[]=
    {
        "CA2035_ARD",
        1
    };
};
*/
