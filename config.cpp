#define VERSION "1.4"

#include "basicDefines.hpp"
#include "definitions.hpp"

class CfgFactionClasses
{
    class IND_CA2035_T_F {
        displayName = "CAAF (Tropic)";
        priority=2;
        side = 2;
        icon = "\CA2035\data\factionicons\icon_I_CA2035_ca.paa";
        flag = "\CA2035\data\flags\flag_I_CA2035_co.paa";
    };
    class IND_CA2035_D_F {
        displayName = "CAAF (Semi-Arid)";
        priority=2;
        side = 2;
        icon = "\CA2035\data\factionicons\icon_I_CA2035_ca.paa";
        flag = "\CA2035\data\flags\flag_I_CA2035_co.paa";
    };
    class IND_CA2035_G_F {
        displayName = "Rebels (Central Africa)";
        priority=2;
        side = 2;
        icon = "\CA2035\data\factionicons\icon_I_G_CA2035_ca.paa";
        flag = "\CA2035\data\flags\flag_I_G_CA2035_co.paa";
    };
    class CIV_CA2035_F {
        displayName = "Civilians (Central Africa)";
        priority=2;
        side = 3;
        icon = "\CA2035\data\factionicons\icon_I_CA2035_ca.paa";
        flag = "\CA2035\data\flags\flag_I_CA2035_co.paa";
    };
    class OPF_CA2035_F {
        displayName = "CSAT (Central Africa)";
        priority=1;
        side=0;
        icon="\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        flag="\a3\Data_f\Flags\flag_CSAT_co.paa";
    };
    class OPF_CA2035_G_F {
        displayName = "Rebels (Central Africa)";
        priority=2;
        side = 0;
        icon = "\CA2035\data\factionicons\icon_I_G_CA2035_ca.paa";
        flag = "\CA2035\data\flags\flag_I_G_CA2035_co.paa";
    };
};

