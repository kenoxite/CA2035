/*
    Author: kenoxite

    Description:
    Applies random textures to the unit's uniform, as long as it wears the original uniform defined in its config

    Parameter(s):
    _this select 0: Object - Unit
    _this select 1: Default uniform

    Returns:
    Bool
*/
    params [["_unit", objNull, [objNull]], ["_uniformClass",""]];
    
    if (isNull _unit) exitWith {
        false
    };

    // Disabled conditions
    if (!local _unit) exitWith {true};

//--- No randomization directly in the Eden Editor and when custom loadout was set
    if (is3DEN || _unit getvariable ["saved3DENInventory",false]) exitwith {true};

    private _randomizationDisabled = getArray (missionConfigFile >> "disableRandomization") findIf {
        _unit isKindOf _x || {(vehicleVarName _unit) isEqualTo _x}
    } != -1;

    private _differentUniform = (uniform _unit) != _uniformClass;

    if (_randomizationDisabled || {!(_unit getVariable ["BIS_enableRandomization", true])} || _differentUniform || _uniformClass=="") exitWith {true};

    private _randomTexturesTop = [];
    private _randomTexturesBottom = [];

    switch (_uniformClass) do {
        case "U_I_G_CA2035_Rebel_1": { 
            _randomTexturesTop = [
                    "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa",
                    "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa",
                    "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa",
                    "\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",
                    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa",
                    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_co.paa"
                ];
        };
        case "U_I_G_CA2035_Rebel_2": { 
             _randomTexturesTop = [
                    "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_4_F_1_co.paa",
                    "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_5_F_1_co.paa",
                    "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_1_co.paa",
                    "\A3\Characters_F_Bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",
                    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_1_F_1_co.paa",
                    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_2_F_1_co.paa"
                ];
             _randomTexturesBottom = [
                    "\A3\Characters_F_Exp\Civil\Data\U_C_Man_casual_6_F_2_co.paa",
                    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_2_co.paa"
                ];
        };
        case "U_I_CA2035_RegularUniform_tanktop_wdl": { 
             _randomTexturesTop = [
                    "\CA2035\indep\data\i_CA2035_wdl1_clothing_old_tt_co.paa",
                    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Bandit_5_F_1_co.paa",
                    "\A3\Characters_F_Exp\Syndikat\Data\U_I_C_Soldier_Para_4_F_1_co.paa"
                ];
        };
    };
    
    if ((count _randomTexturesTop) > 0) then { _unit setObjectTexture [0, selectRandom _randomTexturesTop] };
    if ((count _randomTexturesBottom) > 0) then { _unit setObjectTexture [1, selectRandom _randomTexturesBottom] };
    
    true

