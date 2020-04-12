class CfgPatches
{
	class civ_Structures
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
	class EvocatusBillboard1Base;
	class civ_billboard_gunshop_l: EvocatusBillboard1Base
	{
		scope = 2;
		displayName = "Gun Shop Billboard";
		descriptionShort = "Gun Shop Billboard";
		hiddenSelectionsTextures[] = {"theCiv\civ_Structures\data\signs\civ_board_gunshop-L.paa"};
	};
	class EvocatusBillboard1Base;
	class civ_billboard_gunshop_r: EvocatusBillboard1Base
	{
		scope = 2;
		displayName = "Gun Shop Billboard";
		descriptionShort = "Gun Shop Billboard";
		hiddenSelectionsTextures[] = {"theCiv\civ_Structures\data\signs\civ_board_gunshop-R.paa"};
	};
};
