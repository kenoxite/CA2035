
class OPF_CA2035_F
{
    name = "CSAT (Central Africa)";
    class Infantry
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Infantry0";
        class O_CA2035_InfSquad
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_LAT_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_M_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={-10,-10,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={15,-15,0};
            };
            class Unit6
            {
                side=0;
                vehicle="O_CA2035_soldier_A_F";
                rank="PRIVATE";
                position[]={-15,-15,0};
            };
            class Unit7
            {
                side=0;
                vehicle="O_CA2035_medic_F";
                rank="PRIVATE";
                position[]={20,-20,0};
            };
        };
        class O_CA2035_InfSquad_Weapons
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_GL_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_M_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="CORPORAL";
                position[]={-10,-10,0};
            };
            class Unit6
            {
                side=0;
                vehicle="O_CA2035_soldier_AAT_F";
                rank="PRIVATE";
                position[]={15,-15,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_soldier_A_F";
                rank="PRIVATE";
                position[]={-15,-15,0};
            };
            class Unit7
            {
                side=0;
                vehicle="O_CA2035_medic_F";
                rank="PRIVATE";
                position[]={20,-20,0};
            };
        };
        class O_CA2035_InfTeam
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_GL_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_LAT_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_InfTeam_AT
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_AAT_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_InfTeam_AA
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AA_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_AA_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_AAA_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_InfSentry
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_GL_F";
                rank="CORPORAL";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
        };
    };
    class SpecOps
    {
        name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
        class O_CA2035_SmallTeam_UAV
        {
            name="$STR_A3_cfggroups_uavteam_smallUAV";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_UAV_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_UAV_01_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
        };
        class O_CA2035_reconTeam
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_recon_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_recon_M_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_recon_medic_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_recon_LAT_F";
                rank="CORPORAL";
                position[]={10,-10,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_Recon_JTAC_F";
                rank="PRIVATE";
                position[]={-10,-10,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_recon_exp_F";
                rank="PRIVATE";
                position[]={15,-15,0};
            };
        };
        class O_CA2035_reconPatrol
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_recon_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_recon_M_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_recon_medic_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_recon_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_reconSentry
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_recon_M_F";
                rank="CORPORAL";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_recon_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
        };
        class O_CA2035_SniperTeam
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_sniper_F";
                rank="CORPORAL";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_spotter_F";
                rank="PRIVATE";
                position[]={5,-5,0};
            };
        };
    };
    class Support
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Support0";
        class O_CA2035_support_CLS
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_CLS0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_medic_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_medic_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_support_EOD
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_EOD0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_engineer_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_exp_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_exp_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_support_ENG
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_ENG0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_engineer_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_engineer_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_repair_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_recon_EOD
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_recon_EOD0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_recon.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_recon_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_recon_exp_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_recon_exp_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_recon_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
        };
        class O_CA2035_support_MG
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_MG0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_support_MG_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_support_AMG_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
        };
        class O_CA2035_support_GMG
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_GMG0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_support_GMG_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_support_AMG_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
        };
        class O_CA2035_support_Mort
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Support_BUS_support_Mort0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_mortar.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_support_Mort_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_support_AMort_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
        };
    };
    class Motorized_MTP
    {
        name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
        class O_CA2035_MotInf_Team
        {
            name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInfTeam0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MRAP_02_gmg_ghex_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
        };
        class O_CA2035_MotInf_AT
        {
            name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AT0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MRAP_02_ghex_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_AAT_F";
                rank="PRIVATE";
                position[]={0,-10,0};
            };
        };
        class O_CA2035_MotInf_AA
        {
            name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_AA0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MRAP_02_ghex_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_AA_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_AA_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_AAA_F";
                rank="PRIVATE";
                position[]={0,-10,0};
            };
        };
        class O_CA2035_MotInf_MGTeam
        {
            name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MGTeam0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MRAP_02_ghex_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_support_MG_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_support_AMG_F";
                rank="PRIVATE";
                position[]={0,-10,0};
            };
        };
        class O_CA2035_MotInf_GMGTeam
        {
            name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_GMGTeam0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MRAP_02_ghex_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_support_GMG_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_support_AMG_F";
                rank="PRIVATE";
                position[]={0,-10,0};
            };
        };
        class O_CA2035_MotInf_MortTeam
        {
            name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP_OIA_MotInf_MortTeam0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MRAP_02_ghex_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_support_Mort_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_support_AMort_F";
                rank="PRIVATE";
                position[]={0,-10,0};
            };
        };
        class O_CA2035_MotInf_Reinforcements
        {
            name="$STR_A3_CFGGROUPS_WEST_BLU_F_MOTORIZED_BUS_MOTINF_REINFORCE0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_Truck_03_transport_ghex_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={5,0,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_F";
                rank="PRIVATE";
                position[]={5,-2,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_LAT_F";
                rank="CORPORAL";
                position[]={5,-4,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_soldier_M_F";
                rank="PRIVATE";
                position[]={5,-6,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={5,-8,0};
            };
            class Unit6
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={5,-10,0};
            };
            class Unit7
            {
                side=0;
                vehicle="O_CA2035_soldier_A_F";
                rank="PRIVATE";
                position[]={-5,-8,0};
            };
            class Unit8
            {
                side=0;
                vehicle="O_CA2035_medic_F";
                rank="PRIVATE";
                position[]={-5,-10,0};
            };
            class Unit9
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={-5,0,0};
            };
            class Unit10
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={-5,-2,0};
            };
            class Unit11
            {
                side=0;
                vehicle="O_CA2035_soldier_GL_F";
                rank="PRIVATE";
                position[]={-5,-4,0};
            };
            class Unit12
            {
                side=0;
                vehicle="O_CA2035_soldier_LAT_F";
                rank="PRIVATE";
                position[]={-5,-6,0};
            };
        };
    };
    class Mechanized
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
        class O_CA2035_MechInfSquad
        {
            name="$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInfSquad0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_APC_Wheeled_02_rcws_v2_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_F";
                rank="PRIVATE";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_LAT_F";
                rank="CORPORAL";
                position[]={10,-10,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_soldier_M_F";
                rank="PRIVATE";
                position[]={-10,-10,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={15,-15,0};
            };
            class Unit6
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={-15,-15,0};
            };
            class Unit7
            {
                side=0;
                vehicle="O_CA2035_soldier_A_F";
                rank="PRIVATE";
                position[]={20,-20,0};
            };
            class Unit8
            {
                side=0;
                vehicle="O_CA2035_medic_F";
                rank="PRIVATE";
                position[]={-20,-20,0};
            };
        };
        class O_CA2035_MechInf_AT
        {
            name="$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_AT0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="PRIVATE";
                position[]={10,-10,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="PRIVATE";
                position[]={-10,-10,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_soldier_AT_F";
                rank="SERGEANT";
                position[]={15,-15,0};
            };
            class Unit6
            {
                side=0;
                vehicle="O_CA2035_soldier_AAT_F";
                rank="CORPORAL";
                position[]={-15,-15,0};
            };
            class Unit7
            {
                side=0;
                vehicle="O_CA2035_soldier_AAT_F";
                rank="PRIVATE";
                position[]={20,-20,0};
            };
            class Unit8
            {
                side=0;
                vehicle="O_CA2035_soldier_AAT_F";
                rank="PRIVATE";
                position[]={-20,-20,0};
            };
        };
        class O_CA2035_MechInf_AA
        {
            name="$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_AA0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_AA_F";
                rank="PRIVATE";
                position[]={10,-20,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_soldier_AA_F";
                rank="PRIVATE";
                position[]={-10,-20,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_soldier_AA_F";
                rank="SERGEANT";
                position[]={15,-15,0};
            };
            class Unit6
            {
                side=0;
                vehicle="O_CA2035_soldier_AAA_F";
                rank="CORPORAL";
                position[]={-15,-15,0};
            };
            class Unit7
            {
                side=0;
                vehicle="O_CA2035_soldier_AAA_F";
                rank="PRIVATE";
                position[]={20,-20,0};
            };
            class Unit8
            {
                side=0;
                vehicle="O_CA2035_soldier_AAA_F";
                rank="PRIVATE";
                position[]={-20,-20,0};
            };
        };
        class O_CA2035_MechInf_Support
        {
            name="$STR_A3_cfggroups_West_BLU_F_Mechanized_BUS_MechInf_Support0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_APC_Wheeled_02_rcws_v2_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_soldier_SL_F";
                rank="SERGEANT";
                position[]={5,-5,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={-5,-5,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_soldier_repair_F";
                rank="CORPORAL";
                position[]={10,-10,0};
            };
            class Unit4
            {
                side=0;
                vehicle="O_CA2035_engineer_F";
                rank="PRIVATE";
                position[]={-10,-10,0};
            };
            class Unit5
            {
                side=0;
                vehicle="O_CA2035_medic_F";
                rank="PRIVATE";
                position[]={15,-15,0};
            };
            class Unit6
            {
                side=0;
                vehicle="O_CA2035_soldier_AR_F";
                rank="CORPORAL";
                position[]={-15,-15,0};
            };
            class Unit7
            {
                side=0;
                vehicle="O_CA2035_soldier_exp_F";
                rank="PRIVATE";
                position[]={20,-20,0};
            };
            class Unit8
            {
                side=0;
                vehicle="O_CA2035_soldier_A_F";
                rank="PRIVATE";
                position[]={-20,-2,0};
            };
        };
    };
    class Armored
    {
        name="$STR_A3_CfgGroups_West_BLU_F_Armored0";

        class O_CA2035_TankPlatoon
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="SERGEANT";
                position[]={-10,-10,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="CORPORAL";
                position[]={20,-20,0};
            };
        };
        class O_CA2035_TankPlatoon_AA
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_AA_ghex_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="SERGEANT";
                position[]={-10,-10,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_AA_ghex_F";
                rank="CORPORAL";
                position[]={20,-20,0};
            };
        };
        class O_CA2035_TankSection
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_MBT_02_cannon_ghex_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
        };

        class O_CA2035_IFVPlatoon
        {
            name="IFV Platoon";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="SERGEANT";
                position[]={-10,-10,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="CORPORAL";
                position[]={20,-20,0};
            };
        };
        class O_CA2035_IFVSection
        {
            name="IFV Section";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_armor.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_APC_Tracked_02_cannon_ghex_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
        };

        class O_CA2035_SPGPlatoon_Scorcher
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MBT_02_arty_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_MBT_02_arty_ghex_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
            class Unit2
            {
                side=0;
                vehicle="O_CA2035_MBT_02_arty_ghex_F";
                rank="SERGEANT";
                position[]={-10,-10,0};
            };
            class Unit3
            {
                side=0;
                vehicle="O_CA2035_MBT_02_arty_ghex_F";
                rank="CORPORAL";
                position[]={20,-20,0};
            };
        };
        class O_CA2035_SPGSection_Scorcher
        {
            name="$STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\o_art.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_MBT_02_arty_ghex_F";
                rank="LIEUTENANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_MBT_02_arty_ghex_F";
                rank="SERGEANT";
                position[]={10,-10,0};
            };
        };
    };
    class Naval
    {
        name="Naval";
        class O_CA2035_NavalPatrol_Team
        {
            name="Sentry Team (Speed Boat)";
            side=0;
            faction="OPF_CA2035_F";
            icon="\A3\ui_f\data\map\markers\nato\b_naval.paa";
            class Unit0
            {
                side=0;
                vehicle="O_CA2035_soldier_TL_F";
                rank="SERGEANT";
                position[]={0,0,0};
            };
            class Unit1
            {
                side=0;
                vehicle="O_CA2035_Boat_Armed_01_hmg_F";
                rank="CORPORAL";
                position[]={5,-5,0};
            };
        };
    };
};

/*
class OPF_F
{
    class SpecOps
    {
        name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
    };
    class Motorized_MTP
    {
        name="$STR_A3_cfggroups_East_OPF_F_Motorized_MTP0";
    };
};
*/
