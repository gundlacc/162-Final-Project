/*********************************************************************
** Program name: CoachCar.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the CoachCar class.
*********************************************************************/

#ifndef COACHCAR_HPP
#define COACHCAR_HPP
#include"Space.hpp"
#include"Player.hpp"
#include"Item.hpp"
#include<iostream>

class CoachCar :
	public Space
{
public:
	CoachCar();
	virtual void carChallenge(Player*, bool&) override;
	bool challenge();
	virtual ~CoachCar();
};

#endif // !COACHCAR_HPP