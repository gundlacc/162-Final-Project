/*********************************************************************
** Program name: Player.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the Player class.
*********************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include"Item.hpp"
#include"validator.hpp"
#include<iostream>
#include<string>
#include<vector>

class Player
{
private:
	std::vector<Item> pouch;
	int pouchCount;
public:
	Player();
	void addItem(Item);
	void showPouch();
	Item selectItem();	
	void clearPouch();
	bool emptyPouch();
	virtual ~Player();
};

#endif // !PLAYER_HPP