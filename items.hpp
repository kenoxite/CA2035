// ************
// UNIFORMS (vehicles)
// ************
class Item_Base_F;

// Regular uniform
class Item_I_CA2035_RegularUniform_wdl: Item_Base_F
{
    author="kenoxite";
    displayName="Old Combat Fatigues (Woodland)";
    model="\A3\Weapons_f\dummyweapon.p3d";
    modelSides[]={0,1,2,3};
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_I_CA2035_RegularUniform_wdl
        {
            name="U_I_CA2035_RegularUniform_wdl";
            count=1;
        };
    };
};

class Item_I_CA2035_RegularUniform_trp: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Old Combat Fatigues (Tropic)";
    class TransportItems
    {
        class Item_I_CA2035_RegularUniform_trp
        {
            name="U_I_CA2035_RegularUniform_trp";
            count=1;
        };
    };
};

class Item_I_CA2035_RegularUniform_ard: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Old Combat Fatigues (Semi-Arid)";
    class TransportItems
    {
        class Item_I_CA2035_RegularUniform_ard
        {
            name="U_I_CA2035_RegularUniform_ard";
            count=1;
        };
    };
};


// Regular uniform (tank top)

class Item_I_CA2035_RegularUniform_wdl_tanktop: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    displayName="Combat Fatigues (T-Top, Woodland)";
    model="\A3\Weapons_f\dummyweapon.p3d";
    modelSides[]={0,1,2,3};
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_I_CA2035_RegularUniform_wdl_tanktop
        {
            name="U_I_CA2035_RegularUniform_tanktop_wdl";
            count=1;
        };
    };
};

class Item_I_CA2035_RegularUniform_trp_tanktop: Item_I_CA2035_RegularUniform_wdl_tanktop
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (T-Top, Tropic)";
    class TransportItems
    {
        class Item_I_CA2035_RegularUniform_trp_tanktop
        {
            name="U_I_CA2035_RegularUniform_tanktop_trp";
            count=1;
        };
    };
};

class Item_I_CA2035_RegularUniform_ard_tanktop: Item_I_CA2035_RegularUniform_wdl_tanktop
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (T-Top, Semi-Arid)";
    class TransportItems
    {
        class Item_I_CA2035_RegularUniform_ard_tanktop
        {
            name="U_I_CA2035_RegularUniform_tanktop_ard";
            count=1;
        };
    };
};

// Officer uniform
class Item_I_CA2035_OfficerUniform_wdl: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    displayName="Combat Fatigues (Officer, Woodland)";
    model="\A3\Weapons_f\dummyweapon.p3d";
    modelSides[]={0,1,2,3};
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_I_CA2035_OfficerUniform_wdl
        {
            name="U_I_CA2035_OfficerUniform_wdl";
            count=1;
        };
    };
};

class Item_I_CA2035_OfficerUniform_trp: Item_I_CA2035_OfficerUniform_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Officer, Tropic)";
    class TransportItems
    {
        class Item_I_CA2035_OfficerUniform_trp
        {
            name="U_I_CA2035_OfficerUniform_trp";
            count=1;
        };
    };
};

class Item_I_CA2035_OfficerUniform_ard: Item_I_CA2035_OfficerUniform_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Officer, Semi-Arid)";
    class TransportItems
    {
        class Item_I_CA2035_OfficerUniform_ard
        {
            name="U_I_CA2035_OfficerUniform_ard";
            count=1;
        };
    };
};

// Recon uniform
class Item_I_CA2035_ReconUniform_wdl: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    displayName="Combat Fatigues (Woodland)";
    model="\A3\Weapons_f\dummyweapon.p3d";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_I_CA2035_ReconUniform_wdl
        {
            name="U_I_CA2035_ReconUniform_wdl";
            count=1;
        };
    };
};

class Item_I_CA2035_ReconUniform_trp: Item_I_CA2035_ReconUniform_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Tropic)";
    class TransportItems
    {
        class Item_I_CA2035_ReconUniform_trp
        {
            name="U_I_CA2035_ReconUniform_trp";
            count=1;
        };
    };
};

