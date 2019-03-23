#include "Factory.h"

Factory::Factory()
{
}

Item Factory::createNullItem()
{
	return Item("Null Item", -1, -1);
}

Factory::~Factory()
{
}