
// ************
// WEAPONS
// ************
class arifle_AK12_F;
class arifle_AK12_GL_F;
class arifle_AK12_arid_F;
class arifle_AK12_GL_arid_F;
// class arifle_AK12U_F;
class arifle_RPK12_F;
class arifle_Mk20_F;
class arifle_Mk20_GL_F;
class srifle_EBR_F;
class srifle_GM6_F;
class srifle_DMR_01_DMS_BI_F;

class arifle_CTAR_blk_F;
class arifle_CTARS_blk_F;
class arifle_CTAR_GL_blk_F;
class srifle_DMR_07_blk_F;

class arifle_SPAR_01_khk_F;

// SPAR
class arifle_SPAR_01_khk_aco_snds_F: arifle_SPAR_01_khk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item="optic_ACO";
			slot="CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_M";
			slot="MuzzleSlot";
		};
	};
};


// CTAR
class arifle_CTAR_blk_flash_F: arifle_CTAR_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
	};
};

class arifle_CTAR_blk_aco_flash_F: arifle_CTAR_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_ACO_grn";
			slot="CowsSlot";
		};
	};
};

class arifle_CTAR_blk_arco_F: arifle_CTAR_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item="optic_ACO_grn";
			slot="CowsSlot";
		};
	};
};

class arifle_CTAR_GL_blk_arco_flash_F: arifle_CTAR_GL_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_Arco_blk_F";
			slot="CowsSlot";
		};
	};
};

class arifle_CTAR_GL_blk_arco_F: arifle_CTAR_GL_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item="optic_Arco_blk_F";
			slot="CowsSlot";
		};
	};
};

class arifle_CTARS_blk_flash_F: arifle_CTARS_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
	};
};

//	CMR-76
class srifle_DMR_07_blk_F_arco_flash_F: srifle_DMR_07_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_Arco_blk_F";
			slot="CowsSlot";
		};
	};
};

/*
class arifle_CTAR_blk_ACO_F: arifle_CTAR_blk_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item="optic_ACO_grn";
			slot="CowsSlot";
		};
	};
};*/

// Rahim
class srifle_DMR_01_DMS_BI_fl_F: srifle_DMR_01_DMS_BI_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
	};
};

// AK-12
class arifle_AK12_fl_F: arifle_AK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
	};
};

class arifle_AK12_aco_F: arifle_AK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item="optic_aco";
			slot="CowsSlot";
		};
	};
};

class arifle_AK12_fl_aco_F: arifle_AK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_aco";
			slot="CowsSlot";
		};
	};
};

class arifle_AK12_fl_mrco_F: arifle_AK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_MRCO";
			slot="CowsSlot";
		};
	};
};

class arifle_AK12_GL_fl_F: arifle_AK12_GL_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
	};
};

class arifle_AK12_GL_fl_aco_F: arifle_AK12_GL_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_aco";
			slot="CowsSlot";
		};
	};
};

// AK-12 (suppressor)
class arifle_AK12_aco_snds_F: arifle_AK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_B";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_aco";
			slot="CowsSlot";
		};
	};
};

class arifle_AK12_mrco_snds_F: arifle_AK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_B";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_MRCO";
			slot="CowsSlot";
		};
	};
};

class arifle_AK12_mrco_pointer_snds_F: arifle_AK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_pointer_IR";
			slot="PointerSlot";
		};
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_B";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_MRCO";
			slot="CowsSlot";
		};
	};
};

class arifle_AK12_GL_aco_snds_F: arifle_AK12_GL_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_B";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_aco";
			slot="CowsSlot";
		};
	};
};

class arifle_AK12_GL_mrco_snds_F: arifle_AK12_GL_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_B";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_mrco";
			slot="CowsSlot";
		};
	};
};


// AK-12 7.62 mm (Tropic)
class arifle_AK12_trp_F: arifle_AK12_F
{
    author="kenoxite";
    baseWeapon="arifle_AK12_trp_F";
    scope=2;
    displayName="AK-12 7.62 mm (Tropic)";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\weapons\rifles\ak12\AK12_ak12_1_trp3.paa",
        "\CA2035\weapons\rifles\ak12\AK12_ak12_2_trp3.paa"
    };
};
class arifle_AK12_trp_aco_snds_F: arifle_AK12_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_aco";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_trp_mrco_snds_F: arifle_AK12_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_trp_mrco_pointer_F: arifle_AK12_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_pointer_IR";
            slot="PointerSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_trp_mrco_pointer_snds_F: arifle_AK12_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_pointer_IR";
            slot="PointerSlot";
        };
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};

