/*********************************************************************
** Program name: LoungeCar.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the LoungeCar class.
*********************************************************************/

#ifndef LOUNGECAR_HPP
#define LOUNGECAR_HPP
#include"Space.hpp"
#include"Player.hpp"
#include"Item.hpp"
#include<iostream>

class LoungeCar :
	public Space
{
public:
	LoungeCar();
	virtual void carChallenge(Player*, bool&) override;
	bool challenge();
	virtual ~LoungeCar();
};

#endif // ! DININGCAR_HPP