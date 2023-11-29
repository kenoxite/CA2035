// ------------
// Vehicles - Rebels
// ------------

// Offroad
class I_G_CA2035_Offroad_01_F : I_G_Offroad_01_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Offroad_01_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
    
    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };
};
// Offroad HMG
class I_G_CA2035_Offroad_01_armed_F : I_G_Offroad_01_armed_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Offroad_01_armed_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";

	typicalCargo[]=
	{
		"I_G_CA2035_Soldier_F"
	};
};
// Offroad AT
class I_G_Offroad_01_AT_F;
class I_G_CA2035_Offroad_AT_F : I_G_Offroad_01_AT_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Offroad_AT_F.jpg";
    scope = 1;
    scopeCurator = 1;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";

    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };
};
// Offroad AT
class I_G_Offroad_01_repair_F;
class I_G_CA2035_Offroad_repair_F : I_G_Offroad_01_repair_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Offroad_repair_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";

    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };
};
// Fuel Truck
class I_G_Van_01_fuel_F;
class I_G_CA2035_Van_01_fuel_F : I_G_Van_01_fuel_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Van_01_fuel_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
    
	typicalCargo[]=
	{
		"I_G_CA2035_Soldier_F"
	};
};
// Truck
class I_G_Van_01_transport_F;
class I_G_CA2035_Van_01_transport_F : I_G_Van_01_transport_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Van_01_transport_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
    
    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };
};
// Van (Cargo)
class I_G_Van_02_vehicle_F;
class I_G_CA2035_Van_02_vehicle_F : I_G_Van_02_vehicle_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Van_02_vehicle_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
    
    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };
};
// Van (Transport)
class I_G_Van_02_transport_F;
class I_G_CA2035_Van_02_transport_F : I_G_Van_02_transport_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Van_02_vehicle_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
    
    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };
};
// Quadbike
class I_G_CA2035_Quad_Bike_F : I_CA2035_T_Quad_Bike_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";

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
        1
    };

    class TransportBackpacks
    {
    };
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
};
// MK6 Mortar
class I_G_Mortar_01_F;
class I_G_CA2035_Mortar_01_F : I_G_Mortar_01_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\t\I_G_CA2035_Mortar_01_F.jpg";
    scope = 1;
    scopeCurator = 1;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_F";
};
// HMG 50
class I_G_CA2035_HMG_02_F : I_CA2035_T_MHMG_50_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_HMG_02_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_F";

    class AnimationSources: AnimationSources
    {
        class Hide_Rail: Hide_Rail
        {
            initPhase=1;
        };
    };
};
// HMG 50 Raised
class I_G_CA2035_HMG_02_high_F : I_CA2035_T_MHMG_50_Raised_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_HMG_02_high_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_F";

    class AnimationSources: AnimationSources
    {
        class Hide_Rail: Hide_Rail
        {
            initPhase=1;
        };
    };
};
// Assault Boat
class I_G_Boat_Transport_01_F;
class I_G_CA2035_Boat_Transport_01_F : I_G_Boat_Transport_01_F{
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Boat_Transport_01_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";

	typicalCargo[]=
	{
		"I_G_CA2035_Soldier_F"
	};
};
// Speedboat
class I_C_Boat_Transport_02_F;
class I_G_CA2035_Boat_Transport_02_F : I_C_Boat_Transport_02_F {
    author = "kenoxite";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Boat_Transport_02_F.jpg";
    scope = 2;
    scopeCurator = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";

