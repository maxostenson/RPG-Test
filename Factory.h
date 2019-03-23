#ifndef FACTORY_H
#define FACTORY_H

#include "Item.h"

class Factory
{
public:
	//Function: Factory()
	//Parameters: None
	//Return: Object created by constructor
	//Purpose: Create a new factory object
	//Last edited: 23 March, 2019
	Factory(void);

	//Function: createNullItem()
	//Parameters: None
	//Return: Item representing a null Item
	//Purpose: Create a null Item
	//Last edited: 23 March, 2019
	Item createNullItem(void);

	//Function: ~Factory()
	//Parameters: None
	//Return: None
	//Purpose: Clean up any factory objects after they go out of scope
	//Last edited: 23 March, 2019
	~Factory(void);
};

#endif