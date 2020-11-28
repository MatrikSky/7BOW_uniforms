#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 7bow_ubrania
	{
		units[]=
		{
			"7bow_ubrania"
		};
		weapons[]=
		{
			"7bow_ubrania"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Common",
			"A3_Data_F"
		};
	};
};
class CfgUnitInsignia
{
class 7bow_insygnia_anchor_01
	{
		displayName = "[7BOW] Kotwica (Blue)";
		author = "MatrikSky, Wojtek885";
		texture = "\7bow_ubrania\data\7bow_i_01.paa";
		textureVehicle = "";
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_Kitbag_Base;
	class tf_rt1523g;
	class tf_rt1523g_big;

	class 7bow_radio_rt1523g_UCP: tf_rt1523g
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (UCP)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_UCP.paa"};
	};
	class 7bow_radio_rt1523g_big_UCP: tf_rt1523g_big
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (UCP)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_UCP.paa"};
	};
	class 7bow_radio_rt1523g_big_wz93d: 7bow_radio_rt1523g_big_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (WZ. 93 Desert)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_wz93d.paa"};
	};
	class 7bow_radio_rt1523g_CTRG: 7bow_radio_rt1523g_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (CTRG)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_CTRG.paa"};
	};
	class 7bow_radio_rt1523g_big_CTRG: 7bow_radio_rt1523g_big_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (CTRG)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_CTRG.paa"};
	};
	class 7bow_radio_rt1523g_CTRG_Green: 7bow_radio_rt1523g_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (CTRG Green)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_CTRG_Green.paa"};
	};
	class 7bow_radio_rt1523g_big_CTRG_Green: 7bow_radio_rt1523g_big_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (CTRG Green)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_CTRG_Green.paa"};
	};
	class 7bow_radio_rt1523g_MARPAT_Woodland: 7bow_radio_rt1523g_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (MARPAT Woodland)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_MARPAT_Woodland.paa"};
	};
	class 7bow_radio_rt1523g_big_MARPAT_Woodlaand: 7bow_radio_rt1523g_big_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (MARPAT Woodland)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_MARPAT_Woodland.paa"};
	};
	class 7bow_radio_rt1523g_MARPAT_Desert: 7bow_radio_rt1523g_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (MARPAT Desert)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_MARPAT_Desert.paa"};
	};
	class 7bow_radio_rt1523g_big_MARPAT_Desert: 7bow_radio_rt1523g_big_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (MARPAT Desert)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_MARPAT_Desert.paa"};
	};
	class 7bow_radio_rt1523g_Black: 7bow_radio_rt1523g_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (Black)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_Black.paa"};
	};
	class 7bow_radio_rt1523g_big_Black: 7bow_radio_rt1523g_big_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (Black)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_Black.paa"};
	};
	class 7bow_radio_rt1523g_M81: 7bow_radio_rt1523g_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (M81)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_M81.paa"};
	};
	class 7bow_radio_rt1523g_big_M81: 7bow_radio_rt1523g_big_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (M81)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_M81.paa"};
	};
	class 7bow_radio_rt1523g_ranger_green: 7bow_radio_rt1523g_UCP
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G (Ranger Green)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_Ranger_Green.paa"};
	};
	class 7bow_radio_rt1523g_big_ranger_green: 7bow_radio_rt1523g_big_ucp
	{
		author="MatrikSky, Wojtek885";
		displayName="[7BOW] RT-1523G Big (Ranger Green)";
		picture = "\7bow_ubrania\data\logo.paa";
		hiddenSelectionsTextures[]= {"\7bow_ubrania\data\7bow_radio_big_Ranger_Green.paa"};
	};

	class 7bow_b_black_camo_fast : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack (Black Camo)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_black_camo_fast.paa"};
	};

	class 7bow_b_black_camo_fast_med : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack Medic (Black Camo)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_black_camo_fast_med.paa"};
	};

	class 7bow_b_black_fast : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack (Black)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_black_fast.paa"};
	};

	class 7bow_b_black_fast_med : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack Medic (Black)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_black_fast_med.paa"};
	};

	class 7bow_b_green_fast : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack (Green)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_green_fast.paa"};
	};

	class 7bow_b_green_fast_med : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack Medic (Green)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_green_fast_med.paa"};
	};

	class 7bow_b_suez_fast : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack (Suez)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_suez_fast.paa"};
	};

	class 7bow_b_suez_fast_med : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack Medic (Suez)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_suez_fast_med.paa"};
	};

	class 7bow_b_snow_fast : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack (Splinter Snow)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_snow_fast.paa"};
	};

	class 7bow_b_snow_fast_med : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack Medic (Splinter Snow)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_snow_fast_med.paa"};
	};

	class 7bow_b_wz93_fast : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack (WZ. 93 Woodland)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_w93_fast.paa"};
	};

	class 7bow_b_wz93d_fast : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack (WZ. 93 Desert)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_w93d_fast.paa"};
	};

	class 7bow_b_wz93_fast_med : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack Medic (WZ. 93 Woodland)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_w93_fast_med.paa"};
	};

	class 7bow_b_wz93d_fast_med : B_Kitbag_Base 
	{
		scope = 2;
		author = "MatrikSky, Wojtek885";
		picture = "\7bow_ubrania\data\logo.paa";
		maximumLoad = 230; 
		displayName = "[7BOW] Field Pack Medic (WZ. 93 Desert)";
		hiddenSelectionsTextures[] = {"\7bow_ubrania\data\7bow_b_w93d_fast_med.paa"};
	};

	class 7bow_u_wz93d_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93d_01.paa"
		};
	};

	class 7bow_u_sg14_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_sg14_01.paa"
		};
	};

	class 7bow_u_sg14_dirt_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_sg14_01.paa"
		};
	};

	class 7bow_u_wz93d_sand_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93d_sand_01.paa"
		};
	};

	class 7bow_u_wz93d_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93d_02.paa"
		};
	};

	class 7bow_u_wz93d_sand_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93d_sand_02.paa"
		};
	};

	class 7bow_u_wz93_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93_01.paa"
		};
	};

	class 7bow_u_wz93_dirt_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93_dirt_01.paa"
		};
	};

	class 7bow_u_wz93_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93_02.paa"
		};
	};

	class 7bow_u_wz93_dirt_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_wz93_dirt_02.paa"
		};
	};

	class 7bow_u_mapa_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_mapa_01.paa"
		};
	};

	class 7bow_u_mapa_dirt_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_mapa_dirt_01.paa"
		};
	};

	class 7bow_u_mapa_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_mapa_02.paa"
		};
	};

	class 7bow_u_mapa_dirt_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_mapa_dirt_02.paa"
		};
	};

	class 7bow_u_suez_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_suez_01.paa"
		};
	};

	class 7bow_u_suez_dirt_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_suez_dirt_01.paa"
		};
	};

	class 7bow_u_suez_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_suez_02.paa"
		};
	};

	class 7bow_u_suez_dirt_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_suez_dirt_02.paa"
		};
	};

	class 7bow_u_snow_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_snow_01.paa"
		};
	};

	class 7bow_u_snow_bleach_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_snow_bleach_01.paa"
		};
	};

	class 7bow_u_desert_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_desert_01.paa"
		};
	};

	class 7bow_u_desert_sand_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_desert_sand_01.paa"
		};
	};

	class 7bow_u_desert_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_desert_02.paa"
		};
	};

	class 7bow_u_desert_sand_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_desert_sand_02.paa"
		};
	};

	class 7bow_u_woodland_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_woodland_01.paa"
		};
	};

	class 7bow_u_woodland_dirt_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_woodland_dirt_01.paa"
		};
	};

	class 7bow_u_woodland_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_woodland_02.paa"
		};
	};

	class 7bow_u_woodland_dirt_02: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_woodland_dirt_02.paa"
		};
	};

	class 7bow_u_black_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_black_01.paa"
		};
	};

	class 7bow_u_black_dirt_01: B_Soldier_base_F
	{
		scope=2;
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo","insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_u_black_dirt_01.paa"
		};
	};
};

