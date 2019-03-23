#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
	//Function: Item()
	//Parameters: String representing item name, int representing item value, int representing item weight
	//Return: Object created by constructor
	//Purpose: Create a new item with values given (probably by factory class)
	//Last edited: 23 March, 2019
	Item(std::string = "This shouldn't happen", int = -1, int = -1);

	//Function: getItemName()
	//Parameters: None
	//Return: String representing current item's name
	//Purpose: Gives access to the itemName variable
	//Last edited: 23 March, 2019
	std::string getItemName() { return this->itemName; }

	//Function: getItemValue()
	//Parameters: None
	//Return: Int representing current item's value
	//Purpose: Gives access to the itemValue variable
	//Last edited: 23 March, 2019
	int getItemValue() { return this->itemValue; }

	//Function: getItemWeight()
	//Parameters: None
	//Return: Int reperesenting current item's weight
	//Purpose: Gives access to the itemWeight variable
	//Last edited: 23 March, 2019
	int getItemWeight() { return this->itemWeight; }

	//Function: operator=()
	//Parameters: otherItem to compare to
	//Return: bool whether the two Item objects are equal
	//Purpose: Find whether two Items are equal
	//Last edited: 23 March, 2019
	bool operator==(const Item&);

	//Function: ~Item()
	//Parameters: None
	//Return: None
	//Purpose: Clean up any Item object that goes out of scope
	//Last edited: 23 March, 2019
	~Item(void);
private:
	std::string itemName;
	int itemValue;
	int itemWeight;
};

#endif