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
			"DZ_Scripts"
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
};