class arifle_AK12_GL_trp_F: arifle_AK12_GL_F
{
    author="kenoxite";
    baseWeapon="arifle_AK12_GL_trp_F";
    scope=2;
    displayName="AK-12 GL 7.62 mm (Tropic)";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\weapons\rifles\ak12\AK12_ak12_1_trp3.paa",
        "\CA2035\weapons\rifles\ak12\AK12_ak12_2_trp3.paa",
        "\CA2035\weapons\rifles\ak12\AK12_GL_trp3.paa"
    };
};
class arifle_AK12_GL_trp_aco_snds_F: arifle_AK12_GL_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_aco";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_GL_trp_mrco_snds_F: arifle_AK12_GL_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_mrco";
            slot="CowsSlot";
        };
    };
};
// Legacy compatibility with AK-12 lush configs
class arifle_AK12_lush_aco_snds_F: arifle_AK12_trp_aco_snds_F {scope=1};
class arifle_AK12_lush_mrco_snds_F: arifle_AK12_trp_mrco_snds_F {}scope=1;
class arifle_AK12_lush_mrco_pointer_F: arifle_AK12_trp_mrco_pointer_F {scope=1};
class arifle_AK12_lush_mrco_pointer_snds_F: arifle_AK12_trp_mrco_pointer_snds_F {scope=1};
class arifle_AK12_GL_lush_aco_snds_F: arifle_AK12_GL_trp_aco_snds_F {scope=1};
class arifle_AK12_GL_lush_mrco_snds_F: arifle_AK12_GL_trp_mrco_snds_F {scope=1};


// AK-12 7.62 mm (Semi-Arid)
class arifle_AK12_sarid_F: arifle_AK12_F
{
    author="kenoxite";
    baseWeapon="arifle_AK12_sarid_F";
    scope=2;
    displayName="AK-12 7.62 mm (Semi-Arid)";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\weapons\rifles\ak12\AK12_ak12_1_newarid.paa",
        "\CA2035\weapons\rifles\ak12\AK12_ak12_2_newarid.paa"
    };
};
class arifle_AK12_sarid_aco_snds_F: arifle_AK12_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_aco";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_sarid_mrco_snds_F: arifle_AK12_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_sarid_mrco_pointer_F: arifle_AK12_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_pointer_IR";
            slot="PointerSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_sarid_mrco_pointer_snds_F: arifle_AK12_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_pointer_IR";
            slot="PointerSlot";
        };
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};

class arifle_AK12_GL_sarid_F: arifle_AK12_GL_F
{
    author="kenoxite";
    baseWeapon="arifle_AK12_GL_sarid_F";
    scope=2;
    displayName="AK-12 GL 7.62 mm (Semi-Arid)";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\weapons\rifles\ak12\AK12_ak12_1_newarid.paa",
        "\CA2035\weapons\rifles\ak12\AK12_ak12_2_newarid.paa",
        "\CA2035\weapons\rifles\ak12\AK12_GL_newarid.paa"
    };
};
class arifle_AK12_GL_sarid_aco_snds_F: arifle_AK12_GL_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_aco";
            slot="CowsSlot";
        };
    };
};
class arifle_AK12_GL_sarid_mrco_snds_F: arifle_AK12_GL_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_mrco";
            slot="CowsSlot";
        };
    };
};
// Legacy compatibility with AK-12 arid configs
class arifle_AK12_arid_aco_snds_F: arifle_AK12_sarid_aco_snds_F {scope=1};
class arifle_AK12_arid_mrco_snds_F: arifle_AK12_sarid_mrco_snds_F {scope=1};
class arifle_AK12_arid_mrco_pointer_F: arifle_AK12_sarid_mrco_pointer_F {scope=1};
class arifle_AK12_arid_mrco_pointer_snds_F: arifle_AK12_sarid_mrco_pointer_snds_F {scope=1};
class arifle_AK12_GL_arid_aco_snds_F: arifle_AK12_GL_sarid_aco_snds_F {scope=1};
class arifle_AK12_GL_arid_mrco_snds_F: arifle_AK12_GL_sarid_mrco_snds_F {scope=1};


/*
class arifle_AK12U_F_Army: arifle_AK12U_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
	};
};

class arifle_AK12U_F_ArmyL: arifle_AK12U_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_Aco";
			slot="CowsSlot";
		};
	};
};
*/

// RPK-12
class arifle_RPK12_fl_F: arifle_RPK12_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_flashlight";
			slot="PointerSlot";
		};
	};
};

// RPK-12 (Tropic)
class arifle_RPK12_trp_F: arifle_RPK12_F
{
    author="kenoxite";
    baseWeapon="arifle_RPK12_trp_F";
    scope=2;
    displayName="RPK-12  7.62 mm (Tropic)";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\weapons\rifles\ak12\AK12_ak12_1_trp3.paa",
        "\CA2035\weapons\rifles\ak12\AK12_ak12_2_trp3.paa",
        "\CA2035\weapons\Rifles\rpk12\AKU12_RPK12_parts_trp3.paa"
    };
};
class arifle_RPK12_trp_fl_F: arifle_RPK12_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_flashlight";
            slot="PointerSlot";
        };
    };
};
class arifle_RPK12_trp_snds_aco_F: arifle_RPK12_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_aco";
            slot="CowsSlot";
        };
    };
};
class arifle_RPK12_trp_snds_mrco_F: arifle_RPK12_trp_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};
// Legacy compatibility with RPK-12 lush configs
class arifle_RPK12_lush_snds_aco_F: arifle_RPK12_trp_snds_aco_F {scope=1};
class arifle_RPK12_lush_snds_mrco_F: arifle_RPK12_trp_snds_mrco_F {scope=1};

