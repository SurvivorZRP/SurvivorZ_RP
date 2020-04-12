modded class Environment
{
	override protected float GetCurrentItemWetAbsorbency(ItemBase pItem)
	{
		float healthFactor;
		float absorbency = pItem.GetAbsorbency();
		float itemHealthLabel = pItem.GetHealthLevel();

		//! health factor selection
		switch (itemHealthLabel)
		{
		case GameConstants.STATE_PRISTINE:
			healthFactor = 1.0;
		break;
		case GameConstants.STATE_WORN:
			healthFactor = 1.0;
		break;
		case GameConstants.STATE_DAMAGED:
			healthFactor = 0.90;
		break;
		case GameConstants.STATE_BADLY_DAMAGED:
			healthFactor = 0.75;
		break;
		case GameConstants.STATE_RUINED:
			healthFactor = 0.00;
		break;
		}

		absorbency = absorbency + (1 - healthFactor);

		return Math.Min(1, absorbency);
	}
	
};