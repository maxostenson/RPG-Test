#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include "Factory.h"

#include <vector>

class Inventory
{
public:
	//Function: Inventory()
	//Parameters: None
	//Return: Object created by the Inventory constructor
	//Purpose: Create new inventory objects
	//Last edited: 23 March, 2019
	Inventory();

	//Function: addItem()
	//Parameters: Item to add
	//Return: Integer whether add was successful. (0 is good, 1 is inventory full)
	//Purpose: Check if backpack is full and add an item if not
	//Last edited: 23 March, 2019
	int addItem(Item);

	//Function: removeItem()
	//Parameters: Item to remove from the Inventory
	//Return: Int whether or not the item was removed (0 if removed, 1 if item not found)
	//Purpose: Remove a specified item from the Inventory
	//Last edited: 23 March, 2019
	int removeItem(Item);

	//Function: ~Inventory()
	//Parameters: None
	//Return: None
	//Purpose: Clean up any Inventory objects that go out of scope
	//Last edited: 23 March, 2019
	~Inventory();
private:
	static const int DEFAULT_CAPACITY = 10;
	Factory itemMaker;

	int inventoryCapacity;
	int inventorySize;
	Item equippedPrimary;
	Item equippedSecondary;
	Item equippedHead;
	Item equippedChest;
	Item equippedArms;
	Item equippedHands;
	Item equippedLegs;
	Item equippedFeet;
	std::vector<Item> backpackContents;
};

#endif