class Item_I_CA2035_ReconUniform_ard: Item_I_CA2035_ReconUniform_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Semi-Arid)";
    class TransportItems
    {
        class Item_I_CA2035_ReconUniform_ard
        {
            name="U_I_CA2035_ReconUniform_ard";
            count=1;
        };
    };
};

class Item_I_CA2035_ReconUniform_black: Item_I_CA2035_ReconUniform_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Combat Fatigues (Black)";
    class TransportItems
    {
        class Item_I_CA2035_ReconUniform_black
        {
            name="U_I_CA2035_ReconUniform_black";
            count=1;
        };
    };
};


// Heli Pilot Coveralls
class Item_I_CA2035_HeliPilotCoveralls: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    displayName="Heli Pilot Coveralls (green)";
    model="\A3\Weapons_f\dummyweapon.p3d";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_I_CA2035_HeliPilotCoveralls
        {
            name="U_I_CA2035_HeliPilotCoveralls";
            count=1;
        };
    };
};

// Ghillie suits
class Item_I_CA2035_GhillieSuit_wdl: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    displayName="Guillie Suit (Woodland)";
    model="\A3\Weapons_f\dummyweapon.p3d";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_I_CA2035_GhillieSuit_wdl
        {
            name="U_I_CA2035_GhillieSuit_wdl";
            count=1;
        };
    };
};

class Item_I_CA2035_GhillieSuit_trp: Item_I_CA2035_GhillieSuit_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Guillie Suit (Tropic)";
    class TransportItems
    {
        class Item_I_CA2035_GhillieSuit_trp
        {
            name="U_I_CA2035_GhillieSuit_trp";
            count=1;
        };
    };
};

class Item_I_CA2035_GhillieSuit_ard: Item_I_CA2035_GhillieSuit_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Guillie Suit (Semi-Arid)";
    class TransportItems
    {
        class Item_I_CA2035_GhillieSuit_ard
        {
            name="U_I_CA2035_GhillieSuit_ard";
            count=1;
        };
    };
};

// Rebel uniforms
class Item_I_G_CA2035_Rebel_1: Item_I_CA2035_RegularUniform_wdl
{
    author="kenoxite";
    displayName="Rebel Garb (Tee)";
    model="\A3\Weapons_f\dummyweapon.p3d";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Uniforms";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsUniforms";
    class TransportItems
    {
        class Item_I_G_CA2035_Rebel_1
        {
            name="U_I_G_CA2035_Rebel_1";
            count=1;
        };
    };
};

class Item_I_G_CA2035_Rebel_2: Item_I_G_CA2035_Rebel_1
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Rebel Garb (Shorts)";
    class TransportItems
    {
        class Item_I_G_CA2035_Rebel_2
        {
            name="U_I_G_CA2035_Rebel_2";
            count=1;
        };
    };
};

class Item_I_G_CA2035_Rebel_3: Item_I_G_CA2035_Rebel_1
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="Rebel Garb (Jacket)";
    class TransportItems
    {
        class Item_I_G_CA2035_Rebel_3
        {
            name="U_I_G_CA2035_Rebel_3";
            count=1;
        };
    };
};


// ************
// VESTS (vehicles)
// ************
class Vest_Base_F;

