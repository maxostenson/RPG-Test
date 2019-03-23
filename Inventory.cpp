#include "Inventory.h"

Inventory::Inventory() : inventoryCapacity(DEFAULT_CAPACITY), inventorySize(0), equippedPrimary(itemMaker.createNullItem()),
equippedSecondary(itemMaker.createNullItem()), equippedHead(itemMaker.createNullItem()), equippedChest(itemMaker.createNullItem()),
equippedArms(itemMaker.createNullItem()), equippedHands(itemMaker.createNullItem()), equippedLegs(itemMaker.createNullItem()),
equippedFeet(itemMaker.createNullItem())
{   }

int Inventory::addItem(Item itemToAdd)
{
	if (itemToAdd.getItemWeight() + inventorySize > inventoryCapacity)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < backpackContents.size(); i++)
		{
			if (itemToAdd.getItemName < backpackContents.at(i).getItemName)
			{
				backpackContents.insert(backpackContents.begin() + i, itemToAdd);
				return 0;
			}
		}

		backpackContents.push_back(itemToAdd);
		return 0;
	}
}

int Inventory::removeItem(Item itemToRemove)
{
	for (int i = 0; i < backpackContents.size(); i++)
	{
		if (backpackContents.at(i) == itemToRemove)
		{
			backpackContents.erase(backpackContents.begin() + i);
			return 0;
		}
	}
	return 1;
}

Inventory::~Inventory()
{
}