class CfgPatches
{
    class CA2035 {
        units[] = {
              // "O_CA2035_Soldier_lite_F",
              "O_CA2035_crew_F",
              "O_CA2035_crew_CN_F",
              "O_CA2035_engineer_F",
              "O_CA2035_medic_F",
              "O_CA2035_officer_F",
              "O_CA2035_Helipilot_F",
              "O_CA2035_Pilot_F",
              "O_CA2035_Pilot_CN_F",
              "O_CA2035_Soldier_A_F",
              "O_CA2035_soldier_AA_F",
              "O_CA2035_soldier_AAT_F",
              "O_CA2035_soldier_AAA_F",
              "O_CA2035_soldier_AR_F",
              "O_CA2035_soldier_AT_F",
              "O_CA2035_soldier_exp_F",
              "O_CA2035_Soldier_F",
              "O_CA2035_soldier_GL_F",
              "O_CA2035_soldier_LAT_F",
              "O_CA2035_soldier_M_F",
              "O_CA2035_soldier_repair_F",
              "O_CA2035_soldier_SL_F",
              "O_CA2035_soldier_TL_F",
              "O_CA2035_soldier_UAV_F",
              
              "O_CA2035_support_MG_F",
              "O_CA2035_support_GMG_F",
              "O_CA2035_support_AMG_F",
              "O_CA2035_support_Mort_F",
              "O_CA2035_support_AMort_F",

              "O_CA2035_Recon_Exp_F",
              "O_CA2035_Recon_Exp_CN_F",
              "O_CA2035_Recon_F",
              "O_CA2035_Recon_JTAC_F",
              "O_CA2035_Recon_JTAC_CN_F",
              "O_CA2035_Recon_LAT_F",
              "O_CA2035_Recon_LAT_CN_F",
              "O_CA2035_Recon_M_F",
              "O_CA2035_Recon_M_CN_F",
              "O_CA2035_Recon_Medic_F",
              "O_CA2035_Recon_Medic_CN_F",
              "O_CA2035_Recon_TL_F",
              "O_CA2035_Recon_TL_CN_F",

              "O_CA2035_Sniper_F",
              "O_CA2035_Sniper_CN_F",
              "O_CA2035_Spotter_F",
              "O_CA2035_Spotter_CN_F",

              // "O_CA2035_AAA_System_01_F",
              "O_CA2035_APC_Tracked_02_AA_ghex_F",
              "O_CA2035_APC_Tracked_02_cannon_ghex_F",
              "O_CA2035_APC_Wheeled_02_rcws_v2_ghex_F",
              "O_CA2035_Boat_Transport_01_F",
              "O_CA2035_Boat_Armed_01_hmg_F",
              "O_CA2035_Heli_Light_02_dynamicLoadout_F",
              "O_CA2035_Heli_Light_02_unarmed_F",
              "O_CA2035_MBT_02_cannon_ghex_F",
              "O_CA2035_MBT_02_arty_ghex_F",
              "O_CA2035_MRAP_02_ghex_F",
              "O_CA2035_MRAP_02_hmg_ghex_F",
              "O_CA2035_MRAP_02_gmg_ghex_F",
              "O_CA2035_Quadbike_01_ghex_F",
              "O_CA2035_Truck_03_ammo_ghex_F",
              "O_CA2035_Truck_03_covered_ghex_F",
              "O_CA2035_Truck_03_fuel_ghex_F",
              "O_CA2035_Truck_03_medical_ghex_F",
              "O_CA2035_Truck_03_repair_ghex_F",
              "O_CA2035_Truck_03_transport_ghex_F",
              "O_CA2035_UAV_01_F",
              "O_CA2035_VTOL_02_infantry_dynamicLoadout_F",
              "O_CA2035_VTOL_02_vehicle_dynamicLoadout_F",

              "O_CA2035_Static_AA_F",
              "O_CA2035_Static_AT_F",
              "O_CA2035_HMG_01_F",
              "O_CA2035_HMG_01_high_F",
              "O_CA2035_GMG_01_F",
              "O_CA2035_GMG_01_high_F",
              "O_CA2035_Mortar_01_F",

              "I_CA2035_T_Crew_F",
              "I_CA2035_T_Engineer_F",
              "I_CA2035_T_Soldier_Exp_F",
              "I_CA2035_T_HeliCrew_F",
              "I_CA2035_T_HeliPilot_F",
              "I_CA2035_T_Medic_F",
              "I_CA2035_T_Officer_F",
              "I_CA2035_T_Soldier_A_F",
              "I_CA2035_T_Soldier_AA_F",
              "I_CA2035_T_Soldier_AAA_F",
              "I_CA2035_T_Soldier_AAR_F",
              "I_CA2035_T_Soldier_AAT_F",
              "I_CA2035_T_Soldier_AR_F",
              "I_CA2035_T_Soldier_AT_F",
              "I_CA2035_T_Soldier_GL_F",
              "I_CA2035_T_Soldier_F",
              "I_CA2035_T_Soldier_LAT_F",
              "I_CA2035_T_Soldier_LAT2_F",
              "I_CA2035_T_Soldier_M_F",
              "I_CA2035_T_Soldier_SL_F",
              "I_CA2035_T_Soldier_TL_F",
              "I_CA2035_T_Soldier_Repair_F",
              "I_CA2035_T_Soldier_UAV_F",
              "I_CA2035_T_Soldier_Unarmed_F",
              "I_CA2035_T_Survivor_F",

              "I_CA2035_T_support_MG_F",
              "I_CA2035_T_support_GMG_F",
              "I_CA2035_T_support_AMG_F",
              "I_CA2035_T_Support_Mort_F",
              "I_CA2035_T_Support_AMort_F",

              "I_CA2035_D_Crew_F",
              "I_CA2035_D_Engineer_F",
              "I_CA2035_D_Soldier_Exp_F",
              "I_CA2035_D_HeliCrew_F",
              "I_CA2035_D_HeliPilot_F",
              "I_CA2035_D_Medic_F",
              "I_CA2035_D_Officer_F",
              "I_CA2035_D_Soldier_A_F",
              "I_CA2035_D_Soldier_AAA_F",
              "I_CA2035_D_Soldier_AAR_F",
              "I_CA2035_D_Soldier_AAT_F",
              "I_CA2035_D_Soldier_AR_F",
              "I_CA2035_D_Soldier_AT_F",
              "I_CA2035_D_Soldier_AA_F",
              "I_CA2035_D_Soldier_GL_F",
              "I_CA2035_D_Soldier_F",
              "I_CA2035_D_Soldier_LAT_F",
              "I_CA2035_D_Soldier_LAT2_F",
              "I_CA2035_D_Soldier_M_F",
              "I_CA2035_D_Soldier_SL_F",
              "I_CA2035_D_Soldier_TL_F",
              "I_CA2035_D_Soldier_Repair_F",
              "I_CA2035_D_Soldier_UAV_F",
              "I_CA2035_D_Soldier_Unarmed_F",
              "I_CA2035_D_Survivor_F",
              
              "I_CA2035_D_support_MG_F",
              "I_CA2035_D_support_GMG_F",
              "I_CA2035_D_support_AMG_F",
              "I_CA2035_D_Support_Mort_F",
              "I_CA2035_D_Support_AMort_F",

              "I_CA2035_T_Recon_AR_F",
              "I_CA2035_T_Recon_Exp_F",
              "I_CA2035_T_Recon_F",
              "I_CA2035_T_Recon_GL_F",
              "I_CA2035_T_Recon_JTAC_F",
              "I_CA2035_T_Recon_LAT_F",
              "I_CA2035_T_Recon_M_F",
              "I_CA2035_T_Recon_Medic_F",
              "I_CA2035_T_Recon_TL_F",

              "I_CA2035_D_Recon_AR_F",
              "I_CA2035_D_Recon_Exp_F",
              "I_CA2035_D_Recon_F",
              "I_CA2035_D_Recon_GL_F",
              "I_CA2035_D_Recon_JTAC_F",
              "I_CA2035_D_Recon_LAT_F",
              "I_CA2035_D_Recon_M_F",
              "I_CA2035_D_Recon_Medic_F",
              "I_CA2035_D_Recon_TL_F",

              "I_CA2035_T_Recon_DA_F",

              "I_CA2035_T_Sniper_F",
              "I_CA2035_T_Spotter_F",

              "I_CA2035_D_Sniper_F",
              "I_CA2035_D_Spotter_F",

              "I_CA2035_T_APC_Wheeled_03_cannon_F",
              "I_CA2035_T_AR_2Darter_F",
              "I_CA2035_T_Assault_Boat_F",
              "I_CA2035_T_Quad_Bike_F",    
              // "I_CA2035_T_MSE_3_F",  
              "I_CA2035_T_Offroad_F",
              "I_CA2035_T_Offroad_HMG_F",
              "I_CA2035_T_Offroad_02_AT_F",
              "I_CA2035_T_Offroad_02_LMG_F",
              "I_CA2035_T_Offroad_02_unarmed_F",
              "I_CA2035_T_Speedboat_Minigun_F",
              "I_CA2035_T_Strider_F",
              "I_CA2035_T_T100_F",
              "I_CA2035_T_WY_55_F",
              "I_CA2035_T_WY_55_Unarmed_F",
              "I_CA2035_T_Zamak_Ammo_F",
              "I_CA2035_T_Zamak_Covered_F",
              "I_CA2035_T_Zamak_Fuel_F",
              "I_CA2035_T_Zamak_Medical_F",
              "I_CA2035_T_Zamak_Repair_F",
              "I_CA2035_T_Zamak_Transport_F",
              // "I_CA2035_T_2S9_F",

              "I_CA2035_T_GMG_20_mm_F",
              "I_CA2035_T_GMG_20_mm_Raised_F",
              "I_CA2035_T_MHMG_50_F",
              "I_CA2035_T_MHMG_50_Raised_F",
              "I_CA2035_T_Mk6_Mortar_F",
              "I_CA2035_T_static_AA_F",
              "I_CA2035_T_static_AT_F",

              "I_CA2035_D_APC_Wheeled_03_cannon_F",
              "I_CA2035_D_AR_2Darter_F",
              "I_CA2035_D_Assault_Boat_F",
              "I_CA2035_D_Quad_Bike_F",    
              // "I_CA2035_D_MSE_3_F",  
              "I_CA2035_D_Offroad_F",
              "I_CA2035_D_Offroad_HMG_F",
              "I_CA2035_D_Offroad_02_AT_F",
              "I_CA2035_D_Offroad_02_LMG_F",
              "I_CA2035_D_Offroad_02_unarmed_F",
              "I_CA2035_D_Speedboat_Minigun_F",
              "I_CA2035_D_Strider_F",
              "I_CA2035_D_T100_F",
              "I_CA2035_D_WY_55_F",
              "I_CA2035_D_WY_55_Unarmed_F",
              "I_CA2035_D_Zamak_Ammo_F",
              "I_CA2035_D_Zamak_Covered_F",
              "I_CA2035_D_Zamak_Fuel_F",
              "I_CA2035_D_Zamak_Medical_F",
              "I_CA2035_D_Zamak_Repair_F",
              "I_CA2035_D_Zamak_Transport_F",
              // "I_CA2035_D_2S9_F",
              
              "I_CA2035_D_GMG_20_mm_F",
              "I_CA2035_D_GMG_20_mm_Raised_F",
              "I_CA2035_D_MHMG_50_F",
              "I_CA2035_D_MHMG_50_Raised_F",
              "I_CA2035_D_Mk6_Mortar_F",
              "I_CA2035_D_static_AA_F",
              "I_CA2035_D_static_AT_F",

              "I_G_CA2035_engineer_F",
              "I_G_CA2035_medic_F",
              "I_G_CA2035_officer_F",
              "I_G_CA2035_Sharpshooter_F",
              "I_G_CA2035_Soldier_A_F",
              "I_G_CA2035_Soldier_AR_F",
              "I_G_CA2035_Soldier_exp_F",
              "I_G_CA2035_Soldier_F",
              "I_G_CA2035_Soldier_GL_F",
              "I_G_CA2035_Soldier_LAT_F",
              "I_G_CA2035_Soldier_LAT2_F",
              "I_G_CA2035_Soldier_lite_F",
              "I_G_CA2035_Soldier_M_F",
              "I_G_CA2035_Soldier_SL_F",
              "I_G_CA2035_Soldier_TL_F",
              "I_G_CA2035_Soldier_unarmed_F",
              "I_G_CA2035_Survivor_F",

              "I_G_CA2035_Offroad_01_F",
              "I_G_CA2035_Offroad_AT_F",
              "I_G_CA2035_Offroad_01_armed_F",
              "I_G_CA2035_Offroad_repair_F",
              "I_G_CA2035_Van_01_fuel_F",
              "I_G_CA2035_Van_01_transport_F",
              "I_G_CA2035_Van_02_vehicle_F",
              "I_G_CA2035_Van_02_transport_F",
              "I_G_CA2035_Mortar_01_F",
              "I_G_CA2035_HMG_02_F",
              "I_G_CA2035_HMG_02_high_F",
              "I_G_CA2035_Assault_Boat_F",
              "I_G_CA2035_Boat_Transport_02_F",
              "I_G_CA2035_Offroad_02_unarmed_F",
              "I_G_CA2035_Offroad_02_AT_F",
              "I_G_CA2035_Offroad_02_LMG_F",
              "I_G_CA2035_Quad_Bike_F",
              "I_G_CA2035_Scooter_Transport_01_F",
              "I_G_CA2035_Heli_Light_01_F",

              "O_G_CA2035_engineer_F",
              "O_G_CA2035_medic_F",
              "O_G_CA2035_officer_F",
              "O_G_CA2035_Sharpshooter_F",
              "O_G_CA2035_Soldier_A_F",
              "O_G_CA2035_Soldier_AR_F",
              "O_G_CA2035_Soldier_exp_F",
              "O_G_CA2035_Soldier_F",
              "O_G_CA2035_Soldier_GL_F",
              "O_G_CA2035_Soldier_LAT_F",
              "O_G_CA2035_Soldier_LAT2_F",
              "O_G_CA2035_Soldier_lite_F",
              "O_G_CA2035_Soldier_M_F",
              "O_G_CA2035_Soldier_SL_F",
              "O_G_CA2035_Soldier_TL_F",
              "O_G_CA2035_Soldier_unarmed_F",
              "O_G_CA2035_Survivor_F",

              "O_G_CA2035_Offroad_01_F",
              "O_G_CA2035_Offroad_AT_F",
              "O_G_CA2035_Offroad_01_armed_F",
              "O_G_CA2035_Offroad_repair_F",
              "O_G_CA2035_Van_01_fuel_F",
              "O_G_CA2035_Van_01_transport_F",
              "O_G_CA2035_Van_02_vehicle_F",
              "O_G_CA2035_Van_02_transport_F",
              "O_G_CA2035_Mortar_01_F",
              "O_G_CA2035_HMG_02_F",
              "O_G_CA2035_HMG_02_high_F",
              "O_G_CA2035_Assault_Boat_F",
              "O_G_CA2035_Boat_Transport_02_F",
              "O_G_CA2035_Offroad_02_unarmed_F",
              "O_G_CA2035_Offroad_02_AT_F",
              "O_G_CA2035_Offroad_02_LMG_F",
              "O_G_CA2035_Quad_Bike_F",
              "O_G_CA2035_Scooter_Transport_01_F",
              "O_G_CA2035_Heli_Light_01_F",

              "C_CA2035_man_polo_1_F_afro",
              "C_CA2035_man_polo_2_F_afro",
              "C_CA2035_man_polo_3_F_afro",
              "C_CA2035_man_polo_4_F_afro",
              "C_CA2035_man_polo_5_F_afro",
              "C_CA2035_man_polo_6_F_afro",
              "C_CA2035_man_p_fugitive_F_afro",
              "C_CA2035_man_p_beggar_F_afro",
              "C_CA2035_man_p_shorts_1_F_afro",
              "C_CA2035_man_shorts_1_F_afro",
              "C_CA2035_man_shorts_2_F_afro",
              "C_CA2035_man_shorts_3_F_afro",
              "C_CA2035_man_shorts_4_F_afro",
              "C_CA2035_man_sport_1_F_afro",
              "C_CA2035_man_sport_2_F_afro",
              "C_CA2035_man_sport_3_F_afro",
              "C_CA2035_man_casual_1_F_afro",
              "C_CA2035_man_casual_2_F_afro",
              "C_CA2035_man_casual_3_F_afro",
              "C_CA2035_man_casual_4_F_afro",
              "C_CA2035_man_casual_5_F_afro",
              "C_CA2035_man_casual_6_F_afro",

              "C_CA2035_man_w_worker_F_asia",
              "C_CA2035_scientist_F_asia",
              "C_CA2035_Man_Paramedic_01_F_asia",
              "C_CA2035_man_polo_1_F_asia",
              "C_CA2035_man_polo_2_F_asia",
              "C_CA2035_man_polo_3_F_asia",
              "C_CA2035_man_polo_4_F_asia",
              "C_CA2035_man_polo_5_F_asia",
              "C_CA2035_man_polo_6_F_asia",
              "C_CA2035_man_p_fugitive_F_asia",
              "C_CA2035_man_p_beggar_F_asia",
              "C_CA2035_man_p_shorts_1_F_asia",
              "C_CA2035_man_shorts_1_F_asia",
              "C_CA2035_man_shorts_2_F_asia",
              "C_CA2035_man_shorts_3_F_asia",
              "C_CA2035_man_shorts_4_F_asia",
              "C_CA2035_man_sport_1_F_asia",
              "C_CA2035_man_sport_2_F_asia",
              "C_CA2035_man_sport_3_F_asia",
              "C_CA2035_man_casual_1_F_asia",
              "C_CA2035_man_casual_2_F_asia",
              "C_CA2035_man_casual_3_F_asia",
              "C_CA2035_man_casual_4_F_asia",
              "C_CA2035_man_casual_5_F_asia",
              "C_CA2035_man_casual_6_F_asia",

              "Item_I_CA2035_RegularUniform_wdl",
              "Item_I_CA2035_RegularUniform_trp",
              "Item_I_CA2035_RegularUniform_ard",

              "Item_I_CA2035_OfficerUniform_wdl",
              "Item_I_CA2035_OfficerUniform_trp",
              "Item_I_CA2035_OfficerUniform_ard",

              "Item_I_CA2035_ReconUniform_wdl",
              "Item_I_CA2035_ReconUniform_trp",
              "Item_I_CA2035_ReconUniform_ard",
              "Item_I_CA2035_ReconUniform_black",

              "Item_I_CA2035_RegularUniform_wdl_tanktop",
              "Item_I_CA2035_RegularUniform_trp_tanktop",
              "Item_I_CA2035_RegularUniform_ard_tanktop",

              "Item_I_CA2035_HeliPilotCoveralls",

              "Item_I_CA2035_GhillieSuit_wdl",
              "Item_I_CA2035_GhillieSuit_trp",
              "Item_I_CA2035_GhillieSuit_ard",

              "Item_I_G_CA2035_Rebel_1",
              "Item_I_G_CA2035_Rebel_2",
              "Item_I_G_CA2035_Rebel_2",

              "Item_I_CA2035_UavTerminal",

              "Vest_V_PlateCarrierIA1_CA2035_wdl",
              "Vest_V_PlateCarrierIA1_CA2035_trp",
              "Vest_V_PlateCarrierIA1_CA2035_ard",
              
              "Vest_V_PlateCarrierIA1_CA2035_black",
              "Vest_V_PlateCarrierIA1_CA2035_brown",
              "Vest_V_PlateCarrierIA1_CA2035_green",

              "Vest_V_PlateCarrierIA2_CA2035_wdl",
              "Vest_V_PlateCarrierIA2_CA2035_trp",
              "Vest_V_PlateCarrierIA2_CA2035_ard",
              
              "Vest_V_PlateCarrierIA2_CA2035_black",
              "Vest_V_PlateCarrierIA2_CA2035_brown",
              "Vest_V_PlateCarrierIA2_CA2035_green",

              "Vest_V_HarnessO_CA2035_wdl",
              "Vest_V_HarnessO_CA2035_ard",

              "Headgear_H_Cap_O_CA2035_ghex",
              "Headgear_H_Cap_O_CA2035_trp",
              "Headgear_H_Cap_O_CA2035_ard",

              "Headgear_H_Bandanna_hs_CA2035_wdl",
              "Headgear_H_Bandanna_hs_CA2035_trp",
              "Headgear_H_Bandanna_hs_CA2035_ard",

              "Headgear_H_MilCap_CA2035_wdl",
              "Headgear_H_MilCap_CA2035_trp",
              "Headgear_H_MilCap_CA2035_ard",

              "Headgear_H_Booniehat_CA2035_wdl",
              "Headgear_H_Booniehat_CA2035_trp",
              "Headgear_H_Booniehat_CA2035_ard",

              "Headgear_H_HelmetIA_CA2035_wdl",
              "Headgear_H_HelmetIA_CA2035_trp",
              "Headgear_H_HelmetIA_CA2035_ard",
              "Headgear_H_HelmetIA_CA2035_ard2",
              "Headgear_H_HelmetIA_CA2035_ghex",

              "Headgear_H_HelmetIA_fast_CA2035_trp",
              "Headgear_H_HelmetIA_fast_CA2035_ard",
              "Headgear_H_HelmetIA_fast_CA2035_green",
              "Headgear_H_HelmetIA_fast_CA2035_brown",
              "Headgear_H_HelmetIA_fast_CA2035_black",

              "Flag_I_CA2035_F",
              "Flag_I_G_CA2035_F",

              "IND_CA2035_T_F_AmmoBox",
              "IND_CA2035_T_F_WeaponsBox",
              "IND_CA2035_T_F_LaunchersBox",
              "IND_CA2035_T_F_UniformBox",
              "IND_CA2035_T_F_SupportBox",
              "IND_CA2035_T_F_SupplyBox",

              "IND_CA2035_D_F_AmmoBox",
              "IND_CA2035_D_F_WeaponsBox",
              "IND_CA2035_D_F_LaunchersBox",
              "IND_CA2035_D_F_UniformBox",
              "IND_CA2035_D_F_SupportBox",
              "IND_CA2035_D_F_SupplyBox",

              "OPF_CA2035_F_AmmoBox",
              "OPF_CA2035_F_WeaponsBox",
              "OPF_CA2035_F_LaunchersBox",
              "OPF_CA2035_F_UniformBox",
              "OPF_CA2035_F_SupportBox",
              "OPF_CA2035_F_SupplyBox",

              "IND_CA2035_G_F_AmmoBox",
              "IND_CA2035_G_F_WeaponsBox",
              "IND_CA2035_G_F_LaunchersBox",
              "IND_CA2035_G_F_UniformBox",
              "IND_CA2035_G_F_SupportBox",
              "IND_CA2035_G_F_SupplyBox"
        };
        weapons[] = {
              "U_O_CA2035_officer_noInsignia_ghex",

              "U_I_CA2035_RegularUniform_wdl",
              "U_I_CA2035_RegularUniform_trp",
              "U_I_CA2035_RegularUniform_ard",

              "U_I_CA2035_OfficerUniform_wdl",
              "U_I_CA2035_OfficerUniform_trp",
              "U_I_CA2035_OfficerUniform_ard",

              "U_I_CA2035_ReconUniform_wdl",
              "U_I_CA2035_ReconUniform_trp",
              "U_I_CA2035_ReconUniform_ard",
              "U_I_CA2035_ReconUniform_black",

              "U_I_CA2035_RegularUniform_tanktop_wdl",
              "U_I_CA2035_RegularUniform_tanktop_trp",
              "U_I_CA2035_RegularUniform_tanktop_ard",

              "U_I_CA2035_HeliPilotCoveralls",

              "U_I_CA2035_GhillieSuit_wdl",
              "U_I_CA2035_GhillieSuit_trp",
              "U_I_CA2035_GhillieSuit_ard",

              "U_I_G_CA2035_Rebel_1",
              "U_I_G_CA2035_Rebel_2",
              "U_I_G_CA2035_Rebel_2",

              "H_Cap_O_CA2035_ghex",
              "H_Cap_O_CA2035_trp",
              "H_Cap_O_CA2035_ard",

              "H_Bandanna_hs_CA2035_wdl",
              "H_Bandanna_hs_CA2035_trp",
              "H_Bandanna_hs_CA2035_ard",

              "H_MilCap_CA2035_wdl",
              "H_MilCap_CA2035_trp",
              "H_MilCap_CA2035_ard",

              "H_Booniehat_CA2035_wdl",
              "H_Booniehat_CA2035_trp",
              "H_Booniehat_CA2035_ard",

              "H_HelmetIA_CA2035_wdl",
              "H_HelmetIA_CA2035_trp",
              "H_HelmetIA_CA2035_ard",
              "H_HelmetIA_CA2035_ard2",
              "H_HelmetIA_CA2035_ghex",

              "H_HelmetIA_fast_CA2035_trp",
              "H_HelmetIA_fast_CA2035_ard",
              "H_HelmetIA_fast_CA2035_green",
              "H_HelmetIA_fast_CA2035_brown",
              "H_HelmetIA_fast_CA2035_black",

              "V_PlateCarrierIA1_CA2035_wdl",
              "V_PlateCarrierIA1_CA2035_trp",
              "V_PlateCarrierIA1_CA2035_ard",
              
              "V_PlateCarrierIA1_CA2035_black",
              "V_PlateCarrierIA1_CA2035_brown",
              "V_PlateCarrierIA1_CA2035_green",

              "V_PlateCarrierIA2_CA2035_wdl",
              "V_PlateCarrierIA2_CA2035_trp",
              "V_PlateCarrierIA2_CA2035_ard",
              
              "V_PlateCarrierIA2_CA2035_black",
              "V_PlateCarrierIA2_CA2035_brown",
              "V_PlateCarrierIA2_CA2035_green",

              "V_HarnessO_CA2035_wdl",
              "V_HarnessO_CA2035_ard",

              "I_CA2035_UavTerminal",

              "arifle_SPAR_01_khk_aco_snds_F",

              "arifle_CTAR_blk_flash_F",
              "arifle_CTAR_blk_aco_flash_F",
              "arifle_CTAR_blk_arco_F",

              "arifle_CTAR_GL_blk_arco_flash_F",
              "arifle_CTAR_GL_blk_arco_F",

              "arifle_CTARS_blk_flash_F",

              "srifle_DMR_07_blk_F_arco_flash_F",
              "srifle_DMR_01_DMS_BI_fl_F",

              "arifle_AK12_fl_F",
              "arifle_AK12_aco_F",
              "arifle_AK12_fl_aco_F",
              "arifle_AK12_fl_mrco_F",

              "arifle_AK12_GL_fl_F",
              "arifle_AK12_GL_fl_aco_F",

              "arifle_AK12_aco_snds_F",
              "arifle_AK12_mrco_snds_F",
              "arifle_AK12_mrco_pointer_snds_F",

              "arifle_AK12_GL_aco_snds_F",
              "arifle_AK12_GL_mrco_snds_F",

              "arifle_AK12_lush_aco_snds_F",
              "arifle_AK12_lush_mrco_snds_F",
              "arifle_AK12_lush_mrco_pointer_F",
              "arifle_AK12_lush_mrco_pointer_snds_F",
              
              "arifle_AK12_GL_lush_aco_snds_F",
              "arifle_AK12_GL_lush_mrco_snds_F",

              "arifle_AK12_arid_aco_snds_F",
              "arifle_AK12_arid_mrco_snds_F",
              "arifle_AK12_arid_mrco_pointer_F",
              "arifle_AK12_arid_mrco_pointer_snds_F",

              "arifle_AK12_GL_arid_aco_snds_F",
              "arifle_AK12_GL_arid_mrco_snds_F",

              "arifle_RPK12_fl_F",

              "arifle_RPK12_lush_snds_aco_F",
              "arifle_RPK12_lush_snds_mrco_F",

              "arifle_RPK12_arid_snds_aco_F",
              "arifle_RPK12_arid_snds_mrco_F",

              "arifle_AK12_trp_F",
              "arifle_AK12_trp_aco_snds_F",
              "arifle_AK12_trp_aco_pointer_snds_F",
              "arifle_AK12_trp_mrco_snds_F",
              "arifle_AK12_trp_mrco_pointer_F",
              "arifle_AK12_trp_mrco_pointer_snds_F",
              "arifle_AK12_trp_arco_snds_F",
              "arifle_AK12_trp_arco_pointer_F",
              "arifle_AK12_trp_arco_pointer_snds_F",
              "arifle_AK12_GL_trp_F",
              "arifle_AK12_GL_trp_aco_snds_F",
              "arifle_AK12_GL_trp_aco_pointer_snds_F",
              "arifle_AK12_GL_trp_mrco_snds_F",
              "arifle_AK12_GL_trp_arco_snds_F",
              "arifle_AK12_GL_trp_arco_pointer_snds_F",
              "arifle_AK12_sarid_F",
              "arifle_AK12_sarid_aco_snds_F",
              "arifle_AK12_sarid_aco_pointer_snds_F",
              "arifle_AK12_sarid_mrco_snds_F",
              "arifle_AK12_sarid_mrco_pointer_F",
              "arifle_AK12_sarid_mrco_pointer_snds_F",
              "arifle_AK12_sarid_arco_snds_F",
              "arifle_AK12_sarid_arco_pointer_snds_F",
              "arifle_AK12_sarid_arco_pointer_F",
              "arifle_AK12_sarid_arco_pointer_snds_F",
              "arifle_AK12_GL_sarid_F",
              "arifle_AK12_GL_sarid_aco_snds_F",
              "arifle_AK12_GL_sarid_mrco_snds_F",
              "arifle_AK12_GL_sarid_arco_snds_F",
              "arifle_AK12_GL_sarid_arco_pointer_snds_F",
              
              "arifle_RPK12_trp_F",
              "arifle_RPK12_trp_fl_F",
              "arifle_RPK12_trp_snds_aco_F",
              "arifle_RPK12_trp_aco_pointer_snds_F",
              "arifle_RPK12_trp_snds_mrco_F",
              "arifle_RPK12_trp_snds_arco_F",
              "arifle_RPK12_sarid_F",
              "arifle_RPK12_sarid_fl_F",
              "arifle_RPK12_sarid_snds_aco_F",
              "arifle_RPK12_sarid_aco_pointer_snds_F",
              "arifle_RPK12_sarid_snds_mrco_F",
              "arifle_RPK12_sarid_snds_arco_F",

              "I_CA2035_arifle_Mk20_Black_F",
              "I_CA2035_arifle_Mk20_GL_Black_F",

              "arifle_Mk20_Black_snds_aco_F",
              "arifle_Mk20_Black_pointer_snds_aco_F",
              "arifle_Mk20_Black_snds_mrco_F",
              "arifle_Mk20_Black_snds_pointer_mrco_F",

              "arifle_Mk20_GL_Black_snds_aco_F",
              "arifle_Mk20_GL_Black_snds_mrco_F",
              "arifle_Mk20_GL_Black_snds_pointer_mrco_F",

              "I_CA2035_srifle_EBR_Black_F",
              "srifle_EBR_Black_snds_DMS_bipod_F",

              "srifle_EBR_CA2035_trp_F",
              "srifle_EBR_CA2035_trp_snds_DMS_bipod_F",
              "srifle_EBR_CA2035_trp_snds_DMS_pointer_bipod_F",
              "srifle_EBR_CA2035_sarid_F",
              "srifle_EBR_CA2035_sarid_snds_DMS_bipod_F",
              "srifle_EBR_CA2035_sarid_snds_DMS_pointer_bipod_F",

              "srifle_GM6_lrps_f",
              "srifle_GM6_CA2035_trp_F",
              "srifle_GM6_CA2035_trp_lrps_f",
              "srifle_GM6_CA2035_sarid_F",
              "srifle_GM6_CA2035_sarid_lrps_f"
        };
        requiredVersion = 1.62;
        requiredAddons[] = {
              "A3_Characters_F",
              "A3_Characters_F_Exp",
              "A3_Sounds_F",
              "A3_Sounds_F_Exp",
              "A3_Data_F",
              "A3_Data_F_Curator",
              "A3_Air_F",
              "A3_Soft_F",
              "A3_Soft_F_Beta",
              "A3_Soft_F_Gamma",
              "A3_Soft_F_Exp",
              "A3_Soft_F_EPC",
              "A3_Armor_F_Beta",
              "A3_Armor_F_Gamma",
              "A3_Armor_F_EPB",
              "A3_Air_F_EPB",
              "A3_Static_F",
              "A3_Boat_F",
              "A3_Boat_F_Beta",
              "A3_Boat_F_Exp",
              "A3_Weapons_F",
              "A3_Weapons_F_Exp",
              "A3_Weapons_F_Enoch"
        };

