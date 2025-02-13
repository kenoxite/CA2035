#define ARMY_ARID_BASE() \
    faction = "IND_CA2035_D_F"; \
    identityTypes[] = { \
        "Head_African", \
        "LanguageENGFRE_F", \
        "G_CA2035_Army" \
        }

#define CREW_ARID_BASE() \
    faction = "IND_CA2035_D_F"; \
    identityTypes[] = { \
        "Head_African", \
        "LanguageENGFRE_F", \
        "G_CA2035_Crew" \
        }

#define ARMY_ARID_EQUIPEMENT() \
    linkedItems[]= \
    { \
        "V_HarnessO_brn", \
        "H_HelmetIA_CA2035_ard", \
        "ItemMap", \
        "ItemRadio", \
        "ItemCompass", \
        "ItemWatch" \
    }; \
    respawnLinkedItems[]= \
    { \
        "V_HarnessO_brn", \
        "H_HelmetIA_CA2035_ard", \
        "ItemMap", \
        "ItemRadio", \
        "ItemCompass", \
        "ItemWatch" \
    }

#define ARMY_ARID_EQ_BANDOLLIER() \
    linkedItems[]= \
    { \
        "V_BandollierB_khk", \
        "H_HelmetIA_CA2035_ard", \
        "ItemMap", \
        "ItemRadio", \
        "ItemCompass", \
        "ItemWatch" \
    }; \
    respawnLinkedItems[]= \
    { \
        "V_BandollierB_khk", \
        "H_HelmetIA_CA2035_ard", \
        "ItemMap", \
        "ItemRadio", \
        "ItemCompass", \
        "ItemWatch" \
    }


class I_CA2035_D_Crew_F : I_CA2035_T_Crew_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Crew_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    CREW_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";

    linkedItems[] = {
        "V_BandollierB_khk",
        "H_HelmetCrew_I",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_khk",
        "H_HelmetCrew_I",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
};

class I_CA2035_D_Engineer_F : I_CA2035_T_Engineer_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Engineer_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "B_Carryall_Engineer_Ard";
};

class I_CA2035_D_Soldier_Exp_F : I_CA2035_T_Soldier_Exp_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_Exp_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";

    backpack = "B_Carryall_Engineer_Ard";
};

class I_CA2035_D_HeliCrew_F : I_CA2035_T_HeliCrew_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_HeliCrew_F.jpg";
    scope = 1;
    scopeCurator = 1;
    
    CREW_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_HeliPilotCoveralls";

    linkedItems[] = {
        "V_PlateCarrierIA1_CA2035_trp",
        "H_CrewHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = {
        "V_PlateCarrierIA1_CA2035_trp",
        "H_CrewHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
};

class I_CA2035_D_HeliPilot_F : I_CA2035_T_HeliPilot_F{
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_HeliPilot_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    CREW_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_HeliPilotCoveralls";

    linkedItems[] = {
        "V_TacVest_khk",
        "H_PilotHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = {
        "V_TacVest_khk",
        "H_PilotHelmetHeli_I_E",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };

};

class I_CA2035_D_Medic_F : I_CA2035_T_Medic_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Medic_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    linkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_FieldPack_Medic_Ard";
};

class I_CA2035_D_Officer_F : I_CA2035_T_Officer_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Officer_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    CREW_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_OfficerUniform_ard";

    linkedItems[] = {
        "V_BandollierB_khk",
        "H_MilCap_CA2035_ard",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_BandollierB_khk",
        "H_MilCap_CA2035_ard",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    class EventHandlers: EventHandlers {init = "";};

};

class I_CA2035_D_Soldier_A_F : I_CA2035_T_Soldier_A_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_A_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "B_Carryall_Ammo_Ard";
};

class I_CA2035_D_Soldier_AAA_F : I_CA2035_T_Soldier_AAA_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_AAA_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "B_Carryall_AAA_Ard";
};

class I_CA2035_D_Soldier_AAR_F : I_CA2035_T_Soldier_AAR_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_AAR_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "B_TacticalPack_AAR_Ard";

};

class I_CA2035_D_Soldier_AAT_F : I_CA2035_T_Soldier_AAT_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_AAT_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "B_FieldPack_AAT_Ard";
};

class I_CA2035_D_Soldier_AR_F : I_CA2035_T_Soldier_AR_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_AR_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";
};

class I_CA2035_D_Soldier_AT_F : I_CA2035_T_Soldier_AT_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_AT_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";

    linkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_FieldPack_AT_Ard";

};