// RPK-12 (Semi-Arid)
class arifle_RPK12_sarid_F: arifle_RPK12_F
{
    author="kenoxite";
    baseWeapon="arifle_RPK12_sarid_F";
    scope=2;
    displayName="RPK-12  7.62 mm (Semi-Arid)";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\weapons\rifles\ak12\AK12_ak12_1_newarid.paa",
        "\CA2035\weapons\rifles\ak12\AK12_ak12_2_newarid.paa",
        "\CA2035\weapons\Rifles\rpk12\AKU12_RPK12_parts_newarid.paa"
    };
};
class arifle_RPK12_sarid_fl_F: arifle_RPK12_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsAcc
        {
            item="acc_flashlight";
            slot="PointerSlot";
        };
    };
};
class arifle_RPK12_sarid_snds_aco_F: arifle_RPK12_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_aco";
            slot="CowsSlot";
        };
    };
};
class arifle_RPK12_sarid_snds_mrco_F: arifle_RPK12_sarid_F
{
    author="kenoxite";
    scope=1;
    class LinkedItems
    {
        class LinkedItemsMuzzle
        {
            item="muzzle_snds_B";
            slot="MuzzleSlot";
        };
        class LinkedItemsOptic
        {
            item="optic_MRCO";
            slot="CowsSlot";
        };
    };
};
// Legacy compatibility with RPK-12 lush configs
class arifle_RPK12_arid_snds_aco_F: arifle_RPK12_sarid_snds_aco_F {scope=1};
class arifle_RPK12_arid_snds_mrco_F: arifle_RPK12_sarid_snds_mrco_F {scope=1};


// Mk20 Black
class I_CA2035_arifle_Mk20_Black_F: arifle_Mk20_F
{
	author="kenoxite";
	scope=2;
    scopeCurator=2;
    baseWeapon="I_CA2035_arifle_Mk20_Black_F";
	displayName="Mk20 5.56 mm (Black)";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\weapons\rifles\mk20\data\mk20_black_co.paa"
	};
};

class I_CA2035_arifle_Mk20_GL_Black_F: arifle_Mk20_GL_F
{
	author="kenoxite";
	scope=2;
    scopeCurator=2;
    baseWeapon="I_CA2035_arifle_Mk20_GL_Black_F";
	displayName="Mk20 EGLM 5.56 mm (Black)";
	hiddenSelections[]=
	{
		"camo",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\weapons\rifles\mk20\data\mk20_black_co.paa",
		"\CA2035\weapons\rifles\mk20\data\mk20_utilities_co.paa",
	};
};

class arifle_Mk20_Black_snds_aco_F: I_CA2035_arifle_Mk20_Black_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_M";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_aco";
			slot="CowsSlot";
		};
	};
};

class arifle_Mk20_Black_snds_mrco_F: I_CA2035_arifle_Mk20_Black_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_M";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_MRCO";
			slot="CowsSlot";
		};
	};
};

class arifle_Mk20_Black_snds_pointer_mrco_F: I_CA2035_arifle_Mk20_Black_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_pointer_IR";
			slot="PointerSlot";
		};
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_M";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_MRCO";
			slot="CowsSlot";
		};
	};
};

class arifle_Mk20_GL_Black_snds_aco_F: I_CA2035_arifle_Mk20_GL_Black_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_M";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_aco";
			slot="CowsSlot";
		};
	};
};

class arifle_Mk20_GL_Black_snds_mrco_F: I_CA2035_arifle_Mk20_GL_Black_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_M";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_MRCO";
			slot="CowsSlot";
		};
	};
};

class arifle_Mk20_GL_Black_snds_pointer_mrco_F: I_CA2035_arifle_Mk20_GL_Black_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsAcc
		{
			item="acc_pointer_IR";
			slot="PointerSlot";
		};
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_M";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_MRCO";
			slot="CowsSlot";
		};
	};
};

// Mk18 ABR
class I_CA2035_srifle_EBR_Black_F: srifle_EBR_F
{
	author="kenoxite";
	scope=2;
    scopeCurator=2;
    baseWeapon="I_CA2035_srifle_EBR_Black_F";
	displayName="Mk18 ABR 7.62 mm (Black)";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\weapons\longrangerifles\ebr\data\m14_ebr01_co.paa",
		"\CA2035\weapons\longrangerifles\ebr\data\m14_ebr02_co.paa"
	};
};

