/*********************************************************************
** Program name: Item.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the Item class.
*********************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP
#include<iostream>

class Item
{
private:
	std::string name;
public:
	Item();
	Item(std::string);
	std::string returnName();
	virtual ~Item();
};

#endif // !ITEM_HPP