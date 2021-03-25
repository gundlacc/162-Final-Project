/*********************************************************************
** Program name: SleepCar.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the SleepCar class.
*********************************************************************/

#ifndef SLEEPCAR_HPP
#define SLEEPCAR_HPP
#include"Space.hpp"
#include"Player.hpp"
#include"Item.hpp"
#include<iostream>

class SleepCar :
	public Space
{
public:
	SleepCar();
	virtual void carChallenge(Player*, bool&) override;
	bool challenge();
	virtual ~SleepCar();
};

#endif // !SLEEPCAR_HPP