// 
class srifle_EBR_Black_snds_DMS_bipod_F: I_CA2035_srifle_EBR_Black_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			item="muzzle_snds_B";
			slot="MuzzleSlot";
		};
		class LinkedItemsOptic
		{
			item="optic_DMS";
			slot="CowsSlot";
		};
		class LinkedItemsUnder
		{
			item="bipod_01_F_blk";
			slot="UnderBarrelSlot";
		};
	};
};

// GM6 Lynx
class srifle_GM6_lrps_f: srifle_GM6_F
{
	author="kenoxite";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			item="optic_LRPS";
			slot="CowsSlot";
		};
	};
};

// ************
// UNIFORMS
// ************
class Default;
class UniformItem;
class Uniform_Base;

// CSAT Light Fatigues (Green Hex)
class U_O_CA2035_officer_noInsignia_ghex: Uniform_Base
{
	author="kenoxite";
	scope=2;
	displayName="Light Fatigues (Green Hex)";
	picture="\CA2035\characters\data\ui\icon_U_O_CA2035_officer_noInsignia_ghex.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    modelSides[]={0,2,3};
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="O_CA2035_Soldier_UnifBase";
		containerClass="Supply40";
        mass=60;
	};
};

// Regular uniform
class U_I_CA2035_RegularUniform_wdl: Uniform_Base
{
	author="kenoxite";
	scope=2;
	displayName="Old Combat Fatigues (Woodland)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_RegularUniform_wdl.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    modelSides[]={0,1,2,3};
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_wdl_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Rifleman_WDL_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_RegularUniform_trp: U_I_CA2035_RegularUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Old Combat Fatigues (Tropic)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_RegularUniform_trp.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_trp_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Rifleman_TRP_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_RegularUniform_ard: U_I_CA2035_RegularUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Old Combat Fatigues (Arid)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_RegularUniform_ard.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_ard_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Rifleman_ARD_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

// Regular uniform (tank top)
class U_I_CA2035_RegularUniform_tanktop_wdl: U_I_CA2035_RegularUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (T-Top, Woodland)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_RegularUniform_tanktop_wdl.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    modelSides[]={0,1,2,3};
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		// "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_wdl_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Rifleman_WDL1_tt_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_RegularUniform_tanktop_trp: U_I_CA2035_RegularUniform_tanktop_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (T-Top, Tropic)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_RegularUniform_tanktop_trp.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_trp_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Rifleman_TRP1_tt_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_RegularUniform_tanktop_ard: U_I_CA2035_RegularUniform_tanktop_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (T-Top, Arid)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_RegularUniform_tanktop_ard.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_ard_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Rifleman_ARD1_tt_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

// Officer uniform
class U_I_CA2035_OfficerUniform_wdl: U_I_CA2035_RegularUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (Officer, Woodland)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_OfficerUniform_wdl.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    modelSides[]={0,1,2,3};
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		// "\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_wdl_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Officer_WDL_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_OfficerUniform_trp: U_I_CA2035_OfficerUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (Officer, Tropic)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_OfficerUniform_trp.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_trp_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Officer_TRP_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_OfficerUniform_ard: U_I_CA2035_OfficerUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (Officer, Arid)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_OfficerUniform_ard.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_ard_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Officer_ARD_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

// Recon uniform
class U_I_CA2035_ReconUniform_wdl: U_I_CA2035_RegularUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (Woodland)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_ReconUniform_wdl.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_wdl_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Recon_WDL_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_ReconUniform_trp: U_I_CA2035_ReconUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (Tropic)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_ReconUniform_trp.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_trp_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Recon_TRP_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

class U_I_CA2035_ReconUniform_ard: U_I_CA2035_ReconUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Combat Fatigues (Arid)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_ReconUniform_ard.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_ard_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Recon_ARD_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

// Heli Pilot Coveralls
class U_I_CA2035_HeliPilotCoveralls: U_I_CA2035_RegularUniform_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Heli Pilot Coveralls (green)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_HeliPilotCoveralls.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Rifleman_HeliPilotCoveralls_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

// Ghillie suits
class U_I_CA2035_GhillieSuit_wdl: Uniform_Base
{
	author="kenoxite";
	scope=2;
	displayName="Guillie Suit (Woodland)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_GhillieSuit_wdl.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_wdl_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Sniper_WDL_UnifBase";
		containerClass="Supply60";
		mass=60;
	};
};

class U_I_CA2035_GhillieSuit_trp: U_I_CA2035_GhillieSuit_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Guillie Suit (Tropic)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_GhillieSuit_trp.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_trp_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Sniper_TRP_UnifBase";
		containerClass="Supply60";
		mass=60;
	};
};

class U_I_CA2035_GhillieSuit_ard: U_I_CA2035_GhillieSuit_wdl
{
	author="kenoxite";
	scope=2;
	displayName="Guillie Suit (Arid)";
    picture="\CA2035\characters\data\ui\icon_U_I_CA2035_GhillieSuit_ard.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\Common\Suitpacks\data\suitpack_CA2035_ard_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_CA2035_Sniper_ARD_UnifBase";
		containerClass="Supply60";
		mass=60;
	};
};