        name = "2035 Central Africa";
        author = "kenoxite";
        authors[] = {
            "kenoxite",
            "krzychuzokecia"
        };
        // url = "";
        version = VERSION;
    };
};

class cfgWeapons
{
    #include "cfgWeapons.hpp"
};

class CfgVehicles
{
    
    // BACKPACKS
    #include "backpacks.hpp"

    // INFANTRY
    class I_Soldier_base_F;
    class O_Soldier_base_F;

    // LanguageENG_F
    // LanguagePER_F
    // LanguageGRE_F
    // LanguageENGB_F
    // LanguageFRE_F
    // LanguageENGFRE_F
    // LanguageCHI_F
    // LanguageRUS_F
    // LanguagePOL_F
    // LanguageENGVR_F
    // LanguageGREVR_F
    // LanguagePERVR_F

    // Regular army
    #include "uniforms_v.hpp"

    #include "army_tropical.hpp"
    #include "army_semiarid.hpp"

    #include "csat_tropical.hpp"

    #include "i_rebels.hpp"
    #include "o_rebels.hpp"

    // Recon
    #include "recon_tropical.hpp"
    #include "recon_semiarid.hpp"

    #include "recon_csat_tropical.hpp"

    // Snipers  
    #include "snipers_tropical.hpp"
    #include "snipers_semiarid.hpp"

