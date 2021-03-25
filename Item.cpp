/*********************************************************************
** Program name: Item.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the Item class. It sets and returns and Item name.
*********************************************************************/

#include "Item.hpp"

Item::Item()
{
}

Item::Item(std::string itemName)
{
	name = itemName;
}

std::string Item::returnName()
{
	return name;
}

Item::~Item()
{
}