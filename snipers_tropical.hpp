// ------------
// Snipers - Tropical
// ------------
    class I_CA2035_T_Sniper_F : I_CA2035_Sniper_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_sniper_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Sniper_F.jpg";
        
        uniformClass = "U_I_CA2035_GhillieSuit_trp";

        linkedItems[] = {
            "V_Chestrig_rgr",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles_INDEP"
        };
        respawnlinkedItems[] = {
            "V_Chestrig_rgr",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles_INDEP"
        };
        
        weapons[] = {
            "srifle_GM6_lrps_f",
            "hgun_Pistol_heavy_01_green_F",
            "Rangefinder",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "srifle_GM6_lrps_f",
            "hgun_Pistol_heavy_01_green_F",
            "Rangefinder",
			"Throw",
			"Put"
            };

        magazines[] = {
            mag_8(5Rnd_127x108_Mag),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(Chemlight_yellow),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(MiniGrenade)
            };
        respawnMagazines[] = {
            mag_8(5Rnd_127x108_Mag),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(Chemlight_yellow),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(MiniGrenade)
            };
    };

    class I_CA2035_T_Spotter_F : I_CA2035_T_Sniper_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName="$STR_B_spotter_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Spotter_F.jpg";

        weapons[] = {
            "arifle_AK12_lush_mrco_pointer_F",
            "hgun_Pistol_heavy_01_green_F",
            "Laserdesignator_03",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_lush_mrco_pointer_F",
            "hgun_Pistol_heavy_01_green_F",
            "Laserdesignator_03",
			"Throw",
			"Put"
            };

        magazines[] = {
            mag_6(30Rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(Laserbatteries),
            mag_1(Chemlight_yellow),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(MiniGrenade)
            };
        respawnMagazines[] = {
            mag_6(30Rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(Laserbatteries),
            mag_1(Chemlight_yellow),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(MiniGrenade)
            };
    };
