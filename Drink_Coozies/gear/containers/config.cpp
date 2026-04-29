class CfgPatches
{
	class Drink_Coozies_Gear_Containers
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Containers"
		};
	};
};

class CfgSlots
{
  class Slot_Stubby
  {
    name="stubby";
    displayName="Can";
    ghostIcon="unknown";
  };
};

class CfgNonAIVehicles
{
  class ProxyAttachment;
  class ProxySodaCanProxy: ProxyAttachment
  {
    scope = 2;
    inventorySlot = "stubby";
    model="Drink_Coozies\gear\containers\SodaCanProxy.p3d";
  };
};

class CfgVehicles
{
    class Edible_Base;
    class SodaCan_ColorBase: Edible_Base
    {
        inventorySlot[] += { "stubby" };
    };

    class Container_Base;
	class Coozie_ColorBase: Container_Base
	{
        displayName="Coozie";
        descriptionShort="Coozie, Koozie, stubby holder, beer sleeve or bottle jacket. Whatever you call it, it keeps your drink cold.";
        model="Drink_Coozies\gear\containers\coozie.p3d";
        itemSize[]={1,2};
        itemsCargoSize[]={0,0};
        weight=5;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"Drink_Coozies\gear\containers\data\coozie_co.paa"
		};
        attachments[]=
        {
            "stubby"
        };
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
					healthLevels[]=
					{
						{
							1,
							{
								"Drink_Coozies\gear\containers\data\coozie.rvmat"
							}
						},
						{
							0.69999999,
							
							{
								"Drink_Coozies\gear\containers\data\coozie.rvmat"
							}
						},
						{
							0.5,
							{
								"Drink_Coozies\gear\containers\data\coozie_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"Drink_Coozies\gear\containers\data\coozie_damage.rvmat"
							}
						},
						{
							0,
							{
								"Drink_Coozies\gear\containers\data\coozie_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

    class Coozie_WILDLANDZ: Coozie_ColorBase
    {
        scope=2;
        displayName="WILDLANDZ Coozie";
    };
};