    #include "snipers_csat_tropical.hpp"

    // Civilians
    #include "civilians.hpp"

    // VEHICLES
    #include "vehicles_tropical.hpp"
    #include "vehicles_semiarid.hpp"

    #include "vehicles_i_rebels.hpp"
    #include "vehicles_o_rebels.hpp"

    #include "vehicles_csat_tropical.hpp"

    // ITEMS
    #include "items.hpp"

    // CRATES
    #include "crates.hpp"

    // STRUCTURES
    #include "structures.hpp"

};

#include "cfgGlasses.hpp"

class CfgMarkers
{
    class flag_NATO;
    
    class flag_CAAF: flag_NATO
    {
        name = "CAAF";
        icon = "\CA2035\data\factionicons\I_CA2035_ca.paa";
    };
    
    class flag_Rebels_CA: flag_NATO
    {
        name = "Rebels (Central Africa)";
        icon = "\CA2035\data\factionicons\I_G_CA2035_ca.paa";
    };
};

class CfgGroups
{
    class West
    {
        // name="$STR_A3_CfgGroups_West0";
        // side=1;
        // #include "CfgGroups_rebels_blufor.hpp"
    };
    class Indep {
        // name="$STR_A3_CfgGroups_Indep0";
        // side=2;
        #include "CfgGroups_tropical.hpp"
        #include "CfgGroups_semiarid.hpp"
        #include "CfgGroups_rebels_indep.hpp"
    };

    class East {
        // name="$STR_A3_CfgGroups_East0";
        // side=0;
        #include "CfgGroups_csat_tropical.hpp"
        #include "CfgGroups_rebels_opfor.hpp"
    };
};

class CfgFunctions
{
    class CA2035
    {
        tag="CA2035";
        class functions {
            file = "CA2035\data\functions";
            class randomUniformTexture {};
        };
    };
};