// GA Carrier Lite 
class Vest_V_PlateCarrierIA1_CA2035_wdl: Vest_Base_F
{
    author="kenoxite";
    displayName="GA Carrier Lite (Woodland)";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Vests";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsVests";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA1_CA2035_wdl
        {
            name="V_PlateCarrierIA1_CA2035_wdl";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA1_CA2035_trp: Vest_V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Lite (Tropic)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA1_CA2035_trp
        {
            name="V_PlateCarrierIA1_CA2035_trp";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA1_CA2035_ard: Vest_V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Lite (Semi-Arid)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA1_CA2035_ard
        {
            name="V_PlateCarrierIA1_CA2035_ard";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA1_CA2035_black: Vest_V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Lite (Black)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA1_CA2035_black
        {
            name="V_PlateCarrierIA1_CA2035_black";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA1_CA2035_brown: Vest_V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Lite (Brown)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA1_CA2035_brown
        {
            name="V_PlateCarrierIA1_CA2035_brown";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA1_CA2035_green: Vest_V_PlateCarrierIA1_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Lite (Olive)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA1_CA2035_green
        {
            name="V_PlateCarrierIA1_CA2035_green";
            count=1;
        };
    };
};

// GA Carrier Rig
class Vest_V_PlateCarrierIA2_CA2035_wdl: Vest_Base_F
{
    author="kenoxite";
    displayName="GA Carrier Rig (Woodland)";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Vests";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsVests";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA2_CA2035_wdl
        {
            name="V_PlateCarrierIA2_CA2035_wdl";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA2_CA2035_trp: Vest_V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Rig (Tropic)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA2_CA2035_trp
        {
            name="V_PlateCarrierIA2_CA2035_trp";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA2_CA2035_ard: Vest_V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Rig (Semi-Arid)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA2_CA2035_ard
        {
            name="V_PlateCarrierIA2_CA2035_ard";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA2_CA2035_black: Vest_V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Rig (Black)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA2_CA2035_black
        {
            name="V_PlateCarrierIA2_CA2035_black";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA2_CA2035_brown: Vest_V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Rig (Brown)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA2_CA2035_brown
        {
            name="V_PlateCarrierIA2_CA2035_brown";
            count=1;
        };
    };
};

class Vest_V_PlateCarrierIA2_CA2035_green: Vest_V_PlateCarrierIA2_CA2035_wdl
{
    author="kenoxite";
    scope=2;
    scopeCurator=2;
    displayName="GA Carrier Rig (Olive)";
    class TransportItems
    {
        class Vest_V_PlateCarrierIA2_CA2035_green
        {
            name="V_PlateCarrierIA2_CA2035_green";
            count=1;
        };
    };
};

// LBV Harness
class Vest_V_HarnessO_CA2035_wdl: Vest_Base_F
{
    author="kenoxite";
    displayName="LBV Harness (Woodland)";
    modelSides[]={0,1,2,3};
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Vests";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsVests";
    class TransportItems
    {
        class Item_V_HarnessO_CA2035_wdl
        {
            name="V_HarnessO_CA2035_wdl";
            count=1;
        };
    };
};
class Vest_V_HarnessO_CA2035_ard: Vest_V_HarnessO_CA2035_wdl
{
    author="kenoxite";
    displayName="LBV Harness (Semi-Arid)";
    modelSides[]={0,1,2,3};
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Vests";
    scope=2;
    scopeCurator=2;
    vehicleClass="ItemsVests";
    class TransportItems
    {
        class Item_V_HarnessO_CA2035_ard
        {
            name="V_HarnessO_CA2035_ard";
            count=1;
        };
    };
};



// ************
// HEADGEAR (vehicles)
// ************
class Headgear_Base_F;

// Cap (Green Hex) 
class Headgear_H_Cap_O_CA2035_ghex: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Cap (Green Hex)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_Cap_O_CA2035_ghex
        {
            name="H_Cap_O_CA2035_ghex";
            count=1;
        };
    };
};

// Cap (Tropic) 
class Headgear_H_Cap_O_CA2035_trp: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Cap (Tropic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_Cap_O_CA2035_trp
        {
            name="H_Cap_O_CA2035_trp";
            count=1;
        };
    };
};

// Cap (Semi-Arid) 
class Headgear_H_Cap_O_CA2035_ard: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Cap (Semi-Arid)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_Cap_O_CA2035_ard
        {
            name="H_Cap_O_CA2035_ard";
            count=1;
        };
    };
};

// Bandana (Woodland, Headset)
class Headgear_H_Bandanna_hs_CA2035_wdl: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Bandana (Woodland, Headset)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    modelSides[]={0,1,2,3};
    class TransportItems
    {
        class H_Bandanna_hs_CA2035_wdl
        {
            name="H_Bandanna_hs_CA2035_wdl";
            count=1;
        };
    };
};

// Bandana (Tropic, Headset)
class Headgear_H_Bandanna_hs_CA2035_trp: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Bandana (Tropic, Headset)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_Bandanna_hs_CA2035_trp
        {
            name="H_Bandanna_hs_CA2035_trp";
            count=1;
        };
    };
};

