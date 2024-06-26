class CfgPatches
{
	class BP_MagicCake
	{
		units[]=
		{
			"Cake","CakeBIG"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data","BP_SqueakSounds",
			"DZ_Structures_Signs"
		};
	};
 };
 
 
class CfgAmmo
{
  class Bullete_Base;
  class MeleeDamage;
	class MeleeCake: MeleeDamage
	{
		affectSkeleton = 0.45; //0.3
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 0.0;
			class Health
			{
				damage = 4; //10 how much Health Damage 1 hit does with this knife ammo
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage = 369; // 420 // how much Shock Damage 1 hit does with this knife ammo
			};
		 };
	};
};
 
class CfgVehicles
{
	class Edible_Base;
	class HouseNoDestruct;
	// class BakedBeansCan_Opened;	
	class CakeBIG: HouseNoDestruct
	{
		scope=0;
		displayName="A Fresh 30 Year Cake";
		descriptionShort="This Cake Is Squeaky";
		model="\BeautifulPotato\Cake\CakeBig30.p3d";
	};	
	
	class Cake_Base: Edible_Base
	{
		scope=0;
	};	
	// class cake: BakedBeansCan_Opened
	class Cake: Cake_Base
	{
		scope=2;
		displayName="A Fresh 30 Year Cake";
		descriptionShort="Happy Birthday FreshSpawns John! Drop me!!! Smack a friendly!";
		model="\BeautifulPotato\Cake\Cake30.p3d";
		debug_ItemCategory=6;
		rotationFlags=63;
		weight=60;
		itemSize[]={2,2};
		interactionWeight=1;
		isMeleeWeapon=1;
		soundImpactType="organic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300; //100
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						}
					};
				};
			};	
		};
		class Nutrition
		{
			fullnessIndex=4.0;
			energy=400;
			water=100;
			nutritionalIndex=1;
			toxicity=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="Squeak1_SoundSet"; //Sound
		};	
		
		// class MeleeModes
		// {
			// class Default
			// {
				// ammo="MeleeSoft";
				// range=1;
			// };
			// class Heavy
			// {
				// ammo="MeleeSoft_Heavy";
				// range=1;
			// };
			// class Sprint
			// {
				// ammo="MeleeSoft_Heavy";
				// range=2.8;
			// };
		// };
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="Squeak1_SoundSet";
					id=204;
				};
				class pickUpItem_Light
				{
					soundSet="Squeak1_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="Squeak1_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Squeak1_SoundSet";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Squeak1_SoundSet";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Squeak1_SoundSet";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Squeak1_SoundSet";
					id=895;
				};
				class drop
				{
					soundset="Squeak1_SoundSet";
					id=898;
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeCake";
				range = 1.2;
			};
			class Heavy
			{
				ammo = "MeleeCake_Heavy";
				range = 1.35;
			};
			class Sprint
			{
				ammo = "MeleeCake_Heavy";
				range = 3.3;
			};
		 };
	};
};