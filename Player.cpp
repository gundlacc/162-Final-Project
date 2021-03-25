/*********************************************************************
** Program name: Player.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the Player class. It  has functions for all
				the actions a player can take.
*********************************************************************/

#include "Player.hpp"

Player::Player()
{
	pouchCount = 0;
}

void Player::addItem(Item thing)
{
	if (pouchCount < 6)
	{
		pouch.push_back(thing);
		pouchCount++;
	}
	//prevents any more items from being added to the pouch
	else if (pouchCount == 6)
	{
		std::cout << "Your pouch is full and connot fit anything else." << std::endl;
	}
}

void Player::showPouch()
{	
	for (int i = 0; i < pouchCount; i++)
	{
		std::cout << pouch[i].returnName() << "\n";
	}
	std::cout << std::endl;
}

Item Player::selectItem()
{
	Item choice;
	int itemChoice = 0;

	for (int i = 0; i < pouchCount; i++)
	{
		std::cout << i + 1 << ": " << pouch[i].returnName() << "\n";
	}
	std::cout << std::endl;
	pouchValidator(itemChoice, pouchCount);	
	choice = pouch[itemChoice - 1];

	return choice;
}

void Player::clearPouch()
{
	//clears pouch for game replay
	pouch.clear();
	pouchCount = 0;
}

bool Player::emptyPouch()
{
	if (pouch.empty() == true)
	{
		return true;
	}
	else if (pouch.empty() == false)
	{
		return false;
	}
}

Player::~Player()
{
}