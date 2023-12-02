#define CSAT_AFR_SNIPER_BASE() \
    genericNames="AfroMen"; \
    identityTypes[] = { \
        "Head_African", \
        "LanguageFRE_F", \
        "G_CA2035_Crew" \
        }

#define CSAT_CHN_SNIPER_BASE() \
    genericNames="ChineseMen"; \
    identityTypes[] = { \
        "Head_Asian", \
        "LanguageCHI_F", \
        "G_CA2035_Crew" \
        }

class O_T_Sniper_F;
class O_CA2035_Sniper_F : O_T_Sniper_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_Sniper_F.jpg";
    faction = "OPF_CA2035_F";

    CSAT_AFR_SNIPER_BASE();

};
class O_CA2035_Sniper_CN_F : O_CA2035_Sniper_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper (chinese)";

    CSAT_CHN_SNIPER_BASE();

};

class O_T_Spotter_F;
class O_CA2035_Spotter_F : O_T_Spotter_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    editorPreview = "\CA2035\opfor\previews\t\O_CA2035_Spotter_F.jpg";
    faction = "OPF_CA2035_F";

    CSAT_AFR_SNIPER_BASE();

};
class O_CA2035_Spotter_CN_F : O_CA2035_Spotter_F {
    author = "kenoxite";
    scope = 2;
    scopeCurator = 2;
    displayName = "Spotter (chinese)";

    CSAT_CHN_SNIPER_BASE();

};
