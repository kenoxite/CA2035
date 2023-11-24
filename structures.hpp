    // FLAGS
    class FlagCarrier;
    class Flag_I_CA2035_F: FlagCarrier
    {
        author="kenoxite";
        class SimpleObject
        {
            eden=0;
            animate[]=
            {
                
                {
                    "flag",
                    0
                }
            };
            hide[]={};
            verticalOffset=3.977;
            verticalOffsetWorld=0;
            init="''";
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Green_F.jpg";
        scope=2;
        scopeCurator=2;
        displayName="Flag (CAAF)";
        hiddenSelectionsTextures[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
        };
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\CA2035\data\flags\flag_I_CA2035_co.paa'";
        };
    };

    class Flag_I_G_CA2035_F: FlagCarrier
    {
        author="kenoxite";
        class SimpleObject
        {
            eden=0;
            animate[]=
            {
                
                {
                    "flag",
                    0
                }
            };
            hide[]={};
            verticalOffset=3.977;
            verticalOffsetWorld=0;
            init="''";
        };
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Green_F.jpg";
        scope=2;
        scopeCurator=2;
        displayName="Flag (Rebels - Central Africa)";
        hiddenSelectionsTextures[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
        };
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '\CA2035\data\flags\flag_I_G_CA2035_co.paa'";
        };
    };