// Bandana (Semi-Arid, Headset)
class Headgear_H_Bandanna_hs_CA2035_ard: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Bandana (Semi-Arid, Headset)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_Bandanna_hs_CA2035_ard
        {
            name="H_Bandanna_hs_CA2035_ard";
            count=1;
        };
    };
};

// Military Cap (Woodland)
class Headgear_H_MilCap_CA2035_wdl: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Military Cap (Woodland)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    modelSides[]={0,1,2,3};
    class TransportItems
    {
        class H_MilCap_CA2035_wdl
        {
            name="H_MilCap_CA2035_wdl";
            count=1;
        };
    };
};

// Military Cap (Tropic)
class Headgear_H_MilCap_CA2035_trp: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Military Cap (Tropic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_MilCap_CA2035_trp
        {
            name="H_MilCap_CA2035_trp";
            count=1;
        };
    };
};

// Military Cap (Semi-Arid)
class Headgear_H_MilCap_CA2035_ard: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Military Cap (Semi-Arid)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_MilCap_CA2035_ard
        {
            name="H_MilCap_CA2035_ard";
            count=1;
        };
    };
};

// Booniehat (Woodland, Headset)
class Headgear_H_Booniehat_CA2035_wdl: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Booniehat (Woodland, Headset)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    modelSides[]={0,1,2,3};
    class TransportItems
    {
        class H_Booniehat_CA2035_wdl
        {
            name="H_Booniehat_CA2035_wdl";
            count=1;
        };
    };
};

// Booniehat (Tropic, Headset)
class Headgear_H_Booniehat_CA2035_trp: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Booniehat (Tropic, Headset)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_Booniehat_CA2035_trp
        {
            name="H_Booniehat_CA2035_trp";
            count=1;
        };
    };
};

// Booniehat (Tropic, Headset)
class Headgear_H_Booniehat_CA2035_ard: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Booniehat (Semi-Arid, Headset)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_Booniehat_CA2035_ard
        {
            name="H_Booniehat_CA2035_ard";
            count=1;
        };
    };
};

// Modular Helmet (Woodland)
class Headgear_H_HelmetIA_CA2035_wdl: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Modular Helmet (Woodland)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    modelSides[]={0,1,2,3};
    class TransportItems
    {
        class H_HelmetIA_CA2035_wdl
        {
            name="H_HelmetIA_CA2035_wdl";
            count=1;
        };
    };
};

// Modular Helmet (Tropic)
class Headgear_H_HelmetIA_CA2035_trp: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Modular Helmet (Tropic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_CA2035_trp
        {
            name="H_HelmetIA_CA2035_trp";
            count=1;
        };
    };
};

// Modular Helmet (Semi-Arid)
class Headgear_H_HelmetIA_CA2035_ard: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Modular Helmet (Semi-Arid)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_CA2035_ard
        {
            name="H_HelmetIA_CA2035_ard";
            count=1;
        };
    };
};

// Modular Helmet (Semi-Arid - Alt)
class Headgear_H_HelmetIA_CA2035_ard2: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Modular Helmet (Semi-Arid Alt)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_CA2035_ard2
        {
            name="H_HelmetIA_CA2035_ard2";
            count=1;
        };
    };
};

// Modular Helmet (Green Hex)
class Headgear_H_HelmetIA_CA2035_ghex: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Modular Helmet (Green Hex)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_CA2035_ghex
        {
            name="H_HelmetIA_CA2035_ghex";
            count=1;
        };
    };
};

