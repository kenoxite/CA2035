// ------------
// Snipers - Arid
// ------------
    class I_CA2035_D_Sniper_F : I_CA2035_T_Sniper_F {
        author = "kenoxite";
        editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Sniper_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035_D_F";
        identityTypes[] = {
            "Head_African",
            "LanguageENGFRE_F",
            "G_CA2035_Army"
            };

        uniformClass = "U_I_CA2035_GhillieSuit_ard";

        linkedItems[] = {
            "V_Chestrig_khk",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles"
        };
        respawnlinkedItems[] = {
            "V_Chestrig_khk",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles"
        };
        
        weapons[] = {
            "srifle_GM6_lrps_f",
            "hgun_Pistol_heavy_01_F",
            "Rangefinder",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "srifle_GM6_lrps_f",
            "hgun_Pistol_heavy_01_F",
            "Rangefinder",
            "Throw",
            "Put"
            };

    };

    class I_CA2035_D_Spotter_F : I_CA2035_T_Spotter_F {
        author = "kenoxite";
        editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Spotter_F.jpg";
        scope = 2;
        scopeCurator = 2;
        faction = "IND_CA2035_D_F";
        
        uniformClass = "U_I_CA2035_GhillieSuit_ard";

        linkedItems[] = {
            "V_Chestrig_khk",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles"
        };
        respawnlinkedItems[] = {
            "V_Chestrig_khk",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles"
        };

        weapons[] = {
            "arifle_AK12_arid_mrco_pointer_F",
            "hgun_Pistol_heavy_01_F",
            "Laserdesignator_03",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_arid_mrco_pointer_F",
            "hgun_Pistol_heavy_01_F",
            "Laserdesignator_03",
            "Throw",
            "Put"
            };
    };