// Rebel uniforms
class U_I_G_CA2035_Rebel_1: Uniform_Base
{
	author="kenoxite";
	scope=2;
	displayName="Rebel Garb (Tee)";
    picture="\CA2035\characters\data\ui\icon_U_I_G_CA2035_Rebel_1.paa";
    model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    modelSides[]={0,1,2,3};
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
        "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_G_CA2035_Rebel_1_UnifBase";
        containerClass="Supply40";
        mass=40;
	};
};

class U_I_G_CA2035_Rebel_2: U_I_G_CA2035_Rebel_1
{
	author="kenoxite";
	scope=2;
	displayName="Rebel Garb (Shorts)";
    picture="\CA2035\characters\data\ui\icon_U_I_G_CA2035_Rebel_2.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelectionsTextures[]=
	{
        "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_G_CA2035_Rebel_2_UnifBase";
		containerClass = "Supply30";
		mass = 30;
	};
};

class U_I_G_CA2035_Rebel_3: U_I_G_CA2035_Rebel_1
{
	author="kenoxite";
	scope=2;
	displayName="Rebel Garb (Jacket)";
    picture="\CA2035\characters\data\ui\icon_U_I_G_CA2035_Rebel_3.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	hiddenSelectionsTextures[]=
	{
        "A3\characters_f_beta\indep\data\officer_spc_co.paa"
	};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="I_G_CA2035_Rebel_3_UnifBase";
		containerClass="Supply40";
		mass=40;
	};
};

// ************
// HEADGEAR
// ************
class ItemCore;
class HeadgearItem;
class HelmetBase;
class H_MilCap_ocamo;
class H_Booniehat_khk;
class H_Booniehat_khk_hs;
class H_HelmetIA;
class H_Bandanna_khk_hs;
class H_Cap_brn_SPECOPS;

class H_Cap_red;
class H_Cap_blu;
class H_Cap_grn;
class H_Cap_blk;
class H_Cap_grn_BI;

// FakeHeadgear
class H_FakeHeadgear_CA2035
{
	scope=0;
	allowedFacewear[]=
	{
		"",
		"G_Aviator_CA2035",
		"G_Shades_Black_CA2035",
		// "G_Shades_Blue_CA2035",
		// "G_Shades_Green_CA2035",
		// "G_Shades_Red_CA2035",
		// "G_Sport_Blackred_CA2035",
		// "G_Sport_BlackWhite_CA2035",
		// "G_Sport_Blackyellow_CA2035",
		// "G_Sport_Greenblack_CA2035",
		// "G_Sport_Red_CA2035",
		"G_Spectacles_Tinted_CA2035"
	};
};

// Caps
class H_Cap_red_CA2035: H_Cap_red
{
	author="kenoxite";
	scope=1;
	ALLOWED_FACEWEAR_CIV();
};
class H_Cap_blu_CA2035: H_Cap_blu
{
	author="kenoxite";
	scope=1;
	ALLOWED_FACEWEAR_CIV();
};
class H_Cap_grn_CA2035: H_Cap_grn
{
	author="kenoxite";
	scope=1;
	ALLOWED_FACEWEAR_CIV();
};
class H_Cap_blk_CA2035: H_Cap_blk
{
	author="kenoxite";
	scope=1;
	ALLOWED_FACEWEAR_CIV();
};
class H_Cap_grn_BI_CA2035: H_Cap_grn_BI
{
	author="kenoxite";
	scope=1;
	ALLOWED_FACEWEAR_CIV();
};


class H_Cap_CA2035_base: H_Cap_brn_SPECOPS
{
	author="kenoxite";
	scope=0;
	weaponPoolAvailable=0;
	displayName="Cap";
	picture="\A3\characters_f\Data\UI\icon_H_Cap_tan_specops_US_CA.paa";
	model="\A3\Characters_F\common\capb";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\common\data\capb_ghex_co.paa"
	};
	class ItemInfo: HeadgearItem
	{
		uniformModel="\A3\Characters_F\common\capb";
		hiddenSelections[]=
		{
			"camo"
		};
	};
};

class H_Cap_O_CA2035_ghex: H_Cap_CA2035_base
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Cap (Green Hex)";
    picture="\CA2035\characters\data\ui\icon_H_Cap_O_CA2035_ghex.paa";
	model="\A3\Characters_F\common\capb";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\common\data\capb_ghex_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="\A3\Characters_F\common\capb";
	};
};

// Head Bandanas
class H_Bandanna_hs_CA2035_base: H_Bandanna_khk_hs
{
	author="kenoxite";
	scope=0;
	weaponPoolAvailable=0;
	displayName="Bandana (Headset)";
	picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Bandanna_camo_ca.paa";
	model="A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\common\data\h_bandana_CA2035_wdl1_co.paa"
	};
	class ItemInfo: HeadgearItem
	{
		uniformModel="A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
	};

	ALLOWED_FACEWEAR_RECON_WDL();
};

