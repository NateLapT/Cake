modded class ActionSkinning extends ActionContinuousBase
{
    override void OnFinishProgressServer(ActionData action_data)
    {
        super.OnFinishProgressServer(action_data);

        if (action_data.m_Target) 
        {
            EntityAI body;
            Class.CastTo(body, action_data.m_Target.GetObject());
            
            ItemBase added_item;
            vector pos_rnd = body.GetPosition() + Vector(Math.RandomFloat01() - 1.5, 0, Math.RandomFloat01() - 1.5);
            if (body.IsKindOf("BP_Cake_Base")
            {
                Class.CastTo(added_item, GetGame().CreateObject("ZmbM_CakeTiny", pos_rnd, false, true ));
                Class.CastTo(added_item, GetGame().CreateObject("ZmbM_CakeMini", pos_rnd, false, true ));
				added_item.PlaceOnSurface();
            }
        }
    }
};