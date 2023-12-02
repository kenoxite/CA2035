#define CSAT_AFR_BASE() \
    genericNames="AfroMen"; \
    identityTypes[] = { \
        "Head_African", \
        "LanguageFRE_F", \
        "G_CA2035_Army" \
        }

#define CSAT_CHN_BASE() \
    genericNames="ChineseMen"; \
    identityTypes[] = { \
        "Head_Asian", \
        "LanguageCHI_F", \
        "G_CA2035_Crew" \
        }

#define CSAT_RANDOM_HEADGEAR() \
    headgearList[]= \
    { \
        "", 0, \
        "H_Cap_O_CA2035_ghex", 0.5 \
        "H_MilCap_ghex_F", 1 \
    }; \
    class EventHandlers \
    { \
        init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
    }
/*
class O_CA2035_Soldier_lite_F : O_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="$STR_B_Soldier_lite_F0";
    // editorPreview = "\CA2035\opfor\previews\t\O_CA2035_Soldier_lite_F.jpg";
    // faction = "OPF_CA2035_F";

    linkedItems[]=
    {
        "H_MilCap_ghex_F",
        "V_BandollierB_ghex_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "O_NVGoggles_ghex_F"
    };
    respawnLinkedItems[]=
    {
        "H_MilCap_ghex_F",
        "V_BandollierB_ghex_F",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "O_NVGoggles_ghex_F"
    };
    weapons[] = {
        "arifle_CTAR_blk_ACO_F",
        "hgun_Rook40_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_ACO_F",
        "hgun_Rook40_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_4(30Rnd_580x42_Mag_F),
        mag_3(16Rnd_9x21_Mag),
        mag_1(SmokeShell),
        mag_1(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_580x42_Mag_F),
        mag_3(16Rnd_9x21_Mag),
        mag_1(SmokeShell),
        mag_1(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};
*/
class O_T_Soldier_F;
class O_CA2035_Soldier_F : O_T_Soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_Soldier_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_aco_flash_F",
		"Throw",
		"Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_aco_flash_F",
		"Throw",
		"Put"
        };

    magazines[] = {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_1(SmokeShellRed),
        mag_1(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_1(SmokeShellRed),
        mag_1(Chemlight_red)
        };

};

