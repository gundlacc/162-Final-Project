/*********************************************************************
** Program name: ObservationCar.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the ObservationCar class.
*********************************************************************/

#ifndef OBSERVATIONCAR_HPP
#define OBSERVATIONCAR_HPP
#include"Space.hpp"
#include"Player.hpp"
#include"Item.hpp"
#include<iostream>

class ObservationCar :
	public Space
{
public:
	ObservationCar();
	virtual void carChallenge(Player*, bool&) override;
	bool challenge();
	virtual ~ObservationCar();
};

#endif // !OBSERVATIONCAR_HPP