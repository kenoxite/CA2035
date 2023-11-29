#define RECON_ARID_BASE() \
    faction = "IND_CA2035_D_F"; \
    identityTypes[] = { \
        "Head_African", \
        "LanguageENGFRE_F", \
        "G_CA2035_Recon_Arid" \
        }

#define RECON_ARID_EQUIPEMENT() \
    linkedItems[]= \
    { \
        "V_Chestrig_khk", \
        "H_Bandanna_hs_CA2035_ard", \
        "ItemMap", \
        "ItemRadio", \
        "ItemCompass", \
        "ItemWatch", \
        "NVGoggles" \
    }; \
    respawnLinkedItems[]= \
    { \
        "V_Chestrig_khk", \
        "H_Bandanna_hs_CA2035_ard", \
        "ItemMap", \
        "ItemRadio", \
        "ItemCompass", \
        "ItemWatch", \
        "NVGoggles" \
    }


class I_CA2035_D_Recon_F : I_CA2035_T_Recon_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_F.jpg";
    scope = 2;
    scopeCurator = 2;

    uniformClass = "U_I_CA2035_ReconUniform_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    weapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
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
};

class I_CA2035_D_Recon_LAT_F : I_CA2035_T_Recon_LAT_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_LAT_F.jpg";
    scope = 2;
    scopeCurator = 2;

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    backpack = "B_FieldPack_LAT_Ard";

    weapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "launch_RPG32_green_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "launch_RPG32_green_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

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
};

class I_CA2035_D_Recon_AR_F : I_CA2035_T_Recon_AR_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_AR_F.jpg";
    scope = 2;
    scopeCurator = 2;

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    weapons[] = {
        "arifle_RPK12_sarid_snds_aco_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_RPK12_sarid_snds_aco_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_7(75rnd_762x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
    respawnMagazines[] = {
        mag_7(75rnd_762x39_AK12_Mag_F),
        mag_4(1Rnd_HE_Grenade_shell),
        mag_3(11Rnd_45ACP_Mag),
        mag_2(MiniGrenade),
        mag_1(SmokeShell),
        mag_1(SmokeShellYellow),
        mag_2(Chemlight_yellow)
        };
};

class I_CA2035_D_Recon_GL_F : I_CA2035_T_Recon_GL_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_GL_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    uniformClass = "U_I_CA2035_ReconUniform_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    weapons[] = {
        "arifle_AK12_GL_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_GL_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    // backpack = "B_FieldPack_Recon_GL_Ard";

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
};

class I_CA2035_D_Recon_JTAC_F : I_CA2035_T_Recon_GL_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_GL_F.jpg";
    scope = 1;
    scopeCurator = 1;
    
    uniformClass = "U_I_CA2035_ReconUniform_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    weapons[] = {
        "arifle_AK12_GL_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put",
        "Laserdesignator"
        };
    respawnWeapons[] = {
        "arifle_AK12_GL_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put",
        "Laserdesignator"
        };

    // backpack = "B_FieldPack_Recon_GL_Ard";

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
};

class I_CA2035_D_Recon_Medic_F : I_CA2035_T_Recon_Medic_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_Medic_F.jpg";
    scope = 2;
    scopeCurator = 2;

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    weapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack = "B_FieldPack_Recon_Medic_Ard";
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
};

class I_CA2035_D_Recon_M_F : I_CA2035_T_Recon_M_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_M_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    uniformClass = "U_I_CA2035_ReconUniform_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    weapons[] = {
        "srifle_EBR_Black_snds_DMS_bipod_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "srifle_EBR_Black_snds_DMS_bipod_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

};

class I_CA2035_D_Recon_Exp_F : I_CA2035_T_Recon_Exp_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_Exp_F.jpg";
    scope = 2;
    scopeCurator = 2;

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";
    
    RECON_ARID_BASE();
    RECON_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_RECON_ARID();

    weapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_sarid_aco_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Throw",
        "Put"
        };

    backpack = "B_Carryall_Recon_Exp_Ard";
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
};

class I_CA2035_D_Recon_TL_F : I_CA2035_T_Recon_TL_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Recon_TL_F.jpg";
    scope = 2;
    scopeCurator = 2;

    uniformClass = "U_I_CA2035_ReconUniform_ard";
    
    RECON_ARID_BASE();
    RANDOM_HEADGEAR_RECON_ARID();
    
    weapons[] = {
        "arifle_AK12_sarid_mrco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Rangefinder",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_sarid_mrco_pointer_snds_F",
        "hgun_Pistol_heavy_01_F",
        "Rangefinder",
        "Throw",
        "Put"
        };

    linkedItems[] = {
        "V_Chestrig_khk",
        "H_HelmetIA_fast_CA2035_ard",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = {
        "V_Chestrig_khk",
        "H_HelmetIA_fast_CA2035_ard",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    
    // backpack = "B_FieldPack_Recon_TL_Ard";

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
};
