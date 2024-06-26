class CfgPatches
{
	class BP_SqueakSounds
	{
		units[]=
		{
			"BP_MagicCake"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgSoundShaders
{
	class Cake_SoundShader
	{
		samples[]=
		{
			
			{
				"BeautifulPotato\Cake\sounds\SqueakToy.ogg",
				1
			}
		};
		range=18;
		volume=6.25;
	};
	class CakeAgro_SoundShader
	{
		samples[]=
		{
			
			{
				"BeautifulPotato\Cake\sounds\SqueakToyAgro.ogg",
				1
			}
		};
		range=35;
		volume=7;
	};
};
class CfgSoundSets
{
	class Squeak1_SoundSet
	{
		soundShaders[]=
		{
			"Cake_SoundShader"
		};
	};
	class ZmbM_Cake_CallToArmsShort_Soundset
	{
		soundShaders[]=
		{
			"CakeAgro_SoundShader"
		};
	};	
};