class H_Bandanna_hs_CA2035_wdl: H_Bandanna_hs_CA2035_base
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Bandana (Woodland, Headset)";
    picture="\CA2035\characters\data\ui\icon_H_Bandanna_hs_CA2035_wdl.paa";
	model="A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
	modelSides[]={0,1,2,3};
	hiddenSelectionsTextures[]=
	{
		BANDANNA_WDL();
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
	};

	ALLOWED_FACEWEAR_RECON_WDL();
};

class H_Bandanna_hs_CA2035_trp: H_Bandanna_hs_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Bandana (Tropic, Headset)";
    picture="\CA2035\characters\data\ui\icon_H_Bandanna_hs_CA2035_trp.paa";
	hiddenSelectionsTextures[]=
	{
		BANDANNA_TRP();
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
	};

	ALLOWED_FACEWEAR_RECON_TRP();
};

class H_Bandanna_hs_CA2035_ard: H_Bandanna_hs_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Bandana (Arid, Headset)";
    picture="\CA2035\characters\data\ui\icon_H_Bandanna_hs_CA2035_ard.paa";
	hiddenSelectionsTextures[]=
	{
		BANDANNA_ARD();
	};
	class ItemInfo: ItemInfo
	{
		uniformModel="A3\Characters_F_EPB\Civil\headgear_c_bandana1_hs.p3d";
	};

	ALLOWED_FACEWEAR_RECON_ARD();
};

// Military Caps
class H_MilCap_CA2035_wdl: H_MilCap_ocamo
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Military Cap (Woodland)";
    picture="\CA2035\characters\data\ui\icon_H_MilCap_CA2035_wdl.paa";
	modelSides[]={0,1,2,3};
	hiddenSelectionsTextures[]=
	{
		MILCAP_WDL();
	};

	ALLOWED_FACEWEAR();
};

class H_MilCap_CA2035_trp: H_MilCap_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Military Cap (Tropic)";
    picture="\CA2035\characters\data\ui\icon_H_MilCap_CA2035_trp.paa";
	hiddenSelectionsTextures[]=
	{
		MILCAP_TRP();
	};
};

class H_MilCap_CA2035_ard: H_MilCap_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Military Cap (Arid)";
    picture="\CA2035\characters\data\ui\icon_H_MilCap_CA2035_ard.paa";
	hiddenSelectionsTextures[]=
	{
		MILCAP_ARD();
	};
};

// Booniehats
class H_Booniehat_CA2035_wdl: H_Booniehat_khk_hs
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Booniehat (Woodland, Headset)";
    picture="\CA2035\characters\data\ui\icon_H_Booniehat_CA2035_wdl.paa";
	modelSides[]={0,1,2,3};
	hiddenSelectionsTextures[]=
	{
		BOONIEHAT_WDL();
	};
	
	ALLOWED_FACEWEAR();
};

class H_Booniehat_CA2035_trp: H_Booniehat_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Booniehat (Tropic, Headset)";
    picture="\CA2035\characters\data\ui\icon_H_Booniehat_CA2035_trp.paa";
	hiddenSelectionsTextures[]=
	{
		BOONIEHAT_TRP();
	};
};

class H_Booniehat_CA2035_ard: H_Booniehat_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Booniehat (Arid, Headset)";
    picture="\CA2035\characters\data\ui\icon_H_Booniehat_CA2035_ard.paa";
	hiddenSelectionsTextures[]=
	{
		BOONIEHAT_ARD();
	};
};

// Helmets
class H_HelmetIA_CA2035_base: H_HelmetIA
{
	author="kenoxite";
	scope=0;
	weaponPoolAvailable=0;
	displayName="Modular Helmet";
	picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
	model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
	hiddenSelections[]=
	{
		"camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Characters_F_Beta\INDEP\Data\headgear_helmet_canvas_co.paa"
	};
	descriptionShort="$STR_A3_SP_AL_II";
	class ItemInfo: HeadgearItem
	{
		mass=30;
		uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		modelSides[]={3,1};
		hiddenSelections[]=
		{
			"camo"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName="HitHead";
				armor=6;
				passThrough=0.5;
			};
		};
	};

	ALLOWED_FACEWEAR();
};
class H_HelmetIA_CA2035_wdl: H_HelmetIA_CA2035_base
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Modular Helmet (Woodland)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_CA2035_wdl.paa";
	modelSides[]={0,1,2,3};
	hiddenSelectionsTextures[]=
	{
		HELMET_WDL();
	};
	model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";

	class ItemInfo: ItemInfo
	{
		uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
	};
};
class H_HelmetIA_CA2035_trp: H_HelmetIA_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Modular Helmet (Tropic)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_CA2035_trp.paa";
	hiddenSelectionsTextures[]=
	{
		HELMET_TRP();
	};
};
class H_HelmetIA_CA2035_ard: H_HelmetIA_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="Modular Helmet (Arid)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_CA2035_ard.paa";
	hiddenSelectionsTextures[]=
	{
		HELMET_ARD();
	};
};