class O_T_Soldier_A_F;
class O_CA2035_Soldier_A_F : O_T_Soldier_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_Soldier_A_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_AR_F;
class O_CA2035_soldier_AR_F : O_T_soldier_AR_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_AR_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTARS_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTARS_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(100Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(100Rnd_580x42_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_medic_F;
class O_CA2035_medic_F : O_T_medic_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_medic_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_GL_F;
class O_CA2035_soldier_GL_F : O_T_soldier_GL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_GL_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_GL_blk_arco_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_GL_blk_arco_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(30Rnd_580x42_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(MiniGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_580x42_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_2(HandGrenade),
        mag_2(MiniGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_M_F;
class O_CA2035_soldier_M_F : O_T_soldier_M_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_M_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "srifle_DMR_07_blk_F_arco_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "srifle_DMR_07_blk_F_arco_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_8(20Rnd_650x39_Cased_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_8(20Rnd_650x39_Cased_Mag_F),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_officer_F;
class O_CA2035_officer_F : O_T_officer_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_officer_F.jpg";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    
    linkedItems[]=
    {
        "H_Beret_CSAT_01_F",
        "V_BandollierB_ghex_F",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };
    respawnLinkedItems[]=
    {
        "H_Beret_CSAT_01_F",
        "V_BandollierB_ghex_F",
        "ItemGPS",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio"
    };

};

class O_T_soldier_LAT_F;
class O_CA2035_soldier_LAT_F : O_T_soldier_LAT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_LAT_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_aco_flash_F",
        "launch_RPG32_ghex_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_aco_flash_F",
        "launch_RPG32_ghex_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_1(RPG32_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_1(RPG32_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_SL_F;
class O_CA2035_soldier_SL_F : O_T_soldier_SL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_SL_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        // "H_HelmetLeaderO_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_OPFOR"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        // "H_HelmetLeaderO_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_OPFOR"
    };
    weapons[] = {
        "arifle_CTAR_blk_arco_F",
        "hgun_Rook40_F",
        "Throw",
        "Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_arco_F",
        "hgun_Rook40_F",
        "Throw",
        "Put",
        "Binocular"
        };

    magazines[] = {
        mag_4(30Rnd_580x42_Mag_F),
        mag_4(30Rnd_580x42_Mag_Tracer_F),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_580x42_Mag_F),
        mag_4(30Rnd_580x42_Mag_Tracer_F),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_TL_F;
class O_CA2035_soldier_TL_F : O_T_soldier_TL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_TL_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_OPFOR"
    };
    respawnlinkedItems[] = 
    {
        "V_Chestrig_rgr",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_OPFOR"
    };
    weapons[] = {
        "arifle_CTAR_GL_blk_arco_F",
        "hgun_Rook40_F",
        "Throw",
        "Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_CTAR_GL_blk_arco_F",
        "hgun_Rook40_F",
        "Throw",
        "Put",
        "Binocular"
        };

    magazines[] = {
        mag_4(30Rnd_580x42_Mag_F),
        mag_4(30Rnd_580x42_Mag_Tracer_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_4(30Rnd_580x42_Mag_F),
        mag_4(30Rnd_580x42_Mag_Tracer_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_3(16Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_AA_F;
class O_CA2035_soldier_AA_F : O_T_soldier_AA_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_AA_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_TacVest_oli",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_oli",
        "H_Cap_O_CA2035_ghex",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "launch_O_Titan_ghex_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "launch_O_Titan_ghex_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_1(Titan_AA),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_1(Titan_AA),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_AT_F;
class O_CA2035_soldier_AT_F : O_T_soldier_AT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_AT_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "launch_O_Titan_short_ghex_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "launch_O_Titan_short_ghex_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_1(Titan_AT),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_1(Titan_AT),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_AAA_F;
class O_CA2035_soldier_AAA_F : O_T_soldier_AAA_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_AAA_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put",
        "Rangefinder"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put",
        "Rangefinder"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_AAT_F;
class O_CA2035_soldier_AAT_F : O_T_soldier_AAT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_AAT_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put",
        "Rangefinder"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put",
        "Rangefinder"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_UAV_F;
class O_CA2035_soldier_UAV_F : O_T_soldier_UAV_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_UAV_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "O_UavTerminal",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_TacVest_oli",
        "H_MilCap_ghex_F",
        "O_UavTerminal",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_engineer_F;
class O_CA2035_engineer_F : O_T_engineer_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_engineer_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_exp_F;
class O_CA2035_soldier_exp_F : O_T_soldier_exp_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_repair_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_soldier_repair_F;
class O_CA2035_soldier_repair_F : O_T_soldier_repair_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_soldier_repair_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_support_MG_F;
class O_CA2035_support_MG_F : O_T_support_MG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_support_MG_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_support_AMG_F;
class O_CA2035_support_AMG_F : O_T_support_AMG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_support_MG_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_support_GMG_F;
class O_CA2035_support_GMG_F : O_T_support_GMG_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_support_GMG_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_support_Mort_F;
class O_CA2035_support_Mort_F : O_T_support_Mort_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_support_Mort_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_support_AMort_F;
class O_CA2035_support_AMort_F : O_T_support_AMort_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_support_Mort_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();
    CSAT_RANDOM_HEADGEAR();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    linkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = 
    {
        "V_BandollierB_ghex_F",
        "H_MilCap_ghex_F",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    weapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_CTAR_blk_flash_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_T_crew_F;
class O_CA2035_crew_F : O_T_crew_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_crew_F.jpg";
    model="\A3\characters_F\OPFOR\o_officer.p3d";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();

    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";

    magazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_580x42_Mag_F),
        mag_2(SmokeShellRed),
        mag_2(Chemlight_red)
        };

};

class O_CA2035_crew_CN_F : O_CA2035_crew_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Crewman (chinese)";

    CSAT_CHN_BASE();
};

class O_T_Helipilot_F;
class O_CA2035_Helipilot_F : O_T_Helipilot_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_Helipilot_F.jpg";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();

    linkedItems[]=
    {
        "H_PilotHelmetHeli_O",
        "V_TacVest_oli",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "O_NVGoggles_ghex_F"
    };
    respawnLinkedItems[]=
    {
        "H_PilotHelmetHeli_O",
        "V_TacVest_oli",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "O_NVGoggles_ghex_F"
    };

};

class O_T_Pilot_F;
class O_CA2035_Pilot_F : O_T_Pilot_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_Pilot_F.jpg";
    faction = "OPF_CA2035_F";

    CSAT_AFR_BASE();

};
class O_CA2035_Pilot_CN_F : O_CA2035_Pilot_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Pilot (chinese)";

    CSAT_CHN_BASE();
};
