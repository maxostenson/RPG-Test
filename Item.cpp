#include "Item.h"

Item::Item(std::string itemNameToSet, int valueToSet, int weightToSet) :
	itemName(itemNameToSet), itemValue(valueToSet), itemWeight(weightToSet)
{
}

bool Item::operator==(const Item& otherItem)
{
	return (this->itemName == otherItem.itemName && this->itemValue && otherItem.itemValue && this->itemWeight && otherItem.itemWeight);
}

Item::~Item()
{
}