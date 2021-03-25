/*********************************************************************
** Program name: DiningCar.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the DiningCar class.
*********************************************************************/

#ifndef DININGCAR_HPP
#define DININGCAR_HPP
#include"Space.hpp"
#include"Player.hpp"
#include"Item.hpp"
#include<iostream>

class DiningCar :
	public Space
{
public:
	DiningCar();
	virtual void carChallenge(Player*, bool&) override;
	bool challenge();
	virtual ~DiningCar();
};

#endif // !DININGCAR_HPP