// ************
// BACKPACKS
// ************

class I_UAV_01_backpack_F;

class I_CA2035_UAV_01_backpack_F : I_UAV_01_backpack_F 
{
    author="kenoxite";
    scope=2;
    displayName="UAV Bag (AR-2) [CAAF]";
    hiddenSelectionsTextures[]=
    {
        // "\A3\Supplies_F_Orange\Bags\Data\uav_06_backpack_aaf_co.paa"
        "\A3\Supplies_F_Enoch\Bags\Data\UAV_backpack_EAF_co.paa"
    };

    class assembleInfo
    {
        primary = 1;
        base = "";
        displayName="$STR_A3_CfgVehicles_UAV_01_base0";
        assembleTo = "I_CA2035_T_AR_2Darter_F";
        dissasembleTo[] = {};
    };
};


class B_FieldPack_green_F;
class B_FieldPack_oli;
class B_FieldPack_khk;
class B_TacticalPack_rgr;
class B_Carryall_green_F;
class B_Carryall_oli;
class B_Carryall_cbr;

class B_FieldPack_green_F_CA2035: B_FieldPack_green_F
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
        item_xx(FirstAidKit,2);
    };
};

class B_FieldPack_AT_Trp: B_FieldPack_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AT,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_AT_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AT,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_AAT_Trp: B_FieldPack_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AT,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_AAT_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AT,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_AA_Trp: B_FieldPack_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AA,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_AA_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AA,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_LAT_Trp: B_FieldPack_oli
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(RPG32_F,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_LAT_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(RPG32_F,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_LAT2_Trp: B_FieldPack_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(RPG7_F,2);
    };
    class TransportItems
    {
    };
};

class B_FieldPack_LAT2_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(RPG7_F,2);
    };
    class TransportItems
    {
    };
};

class B_FieldPack_Medic_Trp: B_FieldPack_green_F
{
    scope = 1;
    class TransportMagazines
    {
    };
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};

class B_FieldPack_Medic_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
    };
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,10);
	};
};

class B_FieldPack_Recon_Medic_Trp: B_FieldPack_oli
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(SmokeShellRed,1);
        mag_xx(SmokeShellBlue,1);
        mag_xx(SmokeShellOrange,1);
    };
	class TransportItems
	{
		item_xx(Medikit,1);
		item_xx(FirstAidKit,5);
	};
};

class B_FieldPack_Recon_Medic_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(SmokeShellRed,1);
        mag_xx(SmokeShellBlue,1);
        mag_xx(SmokeShellOrange,1);
    };
    class TransportItems
    {
        item_xx(Medikit,1);
        item_xx(FirstAidKit,5);
    };
};

class B_FieldPack_Recon_AR_Trp: B_FieldPack_oli
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(75rnd_762x39_AK12_Mag_F,3);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,1);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_Recon_AR_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(75rnd_762x39_AK12_Mag_F,3);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,1);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_Recon_GL_Trp: B_FieldPack_oli
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,15);
        mag_xx(30Rnd_556x45_Stanag,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_Recon_GL_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(1Rnd_HE_Grenade_shell,15);
        mag_xx(30Rnd_556x45_Stanag,2);
    };
	class TransportItems
	{
	};
};

class B_FieldPack_Recon_TL_Trp: B_FieldPack_oli
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SmokeShell,5);
    };
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class B_FieldPack_Recon_TL_Ard: B_FieldPack_khk
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SmokeShell,5);
    };
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class B_TacticalPack_AAR_Trp: B_TacticalPack_rgr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(75rnd_762x39_AK12_Mag_F,3);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,1);
    };
	class TransportItems
	{
		item_xx(bipod_03_F_blk,1);
	};
};

class B_TacticalPack_AAR_Ard: B_TacticalPack_rgr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(75rnd_762x39_AK12_Mag_F,3);
        mag_xx(75rnd_762x39_AK12_Mag_Tracer_F,1);
    };
    class TransportItems
    {
        item_xx(bipod_03_F_blk,1);
    };
};

