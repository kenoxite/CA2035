// ARMY
class I_CA2035_Rifleman_Base_F: I_Soldier_base_F
{
    author="kenoxite";
    scope=0;
    accuracy=3.9000001;
    camouflage=1.2;
    cost=50000;
    minFireTime=9;
    picture="";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_F.jpg";
    editorSubcategory="EdSubcat_Personnel";
    portrait="";
    side=2;
    identityTypes[] = {
        "Head_African",
        "LanguageFRE_F",
        "G_CA2035_Army"
        };
    genericNames="AfroMen";
    faction="IND_CA2035_T_F";
    icon="iconMan";
    Items[]=
    {
        "FirstAidKit"
    };
    linkedItems[]=
    {
        "V_HarnessO_CA2035_wdl", // V_PlateCarrierIA1_CA2035_wdl
        "H_HelmetIA_CA2035_wdl",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    RespawnItems[]=
    {
        "FirstAidKit"
    };
    respawnLinkedItems[]=
    {
        "V_HarnessO_CA2035_wdl",
        "H_HelmetIA_CA2035_wdl",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    
    // model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Camo_F.p3d";
    modelSides[]={2,3};
    nakedUniform="U_BasicBody";
    uniformClass="U_I_CA2035_RegularUniform_wdl";

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\characters_f\common\data\coveralls.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "a3\characters_f\heads\data\hl_white.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth1.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_2.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat",
            "a3\characters_f_beta\indep\data\officer.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_para_3_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_2_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat"
        };
    };

    vehicleClass="Men";
    Weapons[]=
    {
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "Throw",
        "Put"
    };
    class EventHandlers
    {
    };
};

class I_CA2035_Rifleman_WDL_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Camo_F.p3d";
    // model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d"; // officer
    //model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; // long sleeve
    //model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_CA2035_RegularUniform_wdl";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REGULAR_WDL();
    };
};

class I_CA2035_Rifleman_TRP_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Camo_F.p3d";
    // model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d"; // officer
    //model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; // long sleeve
    //model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve

    uniformClass = "U_I_CA2035_RegularUniform_trp";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REGULAR_TRP();
    };
};

class I_CA2035_Rifleman_ARD_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Camo_F.p3d";
    // model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d"; // officer
    //model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; // long sleeve
    //model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve

    uniformClass = "U_I_CA2035_RegularUniform_ard";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REGULAR_ARD();
    };
};

class I_CA2035_Officer_WDL_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d"; // officer
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_CA2035_OfficerUniform_wdl";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_OFFICER_WDL();
    };
};

class I_CA2035_Officer_TRP_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d"; // officer

    uniformClass = "U_I_CA2035_OfficerUniform_trp";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_OFFICER_TRP();
    };
};

class I_CA2035_Officer_ARD_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_officer.p3d"; // officer

    uniformClass = "U_I_CA2035_OfficerUniform_ard";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_OFFICER_ARD();
    };
};

class I_CA2035_Rifleman_WDL1_tt_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
    modelSides[]={0,1,2,3};

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_wdl";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REGULAR_TT__WDL();
    };
};

class I_CA2035_Rifleman_TRP1_tt_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_trp";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REGULAR_TT_TRP();
    };
};

class I_CA2035_Rifleman_ARD1_tt_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";
    hiddenSelections[]=
    {
        "Camo1",
        "Camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REGULAR_TT_ARD();
    };
};

class I_CA2035_Rifleman_HeliPilotCoveralls_UnifBase : I_CA2035_Rifleman_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F\Common\coveralls.p3d";
    
    uniformClass = "U_I_CA2035_HeliPilotCoveralls";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\indep\data\coveralls_CA2035_green_co.paa"
    };
};



// RECON
class I_CA2035_Recon_Base_F: I_CA2035_Rifleman_Base_F
{
    author="kenoxite";
    scope=0;
    accuracy=3.9000001;
    cost=50000;
    minFireTime=9;
    picture="";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Recon_F.jpg";
    editorSubcategory="EdSubcat_Personnel_SpecialForces";
    
    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_SF_s"
            };
            speechPlural[]=
            {
                "veh_infantry_SF_p"
            };
        };
    };
    textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound="veh_infantry_SF_s";
    vehicleClass="MenRecon";
    role="Rifleman";
    camouflage=0.60000002;
    detectSkill=18;

    identityTypes[] = {
        "Head_African",
        "LanguageFRE_F",
        "G_CA2035_Recon_Tropical"
        };

    Items[]=
    {
        "FirstAidKit"
    };
    linkedItems[]=
    {
        "V_Chestrig_oli",
        "H_Bandanna_hs_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    RespawnItems[]=
    {
        "FirstAidKit"
    };
    respawnLinkedItems[]=
    {
        "V_Chestrig_oli",
        "H_Bandanna_hs_CA2035_trp",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles_INDEP"
    };
    //model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";

    model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve new
    uniformClass = "U_I_CA2035_ReconUniform_trp";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\indep\data\i_CA2035_trp2_clothing_new_co.paa"
    };

    modelSides[]={3,1};

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\characters_f\common\data\coveralls.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "a3\characters_f\heads\data\hl_white.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth1.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_2.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat",
            "a3\characters_f_beta\indep\data\officer.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_para_3_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_2_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat"
        };
    };
};

