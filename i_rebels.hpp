#define REBEL_BASE() \
    faction = "IND_CA2035_G_F"; \
    genericNames="AfroMen"; \
    identityTypes[] = { \
        "Head_African", \
        "LanguageFRE_F", \
        "G_CA2035_Rebel" \
        }      

#define REBEL_EH() \
    class EventHandlers \
    { \
        init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};"; \
    }

// #define REBEL_RANDOM_UNIFORM(uniform) \
//         class EventHandlers \
//         { \
//             init="if (local (_this select 0)) then { \
//                 [(_this select 0), [], []] call BIS_fnc_unitHeadgear; \
//                 [(_this select 0), #uniform] call CA2035_fnc_randomUniformTexture; \
//             };"; \
//         }

#define REBEL_RANDOM_UNIFORM_1() \
    class EventHandlers \
    { \
        init="if (local (_this select 0)) then { \
            [(_this select 0), [], []] call BIS_fnc_unitHeadgear; \
            (_this select 0) setObjectTexture [0, selectRandom [ \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa"", \
                ""\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa"", \
                ""\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_co.paa"" \
            ] \
            ]; \
        };"; \
    }

#define REBEL_RANDOM_UNIFORM_1A() \
    class EventHandlers \
    { \
        init="if (local (_this select 0)) then { \
            (_this select 0) setObjectTexture [0, selectRandom [ \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa"" \
            ] \
            ]; \
        };"; \
    }

#define REBEL_RANDOM_UNIFORM_2() \
    class EventHandlers \
    { \
        init="if (local (_this select 0)) then { \
            [(_this select 0), [], []] call BIS_fnc_unitHeadgear; \
            (_this select 0) setObjectTexture [0, selectRandom [ \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa"", \
                ""\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa"", \
                ""\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_co.paa"" \
            ] \
            ]; \
            (_this select 0) setObjectTexture [1, selectRandom [ \
                ""\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_2_co.paa"", \
                ""\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_co.paa"" \
            ] \
            ]; \
        };"; \
    }

#define REBEL_RANDOM_UNIFORM_TT() \
    class EventHandlers \
    { \
        init="if (local (_this select 0)) then { \
            [(_this select 0), [], []] call BIS_fnc_unitHeadgear; \
            (_this select 0) setObjectTexture [0, selectRandom [ \
                ""\CA2035\indep\data\i_CA2035_wdl1_clothing_old_tt_co.paa"", \
                ""\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa"", \
                ""\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa"" \
            ] \
            ]; \
        };"; \
    }


class I_G_soldier_F;
class I_G_CA2035_soldier_F : I_G_soldier_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Rebel (Rifle)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_soldier_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_1);

    class EventHandlers
    {
        init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_1'] call CA2035_fnc_randomUniformTexture;};";
    };

    uniformClass = "U_I_G_CA2035_Rebel_1";

    linkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AKM_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AKM_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade)
        };

};

class I_G_soldier_lite_F;
class I_G_CA2035_soldier_lite_F : I_G_soldier_lite_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="New Blood (Rifle)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_soldier_lite_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_2);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_2'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_G_CA2035_Rebel_2";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_sgg",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_sgg",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AKM_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AKM_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_Mag_F)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F)
        };

};

class I_G_soldier_SL_F;
class I_G_CA2035_soldier_SL_F : I_G_soldier_SL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Leader (Rifle)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_soldier_SL_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    REBEL_EH();

    uniformClass = "U_I_G_CA2035_Rebel_3";

    linkedItems[] = {
        "V_TacVest_oli",
        "H_Booniehat_oli",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_TacVest_oli",
        "H_Booniehat_oli",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AK12_fl_F",
        "hgun_Pistol_01_F",
        "Throw",
        "Put",
        "Binocular"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_F",
        "hgun_Pistol_01_F",
        "Throw",
        "Put",
        "Binocular"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_1(SmokeShell)
        };

};

class I_G_soldier_TL_F;
class I_G_CA2035_soldier_TL_F : I_G_soldier_TL_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    displayName="Right-Hand (UGL)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_soldier_TL_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_1);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_1'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_G_CA2035_Rebel_1";

    linkedItems[] = {
        "V_TacVest_blk",
        "H_Cap_oli",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_TacVest_blk",
        "H_Cap_oli",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

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
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(1Rnd_Smoke_Grenade_shell),
        mag_2(UGL_FlareWhite_F)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(1Rnd_Smoke_Grenade_shell),
        mag_2(UGL_FlareWhite_F)
        };

};

class I_G_soldier_AR_F;
class I_G_CA2035_soldier_AR_F : I_G_soldier_AR_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Rebel (LMG)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_soldier_AR_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_CA2035_RegularUniform_tanktop_wdl);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_CA2035_RegularUniform_tanktop_wdl'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_wdl";

    linkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

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
        mag_3(75rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade)
        };
    respawnMagazines[] = {
        mag_3(75rnd_762x39_AK12_Mag_F),
        mag_2(HandGrenade)
        };

};

class I_G_medic_F;
class I_G_CA2035_medic_F : I_G_medic_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Witch Doctor (Medikit)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_medic_F.jpg";

    REBEL_BASE();
    // RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_1);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_1'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_G_CA2035_Rebel_1";
    backpack="G_FieldPack_Medic";

    linkedItems[] = {
        "V_BandollierB_oli",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
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
        mag_2(SmokeShell)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_545x39_Mag_F),
        mag_2(SmokeShell)
        };

};

class I_G_engineer_F;
class I_G_CA2035_engineer_F : I_G_engineer_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    displayName="Engineer";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_engineer_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_CA2035_RegularUniform_tanktop_wdl);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_CA2035_RegularUniform_tanktop_wdl'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_wdl";
    backpack="G_TacticalPack_Eng";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_gry",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_gry",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
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
        mag_6(30Rnd_545x39_Mag_F)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_545x39_Mag_F)
        };

};