// Fast helmet
class H_HelmetB_light;
class H_HelmetIA_fast_CA2035_base: H_HelmetB_light
{
    author="kenoxite";
    scope=0;
    weaponPoolAvailable=0;
    displayName="$STR_A3_H_HelmetB_light0";
    picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
    model="\A3\Characters_F\Common\headgear_placeholder";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_EPA\BLUFOR\Data\equip1_black_co.paa"
    };
    descriptionShort="$STR_A3_SP_AL_I";
    class ItemInfo: HeadgearItem
    {
        mass=20;
        uniformModel="\A3\Characters_F\Common\headgear_placeholder";
        modelSides[]={3,1};
        hiddenSelections[]=
        {
            "camo"
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=4;
                passThrough=0.5;
            };
        };
    };

    ALLOWED_FACEWEAR();
};
class H_HelmetIA_fast_CA2035_trp: H_HelmetIA_fast_CA2035_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (Tropic)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_fast_CA2035_trp.paa";
    hiddenSelectionsTextures[]=
    {
        HELMET_FAST_TRP();
    };
};
class H_HelmetIA_fast_CA2035_ard: H_HelmetIA_fast_CA2035_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (Arid)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_fast_CA2035_ard.paa";
    hiddenSelectionsTextures[]=
    {
        HELMET_FAST_ARD();
    };
};
class H_HelmetIA_fast_CA2035_green: H_HelmetIA_fast_CA2035_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (Green)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_fast_CA2035_green.paa";
    hiddenSelectionsTextures[]=
    {
        HELMET_FAST_GREEN();
    };
};
class H_HelmetIA_fast_CA2035_brown: H_HelmetIA_fast_CA2035_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (Brown)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_fast_CA2035_brown.paa";
    hiddenSelectionsTextures[]=
    {
        HELMET_FAST_BROWN();
    };
};
class H_HelmetIA_fast_CA2035_black: H_HelmetIA_fast_CA2035_base
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="Light Combat Helmet (Black)";
    picture="\CA2035\characters\data\ui\icon_H_HelmetIA_fast_CA2035_black.paa";
    hiddenSelectionsTextures[]=
    {
        HELMET_FAST_BLACK();
    };
};

// ************
// VESTS
// ************
class VestItem;
class Vest_Camo_Base;

// GA Carrier Lite 
class V_Base_PlateCarrier_lite_lvl3_CA2035: Vest_Camo_Base
{
	author="kenoxite";
	scope=0;
	weaponPoolAvailable=0;
	displayName="-";
	picture="\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_digi.paa";
	descriptionShort="$STR_A3_SP_AL_III";
	hiddenSelections[]=
	{
		"Camo"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_wdl1_co.paa"
	};
	model="A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";

	class ItemInfo: VestItem
	{
		uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]=
		{
            "Camo"
		};
		containerClass="Supply120";
		mass=60;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName="HitChest";
				armor=16;
				passThrough=0.30000001;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=16;
				passThrough=0.30000001;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=16;
				passThrough=0.30000001;
			};
			class Body
			{
				hitpointName="HitBody";
				passThrough=0.30000001;
			};
		};
	};
};

class V_PlateCarrierIA1_CA2035_wdl: V_Base_PlateCarrier_lite_lvl3_CA2035
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="GA Carrier Lite (Woodland)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA1_CA2035_wdl.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_wdl1_co.paa"
	};
	model="A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";

	class ItemInfo: ItemInfo
	{
		uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
	};
};

class V_PlateCarrierIA1_CA2035_trp: V_PlateCarrierIA1_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="GA Carrier Lite (Tropic)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA1_CA2035_trp.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_trp1_co.paa"
	};
};

class V_PlateCarrierIA1_CA2035_ard: V_PlateCarrierIA1_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="GA Carrier Lite (Arid)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA1_CA2035_ard.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_ard3_CO.paa"
	};
};

class V_PlateCarrierIA1_CA2035_black: V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="GA Carrier Lite (Black)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA1_CA2035_black.paa";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\indep\data\equip_i_CA2035_vest01_black_CO.paa"
    };
};

class V_PlateCarrierIA1_CA2035_brown: V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="GA Carrier Lite (Brown)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA1_CA2035_brown.paa";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\indep\data\equip_i_CA2035_vest01_brown_CO.paa"
    };
};

class V_PlateCarrierIA1_CA2035_green: V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="GA Carrier Lite (Olive)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA1_CA2035_green.paa";
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa"
    };
};

// GA Carrier Rig 
class V_Base_PlateCarrier_lvl3_CA2035: Vest_Camo_Base
{
	author="kenoxite";
	scope=0;
	weaponPoolAvailable=0;
	displayName="-";
	picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
	descriptionShort="$STR_A3_SP_AL_III";
	hiddenSelections[]=
	{
		"Camo",
		"Camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_wdl1_co.paa",
		"\CA2035\indep\data\ga_CA2035_carrier_gl_rig_wdl1_co.paa"
	};
	model="A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";

