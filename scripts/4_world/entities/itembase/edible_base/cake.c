class Cake_Base extends Edible_Base
{
	void Cake_Base()
	{
		RemoveAllAgents();
	}
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	override bool IsFruit()
	{
		return true;
	}
	override bool IsMeat()
	{
		return false;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionForceFeed);
		AddAction(ActionEatFruit);
		
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
}