class I_G_Soldier_exp_F;
class I_G_CA2035_Soldier_exp_F : I_G_Soldier_exp_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Saboteur (Explosives)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Soldier_exp_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_CA2035_RegularUniform_tanktop_wdl);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_CA2035_RegularUniform_tanktop_wdl'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_wdl";
    backpack="G_Carryall_Exp";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_khk",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_khk",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
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
        mag_6(30Rnd_545x39_Mag_F)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_545x39_Mag_F)
        };

};

class I_G_Soldier_GL_F;
class I_G_CA2035_Soldier_GL_F : I_G_Soldier_GL_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Senior Rebel (UGL)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Soldier_GL_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_1);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_1'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_G_CA2035_Rebel_1";

    linkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Booniehat_mgrn",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Booniehat_mgrn",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

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
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(UGL_FlareWhite_F)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(1Rnd_HE_Grenade_shell),
        mag_2(UGL_FlareWhite_F)
        };

};

class I_G_Soldier_M_F;
class I_G_CA2035_Soldier_M_F : I_G_Soldier_M_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    displayName="Hunter (Rifle)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Soldier_M_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_1);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_1'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_G_CA2035_Rebel_1";

    linkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
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
        mag_8(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade)
        };
    respawnMagazines[] = {
        mag_8(30Rnd_762x39_Mag_F),
        mag_2(HandGrenade)
        };

};

class I_G_Soldier_LAT_F;
class I_G_CA2035_Soldier_LAT_F : I_G_Soldier_LAT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Specialist (RPG-42)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Soldier_LAT_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_CA2035_RegularUniform_tanktop_wdl);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_CA2035_RegularUniform_tanktop_wdl'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_wdl";
    backpack = "B_FieldPack_LAT_Trp";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AKM_F",
        "launch_RPG32_green_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AKM_F",
        "launch_RPG32_green_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_1(RPG32_F),
        mag_2(HandGrenade)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_1(RPG32_F),
        mag_2(HandGrenade)
        };

};

class I_G_CA2035_Soldier_LAT2_F : I_G_CA2035_Soldier_LAT_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Specialist (RPG-7)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Soldier_LAT_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_CA2035_RegularUniform_tanktop_wdl);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_CA2035_RegularUniform_tanktop_wdl'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_wdl";
    backpack = "B_FieldPack_LAT2_Trp";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AKM_F",
        "launch_RPG7_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AKM_F",
        "launch_RPG7_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_1(RPG7_F),
        mag_2(HandGrenade)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_1(RPG7_F),
        mag_2(HandGrenade)
        };

};

class I_G_Soldier_A_F;
class I_G_CA2035_Soldier_A_F : I_G_Soldier_A_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Mule (Ammo)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Soldier_A_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_2);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_2'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_G_CA2035_Rebel_2";
    backpack="B_Carryall_Ammo_Rebel";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_sgg",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_Bandanna_sgg",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
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
        mag_6(30Rnd_545x39_Mag_F)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_545x39_Mag_F)
        };

};

class I_G_officer_F;
class I_G_CA2035_Officer_F : I_G_officer_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Commander (Rifle)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Officer_F.jpg";

    REBEL_BASE();
    // RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();

    uniformClass = "U_I_G_CA2035_Rebel_3";

    linkedItems[] = {
        "V_BandollierB_oli",
        "H_MilCap_CA2035_wdl",
        "ItemGPS",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_oli",
        "H_MilCap_CA2035_wdl",
        "ItemGPS",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    weapons[] = {
        "arifle_AK12_fl_aco_F",
        "hgun_Pistol_01_F",
        "Throw",
        "Put"
        };
    respawnWeapons[] = {
        "arifle_AK12_fl_aco_F",
        "hgun_Pistol_01_F",
        "Throw",
        "Put"
        };

    magazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
        };
    respawnMagazines[] = {
        mag_6(30Rnd_762x39_Mag_F),
        mag_3(10Rnd_9x21_Mag),
        mag_2(HandGrenade),
        mag_2(SmokeShell)
        };

    allowedHeadgear[]=
    {
        "H_MilCap_CA2035_wdl"
    };
    headgearList[]=
    {
        "H_MilCap_CA2035_wdl",
        1
    };

};

class I_G_soldier_unarmed_F;
class I_G_CA2035_Soldier_unarmed_F : I_G_soldier_unarmed_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName="Rebel (Unarmed)";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Soldier_unarmed_F.jpg";

    REBEL_BASE();
    RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();
    // REBEL_RANDOM_UNIFORM(U_I_G_CA2035_Rebel_1);

    class EventHandlers
    {
        init="if (local (_this select 0)) then { [(_this select 0), [], []] call BIS_fnc_unitHeadgear; [(_this select 0), 'U_I_G_CA2035_Rebel_1'] call CA2035_fnc_randomUniformTexture; };";
    };

    uniformClass = "U_I_G_CA2035_Rebel_1";

    linkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_HarnessO_CA2035_wdl",
        "H_Shemag_olive",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

};

class I_G_Survivor_F;
class I_G_CA2035_Survivor_F : I_G_Survivor_F {
    author = "kenoxite";
    scope = 1;
    scopeCurator = 1;
    displayName="Survivor";
    editorPreview = "\CA2035\guerrilla\previews\t\I_G_CA2035_Survivor_F.jpg";

    REBEL_BASE();
    // RANDOM_HEADGEAR_REBELS();
    // REBEL_EH();

    uniformClass = "U_I_G_CA2035_Rebel_2";

};
