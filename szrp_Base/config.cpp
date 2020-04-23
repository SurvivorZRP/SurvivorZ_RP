class CfgPatches
{
	class szrp
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Parts"
		};
	};
};
class CfgMods
{
	class szrp
	{
		dir="survivorZRP";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SurvivorZ RP Server Mod";
		credits="";
		author="SurvivorZ Development Team";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"survivorZ_RP/szrp_Base/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"survivorZ_RP/szrp_Base/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class szrp_RottenSteak: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\gear\food\meat_steak.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_rotten_CO.paa","dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_rotten.rvmat","dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat"};
	};
	class szrp_RottenHumanMeat: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\gear\food\human_meat.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_rotten_CO.paa","dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_rotten.rvmat","dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
	};
	class szrp_RottenCarpFillet: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\gear\food\carp_fillet.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\carp_fillet_rotten_CO.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\carp_fillet_rotten.rvmat","dz\gear\food\data\carp_fillet_baked.rvmat","dz\gear\food\data\carp_fillet_boiled.rvmat","dz\gear\food\data\carp_fillet_dried.rvmat","dz\gear\food\data\carp_fillet_burnt.rvmat","dz\gear\food\data\carp_fillet_rotten.rvmat"};
	};
	class szrp_RottenMackerelFillet: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\gear\food\mackerel_fillet.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mackerel_fillet_rotten_CO.paa","dz\gear\food\data\mackerel_fillet_raw_CO.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mackerel_fillet_rotten.rvmat","dz\gear\food\data\mackerel_fillet_raw.rvmat","dz\gear\food\data\mackerel_fillet_baked.rvmat","dz\gear\food\data\mackerel_fillet_boiled.rvmat","dz\gear\food\data\mackerel_fillet_dried.rvmat","dz\gear\food\data\mackerel_fillet_burnt.rvmat","dz\gear\food\data\mackerel_fillet_rotten.rvmat"};
	};
	class szrp_RottenChickenBreast: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\gear\food\meat_breast.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_breast_rotten_CO.paa","dz\gear\food\data\meat_breast_baked_CO.paa","dz\gear\food\data\meat_breast_baked_CO.paa","dz\gear\food\data\meat_breast_dried_CO.paa","dz\gear\food\data\meat_breast_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_breast_rotten.rvmat","dz\gear\food\data\meat_breast_baked.rvmat","dz\gear\food\data\meat_breast_boiled.rvmat","dz\gear\food\data\meat_breast_dried.rvmat","dz\gear\food\data\meat_breast_burnt.rvmat","dz\gear\food\data\meat_breast_rotten.rvmat"};
	};
	class szrp_RottenRabbitLeg: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\gear\food\meat_leg.p3d";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_leg_rotten_CO.paa","dz\gear\food\data\meat_leg_baked_CO.paa","dz\gear\food\data\meat_leg_baked_CO.paa","dz\gear\food\data\meat_leg_dried_CO.paa","dz\gear\food\data\meat_leg_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_leg_rotten.rvmat","dz\gear\food\data\meat_leg_baked.rvmat","dz\gear\food\data\meat_leg_boiled.rvmat","dz\gear\food\data\meat_leg_dried.rvmat","dz\gear\food\data\meat_leg_burnt.rvmat","dz\gear\food\data\meat_leg_rotten.rvmat"};
	};
	class szrp_HikingJacket_Color: HouseNoDestruct
	{
		scope = 1;
		model="\DZ\characters\tops\pcu5jacket_ground.p3d";
		hiddenSelectionsTextures[]={"\dz\characters\tops\data\PCU5Jacket_g_nopatches_v3_co.paa"};
	};
	class Inventory_Base;
	class TruckBattery: Inventory_Base
	{
		class EnergyManager
		{
			energyStorageMax = 6000;
			energyAtSpawn = 6000;
		};
	};
	class CarBattery: Inventory_Base
	{
		class EnergyManager
		{
			energyStorageMax = 2000;
			energyAtSpawn = 2000;
		};
	};
	class AircraftBattery: Inventory_Base
	{
		class EnergyManager
		{
			energyStorageMax = 2000;
			energyAtSpawn = 2000;
		};
	};
	class Battery9V: Inventory_Base
	{
		class EnergyManager
		{
			energyStorageMax = 200;
			energyAtSpawn = 200;
		};
	};
};
