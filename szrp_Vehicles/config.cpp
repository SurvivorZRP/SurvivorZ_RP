class CfgPatches
{
	class civ_Vehicles
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class TrailBrozer;
	class civ_TrailBrozer_Black_PD: TrailBrozer
	{
		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_1",
			"light_2_1",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_pd.paa"
		};
	};
	class TrailBrozer;
	class civ_TrailBrozer_Black: TrailBrozer
	{
		hiddenSelections[]=
		{
			"light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_1",
			"light_2_1",
			"light_dashboard",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_gov.paa"
		};
	};
	class TrailBrozerHood;
	class civ_TrailBrozerHood_black: TrailBrozerHood
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_gov.paa"
		};
	};
	class TrailBrozerTrunk;
	class civ_TrailBrozerTrunk_black: TrailBrozerTrunk
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_gov.paa"
		};
	};
	class trailbrozerdoors_driver;
	class civ_trailbrozerdoors_driver_pd: trailbrozerdoors_driver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_pd.paa"
		};
	};
	class trailbrozerdoors_codriver;
	class civ_trailbrozerdoors_codriver_pd: trailbrozerdoors_codriver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_pd.paa"
		};
	};
	class trailbrozerdoors_cargo1;
	class civ_trailbrozerdoors_cargo1_pd: trailbrozerdoors_cargo1
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_pd.paa"
		};
	};
	class trailbrozerdoors_cargo2;
	class civ_trailbrozerdoors_cargo2_pd: trailbrozerdoors_cargo2
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_pd.paa"
		};
	};
	class TrailBrozerHood;
	class civ_TrailBrozerHood_pd: TrailBrozerHood
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_pd.paa"
		};
	};
	class TrailBrozerTrunk;
	class civ_TrailBrozerTrunk_pd: TrailBrozerTrunk
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_pd.paa"
		};
	};
	class trailbrozerdoors_driver;
	class civ_trailbrozerdoors_driver_gov: trailbrozerdoors_driver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_gov.paa"
		};
	};
	class trailbrozerdoors_codriver;
	class civ_trailbrozerdoors_codriver_gov: trailbrozerdoors_codriver
	{
		hiddenSelections[]=
		{
			"camo_doors"
		};
		hiddenSelectionsTextures[]=
		{
			"theCiv\civ_Vehicles\data\TrailBrozer\remapbody_gov.paa"
		};
	};
};