	class ItemInfo: VestItem
	{
		uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
		hiddenSelections[]=
		{
            "Camo",
            "Camo1"
		};
		containerClass="Supply120";
		mass=80;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName="HitChest";
				armor=16;
				passThrough=0.30000001;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=16;
				passThrough=0.30000001;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=16;
				passThrough=0.30000001;
			};
			class Pelvis
			{
				hitpointName="HitPelvis";
				armor=16;
				passThrough=0.30000001;
			};
			class Body
			{
				hitpointName="HitBody";
				passThrough=0.30000001;
			};
		};
	};
};

class V_PlateCarrierIA2_CA2035_wdl: V_Base_PlateCarrier_lvl3_CA2035
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="GA Carrier Rig (Woodland)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA2_CA2035_wdl.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_wdl1_co.paa",
		"\CA2035\indep\data\ga_CA2035_carrier_gl_rig_wdl1_co.paa"
	};
	model="A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";

	class ItemInfo: ItemInfo
	{
		uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest02.p3d";
	};
};

class V_PlateCarrierIA2_CA2035_trp: V_PlateCarrierIA2_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="GA Carrier Rig (Tropic)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA2_CA2035_trp.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_trp1_co.paa",
		"\CA2035\indep\data\ga_CA2035_carrier_gl_rig_trp1_co.paa"
	};
};

class V_PlateCarrierIA2_CA2035_ard: V_PlateCarrierIA2_CA2035_wdl
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="GA Carrier Rig (Arid)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA2_CA2035_ard.paa";
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\equip_i_CA2035_vest01_ard3_co.paa",
		"\CA2035\indep\data\ga_CA2035_carrier_gl_rig_ard3_CO.paa"
	};
};

class V_PlateCarrierIA2_CA2035_black: V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="GA Carrier Rig (Black)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA2_CA2035_black.paa";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\indep\data\equip_i_CA2035_vest01_black_co.paa",
        "\CA2035\indep\data\ga_CA2035_carrier_gl_rig_black_CO.paa"
    };
};

class V_PlateCarrierIA2_CA2035_brown: V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="GA Carrier Rig (Brown)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA2_CA2035_brown.paa";
    hiddenSelectionsTextures[]=
    {
        "\CA2035\indep\data\equip_i_CA2035_vest01_brown_co.paa",
        "\CA2035\indep\data\ga_CA2035_carrier_gl_rig_brown_CO.paa"
    };
};

class V_PlateCarrierIA2_CA2035_green: V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    weaponPoolAvailable=2;
    displayName="GA Carrier Rig (Olive)";
    picture="\CA2035\characters\data\ui\icon_V_PlateCarrierIA2_CA2035_green.paa";
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Mark\INDEP\Data\equip_ia_vest01_oli_co.paa",
        "\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_oli_co.paa"
    };
};

// LBV Harness
class V_Base_HarnessO_CA2035: Vest_Camo_Base
{
	author="kenoxite";
	scope=0;
	weaponPoolAvailable=0;
	displayName="-";
	picture="\A3\characters_f_beta\Data\UI\icon_V_HarnessOUGL_gry_CA.paa";
	hiddenSelections[]=
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\clothing_CA2035_wdl1_co.paa",
		"\CA2035\indep\data\tech_CA2035_wdl1_co.paa"
	};
	model="\A3\Characters_F\OPFOR\equip_o_vest01";

	class ItemInfo: VestItem
	{
		uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
		containerClass="Supply160";
		mass=30;
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
	};
};

class V_HarnessO_CA2035_wdl: V_Base_HarnessO_CA2035
{
	author="kenoxite";
	scope=2;
	weaponPoolAvailable=2;
	displayName="LBV Harness (Woodland)";
    picture="\CA2035\characters\data\ui\icon_V_HarnessO_CA2035_wdl.paa";
	modelSides[]={0,1,2,3};
	hiddenSelectionsTextures[]=
	{
		"\CA2035\indep\data\clothing_CA2035_wdl1_co.paa",
		"\CA2035\indep\data\tech_CA2035_wdl1_co.paa"
	};
	model="\A3\Characters_F\OPFOR\equip_o_vest01";

	class ItemInfo: ItemInfo
	{
		uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
	};
};


// ************
// ITEMS
// ************

class ItemCore;
class UavTerminal_base: ItemCore
{
    class ItemInfo;
};
class I_CA2035_UavTerminal: UavTerminal_base
{
    author="kenoxite";
    scope=2;
    displayName="UAV Terminal [CAAF]";
    model="\a3\Drones_F\Weapons_F_Gamma\Items\UAV_controller_AAF_F";
    picture="\A3\Drones_F\Weapons_F_Gamma\Items\data\UI\gear_UAV_controller_oli_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "\A3\Drones_F\Weapons_F_Gamma\Items\data\UAV_controller_oli_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        side=2;
    };
};
