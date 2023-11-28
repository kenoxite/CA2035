
    class I_CA2035_T_Recon_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
		displayName="$STR_B_recon_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_F.jpg";

        uniformClass = "U_I_CA2035_ReconUniform_trp";

        weapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };

        magazines[] = {
            mag_10(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_10(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };
    
    class I_CA2035_T_Recon_LAT_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
		displayName="$STR_B_recon_LAT_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_LAT_F.jpg";

        RIFLEMAN_AT();

        uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

        weapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "launch_RPG32_green_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "launch_RPG32_green_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };

        backpack = "B_FieldPack_LAT_Trp";
        // backpack="B_AssaultPack_rgr_ReconLAT";

        magazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(RPG32_F),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_1(RPG32_F),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };
    
    class I_CA2035_T_Recon_AR_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Autorifleman";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_AR_F.jpg";

        RIFLEMAN_LMG();

        uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

        weapons[] = {
            "arifle_RPK12_trp_snds_aco_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_RPK12_trp_snds_aco_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };

        //backpack = "B_FieldPack_Recon_AR_Trp";

        magazines[] = {
            mag_7(75rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_7(75rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };

    class I_CA2035_T_Recon_GL_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName = "Recon Grenadier";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_GL_F.jpg";

        RIFLEMAN_GL();
        
        uniformClass = "U_I_CA2035_ReconUniform_trp";

        weapons[] = {
            "arifle_AK12_GL_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_GL_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };

        // backpack = "B_FieldPack_Recon_GL_Trp";

        magazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_4(1Rnd_HE_Grenade_shell),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_4(1Rnd_HE_Grenade_shell),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };

    class I_CA2035_T_Recon_JTAC_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_B_recon_JTAC_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_GL_F.jpg";

        RIFLEMAN_SPECOP();
        
        uniformClass = "U_I_CA2035_ReconUniform_trp";

        weapons[] = {
            "arifle_AK12_GL_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
            "Throw",
            "Put",
            "Laserdesignator_03"
            };
        respawnWeapons[] = {
            "arifle_AK12_GL_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
            "Throw",
            "Put",
            "Laserdesignator_03"
            };

        // backpack = "B_FieldPack_Recon_GL_Trp";

        magazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_4(1Rnd_HE_Grenade_shell),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow),
            mag_1(Laserbatteries)
            };
        respawnMagazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_4(1Rnd_HE_Grenade_shell),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow),
            mag_1(Laserbatteries)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };

    class I_CA2035_T_Recon_Medic_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
		displayName="$STR_B_recon_medic_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_Medic_F.jpg";

        RIFLEMAN_MEDIC();

        uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

        weapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };

        backpack = "B_FieldPack_Recon_Medic_Trp";
        // backpack="B_AssaultPack_rgr_BTReconMedic";

        magazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };

    class I_CA2035_T_Recon_M_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
		displayName="$STR_B_recon_M_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_M_F.jpg";

        RIFLEMAN_MARKSMAN();
        
        uniformClass = "U_I_CA2035_ReconUniform_trp";

        weapons[] = {
            "srifle_EBR_Black_snds_DMS_bipod_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "srifle_EBR_Black_snds_DMS_bipod_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };

        magazines[] = {
            mag_10(20Rnd_762x51_Mag),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_10(20Rnd_762x51_Mag),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };

    class I_CA2035_T_Recon_Exp_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
		displayName="$STR_B_recon_exp_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_Exp_F.jpg";

        RIFLEMAN_DEMO();

        uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

        weapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_trp_aco_snds_F",
            "hgun_Pistol_heavy_01_green_F",
			"Throw",
			"Put"
            };

        backpack = "B_Carryall_Recon_Exp_Trp";
        // backpack = "B_Kitbag_rgr_BTReconExp_F";

        magazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_3(APERSMine_Range_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_6(30rnd_762x39_AK12_Mag_F),
            mag_3(11Rnd_45ACP_Mag),
            mag_3(APERSMine_Range_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };

    class I_CA2035_T_Recon_TL_F : I_CA2035_Recon_Base_F {
        author = "kenoxite";
        scope = 2;
        scopeCurator = 2;
		displayName="$STR_B_recon_TL_F0";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_TL_F.jpg";

        RIFLEMAN_LEADER();
        
        uniformClass = "U_I_CA2035_ReconUniform_trp";

        linkedItems[] = {
            "V_Chestrig_oli",
            "H_HelmetIA_fast_CA2035_trp",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles_INDEP"
        };
        respawnlinkedItems[] = {
            "V_Chestrig_oli",
            "H_HelmetIA_fast_CA2035_trp",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles_INDEP"
        };
        weapons[] = {
            "arifle_AK12_trp_mrco_pointer_snds_F",
            "hgun_Pistol_heavy_01_green_F",
            "Rangefinder",
			"Throw",
			"Put"
            };
        respawnWeapons[] = {
            "arifle_AK12_trp_mrco_pointer_snds_F",
            "hgun_Pistol_heavy_01_green_F",
            "Rangefinder",
			"Throw",
			"Put"
            };

        // backpack = "B_FieldPack_Recon_TL_Trp";

        magazines[] = {
            mag_4(30rnd_762x39_AK12_Mag_F),
            mag_2(30rnd_762x39_AK12_Mag_Tracer_F),
            mag_2(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_1(SmokeShellBlue),
            mag_1(SmokeShellOrange),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_4(30rnd_762x39_AK12_Mag_F),
            mag_2(30rnd_762x39_AK12_Mag_Tracer_F),
            mag_2(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_1(SmokeShellBlue),
            mag_1(SmokeShellOrange),
            mag_2(Chemlight_yellow)
            };

        RANDOM_HEADGEAR_RECON_TROPIC();
    };

// DIRECT ACTION

 class I_CA2035_T_Recon_DA_F : I_CA2035_T_Recon_F {
        author = "kenoxite";
        scope = 1;
        scopeCurator = 1;
        displayName="Recon Scout (DA)";
        editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_F.jpg";
        
        uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

        linkedItems[] = {
            "V_PlateCarrierIA1_CA2035_trp",
            "H_HelmetB_light_wdl",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles_INDEP"
        };
        respawnlinkedItems[] = {
            "V_PlateCarrierIA1_CA2035_trp",
            "H_HelmetB_light_wdl",
            "ItemMap",
            "ItemGPS",
            "ItemRadio",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles_INDEP"
        };

        weapons[] = {
            "arifle_Mk20_Black_snds_aco_F",
            "hgun_Pistol_heavy_01_green_F",
            "Throw",
            "Put"
            };
        respawnWeapons[] = {
            "arifle_Mk20_Black_snds_aco_F",
            "hgun_Pistol_heavy_01_green_F",
            "Throw",
            "Put"
            };

        magazines[] = {
            mag_10(30Rnd_556x45_Stanag),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };
        respawnMagazines[] = {
            mag_10(30Rnd_556x45_Stanag),
            mag_3(11Rnd_45ACP_Mag),
            mag_2(MiniGrenade),
            mag_1(SmokeShell),
            mag_1(SmokeShellYellow),
            mag_2(Chemlight_yellow)
            };

        // RANDOM_HEADGEAR_RECON_TROPIC();

        class EventHandlers: EventHandlers {init = "";};
    };