class I_CA2035_Recon_WDL_UnifBase : I_CA2035_Recon_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve new
    uniformClass = "U_I_CA2035_ReconUniform_wdl";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_RECON_WDL();
    };
};

class I_CA2035_Recon_TRP_UnifBase : I_CA2035_Recon_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve new
    uniformClass = "U_I_CA2035_ReconUniform_trp";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_RECON_TRP();
    };
};

class I_CA2035_Recon_ARD_UnifBase : I_CA2035_Recon_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve new
    uniformClass = "U_I_CA2035_ReconUniform_ard";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_RECON_ARD();
    };
};

class I_CA2035_Recon_Black_UnifBase : I_CA2035_Recon_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    model="\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; // short sleeve new
    uniformClass = "U_I_CA2035_ReconUniform_black";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_RECON_BLACK();
    };
};

// SNIPERS

class I_CA2035_Sniper_Base_F : I_CA2035_Recon_Base_F {
    author = "kenoxite";
    scope = 0;
    displayName = "Sniper";
    editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Sniper_F.jpg";

    vehicleClass="MenSniper";
    role="Marksman";
    primaryAmmoCoef=0.2;
    secondaryAmmoCoef=0.050000001;
    handgunAmmoCoef=0.1;

    identityTypes[] = {
        "Head_African",
        "LanguageFRE_F",
        "G_CA2035_Crew"
        };
    
    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                "veh_infantry_SF_s"
            };
            speechPlural[]=
            {
                "veh_infantry_SF_p"
            };
        };
    };
    textSingular="$STR_A3_nameSound_veh_infantry_SF_s";
    textPlural="$STR_A3_nameSound_veh_infantry_SF_p";
    nameSound="veh_infantry_SF_s";

    uniformClass = "U_I_CA2035_GhillieSuit_wdl";

    threat[]={0.80000001,0.30000001,0.30000001};
    camouflage=0.60000002;
    cost=250000;
};

class I_CA2035_Sniper_WDL_UnifBase : I_CA2035_Sniper_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Beta\INDEP\ia_sniper.p3d";
    
    uniformClass = "U_I_CA2035_GhillieSuit_wdl";
    hiddenSelections[]=
    {
        "camo",
        "camo3"
    };

    hiddenSelectionsTextures[] =
    {
        UNIFORM_SNIPER_WDL();
        // "\CA2035\indep\data\i_CA2035_wdl1_clothing_new_co.paa",
        // "\A3\characters_f\common\data\ghillie_woodland_co.paa" // woodland
        // "\A3\characters_f\common\data\ghillie_mcamo_co.paa" // multicam
        //"\A3\characters_f\common\data\ghillie_desert_co.paa" // desert
        //"\A3\characters_f_exp\opfor\data\ghillie_tna_co.paa" // tropical CSAT
        //"\A3\characters_f_exp\blufor\data\u_bt_sniper_f_tna_co.paa" // tropical NATO
    };
};

class I_CA2035_Sniper_TRP_UnifBase : I_CA2035_Sniper_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    model="\A3\Characters_F_Beta\INDEP\ia_sniper.p3d";        
    uniformClass = "U_I_CA2035_GhillieSuit_trp";
    hiddenSelections[]=
    {
        "camo",
        "camo3"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_SNIPER_TRP();
    };
};

class I_CA2035_Sniper_ARD_UnifBase : I_CA2035_Sniper_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;

    model="\A3\Characters_F_Beta\INDEP\ia_sniper.p3d";        
    uniformClass = "U_I_CA2035_GhillieSuit_ard";
    hiddenSelections[]=
    {
        "camo",
        "camo3"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_SNIPER_ARD();
    };
};

