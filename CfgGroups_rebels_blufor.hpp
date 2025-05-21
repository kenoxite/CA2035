class IND_CA2035_G_F
{
    name = "Rebels (Central Africa)";
    class Infantry
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";
        class ParaFireTeam
        {
            name="Rebel Fire Team";
            side=1;
            faction="IND_CA2035_G_F";
            icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
            class Unit0
            {
                side=1;
                vehicle="I_G_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=1;
                vehicle="I_G_CA2035_soldier_AR_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=1;
                vehicle="I_G_CA2035_soldier_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=1;
                vehicle="I_G_CA2035_medic_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class ParaShockTeam
        {
            name="Rebel Shock Team";
            side=1;
            faction="IND_CA2035_G_F";
            icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
            class Unit0
            {
                side=1;
                vehicle="I_G_CA2035_Soldier_GL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=1;
                vehicle="I_G_CA2035_Soldier_LAT_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=1;
                vehicle="I_G_CA2035_soldier_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=1;
                vehicle="I_G_CA2035_Soldier_exp_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class ParaCombatGroup
        {
            name="Rebel Combat Group";
            side=1;
            faction="IND_CA2035_G_F";
            icon="\A3\ui_f\data\map\markers\nato\n_inf.paa";
            class Unit0
            {
                side=1;
                vehicle="I_G_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=1;
                vehicle="I_G_CA2035_soldier_AR_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=1;
                vehicle="I_G_CA2035_Soldier_GL_F";
                rank="SERGEANT";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=1;
                vehicle="I_G_CA2035_soldier_F";
                rank="CORPORAL";
                position[]={10,-10,0};
            };
            class Unit4
            {
                side=1;
                vehicle="I_G_CA2035_Soldier_A_F";
                rank="CORPORAL";
                position[]={-10,-10,0};
            };
            class Unit5
            {
                side=1;
                vehicle="I_G_CA2035_Soldier_LAT_F";
                rank="PRIVATE";
                position[]={15,-15,0};
            };
            class Unit6
            {
                side=1;
                vehicle="I_G_CA2035_Soldier_exp_F";
                rank="PRIVATE";
                position[]={-15,-15,0};
            };
            class Unit7
            {
                side=1;
                vehicle="I_G_CA2035_medic_F";
                rank="PRIVATE";
                position[]={20,-20,0};
            };
        };
    };
    class Motorized
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Motorized0";
        class TechnicalSection
        {
            name="Technical Section";
            side=2;
            faction="IND_CA2035_D_F";
            icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
            class Unit0
            {
                side=2;
                vehicle="I_CA2035_D_Offroad_HMG_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=2;
                vehicle="I_CA2035_D_Offroad_HMG_F";
                rank="CORPORAL";
                position[]={10,-10,0};
            };
        };
    };
};
