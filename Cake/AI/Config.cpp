class CfgPatches
{
	class CakeAI
	{
		units[] = {"CakeAI"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters","DZ_Characters_Zombies","DZ_Data"};
	};
};

class CfgMods
{
	class CakeAI
	{
		dir = "CakeAI";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CakeAI";
		credits = "Zenarchist";
		author = "Nate_LapT";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			// class gameScriptModule
			// {
				// value = "";
				// files[] = {"ZenVirus/scripts/common","ZenVirus/scripts/3_game"};
			// };
			class worldScriptModule
			{
				value = "";
				files[] = {"BeautifulPotato/Cake/Scripts/4_world"};
			};
			// class missionScriptModule
			// {
				// value = "";
				// files[] = {"ZenVirus/scripts/common","ZenVirus/scripts/5_mission"};
			// };
		};
	};
};
class CfgVehicles
{
	class DZ_LightAI;
	class DayZInfected: DZ_LightAI{};
	class ZombieBase: DayZInfected{};
	// class CakeBase: DayZInfected{};
	class ZombieMaleBase;
	// class CakeMaleBase;
	class ZmbM_Cake_Base: ZombieMaleBase
	// class ZmbM_Cake_Base: CakeMaleBase
	{
		scope = 0;
		model = "\BeautifulPotato\Cake\AI\CakeAI.p3d";
		collidesWithCharacterOnDeath=1;
		// model = "\DZ\characters\zombies\hermit_above0.p3d";
		// hiddenSelectionsMaterials[] = {"dz\characters\zombies\data\hermit.rvmat"};
		hiddenSelectionsMaterials[] = {"DZ\gear\food\data\apple_raw.rvmat"};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "walkErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "runErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "sprintErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Boots_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "Squeak1_SoundSet";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "Squeak1_SoundSet";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "Squeak1_SoundSet";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "Squeak1_SoundSet";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "Squeak1_SoundSet";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "Squeak1_SoundSet";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "Squeak1_SoundSet";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "Squeak1_SoundSet";
					id = 2;
				};
				class Attack
				{
					soundSet = "Squeak1_SoundSet";
					id = 5;
				};
				class Jump
				{
					soundSet = "Squeak1_SoundSet";
					id = 10;
				};
				class Land
				{
					soundSet = "Squeak1_SoundSet";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "ZmbM_Cake_CallToArmsShort_Soundset";
					id = 20;
				};
			};
		 };
	// };
	// class BP_Cake_Base: ZmbM_Cake_Base
	// {
		// scope=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
						};
					};
					componentNames[] = {"Head"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				class Blood
				{
					hitpoints=5000;
				};
				class Shock
				{
					hitpoints=180;
				};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 420;
						transferToGlobalCoef = 1;
						canBleed=1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class Skinning
		{
			class ObtainedCake
			{
				item="cake";
				count=1;
				// itemZones[]=
				// {
					// "Pelvis"
				// };
				// countByZone[]={1};
				quantityMinMaxCoef[]={0.45,0.950000};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.19000001,0.4700001};
				transferToolDamageCoef=1;
			};
			// class ObtainedZed
			// {
				// item="ZmbM_CakeTiny";
				// count=1;
				// quantityMinMaxCoef[]={0.22000001,0.4500001};
				// transferToolDamageCoef=1;
			// };
		};
	};
	class ZmbM_Cake2_Base: ZmbM_Cake_Base
	{
		scope = 0;
	};	
	class ZmbM_Cake: ZmbM_Cake_Base
	// class ZmbM_Cake: BP_Cake_Base
	{
		scope = 2;
		displayName = "CAKE";
		model = "\BeautifulPotato\Cake\AI\CakeAI.p3d";
		hiddenSelections[] = {"camo"};
		collidesWithCharacterOnDeath=1;
		// hiddenSelectionsTextures[] = {"\jdo\Mutants\data\mutant1_co.paa"};
	};
	// class ZmbM_CakeTiny: BP_Cake_Base
	class ZmbM_CakeTiny: ZmbM_Cake2_Base
	{
		scope = 2;
		model = "\BeautifulPotato\Cake\AI\CakeAITiny.p3d";
		displayName = "Tiny Friendly CAKE";
		hiddenSelections[] = {"camo"};
		// hiddenSelectionsTextures[] = {"\jdo\Mutants\data\mutant1_co.paa"};
	};
	class ZmbM_CakeMini: ZmbM_Cake2_Base
	// class ZmbM_CakeMini: BP_Cake_Base
	{
		scope = 2;
		model = "\BeautifulPotato\Cake\AI\CakeAIMini.p3d";
		displayName = "Mini CAKEs";
		hiddenSelections[] = {"camo"};
		// hiddenSelectionsTextures[] = {"\jdo\Mutants\data\mutant1_co.paa"};
	};
};	