// REBELS
class I_G_Soldier_base_F;
class I_G_CA2035_Rebel_Base_F: I_G_Soldier_base_F
{
    author="kenoxite";
    scope=0;
    accuracy=3.9000001;
    camouflage=1.2;
    cost=50000;
    minFireTime=9;
    picture="";
    // editorPreview = "\CA2035\indep\previews\t\I_CA2035_T_Soldier_F.jpg";
    editorSubcategory="EdSubcat_Personnel";
    portrait="";
    side=2;
    identityTypes[] = {
        "Head_African",
        "LanguageFRE_F",
        "G_CA2035_Rebel"
        };
    genericNames="AfroMen";
    faction="IND_CA2035_G_F";
    icon="iconMan";
    Items[]=
    {
        "FirstAidKit"
    };
    linkedItems[]=
    {
        "V_HarnessO_CA2035_wdl",
        "H_Booniehat_wdl",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    RespawnItems[]=
    {
        "FirstAidKit"
    };
    respawnLinkedItems[]=
    {
        "V_HarnessO_CA2035_wdl",
        "H_Booniehat_wdl",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_4_F.p3d";
    modelSides[]={0,1,2,3};
    nakedUniform="U_BasicBody";
    uniformClass="U_I_CA2035_RegularUniform_wdl";

    class Wounds
    {
        tex[]={};
        mat[]=
        {
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\characters_f\common\data\coveralls.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Common\Data\coveralls_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "a3\characters_f\heads\data\hl_white.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_injury.rvmat",
            "a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "a3\characters_f\civil\data\c_cloth1.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth1_injury.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat",
            "A3\Characters_F_Gamma\Guerrilla\Data\ig_guerrilla3_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_4_F_2_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_5_f_2.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_injury.rvmat",
            "a3\characters_f_beta\indep\data\officer.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_para_3_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\u_i_c_soldier_para_3_f_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_1_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\ic_paramilitary_5_2_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f\civil\data\c_poloshirt_injury.rvmat",
            "a3\characters_f_exp\syndikat\data\u_i_c_soldier_bandit_2_f_1.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat",
            "A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth2.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth2_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth3_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth4.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_cloth4_injury.rvmat",
            "A3\Characters_F\Civil\Data\hunter.rvmat",
            "A3\Characters_F\Civil\Data\hunter_injury.rvmat",
            "A3\Characters_F\Civil\Data\hunter_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_poloshirtpants.rvmat",
            "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
            "A3\Characters_F\Civil\Data\c_poloshirtpants_injury.rvmat",
            "A3\Characters_F\Civil\Data\priest.rvmat",
            "A3\Characters_F\Civil\Data\priest_injury.rvmat",
            "A3\Characters_F\Civil\Data\priest_injury.rvmat"
        };
    };

    vehicleClass="Men";
    Weapons[]=
    {
        "Throw",
        "Put"
    };
    respawnWeapons[]=
    {
        "Throw",
        "Put"
    };
    class EventHandlers
    {
    };
};

class I_G_CA2035_Rebel_1_UnifBase : I_G_CA2035_Rebel_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\Characters_F_Exp\Syndikat\I_C_Soldier_Para_1_F.p3d";

    uniformClass = "U_I_G_CA2035_Rebel_1";
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REBEL_1A();
    };
};

class I_G_CA2035_Rebel_2_UnifBase : I_G_CA2035_Rebel_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\a3\Characters_F\Civil\C_Man_casual_shorts_F.p3d";

    uniformClass = "U_I_G_CA2035_Rebel_2";
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REBEL_2A();
    };
};

class I_G_CA2035_Rebel_3_UnifBase : I_G_CA2035_Rebel_Base_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    model="\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";

    uniformClass = "U_I_G_CA2035_Rebel_3";
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        UNIFORM_REBEL_3();
    };
};


// CSAT
class O_officer_F;
class O_CA2035_Soldier_UnifBase : O_officer_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    // model="\A3\characters_F\OPFOR\o_officer.p3d";
    model="\a3\characters_f\opfor\o_officer_noinsignia_f.p3d";
    modelSides[]={0,3};
    
    Icon="iconMan";
    role="Rifleman";
    camouflage=1.6;
    cost=100000;
    threat[]={0.80000001,0.1,0.1};
    textSingular="";
    textPlural="";
    nameSound="";
    class SpeechVariants
    {
        class Default
        {
            speechSingular[]=
            {
                ""
            };
            speechPlural[]=
            {
                ""
            };
        };
    };

    genericNames="AfroMen";
    identityTypes[] = {
        "Head_African",
        "LanguageFRE_F",
        "G_CA2035_Army"
        };
    uniformClass = "U_O_CA2035_officer_noInsignia_ghex";
    hiddenSelections[]=
    {
        "Camo",
        "insignia"
    };
    hiddenSelectionsTextures[]=
    {
        "\CA2035\opfor\data\U_O_CA2035_officer_noInsignia_ghex.paa"
    };
};