class B_Carryall_AAA_Trp: B_Carryall_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AA,2);
    };
	class TransportItems
	{
	};
};

class B_Carryall_AAA_Ard: B_Carryall_cbr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(Titan_AA,2);
    };
    class TransportItems
    {
    };
};

class B_Carryall_Recon_Exp_Trp: B_Carryall_oli
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
        mag_xx(APERSBoundingMine_Range_Mag,3);
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
    };
	class TransportItems
	{
        item_xx(MineDetector,1);
		item_xx(ToolKit,1);
	};
};

class B_Carryall_Recon_Exp_Ard: B_Carryall_cbr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
        mag_xx(APERSBoundingMine_Range_Mag,3);
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
    };
    class TransportItems
    {
        item_xx(MineDetector,1);
        item_xx(ToolKit,1);
    };
};

class B_Carryall_Engineer_Trp: B_Carryall_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(SatchelCharge_Remote_Mag,1);
        mag_xx(DemoCharge_Remote_Mag,2);
    };
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};

class B_Carryall_Engineer_Ard: B_Carryall_cbr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(SatchelCharge_Remote_Mag,1);
        mag_xx(DemoCharge_Remote_Mag,2);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
        item_xx(MineDetector,1);
    };
};

class B_Carryall_Exp_Trp: B_Carryall_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(APERSBoundingMine_Range_Mag,3);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
        mag_xx(DemoCharge_Remote_Mag,1);
    };
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
	};
};

class B_Carryall_Exp_Ard: B_Carryall_cbr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(APERSBoundingMine_Range_Mag,3);
        mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
        mag_xx(SLAMDirectionalMine_Wire_Mag,2);
        mag_xx(DemoCharge_Remote_Mag,1);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
        item_xx(MineDetector,1);
    };
};

class B_Carryall_Repair_Trp: B_Carryall_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SmokeShell,1);
        mag_xx(SmokeShellRed,1);
        mag_xx(SmokeShellGreen,1);
        mag_xx(SmokeShellYellow,1);
    };
	class TransportItems
	{
		item_xx(ToolKit,1);
	};
};

class B_Carryall_Repair_Ard: B_Carryall_cbr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(DemoCharge_Remote_Mag,1);
        mag_xx(SmokeShell,1);
        mag_xx(SmokeShellRed,1);
        mag_xx(SmokeShellGreen,1);
        mag_xx(SmokeShellYellow,1);
    };
    class TransportItems
    {
        item_xx(ToolKit,1);
    };
};

class B_Carryall_Ammo_Trp: B_Carryall_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(HandGrenade,2);
        mag_xx(MiniGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(20Rnd_762x51_Mag,3);
        mag_xx(30Rnd_762x39_AK12_Mag_F,6);
        mag_xx(RPG32_F,2);
        mag_xx(75rnd_762x39_AK12_Mag_F,2);
    };
	class TransportItems
	{
        item_xx(FirstAidKit,4);
	};
};

class B_Carryall_Ammo_Ard: B_Carryall_cbr
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(HandGrenade,2);
        mag_xx(MiniGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,6);
        mag_xx(20Rnd_762x51_Mag,3);
        mag_xx(30Rnd_762x39_AK12_Mag_F,6);
        mag_xx(RPG32_F,2);
        mag_xx(75rnd_762x39_AK12_Mag_F,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,4);
    };
};

class B_Carryall_Ammo_Rebel: B_Carryall_green_F
{
    scope = 1;
    class TransportMagazines
    {
        mag_xx(HandGrenade,2);
        mag_xx(1Rnd_HE_Grenade_shell,4);
        mag_xx(UGL_FlareWhite_F,3);
        mag_xx(30Rnd_545x39_Mag_F,6);
        mag_xx(30Rnd_762x39_Mag_F,6);
        mag_xx(RPG7_F,1);
        mag_xx(75rnd_762x39_AK12_Mag_F,2);
    };
    class TransportItems
    {
        item_xx(FirstAidKit,4);
    };
};