class I_CA2035_D_Soldier_AA_F : I_CA2035_T_Soldier_AA_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_AA_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";

    linkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "B_FieldPack_AA_Ard";
};

class I_CA2035_D_Soldier_GL_F : I_CA2035_T_Soldier_GL_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_GL_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

};

class I_CA2035_D_Soldier_F : I_CA2035_T_Soldier_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

};

class I_CA2035_D_Soldier_LAT_F : I_CA2035_T_Soldier_LAT_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_LAT_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "B_FieldPack_LAT_Ard";

};

class I_CA2035_D_Soldier_LAT2_F : I_CA2035_T_Soldier_LAT2_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_LAT2_F.jpg";
    scope = 1;
    scopeCurator = 1;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    // backpack = "B_FieldPack_LAT2_Ard";

};

class I_CA2035_D_Soldier_M_F : I_CA2035_T_Soldier_M_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_M_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    linkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_TacVest_khk",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

};

class I_CA2035_D_Soldier_SL_F : I_CA2035_T_Soldier_SL_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_SL_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    linkedItems[] = {
        "V_PlateCarrierIA2_CA2035_ard",
        "H_MilCap_CA2035_ard",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
    respawnlinkedItems[] = {
        "V_PlateCarrierIA2_CA2035_ard",
        "H_MilCap_CA2035_ard",
        "ItemMap",
        "ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch",
        "NVGoggles"
    };
        
    class EventHandlers: EventHandlers {init = "";};
};

class I_CA2035_D_Soldier_TL_F : I_CA2035_T_Soldier_TL_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_TL_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    linkedItems[] = {
        "V_PlateCarrierIA1_CA2035_ard",
        "H_HelmetIA_CA2035_ard",
        "ItemMap","ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_PlateCarrierIA1_CA2035_ard",
        "H_HelmetIA_CA2035_ard",
        "ItemMap","ItemGPS",
        "ItemRadio",
        "ItemCompass",
        "ItemWatch"
    };

    class EventHandlers: EventHandlers {init = "";};
};

class I_CA2035_D_Soldier_Repair_F : I_CA2035_T_Soldier_Repair_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_Repair_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "B_Carryall_Repair_Ard";
};

class I_CA2035_D_Soldier_UAV_F : I_CA2035_T_Soldier_UAV_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_UAV_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    linkedItems[] = {
        "V_PlateCarrierIA1_CA2035_ard",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "I_CA2035_UavTerminal",
        "ItemCompass",
        "ItemWatch"
    };
    respawnlinkedItems[] = {
        "V_PlateCarrierIA1_CA2035_ard",
        "H_HelmetIA_CA2035_ard",
        "ItemMap",
        "ItemRadio",
        "I_CA2035_UavTerminal",
        "ItemCompass",
        "ItemWatch"
    };

    backpack = "I_CA2035_UAV_01_backpack_F";

};

class I_CA2035_D_Soldier_Unarmed_F : I_CA2035_T_Soldier_Unarmed_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Soldier_Unarmed_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";
};

class I_CA2035_D_Survivor_F : I_CA2035_T_Survivor_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Survivor_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    // ARMY_ARID_EQUIPEMENT();
    // RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";
};

class I_CA2035_D_support_MG_F : I_CA2035_T_support_MG_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_support_MG_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";

    backpack = "I_HMG_01_weapon_F";

};

class I_CA2035_D_support_GMG_F : I_CA2035_T_support_GMG_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_support_GMG_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";

    backpack = "I_GMG_01_weapon_F";

};

class I_CA2035_D_support_AMG_F : I_CA2035_T_support_AMG_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_support_AMG_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "I_HMG_01_support_F";

};

class I_CA2035_D_Support_Mort_F : I_CA2035_T_Support_Mort_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Support_Mort_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQ_BANDOLLIER();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_tanktop_ard";

    backpack = "I_Mortar_01_weapon_F";

};

class I_CA2035_D_Support_AMort_F : I_CA2035_T_Support_AMort_F {
    author = "kenoxite";
    editorPreview = "\CA2035\indep\previews\d\I_CA2035_D_Support_AMort_F.jpg";
    scope = 2;
    scopeCurator = 2;
    
    ARMY_ARID_BASE();
    ARMY_ARID_EQUIPEMENT();
    RANDOM_HEADGEAR_ARID();

    uniformClass = "U_I_CA2035_RegularUniform_ard";

    backpack = "I_Mortar_01_support_F";

};
