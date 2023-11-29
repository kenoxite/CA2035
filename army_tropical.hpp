

class I_CA2035_T_Soldier_F : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_CfgVehicles_B_Soldier_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_F.jpg";
    
    role="Rifleman";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(30Rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_1(SmokeShellYellow),
        mag_1(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_1(SmokeShellYellow),
        mag_1(Chemlight_yellow)
        };
    
    RANDOM_HEADGEAR();

};

class I_CA2035_T_Crew_F : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
	displayName="$STR_B_crew_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Crew_F.jpg";
    
	role="Crewman";
	cost=93000;

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = {
        "V_BandollierB_rgr",
        "H_HelmetCrew_I",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_rgr",
        "H_HelmetCrew_I",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_AKS_F",
		"Throw",
		"Put"
        };
    respawnWeapons[] = {
        "arifle_AKS_F",
		"Throw",
		"Put"
        };

    magazines[] = {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Engineer_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_engineer_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Engineer_F.jpg";
    
    RIFLEMAN_ENGI();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_Carryall_Engineer_Trp";

    weapons[] = {
        "arifle_AK12_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_Exp_F : I_CA2035_T_Engineer_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_exp_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_Exp_F.jpg";
    
    RIFLEMAN_DEMO();
    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    
    backpack = "B_Carryall_Engineer_Trp";

    class EventHandlers: EventHandlers {init = "";};
};

class I_CA2035_T_HeliPilot_F : I_CA2035_T_Crew_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
	displayName="$STR_B_helipilot_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_HeliPilot_F.jpg";

    PILOT();
    
    uniformClass = "U_I_CA2035_HeliPilotCoveralls";

    linkedItems[] = {
        "V_TacVest_camo",
        "H_PilotHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_TacVest_camo",
        "H_PilotHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "hgun_PDW2000_F",
		"Throw",
		"Put"
        };
    respawnWeapons[] = {
        "hgun_PDW2000_F",
		"Throw",
		"Put"
        };

    magazines[] = {
        mag_10(30Rnd_9x21_Mag),
        mag_2(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_1(SmokeShellPurple),
        mag_1(SmokeShellOrange)
        };
    respawnMagazines[] = {
        mag_10(30Rnd_9x21_Mag),
        mag_2(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_1(SmokeShellPurple),
        mag_1(SmokeShellOrange)
        };

};

class I_CA2035_T_HeliCrew_F : I_CA2035_T_HeliPilot_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    displayName="$STR_B_helicrew_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_HeliCrew_F.jpg";

    linkedItems[] = {
        "V_PlateCarrierIA1_CA2035_trp",
        "H_CrewHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_PlateCarrierIA1_CA2035_trp",
        "H_CrewHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_AKS_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AKS_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Medic_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_medic_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Medic_F.jpg";

    RIFLEMAN_MEDIC();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };


    backpack = "B_FieldPack_Medic_Trp";

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_A_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_A_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_A_F.jpg";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_Carryall_Ammo_Trp";

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_AA_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AA_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_AA_F.jpg";
    
    RIFLEMAN_AA();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_FieldPack_AA_Trp";

    weapons[] = {
        "arifle_AK12_F",
        "launch_B_Titan_olive_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_F",
        "launch_B_Titan_olive_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(Titan_AA),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(Titan_AA),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_AAA_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AAA_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_AAA_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_Carryall_AAA_Trp";

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_AAR_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_O_SOLDIERU_AAR_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_AAR_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_TacticalPack_AAR_Trp";

    weapons[] = {
        "arifle_AK12_fl_F",
        "Rangefinder",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "Rangefinder",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Soldier_AAT_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AAT_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_AAT_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_FieldPack_AAT_Trp";

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_AR_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AR_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_AR_F.jpg";

    RIFLEMAN_LMG();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    weapons[] = {
        "arifle_RPK12_fl_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_RPK12_fl_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_7(75rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_7(75rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_AT_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_AT_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_AT_F.jpg";
    
    RIFLEMAN_AT();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_FieldPack_AT_Trp";

    weapons[] = {
        "arifle_AK12_F",
        "launch_B_Titan_short_tna_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_F",
        "launch_B_Titan_short_tna_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(Titan_AT),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(Titan_AT),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_T_Soldier_GL_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_GL_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_GL_F.jpg";

    RIFLEMAN_GL();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    weapons[] = {
        "arifle_AK12_GL_fl_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_GL_fl_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(30Rnd_762x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(MiniGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_762x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(MiniGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Soldier_LAT_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_LAT_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_LAT_F.jpg";

    RIFLEMAN_AT();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_BandollierB_rgr",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_rgr",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    // backpack = "B_FieldPack_LAT_Trp";

    weapons[] = {
        "arifle_AK12_fl_F",
        "launch_RPG32_green_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "launch_RPG32_green_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(RPG32_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(RPG32_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Soldier_LAT2_F : I_CA2035_T_Soldier_LAT_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    displayName="$STR_A3_CfgVehicles_B_soldier_LAT2_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_LAT2_F.jpg";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    // backpack = "B_FieldPack_LAT2_Trp";

    weapons[] = {
        "arifle_AK12_fl_F",
        "launch_RPG7_F",
		"Throw",
		"Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "launch_RPG7_F",
		"Throw",
		"Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(RPG7_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_1(RPG7_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Soldier_M_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_M_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_M_F.jpg";
    
    RIFLEMAN_MARKSMAN();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_camo",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AK12_fl_mrco_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_mrco_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(30Rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Soldier_SL_F : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
	displayName="$STR_B_Soldier_SL_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_SL_F.jpg";

    RIFLEMAN_LEADER();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = {
        "V_PlateCarrierIA2_CA2035_wdl",
        "H_MilCap_CA2035_trp",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    respawnlinkedItems[] = {
        "V_PlateCarrierIA2_CA2035_wdl",
        "H_MilCap_CA2035_trp",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };

    weapons[] = {
        "arifle_AK12_aco_F",
        "hgun_Pistol_01_F",
		"Throw",
		"Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_AK12_aco_F",
        "hgun_Pistol_01_F",
		"Throw",
		"Put",
        "Binocular"
        };

    magazines[] = {
        mag_4(30Rnd_762x39_AK12_Mag_F),
        mag_4(30Rnd_762x39_AK12_Mag_Tracer_F),
        mag_3(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_762x39_AK12_Mag_F),
        mag_4(30Rnd_762x39_AK12_Mag_Tracer_F),
        mag_3(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
        
    class EventHandlers: EventHandlers {init = "";};
};

class I_CA2035_T_Soldier_TL_F : I_CA2035_T_Soldier_SL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
	displayName="$STR_B_Soldier_TL_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_TL_F.jpg";

    RIFLEMAN_LEADER();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = {
        "V_PlateCarrierIA1_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap","ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_PlateCarrierIA1_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap","ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AK12_GL_fl_aco_F",
		"Throw",
		"Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_AK12_GL_fl_aco_F",
		"Throw",
		"Put",
        "Binocular"
        };

    magazines[] = {
        mag_4(30Rnd_762x39_AK12_Mag_F),
        mag_4(30Rnd_762x39_AK12_Mag_Tracer_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_762x39_AK12_Mag_F),
        mag_4(30Rnd_762x39_AK12_Mag_Tracer_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

    class EventHandlers: EventHandlers {init = "";};
};


class I_CA2035_T_Officer_F : I_CA2035_T_Soldier_SL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_officer_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Officer_F.jpg";

    uniformClass = "U_I_CA2035_OfficerUniform_trp";

    RIFLEMAN_OFFICER();

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_MilCap_CA2035_trp",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_MilCap_CA2035_trp",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AK12_aco_F",
        "hgun_Pistol_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_aco_F",
        "hgun_Pistol_01_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_3(30Rnd_762x39_AK12_Mag_F),
        mag_3(30Rnd_762x39_AK12_Mag_Tracer_F),
        mag_3(10Rnd_9x21_Mag),
        mag_1(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_1(SmokeShellOrange),
        mag_1(SmokeShellPurple)
        };
    respawnMagazines[] = {
        mag_3(30Rnd_762x39_AK12_Mag_F),
        mag_3(30Rnd_762x39_AK12_Mag_Tracer_F),
        mag_3(10Rnd_9x21_Mag),
        mag_1(Chemlight_yellow),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_1(SmokeShellOrange),
        mag_1(SmokeShellPurple)
        };

    class EventHandlers: EventHandlers {init = "";};

};

class I_CA2035_T_Soldier_Repair_F : I_CA2035_T_Engineer_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_repair_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_Repair_F.jpg";
    
    RIFLEMAN_REPAIR();

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_Carryall_Repair_Trp";

    weapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };
};

class I_CA2035_T_Soldier_UAV_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_B_SOLDIER_UAV_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_F.jpg";
    
    RIFLEMAN_UAV();

    uniformClass = "U_I_CA2035_RegularUniform_trp";  

    linkedItems[] = 
    {
        "V_PlateCarrierIA1_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "I_CA2035_UavTerminal",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_PlateCarrierIA1_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "I_CA2035_UavTerminal",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "I_CA2035_UAV_01_backpack_F";

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

    class EventHandlers: EventHandlers {init = "";};
};

class I_CA2035_T_Soldier_Unarmed_F : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_CfgVehicles_b_soldier_unarmed_f_displayName";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_Unarmed_F.jpg";

    role="Unarmed";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    linkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass","ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass","ItemWatch"
    };

    magazines[] = {};
    respawnMagazines[] = {};

    threat[]={0.1,0.1,0.1};
};

class I_CA2035_T_Survivor_F : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_A3_CfgVehicles_b_survivor_f_displayName";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_A_F.jpg";

    role="Unarmed";

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = {};
    respawnlinkedItems[] = {};

    magazines[] = {};
    respawnMagazines[] = {};
};

class I_CA2035_T_support_MG_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_MG_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_support_MG_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "I_HMG_01_weapon_F";

    weapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_support_GMG_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_GMG_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_support_GMG_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "I_GMG_01_weapon_F";

    weapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_support_AMG_F : I_CA2035_T_support_MG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_AMG_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_support_AMG_F.jpg";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    backpack = "I_HMG_01_support_F";

};

class I_CA2035_T_Support_Mort_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_Mort_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Support_Mort_F.jpg";
    
    role="Assistant";

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";

    linkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_oli",
        "H_HelmetIA_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "I_Mortar_01_weapon_F";

    weapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_AK12_Mag_F),
        mag_2(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };

};

class I_CA2035_T_Support_AMort_F : I_CA2035_T_Support_Mort_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_support_AMort_F0";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Support_AMort_F.jpg";

    uniformClass = "U_I_CA2035_RegularUniform_trp";

    backpack = "I_Mortar_01_support_F";

};