// Fast Helmet (Tropic)
class Headgear_H_HelmetIA_fast_CA2035_trp: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Light Combat Helmet (Tropic, Basic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_fast_CA2035_trp
        {
            name="H_HelmetIA_fast_CA2035_trp";
            count=1;
        };
    };
};
// Fast Helmet (Semi-Arid)
class Headgear_H_HelmetIA_fast_CA2035_ard: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Light Combat Helmet (Semi-Arid, Basic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_fast_CA2035_ard
        {
            name="H_HelmetIA_fast_CA2035_ard";
            count=1;
        };
    };
};
// Fast Helmet (Green)
class Headgear_H_HelmetIA_fast_CA2035_green: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Light Combat Helmet (Green, Basic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_fast_CA2035_green
        {
            name="H_HelmetIA_fast_CA2035_green";
            count=1;
        };
    };
};
// Fast Helmet (Brown)
class Headgear_H_HelmetIA_fast_CA2035_brown: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Light Combat Helmet (Brown, Basic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_fast_CA2035_brown
        {
            name="H_HelmetIA_fast_CA2035_brown";
            count=1;
        };
    };
};
// Fast Helmet (Black)
class Headgear_H_HelmetIA_fast_CA2035_black: Headgear_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Light Combat Helmet (Black, Basic)";
    author="kenoxite";
    editorCategory="EdCat_Equipment";
    editorSubcategory="EdSubcat_Hats";
    vehicleClass="ItemsHeadgear";
    model="\A3\Weapons_F\DummyCap.p3d";
    class TransportItems
    {
        class H_HelmetIA_fast_CA2035_black
        {
            name="H_HelmetIA_fast_CA2035_black";
            count=1;
        };
    };
};



// ************
// WEAPONS (vehicles)
// ************
class Weapon_Base_F;
class Pistol_Base_F;
/*
class Weapon_I_CA2035_arifle_Mk20_Black_F: Weapon_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Mk20 5.56 mm (Black)";
    author="kenoxite";
    editorCategory="EdCat_Weapons";
    editorSubcategory="EdSubcat_AssaultRifles";
    vehicleClass="WeaponsPrimary";
    class TransportWeapons
    {
        class I_CA2035_arifle_Mk20_Black_F
        {
            weapon="I_CA2035_arifle_Mk20_Black_F";
            count=1;
        };
    };
    class TransportMagazines
    {
        class 30Rnd_556x45_Stanag
        {
            magazine="30Rnd_556x45_Stanag";
            count=1;
        };
    };
};

class Weapon_I_CA2035_arifle_Mk20_GL_Black_F: Weapon_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Mk20 EGLM 5.56 mm (Black)";
    author="kenoxite";
    editorCategory="EdCat_Weapons";
    editorSubcategory="EdSubcat_AssaultRifles";
    vehicleClass="WeaponsPrimary";
    class TransportWeapons
    {
        class I_CA2035_arifle_Mk20_GL_Black_F
        {
            weapon="I_CA2035_arifle_Mk20_GL_Black_F";
            count=1;
        };
    };
    class TransportMagazines
    {
        class 30Rnd_556x45_Stanag
        {
            magazine="30Rnd_556x45_Stanag";
            count=1;
        };
    };
};

class Weapon_I_CA2035_srifle_EBR_F_Black: Weapon_Base_F
{
    scope=2;
    scopeCurator=2;
    displayName="Mk18 ABR 7.62 mm (Black)";
    author="kenoxite";
    editorCategory="EdCat_Weapons";
    editorSubcategory="EdSubcat_SniperRifles";
    vehicleClass="WeaponsPrimary";
    class TransportWeapons
    {
        class I_CA2035_srifle_EBR_Black_F
        {
            weapon="I_CA2035_srifle_EBR_Black_F";
            count=1;
        };
    };
    class TransportMagazines
    {
        class 20Rnd_762x51_Mag
        {
            magazine="20Rnd_762x51_Mag";
            count=1;
        };
    };
};
*/



// ************
// OTHER (vehicles)
// ************
class Item_I_UavTerminal;

class Item_I_CA2035_UavTerminal: Item_I_UavTerminal
{
    displayName="UAV Terminal [CAAF]";
    faction="IND_CA2035_T_F";
    author="kenoxite";
    class TransportItems
    {
        class I_CA2035_UavTerminal
        {
            name="I_CA2035_UavTerminal";
            count=1;
        };
    };
};