class cfgWeapons
{
	class HeadgearItem;
	class ItemInfo;
	class ItemCore;
	class V_PlateCarrierIA2_dgtl;
	class UniformItem;
	class H_HelmetB;
	class Vest_Camo_Base;
	class VestItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};

	class 7bow_black_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Black Camo)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_black_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_black_combat_fatigues_dirt_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Black Camo)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_black_dirt_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_u_sg14_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (SG14)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_sg14_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_u_sg14_dirt_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (SG14)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_sg14_dirt_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_suez_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Suez)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_suez_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_suez_combat_fatigues_dirt_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Suez)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_suez_dirt_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_suez_combat_fatigues_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Suez)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_suez_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_suez_combat_fatigues_dirt_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Suez)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_suez_dirt_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93_combat_fatigues_dirt_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93_dirt_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93_combat_fatigues_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93_combat_fatigues_dirt_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93_dirt_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93d_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93d_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93d_combat_fatigues_sand_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93d_sand_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93d_combat_fatigues_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93d_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_wz93d_combat_fatigues_sand_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_wz93d_sand_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_mapa_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (MAPA)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_mapa_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_mapa_combat_fatigues_dirt_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (MAPA)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_mapa_dirt_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_mapa_combat_fatigues_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (MAPA)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_mapa_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_mapa_combat_fatigues_dirt_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (MAPA)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_mapa_dirt_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_desert_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Splinter Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_desert_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_desert_combat_fatigues_sand_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Splinter Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_desert_sand_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_desert_combat_fatigues_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Splinter Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_desert_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_desert_combat_fatigues_sand_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Splinter Desert)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_desert_sand_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_woodland_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Splinter Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_woodland_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_woodland_combat_fatigues_dirt_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Splinter Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_woodland_dirt_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_woodland_combat_fatigues_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Splinter Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_woodland_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_woodland_combat_fatigues_dirt_02: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Splinter Woodland)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_woodland_dirt_02";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_snow_combat_fatigues_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues (Splinter Snow)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_snow_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_snow_combat_fatigues_bleach_01: Uniform_Base
	{
		scope=2;
		displayName="[7BOW] Combat Fatigues Dirty (Splinter Snow)";
		author="MatrikSky, Wojtek885";
		descriptionShort="Modyfikacja stworzona na potrzeby [7BOW]";
		model="\A3\characters_f\BLUFOR\b_soldier_01.p3d";
		picture="\7bow_ubrania\data\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="7bow_u_snow_bleach_01";
			containerClass="Supply100";
			mass=40;
		};
	};

	class 7bow_h_beret_blue_01: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Beret (Blue)";
		author="MatrikSky, Wojtek885";
		model="\A3\characters_f_epb\BLUFOR\headgear_beret02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_blue_ber.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\characters_f_epb\BLUFOR\headgear_beret02.p3d";
			modelSides[]={6};
			armor="0*0";
			passThrough=0.80000001;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_wz93_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_wz93_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_wz93_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_wz93_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_wz93d_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_wz93d_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_wz93d_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_wz93d_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_suez_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (Suez)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_suez_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_suez_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (Suez)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_suez_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_mapa_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (MAPA)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_mapa_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_mapa_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (MAPA)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_mapa_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_green_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (Green)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_green_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_green_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (Green)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_green_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_desert_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (Splinter Desert)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_desert_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_desert_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (Splinter Desert)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_desert_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_snow_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (Splinter Snow)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_snow_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_snow_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (Splinter Snow)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_snow_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_woodland_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (Splinter Woodland)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_woodland_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_woodland_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (Splinter Woodland)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_woodland_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_black_camo_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (Black Camo)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_black_camo_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_black_camo_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (Black Camo)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_black_camo_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_black_lg: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet (Black)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_black_lg.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_h_black_lg_new: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[7BOW] Light Combat Helmet New (Black)";
		author="MatrikSky, Wojtek885";
		picture="\7bow_ubrania\data\logo.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\7bow_ubrania\data\7bow_h_black_lg_new.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=2;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light.p3d";
			modelSides[]={6};
			armor=6;
			passThrough=0.4;
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};

	class 7bow_v_mapa_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (MAPA)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_mapa_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_black_carier_sg14: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig SG (Black)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_black_carier_sg14.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_mapa_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (MAPA)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_mapa_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_white_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (White)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_white_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_white_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (White)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_white_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_snow_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (Splinter Snow)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_snow_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_snow_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (Splinter Snow)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_snow_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_suez_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (Suez)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_suez_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_suez_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (Suez)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_suez_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.6;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.6;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.6;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};

	class 7bow_v_green_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (Green)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_green_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_green_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (Green)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_green_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_black_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (Black)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_black_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_black_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (Black)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_black_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_black_camo_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (Black Camo)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_black_camo_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_black_camo_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (Black Camo)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_black_camo_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_black_instructor_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Drill Instructor Carrier Rig (Black)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_black_instructor_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_green_instructor_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Drill Instructor Carrier Rig (Greeen)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_green_instructor_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_wz93_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_wz93_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_wz93_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (WZ. 93 Woodland)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_wz93_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_wz93d_carier: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_wz93d_carier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};

	class 7bow_v_wz93d_carier_med: V_PlateCarrierIA2_dgtl
	{
		scope=2;
		displayName="[7BOW] Carrier Rig Medic (WZ. 93 Desert)";
		author="MatrikSky, Wojtek885";
		model="\A3\Characters_F\BLUFOR\equip_b_vest02";
		picture="\7bow_ubrania\data\logo.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"7bow_ubrania\data\7bow_v_wz93d_carier_med.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass="Supply130";
			mass=80;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=18;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
};