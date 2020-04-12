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
					"survivorZRP/szrp_Base/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"survivorZRP/szrp_Base/scripts/4_World"
				};
			};
		};
	};
};