	typicalCargo[]=
	{
		"I_G_CA2035_Soldier_F"
	};
};
// Water Scooter
class C_Scooter_Transport_01_F;
class I_G_CA2035_Scooter_Transport_01_F : C_Scooter_Transport_01_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Scooter_Transport_01_F.jpg";
    side = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";

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

    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };

    class TransportItems
    {
        item_xx(FirstAidKit,3);
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
            ejectDeadGunner=0;
            isPersonTurret=1;
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
        class CargoTurret_02: CargoTurret_01
        {
            gunnerAction="passenger_inside_3";
            gunnerName="$STR_A3_TURRETS_CARGOTURRET_M";
            memoryPointsGetInGunner="pos cargo";
            memoryPointsGetInGunnerDir="pos cargo dir";
            proxyIndex=2;
            ejectDeadGunner=0;
            class dynamicViewLimits
            {
                // CargoTurret_01[]={35,95};
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
// MB 4WD
class I_C_Offroad_02_unarmed_F;
class I_G_CA2035_Offroad_02_unarmed_F : I_C_Offroad_02_unarmed_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Offroad_02_unarmed_F.jpg";
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
	typicalCargo[]=
	{
		"I_G_CA2035_Soldier_F"
	};
    hiddenSelectionsTextures[]=
    {
        "\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa"
    };

    textureList[]=
    {
        "CA2035_GREEN",
        1
    };
};

class I_G_CA2035_Offroad_02_AT_F : I_C_Offroad_02_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Offroad_02_AT_F.jpg";
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
	typicalCargo[]=
	{
		"I_G_CA2035_Soldier_F"
	};
    hiddenSelectionsTextures[]=
    {
        "\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa"
    };

    textureList[]=
    {
        "CA2035_GREEN",
        1
    };
};

class I_G_CA2035_Offroad_02_LMG_F : I_C_Offroad_02_LMG_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Offroad_02_LMG_F.jpg";
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_Soldier_lite_F";
	typicalCargo[]=
	{
		"I_G_CA2035_Soldier_F"
	};
    hiddenSelectionsTextures[]=
    {
        "\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_ext_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa",
        "\CA2035\soft\offroad_02\data\offroad_02_int_mgreen_co.paa"
    };

    textureList[]=
    {
        "CA2035_GREEN",
        1
    };
};

// Helo light
class Helicopter;
class Helicopter_Base_F: Helicopter
{
    class Turrets;
};
class Helicopter_Base_H: Helicopter_Base_F
{
    class Turrets: Turrets
    {
        class CopilotTurret;
    };
};
class Heli_Light_01_base_F: Helicopter_Base_H
{
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        };
    };
};
class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F
{
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        };
    };
};
class Heli_Light_01_civil_base_F: Heli_Light_01_unarmed_base_F
{
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        };
    };
};
class C_Heli_Light_01_civil_F: Heli_Light_01_civil_base_F
{
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        };
    };
};
class I_G_CA2035_Heli_Light_01_F : C_Heli_Light_01_civil_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Heli_Light_01_F.jpg";
    side = 2;
    faction = "IND_CA2035_G_F";
    crew = "I_G_CA2035_soldier_F";
    displayName="$STR_A3_CfgVehicles_C_Heli_Light_01";

    cost=700000;
    showNVGCargo[]={0,0,1};
    cargoPreciseGetInOut[]={0};
    cargoAction[]=
    {
        "ChopperLight_C_L_static_H",
        "ChopperLight_C_R_static_H",
        "ChopperLight_CB_static_H",
        "ChopperLight_CB_static_H",
        "ChopperLight_CB_static_H",
        "ChopperLight_CB_static_H"
    };

    transportSoldier=0;
    cargoProxyIndexes[]={};
    getInProxyOrder[]={10,11,1,2,3,4};

    typicalCargo[]=
    {
        "I_G_CA2035_Soldier_F"
    };

    class TransportItems
    {
        item_xx(FirstAidKit,3);
    };

    class CargoTurret;
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        };
       
        class CargoTurret_01: CargoTurret
        {
            gunnerAction="passenger_inside_1";
            gunnerCompartments="Compartment1";
            gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
            memoryPointsGetInGunner="pos cargo l";
            memoryPointsGetInGunnerDir="pos cargo dir l";
            proxyIndex=10;
            ejectDeadGunner=0;
            isPersonTurret=1;
            class dynamicViewLimits
            {
            };                
            class TurnOut
            {
                limitsArrayTop[]=
                {
                    {6.5, 50},
                    {6.3, 100.6},
                    {7.2, 111}
                };
                limitsArrayBottom[]=
                {
                    {-44.5, 57.2},
                    {-45, 92.5},
                    {-27.2, 94.7}
                };
            };
            class TurnIn: TurnOut
            {
            };
        };
        class CargoTurret_02: CargoTurret_01
        {
            gunnerAction="passenger_inside_1";
            gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
            memoryPointsGetInGunner="pos cargo r";
            memoryPointsGetInGunnerDir="pos cargo dir r";
            proxyIndex=11;
            class dynamicViewLimits
            {
            };
            class TurnOut
            {
                limitsArrayTop[]=
                {
                    {7.3, -111},
                    {8, -99},
                    {6, -35}
                };
                limitsArrayBottom[]=
                {
                    {-36.8, -92.3},
                    {-36.6, -99},
                    {-39, -59.5}
                };
            };
            class TurnIn: TurnOut
            {
            };
        };
    };
    animationList[]=
    {
        "AddDoors",
        0,
        "AddBackseats",
        1,
        "AddHoldingFrame",
        0,
        "AddTread_Short",
        0,
        "AddTread",
        1
    };
};
