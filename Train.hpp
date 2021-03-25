/*********************************************************************
** Program name: Train.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the Train class.
*********************************************************************/

#ifndef TRAIN_HPP
#define TRAIN_HPP
#include"CoachCar.hpp"
#include"DiningCar.hpp"
#include"Engine.hpp"
#include"LoungeCar.hpp"
#include"ObservationCar.hpp"
#include"Player.hpp"
#include"SleepCar.hpp"
#include"Space.hpp"
#include"Item.hpp"
#include"validator.hpp"
#include<iostream>
#include<string>

class Train
{
private:
	CoachCar *coach;
	DiningCar *dining;
	Engine *engine;
	LoungeCar *lounge;
	ObservationCar *observation;
	SleepCar *sleep;
	Space *currentCar;
	Player *p1;
public:
	Train();
	void runGame();
	virtual ~Train();
};

#endif // !TRAIN_HPP