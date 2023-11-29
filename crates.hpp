
class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
// class Box_East_Uniforms_F; // CUP_RUBasicWeaponsBox
class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
class O_SupplyCrate_F; // CUP_RUVehicleBox
class B_SupplyCrate_F; // CUP_USVehicleBox

// ------------------------
// CAAF - Tropic
// ------------------------

class IND_CA2035_T_F_AmmoBox : Box_NATO_Ammo_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Tropic) Ammo Box;
    class TransportMagazines {
        mag_xx(30Rnd_762x39_AK12_Mag_F,50);
        mag_xx(Chemlight_yellow,50);
        mag_xx(HandGrenade,50);
        mag_xx(SmokeShellYellow,50);
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(SatchelCharge_Remote_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(30Rnd_9x21_Mag,50);
        mag_xx(SmokeShell,50);
        mag_xx(SmokeShellPurple,50);
        mag_xx(SmokeShellOrange,50);
        mag_xx(MiniGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(RPG32_F,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(Titan_AA,50);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(Titan_AT,50);
        mag_xx(30Rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(SmokeShellGreen,50);
        mag_xx(30rnd_762x39_AK12_Mag_F,50);
        mag_xx(11Rnd_45ACP_Mag,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(APERSMine_Range_Mag,50);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(30rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(5Rnd_127x108_Mag,50);
    };
    class TransportWeapons {
    };
    class TransportItems {
    };
};
class IND_CA2035_T_F_WeaponsBox : Box_NATO_Wps_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Tropic) Weapons Box;
    class TransportMagazines {
        mag_xx(30Rnd_762x39_AK12_Mag_F,50);
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(30Rnd_9x21_Mag,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(11Rnd_45ACP_Mag,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(5Rnd_127x108_Mag,50);
    };
    class TransportWeapons {
        weap_xx(arifle_AK12_fl_F,10);
        weap_xx(arifle_AKS_F,10);
        weap_xx(arifle_AK12_F,10);
        weap_xx(hgun_PDW2000_F,10);
        weap_xx(arifle_RPK12_fl_F,10);
        weap_xx(arifle_AK12_GL_fl_F,10);
        weap_xx(arifle_AK12_fl_mrco_F,10);
        weap_xx(arifle_AK12_aco_F,10);
        weap_xx(hgun_Pistol_01_F,10);
        weap_xx(arifle_AK12_GL_fl_aco_F,10);
        weap_xx(arifle_AK12_trp_aco_snds_F,10);
        weap_xx(hgun_Pistol_heavy_01_green_F,10);
        weap_xx(arifle_RPK12_trp_snds_aco_F,10);
        weap_xx(arifle_AK12_GL_trp_aco_snds_F,10);
        weap_xx(srifle_EBR_Black_snds_DMS_bipod_F,10);
        weap_xx(arifle_AK12_trp_mrco_pointer_snds_F,10);
        weap_xx(srifle_GM6_LRPS_F,10);
        weap_xx(arifle_AK12_trp_mrco_pointer_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_MRCO,10);
        item_xx(optic_Aco,10);
        item_xx(muzzle_snds_B,10);
        item_xx(optic_DMS,10);
        item_xx(bipod_01_F_blk,10);
        item_xx(acc_pointer_IR,10);
        item_xx(optic_LRPS,10);
    };
};
class IND_CA2035_T_F_LaunchersBox : Box_NATO_WpsLaunch_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Tropic) Launchers Box;
    class TransportMagazines {
        mag_xx(Titan_AA,5);
        mag_xx(Titan_AT,5);
        mag_xx(RPG32_F,5);
    };
    class TransportWeapons {
        weap_xx(launch_B_Titan_olive_F,5);
        weap_xx(launch_B_Titan_short_tna_F,5);
        weap_xx(launch_RPG32_green_F,5);
    };
    class TransportItems {
    };
};
class IND_CA2035_T_F_UniformBox : Box_NATO_Uniforms_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Tropic) Uniform Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(U_I_CA2035_RegularUniform_trp,15);
        item_xx(U_I_CA2035_RegularUniform_tanktop_trp,15);
        item_xx(U_I_CA2035_HeliPilotCoveralls,15);
        item_xx(U_I_CA2035_OfficerUniform_trp,15);
        item_xx(U_I_CA2035_ReconUniform_trp,15);
        item_xx(U_I_CA2035_GhillieSuit_trp,15);
    };
};
class IND_CA2035_T_F_SupportBox : Box_NATO_Support_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Tropic) Support Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(V_HarnessO_CA2035_wdl,10);
        item_xx(H_HelmetIA_CA2035_trp,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(V_BandollierB_rgr,10);
        item_xx(H_HelmetCrew_I,10);
        item_xx(NVGoggles_INDEP,10);
        item_xx(V_BandollierB_oli,10);
        item_xx(B_Carryall_Engineer_Trp,10);
        item_xx(G_Spectacles_Tinted_CA2035,10);
        item_xx(V_TacVest_camo,10);
        item_xx(H_PilotHelmetHeli_I_E,10);
        item_xx(G_Combat_Goggles_tna_F_CA2035,10);
        item_xx(B_FieldPack_Medic_Trp,10);
        item_xx(G_Aviator_CA2035,10);
        item_xx(B_Carryall_Ammo_Trp,10);
        item_xx(B_FieldPack_AA_Trp,10);
        item_xx(B_Carryall_AAA_Trp,10);
        item_xx(Rangefinder,10);
        item_xx(B_TacticalPack_AAR_Trp,10);
        item_xx(B_FieldPack_AAT_Trp,10);
        item_xx(B_FieldPack_AT_Trp,10);
        item_xx(Binocular,10);
        item_xx(V_PlateCarrierIA2_CA2035_wdl,10);
        item_xx(H_MilCap_CA2035_trp,10);
        item_xx(ItemGPS,10);
        item_xx(V_PlateCarrierIA1_CA2035_wdl,10);
        item_xx(B_Carryall_Repair_Trp,10);
        item_xx(I_CA2035_UAV_01_backpack_F,10);
        item_xx(I_CA2035_UavTerminal,10);
        item_xx(G_Shades_Black_CA2035,10);
        item_xx(I_HMG_01_weapon_F,10);
        item_xx(I_GMG_01_weapon_F,10);
        item_xx(I_HMG_01_support_F,10);
        item_xx(I_Mortar_01_weapon_F,10);
        item_xx(I_Mortar_01_support_F,10);
        item_xx(V_Chestrig_oli,10);
        item_xx(H_Bandanna_hs_CA2035_trp,10);
        item_xx(H_HelmetIA_fast_CA2035_trp,10);
        item_xx(B_FieldPack_LAT_Trp,10);
        item_xx(Laserdesignator_03,10);
        item_xx(G_Lowprofile_CA2035,10);
        item_xx(B_FieldPack_Recon_Medic_Trp,10);
        item_xx(H_HelmetIA_fast_CA2035_green,10);
        item_xx(None_CA2035,10);
        item_xx(B_Carryall_Recon_Exp_Trp,10);
        item_xx(V_Chestrig_rgr,10);
    };
};
class IND_CA2035_T_F_SupplyBox : B_SupplyCrate_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Tropic) Supply Box;
    class TransportMagazines {
        mag_xx(30Rnd_762x39_AK12_Mag_F,50);
        mag_xx(Chemlight_yellow,50);
        mag_xx(HandGrenade,50);
        mag_xx(SmokeShellYellow,50);
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(SatchelCharge_Remote_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(30Rnd_9x21_Mag,50);
        mag_xx(SmokeShell,50);
        mag_xx(SmokeShellPurple,50);
        mag_xx(SmokeShellOrange,50);
        mag_xx(MiniGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(RPG32_F,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(Titan_AA,50);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(Titan_AT,50);
        mag_xx(30Rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(SmokeShellGreen,50);
        mag_xx(30rnd_762x39_AK12_Mag_F,50);
        mag_xx(11Rnd_45ACP_Mag,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(APERSMine_Range_Mag,50);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(30rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(5Rnd_127x108_Mag,50);
    };
    class TransportWeapons {
        weap_xx(arifle_AK12_fl_F,10);
        weap_xx(arifle_AKS_F,10);
        weap_xx(arifle_AK12_F,10);
        weap_xx(hgun_PDW2000_F,10);
        weap_xx(arifle_RPK12_fl_F,10);
        weap_xx(arifle_AK12_GL_fl_F,10);
        weap_xx(arifle_AK12_fl_mrco_F,10);
        weap_xx(arifle_AK12_aco_F,10);
        weap_xx(hgun_Pistol_01_F,10);
        weap_xx(arifle_AK12_GL_fl_aco_F,10);
        weap_xx(arifle_AK12_trp_aco_snds_F,10);
        weap_xx(hgun_Pistol_heavy_01_green_F,10);
        weap_xx(arifle_RPK12_trp_snds_aco_F,10);
        weap_xx(arifle_AK12_GL_trp_aco_snds_F,10);
        weap_xx(srifle_EBR_Black_snds_DMS_bipod_F,10);
        weap_xx(arifle_AK12_trp_mrco_pointer_snds_F,10);
        weap_xx(srifle_GM6_LRPS_F,10);
        weap_xx(arifle_AK12_trp_mrco_pointer_F,10);
        weap_xx(launch_B_Titan_olive_F,10);
        weap_xx(launch_B_Titan_short_tna_F,10);
        weap_xx(launch_RPG32_green_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_MRCO,10);
        item_xx(optic_Aco,10);
        item_xx(muzzle_snds_B,10);
        item_xx(optic_DMS,10);
        item_xx(bipod_01_F_blk,10);
        item_xx(acc_pointer_IR,10);
        item_xx(optic_LRPS,10);
        item_xx(V_HarnessO_CA2035_wdl,10);
        item_xx(H_HelmetIA_CA2035_trp,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(V_BandollierB_rgr,10);
        item_xx(H_HelmetCrew_I,10);
        item_xx(NVGoggles_INDEP,10);
        item_xx(V_BandollierB_oli,10);
        item_xx(B_Carryall_Engineer_Trp,10);
        item_xx(G_Spectacles_Tinted_CA2035,10);
        item_xx(V_TacVest_camo,10);
        item_xx(H_PilotHelmetHeli_I_E,10);
        item_xx(G_Combat_Goggles_tna_F_CA2035,10);
        item_xx(B_FieldPack_Medic_Trp,10);
        item_xx(G_Aviator_CA2035,10);
        item_xx(B_Carryall_Ammo_Trp,10);
        item_xx(B_FieldPack_AA_Trp,10);
        item_xx(B_Carryall_AAA_Trp,10);
        item_xx(Rangefinder,10);
        item_xx(B_TacticalPack_AAR_Trp,10);
        item_xx(B_FieldPack_AAT_Trp,10);
        item_xx(B_FieldPack_AT_Trp,10);
        item_xx(Binocular,10);
        item_xx(V_PlateCarrierIA2_CA2035_wdl,10);
        item_xx(H_MilCap_CA2035_trp,10);
        item_xx(ItemGPS,10);
        item_xx(V_PlateCarrierIA1_CA2035_wdl,10);
        item_xx(B_Carryall_Repair_Trp,10);
        item_xx(I_CA2035_UAV_01_backpack_F,10);
        item_xx(I_CA2035_UavTerminal,10);
        item_xx(G_Shades_Black_CA2035,10);
        item_xx(I_HMG_01_weapon_F,10);
        item_xx(I_GMG_01_weapon_F,10);
        item_xx(I_HMG_01_support_F,10);
        item_xx(I_Mortar_01_weapon_F,10);
        item_xx(I_Mortar_01_support_F,10);
        item_xx(V_Chestrig_oli,10);
        item_xx(H_Bandanna_hs_CA2035_trp,10);
        item_xx(H_HelmetIA_fast_CA2035_trp,10);
        item_xx(B_FieldPack_LAT_Trp,10);
        item_xx(Laserdesignator_03,10);
        item_xx(G_Lowprofile_CA2035,10);
        item_xx(B_FieldPack_Recon_Medic_Trp,10);
        item_xx(H_HelmetIA_fast_CA2035_green,10);
        item_xx(None_CA2035,10);
        item_xx(B_Carryall_Recon_Exp_Trp,10);
        item_xx(V_Chestrig_rgr,10);
        item_xx(U_I_CA2035_RegularUniform_trp,10);
        item_xx(U_I_CA2035_RegularUniform_tanktop_trp,10);
        item_xx(U_I_CA2035_HeliPilotCoveralls,10);
        item_xx(U_I_CA2035_OfficerUniform_trp,10);
        item_xx(U_I_CA2035_ReconUniform_trp,10);
        item_xx(U_I_CA2035_GhillieSuit_trp,10);
    };
};

// ------------------------
// CAAF - Semi-Arid
// ------------------------

class IND_CA2035_D_F_AmmoBox : Box_NATO_Ammo_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Semi-Arid) Ammo Box;
    class TransportMagazines {
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(SmokeShellYellow,50);
        mag_xx(Chemlight_yellow,50);
        mag_xx(30Rnd_762x39_AK12_Mag_F,50);
        mag_xx(SatchelCharge_Remote_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(30Rnd_9x21_Mag,50);
        mag_xx(SmokeShell,50);
        mag_xx(SmokeShellPurple,50);
        mag_xx(SmokeShellOrange,50);
        mag_xx(30Rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(HandGrenade,50);
        mag_xx(MiniGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(RPG32_F,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(Titan_AA,50);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(Titan_AT,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(SmokeShellGreen,50);
        mag_xx(11Rnd_45ACP_Mag,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(APERSMine_Range_Mag,50);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(5Rnd_127x108_Mag,50);
    };
    class TransportWeapons {
    };
    class TransportItems {
    };
};
class IND_CA2035_D_F_WeaponsBox : Box_NATO_Wps_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Semi-Arid) Weapons Box;
    class TransportMagazines {
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(30Rnd_762x39_AK12_Mag_F,50);
        mag_xx(30Rnd_9x21_Mag,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(11Rnd_45ACP_Mag,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(5Rnd_127x108_Mag,50);
    };
    class TransportWeapons {
        weap_xx(arifle_AKS_F,10);
        weap_xx(arifle_AK12_F,10);
        weap_xx(hgun_PDW2000_F,10);
        weap_xx(arifle_AK12_fl_F,10);
        weap_xx(arifle_AK12_aco_F,10);
        weap_xx(hgun_Pistol_01_F,10);
        weap_xx(arifle_RPK12_fl_F,10);
        weap_xx(arifle_AK12_GL_fl_F,10);
        weap_xx(arifle_AK12_fl_mrco_F,10);
        weap_xx(arifle_AK12_GL_fl_aco_F,10);
        weap_xx(arifle_AK12_sarid_aco_snds_F,10);
        weap_xx(hgun_Pistol_heavy_01_F,10);
        weap_xx(arifle_RPK12_sarid_snds_aco_F,10);
        weap_xx(arifle_AK12_GL_sarid_aco_snds_F,10);
        weap_xx(srifle_EBR_Black_snds_DMS_bipod_F,10);
        weap_xx(arifle_AK12_sarid_mrco_pointer_snds_F,10);
        weap_xx(srifle_GM6_LRPS_F,10);
        weap_xx(arifle_AK12_sarid_mrco_pointer_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_Aco,10);
        item_xx(optic_MRCO,10);
        item_xx(muzzle_snds_B_snd_F,10);
        item_xx(muzzle_snds_B,10);
        item_xx(optic_DMS,10);
        item_xx(bipod_01_F_blk,10);
        item_xx(acc_pointer_IR,10);
        item_xx(optic_LRPS,10);
    };
};
class IND_CA2035_D_F_LaunchersBox : Box_NATO_WpsLaunch_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Semi-Arid) Launchers Box;
    class TransportMagazines {
        mag_xx(Titan_AT,5);
        mag_xx(Titan_AA,5);
        mag_xx(RPG32_F,5);
    };
    class TransportWeapons {
        weap_xx(launch_B_Titan_short_tna_F,5);
        weap_xx(launch_B_Titan_olive_F,5);
        weap_xx(launch_RPG32_green_F,5);
    };
    class TransportItems {
    };
};
class IND_CA2035_D_F_UniformBox : Box_NATO_Uniforms_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Semi-Arid) Uniform Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(U_I_CA2035_RegularUniform_tanktop_ard,15);
        item_xx(U_I_CA2035_RegularUniform_ard,15);
        item_xx(U_I_CA2035_HeliPilotCoveralls,15);
        item_xx(U_I_CA2035_OfficerUniform_ard,15);
        item_xx(U_I_CA2035_ReconUniform_ard,15);
        item_xx(U_I_CA2035_GhillieSuit_ard,15);
    };
};
class IND_CA2035_D_F_SupportBox : Box_NATO_Support_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Semi-Arid) Support Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(V_BandollierB_khk,10);
        item_xx(H_HelmetCrew_I,10);
        item_xx(NVGoggles,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(H_HelmetIA_CA2035_ard,10);
        item_xx(G_Aviator_CA2035,10);
        item_xx(B_Carryall_Engineer_Ard,10);
        item_xx(V_TacVest_khk,10);
        item_xx(H_PilotHelmetHeli_I_E,10);
        item_xx(B_FieldPack_Medic_Ard,10);
        item_xx(H_MilCap_CA2035_ard,10);
        item_xx(ItemGPS,10);
        item_xx(B_Carryall_Ammo_Ard,10);
        item_xx(V_HarnessO_brn,10);
        item_xx(B_Carryall_AAA_Ard,10);
        item_xx(Rangefinder,10);
        item_xx(B_TacticalPack_AAR_Ard,10);
        item_xx(G_Combat_Goggles_tna_F_CA2035,10);
        item_xx(B_FieldPack_AAT_Ard,10);
        item_xx(G_Spectacles_Tinted_CA2035,10);
        item_xx(B_FieldPack_AT_Ard,10);
        item_xx(B_FieldPack_AA_Ard,10);
        item_xx(Binocular,10);
        item_xx(V_PlateCarrierIA2_CA2035_ard,10);
        item_xx(V_PlateCarrierIA1_CA2035_ard,10);
        item_xx(B_Carryall_Repair_Ard,10);
        item_xx(I_CA2035_UAV_01_backpack_F,10);
        item_xx(I_CA2035_UavTerminal,10);
        item_xx(G_Shades_Black_CA2035,10);
        item_xx(I_HMG_01_weapon_F,10);
        item_xx(I_GMG_01_weapon_F,10);
        item_xx(I_HMG_01_support_F,10);
        item_xx(I_Mortar_01_weapon_F,10);
        item_xx(I_Mortar_01_support_F,10);
        item_xx(V_Chestrig_khk,10);
        item_xx(H_HelmetIA_fast_CA2035_brown,10);
        item_xx(B_FieldPack_LAT_Ard,10);
        item_xx(G_Sport_Greenblack_CA2035,10);
        item_xx(H_Bandanna_hs_CA2035_ard,10);
        item_xx(G_Balaclava_blk_CA2035,10);
        item_xx(None_CA2035,10);
        item_xx(B_FieldPack_Recon_Medic_Ard,10);
        item_xx(G_Sport_Blackyellow_CA2035,10);
        item_xx(B_Carryall_Recon_Exp_Ard,10);
        item_xx(Laserdesignator_03,10);
    };
};
class IND_CA2035_D_F_SupplyBox : B_SupplyCrate_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CAAF (Semi-Arid) Supply Box;
    class TransportMagazines {
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(SmokeShellYellow,50);
        mag_xx(Chemlight_yellow,50);
        mag_xx(30Rnd_762x39_AK12_Mag_F,50);
        mag_xx(SatchelCharge_Remote_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(30Rnd_9x21_Mag,50);
        mag_xx(SmokeShell,50);
        mag_xx(SmokeShellPurple,50);
        mag_xx(SmokeShellOrange,50);
        mag_xx(30Rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(HandGrenade,50);
        mag_xx(MiniGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(RPG32_F,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(Titan_AA,50);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,50);
        mag_xx(Titan_AT,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(SmokeShellGreen,50);
        mag_xx(11Rnd_45ACP_Mag,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(APERSMine_Range_Mag,50);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(5Rnd_127x108_Mag,50);
    };
    class TransportWeapons {
        weap_xx(arifle_AKS_F,10);
        weap_xx(arifle_AK12_F,10);
        weap_xx(hgun_PDW2000_F,10);
        weap_xx(arifle_AK12_fl_F,10);
        weap_xx(arifle_AK12_aco_F,10);
        weap_xx(hgun_Pistol_01_F,10);
        weap_xx(arifle_RPK12_fl_F,10);
        weap_xx(arifle_AK12_GL_fl_F,10);
        weap_xx(arifle_AK12_fl_mrco_F,10);
        weap_xx(arifle_AK12_GL_fl_aco_F,10);
        weap_xx(arifle_AK12_sarid_aco_snds_F,10);
        weap_xx(hgun_Pistol_heavy_01_F,10);
        weap_xx(arifle_RPK12_sarid_snds_aco_F,10);
        weap_xx(arifle_AK12_GL_sarid_aco_snds_F,10);
        weap_xx(srifle_EBR_Black_snds_DMS_bipod_F,10);
        weap_xx(arifle_AK12_sarid_mrco_pointer_snds_F,10);
        weap_xx(srifle_GM6_LRPS_F,10);
        weap_xx(arifle_AK12_sarid_mrco_pointer_F,10);
        weap_xx(launch_B_Titan_short_tna_F,10);
        weap_xx(launch_B_Titan_olive_F,10);
        weap_xx(launch_RPG32_green_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_Aco,10);
        item_xx(optic_MRCO,10);
        item_xx(muzzle_snds_B_snd_F,10);
        item_xx(muzzle_snds_B,10);
        item_xx(optic_DMS,10);
        item_xx(bipod_01_F_blk,10);
        item_xx(acc_pointer_IR,10);
        item_xx(optic_LRPS,10);
        item_xx(V_BandollierB_khk,10);
        item_xx(H_HelmetCrew_I,10);
        item_xx(NVGoggles,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(H_HelmetIA_CA2035_ard,10);
        item_xx(G_Aviator_CA2035,10);
        item_xx(B_Carryall_Engineer_Ard,10);
        item_xx(V_TacVest_khk,10);
        item_xx(H_PilotHelmetHeli_I_E,10);
        item_xx(B_FieldPack_Medic_Ard,10);
        item_xx(H_MilCap_CA2035_ard,10);
        item_xx(ItemGPS,10);
        item_xx(B_Carryall_Ammo_Ard,10);
        item_xx(V_HarnessO_brn,10);
        item_xx(B_Carryall_AAA_Ard,10);
        item_xx(Rangefinder,10);
        item_xx(B_TacticalPack_AAR_Ard,10);
        item_xx(G_Combat_Goggles_tna_F_CA2035,10);
        item_xx(B_FieldPack_AAT_Ard,10);
        item_xx(G_Spectacles_Tinted_CA2035,10);
        item_xx(B_FieldPack_AT_Ard,10);
        item_xx(B_FieldPack_AA_Ard,10);
        item_xx(Binocular,10);
        item_xx(V_PlateCarrierIA2_CA2035_ard,10);
        item_xx(V_PlateCarrierIA1_CA2035_ard,10);
        item_xx(B_Carryall_Repair_Ard,10);
        item_xx(I_CA2035_UAV_01_backpack_F,10);
        item_xx(I_CA2035_UavTerminal,10);
        item_xx(G_Shades_Black_CA2035,10);
        item_xx(I_HMG_01_weapon_F,10);
        item_xx(I_GMG_01_weapon_F,10);
        item_xx(I_HMG_01_support_F,10);
        item_xx(I_Mortar_01_weapon_F,10);
        item_xx(I_Mortar_01_support_F,10);
        item_xx(V_Chestrig_khk,10);
        item_xx(H_HelmetIA_fast_CA2035_brown,10);
        item_xx(B_FieldPack_LAT_Ard,10);
        item_xx(G_Sport_Greenblack_CA2035,10);
        item_xx(H_Bandanna_hs_CA2035_ard,10);
        item_xx(G_Balaclava_blk_CA2035,10);
        item_xx(None_CA2035,10);
        item_xx(B_FieldPack_Recon_Medic_Ard,10);
        item_xx(G_Sport_Blackyellow_CA2035,10);
        item_xx(B_Carryall_Recon_Exp_Ard,10);
        item_xx(Laserdesignator_03,10);
        item_xx(U_I_CA2035_RegularUniform_tanktop_ard,10);
        item_xx(U_I_CA2035_RegularUniform_ard,10);
        item_xx(U_I_CA2035_HeliPilotCoveralls,10);
        item_xx(U_I_CA2035_OfficerUniform_ard,10);
        item_xx(U_I_CA2035_ReconUniform_ard,10);
        item_xx(U_I_CA2035_GhillieSuit_ard,10);
    };
};

// ------------------------
// CSAT - Central Africa
// ------------------------

class OPF_CA2035_F_AmmoBox : Box_NATO_Ammo_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CSAT (Central Africa) Ammo Box;
    class TransportMagazines {
        mag_xx(30Rnd_580x42_Mag_F,50);
        mag_xx(HandGrenade,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(Chemlight_red,50);
        mag_xx(100Rnd_580x42_Mag_F,50);
        mag_xx(RPG32_F,50);
        mag_xx(MiniGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(10Rnd_93x64_DMR_05_Mag,50);
        mag_xx(20Rnd_650x39_Cased_Mag_F,50);
        mag_xx(6Rnd_45ACP_Cylinder,50);
        mag_xx(SmokeShell,50);
        mag_xx(RPG32_HE_F,50);
        mag_xx(30Rnd_580x42_Mag_Tracer_F,50);
        mag_xx(16Rnd_9x21_Mag,50);
        mag_xx(Titan_AA,50);
        mag_xx(Titan_AT,50);
        mag_xx(Titan_AP,50);
        mag_xx(SatchelCharge_Remote_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,50);
        mag_xx(SmokeShellOrange,50);
        mag_xx(SmokeShellYellow,50);
        mag_xx(APERSMine_Range_Mag,50);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,50);
        mag_xx(O_IR_Grenade,50);
        mag_xx(1Rnd_Smoke_Grenade_shell,50);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,50);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(5Rnd_127x108_Mag,50);
        mag_xx(5Rnd_127x108_APDS_Mag,50);
        mag_xx(APERSTripMine_Wire_Mag,50);
    };
    class TransportWeapons {
    };
    class TransportItems {
    };
};
class OPF_CA2035_F_WeaponsBox : Box_NATO_Wps_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CSAT (Central Africa) Weapons Box;
    class TransportMagazines {
        mag_xx(30Rnd_580x42_Mag_F,50);
        mag_xx(100Rnd_580x42_Mag_F,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(20Rnd_650x39_Cased_Mag_F,50);
        mag_xx(6Rnd_45ACP_Cylinder,50);
        mag_xx(16Rnd_9x21_Mag,50);
        mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,50);
        mag_xx(5Rnd_127x108_Mag,50);
    };
    class TransportWeapons {
        weap_xx(arifle_CTAR_blk_aco_flash_F,10);
        weap_xx(arifle_CTAR_blk_flash_F,10);
        weap_xx(arifle_CTARS_blk_flash_F,10);
        weap_xx(arifle_CTAR_GL_blk_arco_flash_F,10);
        weap_xx(srifle_DMR_07_blk_F_arco_flash_F,10);
        weap_xx(arifle_CTAR_blk_ACO_F,10);
        weap_xx(hgun_Pistol_heavy_02_Yorris_F,10);
        weap_xx(arifle_CTAR_blk_ARCO_F,10);
        weap_xx(hgun_Rook40_F,10);
        weap_xx(arifle_CTAR_GL_blk_arco_F,10);
        weap_xx(arifle_CTAR_blk_F,10);
        weap_xx(SMG_02_ACO_F,10);
        weap_xx(arifle_CTAR_blk_ACO_Pointer_Snds_F,10);
        weap_xx(hgun_Rook40_snds_F,10);
        weap_xx(arifle_CTAR_GL_blk_ACO_Pointer_Snds_F,10);
        weap_xx(srifle_DMR_07_blk_DMS_Snds_F,10);
        weap_xx(arifle_CTAR_blk_ARCO_Pointer_Snds_F,10);
        weap_xx(srifle_GM6_ghex_LRPS_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_ACO_grn,10);
        item_xx(optic_Arco_blk_F,10);
        item_xx(optic_Yorris,10);
        item_xx(optic_ACO_grn_smg,10);
        item_xx(muzzle_snds_58_blk_F,10);
        item_xx(acc_pointer_IR,10);
        item_xx(muzzle_snds_L,10);
        item_xx(muzzle_snds_65_TI_blk_F,10);
        item_xx(optic_DMS,10);
        item_xx(optic_LRPS_ghex_F,10);
    };
};
class OPF_CA2035_F_LaunchersBox : Box_NATO_WpsLaunch_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CSAT (Central Africa) Launchers Box;
    class TransportMagazines {
        mag_xx(RPG32_F,5);
        mag_xx(Titan_AA,5);
        mag_xx(Titan_AT,5);
    };
    class TransportWeapons {
        weap_xx(launch_RPG32_ghex_F,5);
        weap_xx(launch_O_Titan_ghex_F,5);
        weap_xx(launch_O_Titan_short_ghex_F,5);
    };
    class TransportItems {
    };
};
class OPF_CA2035_F_UniformBox : Box_NATO_Uniforms_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CSAT (Central Africa) Uniform Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(U_O_CA2035_officer_noInsignia_ghex,15);
        item_xx(U_O_T_Officer_F,15);
        item_xx(U_O_PilotCoveralls,15);
        item_xx(U_O_T_Soldier_F,15);
        item_xx(U_O_T_Sniper_F,15);
    };
};
class OPF_CA2035_F_SupportBox : Box_NATO_Support_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CSAT (Central Africa) Support Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(V_Chestrig_rgr,10);
        item_xx(H_MilCap_ghex_F,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(V_BandollierB_ghex_F,10);
        item_xx(B_Carryall_ghex_OTAmmo_F,10);
        item_xx(H_Cap_O_CA2035_ghex,10);
        item_xx(G_Spectacles_Tinted_CA2035,10);
        item_xx(V_TacVest_oli,10);
        item_xx(G_Combat_Goggles_tna_F_CA2035,10);
        item_xx(B_FieldPack_ghex_OTMedic_F,10);
        item_xx(H_Beret_CSAT_01_F,10);
        item_xx(ItemGPS,10);
        item_xx(B_FieldPack_ghex_OTLAT_F,10);
        item_xx(Binocular,10);
        item_xx(NVGoggles_OPFOR,10);
        item_xx(B_FieldPack_ghex_OTAA_F,10);
        item_xx(B_FieldPack_ghex_OTAT_F,10);
        item_xx(Rangefinder,10);
        item_xx(B_Carryall_ghex_OTAAA_F,10);
        item_xx(B_Carryall_ghex_OTAAT_F,10);
        item_xx(O_UAV_01_backpack_F,10);
        item_xx(O_UavTerminal,10);
        item_xx(B_Carryall_ghex_OTEng_F,10);
        item_xx(B_Carryall_ghex_OTExp_F,10);
        item_xx(B_FieldPack_ghex_OTRepair_F,10);
        item_xx(O_HMG_01_weapon_F,10);
        item_xx(O_HMG_01_support_F,10);
        item_xx(O_GMG_01_weapon_F,10);
        item_xx(O_Mortar_01_weapon_F,10);
        item_xx(O_Mortar_01_support_F,10);
        item_xx(H_HelmetCrew_O_ghex_F,10);
        item_xx(O_NVGoggles_ghex_F,10);
        item_xx(H_PilotHelmetHeli_O,10);
        item_xx(H_PilotHelmetFighter_O,10);
        item_xx(B_Parachute,10);
        item_xx(V_HarnessO_ghex_F,10);
        item_xx(G_Aviator_CA2035,10);
        item_xx(G_Balaclava_blk_CA2035,10);
        item_xx(B_Carryall_ghex_OTReconExp_F,10);
        item_xx(Laserdesignator_02,10);
        item_xx(V_HarnessOGL_ghex_F,10);
        item_xx(G_Bandanna_shades_CA2035,10);
        item_xx(B_FieldPack_ghex_OTRPG_AT_F,10);
        item_xx(G_Lowprofile_CA2035,10);
        item_xx(B_FieldPack_ghex_OTReconMedic_F,10);
        item_xx(V_TacChestrig_oli_F,10);
    };
};
class OPF_CA2035_F_SupplyBox : B_SupplyCrate_F {
    author = ALiVE ORBAT CREATOR;
    displayName = CSAT (Central Africa) Supply Box;
    class TransportMagazines {
        mag_xx(30Rnd_580x42_Mag_F,50);
        mag_xx(HandGrenade,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(Chemlight_red,50);
        mag_xx(100Rnd_580x42_Mag_F,50);
        mag_xx(RPG32_F,50);
        mag_xx(MiniGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(10Rnd_93x64_DMR_05_Mag,50);
        mag_xx(20Rnd_650x39_Cased_Mag_F,50);
        mag_xx(6Rnd_45ACP_Cylinder,50);
        mag_xx(SmokeShell,50);
        mag_xx(RPG32_HE_F,50);
        mag_xx(30Rnd_580x42_Mag_Tracer_F,50);
        mag_xx(16Rnd_9x21_Mag,50);
        mag_xx(Titan_AA,50);
        mag_xx(Titan_AT,50);
        mag_xx(Titan_AP,50);
        mag_xx(SatchelCharge_Remote_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,50);
        mag_xx(SmokeShellOrange,50);
        mag_xx(SmokeShellYellow,50);
        mag_xx(APERSMine_Range_Mag,50);
        mag_xx(1Rnd_SmokeYellow_Grenade_shell,50);
        mag_xx(O_IR_Grenade,50);
        mag_xx(1Rnd_Smoke_Grenade_shell,50);
        mag_xx(1Rnd_SmokeRed_Grenade_shell,50);
        mag_xx(1Rnd_SmokeOrange_Grenade_shell,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(5Rnd_127x108_Mag,50);
        mag_xx(5Rnd_127x108_APDS_Mag,50);
        mag_xx(APERSTripMine_Wire_Mag,50);
    };
    class TransportWeapons {
        weap_xx(arifle_CTAR_blk_aco_flash_F,10);
        weap_xx(arifle_CTAR_blk_flash_F,10);
        weap_xx(arifle_CTARS_blk_flash_F,10);
        weap_xx(arifle_CTAR_GL_blk_arco_flash_F,10);
        weap_xx(srifle_DMR_07_blk_F_arco_flash_F,10);
        weap_xx(arifle_CTAR_blk_ACO_F,10);
        weap_xx(hgun_Pistol_heavy_02_Yorris_F,10);
        weap_xx(arifle_CTAR_blk_ARCO_F,10);
        weap_xx(hgun_Rook40_F,10);
        weap_xx(arifle_CTAR_GL_blk_arco_F,10);
        weap_xx(arifle_CTAR_blk_F,10);
        weap_xx(SMG_02_ACO_F,10);
        weap_xx(arifle_CTAR_blk_ACO_Pointer_Snds_F,10);
        weap_xx(hgun_Rook40_snds_F,10);
        weap_xx(arifle_CTAR_GL_blk_ACO_Pointer_Snds_F,10);
        weap_xx(srifle_DMR_07_blk_DMS_Snds_F,10);
        weap_xx(arifle_CTAR_blk_ARCO_Pointer_Snds_F,10);
        weap_xx(srifle_GM6_ghex_LRPS_F,10);
        weap_xx(launch_RPG32_ghex_F,10);
        weap_xx(launch_O_Titan_ghex_F,10);
        weap_xx(launch_O_Titan_short_ghex_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_ACO_grn,10);
        item_xx(optic_Arco_blk_F,10);
        item_xx(optic_Yorris,10);
        item_xx(optic_ACO_grn_smg,10);
        item_xx(muzzle_snds_58_blk_F,10);
        item_xx(acc_pointer_IR,10);
        item_xx(muzzle_snds_L,10);
        item_xx(muzzle_snds_65_TI_blk_F,10);
        item_xx(optic_DMS,10);
        item_xx(optic_LRPS_ghex_F,10);
        item_xx(V_Chestrig_rgr,10);
        item_xx(H_MilCap_ghex_F,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(V_BandollierB_ghex_F,10);
        item_xx(B_Carryall_ghex_OTAmmo_F,10);
        item_xx(H_Cap_O_CA2035_ghex,10);
        item_xx(G_Spectacles_Tinted_CA2035,10);
        item_xx(V_TacVest_oli,10);
        item_xx(G_Combat_Goggles_tna_F_CA2035,10);
        item_xx(B_FieldPack_ghex_OTMedic_F,10);
        item_xx(H_Beret_CSAT_01_F,10);
        item_xx(ItemGPS,10);
        item_xx(B_FieldPack_ghex_OTLAT_F,10);
        item_xx(Binocular,10);
        item_xx(NVGoggles_OPFOR,10);
        item_xx(B_FieldPack_ghex_OTAA_F,10);
        item_xx(B_FieldPack_ghex_OTAT_F,10);
        item_xx(Rangefinder,10);
        item_xx(B_Carryall_ghex_OTAAA_F,10);
        item_xx(B_Carryall_ghex_OTAAT_F,10);
        item_xx(O_UAV_01_backpack_F,10);
        item_xx(O_UavTerminal,10);
        item_xx(B_Carryall_ghex_OTEng_F,10);
        item_xx(B_Carryall_ghex_OTExp_F,10);
        item_xx(B_FieldPack_ghex_OTRepair_F,10);
        item_xx(O_HMG_01_weapon_F,10);
        item_xx(O_HMG_01_support_F,10);
        item_xx(O_GMG_01_weapon_F,10);
        item_xx(O_Mortar_01_weapon_F,10);
        item_xx(O_Mortar_01_support_F,10);
        item_xx(H_HelmetCrew_O_ghex_F,10);
        item_xx(O_NVGoggles_ghex_F,10);
        item_xx(H_PilotHelmetHeli_O,10);
        item_xx(H_PilotHelmetFighter_O,10);
        item_xx(B_Parachute,10);
        item_xx(V_HarnessO_ghex_F,10);
        item_xx(G_Aviator_CA2035,10);
        item_xx(G_Balaclava_blk_CA2035,10);
        item_xx(B_Carryall_ghex_OTReconExp_F,10);
        item_xx(Laserdesignator_02,10);
        item_xx(V_HarnessOGL_ghex_F,10);
        item_xx(G_Bandanna_shades_CA2035,10);
        item_xx(B_FieldPack_ghex_OTRPG_AT_F,10);
        item_xx(G_Lowprofile_CA2035,10);
        item_xx(B_FieldPack_ghex_OTReconMedic_F,10);
        item_xx(V_TacChestrig_oli_F,10);
        item_xx(U_O_CA2035_officer_noInsignia_ghex,10);
        item_xx(U_O_T_Officer_F,10);
        item_xx(U_O_PilotCoveralls,10);
        item_xx(U_O_T_Soldier_F,10);
        item_xx(U_O_T_Sniper_F,10);
    };
};


// ------------------------
// Rebels - Central Africa
// ------------------------

class IND_CA2035_G_F_AmmoBox : Box_NATO_Ammo_F {
    author = ALiVE ORBAT CREATOR;
    displayName = Rebels (Central Africa) Ammo Box;
    class TransportMagazines {
        mag_xx(30Rnd_762x39_Mag_F,50);
        mag_xx(HandGrenade,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(SmokeShell,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(UGL_FlareWhite_F,50);
        mag_xx(RPG32_F,50);
        mag_xx(RPG7_F,50);
    };
    class TransportWeapons {
    };
    class TransportItems {
    };
};
class IND_CA2035_G_F_WeaponsBox : Box_NATO_Wps_F {
    author = ALiVE ORBAT CREATOR;
    displayName = Rebels (Central Africa) Weapons Box;
    class TransportMagazines {
        mag_xx(30Rnd_762x39_Mag_F,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
    };
    class TransportWeapons {
        weap_xx(arifle_AKM_F,10);
        weap_xx(arifle_AK12_fl_F,10);
        weap_xx(hgun_Pistol_01_F,10);
        weap_xx(arifle_RPK12_fl_F,10);
        weap_xx(arifle_AKS_F,10);
        weap_xx(arifle_AK12_GL_fl_F,10);
        weap_xx(arifle_AK12_fl_aco_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_Aco,10);
    };
};
class IND_CA2035_G_F_LaunchersBox : Box_NATO_WpsLaunch_F {
    author = ALiVE ORBAT CREATOR;
    displayName = Rebels (Central Africa) Launchers Box;
    class TransportMagazines {
        mag_xx(RPG32_F,5);
        mag_xx(RPG7_F,5);
    };
    class TransportWeapons {
        weap_xx(launch_RPG32_green_F,5);
        weap_xx(launch_RPG7_F,5);
    };
    class TransportItems {
    };
};
class IND_CA2035_G_F_UniformBox : Box_NATO_Uniforms_F {
    author = ALiVE ORBAT CREATOR;
    displayName = Rebels (Central Africa) Uniform Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(U_I_G_CA2035_Rebel_1,15);
        item_xx(U_I_G_CA2035_Rebel_2,15);
        item_xx(U_I_G_CA2035_Rebel_3,15);
        item_xx(U_I_CA2035_RegularUniform_tanktop_wdl,15);
    };
};
class IND_CA2035_G_F_SupportBox : Box_NATO_Support_F {
    author = ALiVE ORBAT CREATOR;
    displayName = Rebels (Central Africa) Support Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(V_HarnessO_CA2035_wdl,10);
        item_xx(H_Booniehat_mgrn,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(V_BandollierB_oli,10);
        item_xx(H_Bandanna_khk,10);
        item_xx(G_Shades_Green,10);
        item_xx(Binocular,10);
        item_xx(V_TacVest_oli,10);
        item_xx(H_Booniehat_oli,10);
        item_xx(H_Cap_oli,10);
        item_xx(G_Aviator,10);
        item_xx(H_Cap_tan,10);
        item_xx(G_Bandanna_shades,10);
        item_xx(G_FieldPack_Medic,10);
        item_xx(H_Shemag_olive,10);
        item_xx(G_Shades_Black,10);
        item_xx(G_Carryall_Exp,10);
        item_xx(H_Bandanna_gry,10);
        item_xx(G_Bandanna_oli,10);
        item_xx(B_FieldPack_LAT_Trp,10);
        item_xx(B_FieldPack_LAT2_Trp,10);
        item_xx(B_Carryall_Ammo_Rebel,10);
        item_xx(H_MilCap_CA2035_wdl,10);
        item_xx(ItemGPS,10);
        item_xx(G_Bandanna_blk,10);
    };
};
class IND_CA2035_G_F_SupplyBox : B_SupplyCrate_F {
    author = ALiVE ORBAT CREATOR;
    displayName = Rebels (Central Africa) Supply Box;
    class TransportMagazines {
        mag_xx(30Rnd_762x39_Mag_F,50);
        mag_xx(HandGrenade,50);
        mag_xx(10Rnd_9x21_Mag,50);
        mag_xx(SmokeShell,50);
        mag_xx(75rnd_762x39_AK12_Mag_F,50);
        mag_xx(30Rnd_545x39_Mag_F,50);
        mag_xx(APERSBoundingMine_Range_Mag,50);
        mag_xx(SLAMDirectionalMine_Wire_Mag,50);
        mag_xx(DemoCharge_Remote_Mag,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(UGL_FlareWhite_F,50);
        mag_xx(RPG32_F,50);
        mag_xx(RPG7_F,50);
    };
    class TransportWeapons {
        weap_xx(arifle_AKM_F,10);
        weap_xx(arifle_AK12_fl_F,10);
        weap_xx(hgun_Pistol_01_F,10);
        weap_xx(arifle_RPK12_fl_F,10);
        weap_xx(arifle_AKS_F,10);
        weap_xx(arifle_AK12_GL_fl_F,10);
        weap_xx(arifle_AK12_fl_aco_F,10);
        weap_xx(launch_RPG32_green_F,10);
        weap_xx(launch_RPG7_F,10);
    };
    class TransportItems {
        item_xx(acc_flashlight,10);
        item_xx(optic_Aco,10);
        item_xx(V_HarnessO_CA2035_wdl,10);
        item_xx(H_Booniehat_mgrn,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(V_BandollierB_oli,10);
        item_xx(H_Bandanna_khk,10);
        item_xx(G_Shades_Green,10);
        item_xx(Binocular,10);
        item_xx(V_TacVest_oli,10);
        item_xx(H_Booniehat_oli,10);
        item_xx(H_Cap_oli,10);
        item_xx(G_Aviator,10);
        item_xx(H_Cap_tan,10);
        item_xx(G_Bandanna_shades,10);
        item_xx(G_FieldPack_Medic,10);
        item_xx(H_Shemag_olive,10);
        item_xx(G_Shades_Black,10);
        item_xx(G_Carryall_Exp,10);
        item_xx(H_Bandanna_gry,10);
        item_xx(G_Bandanna_oli,10);
        item_xx(B_FieldPack_LAT_Trp,10);
        item_xx(B_FieldPack_LAT2_Trp,10);
        item_xx(B_Carryall_Ammo_Rebel,10);
        item_xx(H_MilCap_CA2035_wdl,10);
        item_xx(ItemGPS,10);
        item_xx(G_Bandanna_blk,10);
        item_xx(U_I_G_CA2035_Rebel_1,10);
        item_xx(U_I_G_CA2035_Rebel_2,10);
        item_xx(U_I_G_CA2035_Rebel_3,10);
        item_xx(U_I_CA2035_RegularUniform_tanktop_wdl,10);
    };
};

