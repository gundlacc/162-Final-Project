/*********************************************************************
** Program name: Train.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the Train class. It sets and runs the game, as
				well as allocates and deallocates dynamic memory.
*********************************************************************/

#include "Train.hpp"

Train::Train()
{
	//allocates memory for each car, and the player
	coach = new CoachCar;
	dining = new DiningCar;
	engine = new Engine;
	lounge = new LoungeCar;
	observation = new ObservationCar;
	sleep = new SleepCar;
	p1 = new Player;
	// sets the player position, and the pointers in each Space
	currentCar = observation;
	currentCar->setPlayer(p1);
	observation->setNext(sleep);
	sleep->setNext(dining);
	sleep->setPrev(observation);
	dining->setNext(lounge);
	dining->setPrev(sleep);
	lounge->setNext(coach);
	lounge->setPrev(dining);
	coach->setNext(engine);
	coach->setPrev(lounge);
	engine->setPrev(coach);
}

void Train::runGame()
{
	int playChoice = 0;
	int steps = 0;
	bool win = false;
	std::cout << "Welcome to Run Away Train! Would you like to play?" << "\n";
	std::cout << "1 - Yes" << "\n";
	std::cout << "2 - No" << std::endl;
	menuValidator(playChoice);
	while (playChoice == 1)
	{		
		std::cout << "You are at the back of a 6 car runaway train. You'start in the observation car. You have an empty pouch that can hold 6 things." << "\n";
		std::cout << "Once the pouch is filled you cannot replace any items in it. Ahead of you, in order, are a sleep car, dining car, lounge car," << "\n";
		std::cout << "coach car, and the engine. Somewhere in this train is an item that will help you stop the train. There are three items in" << "\n";
		std::cout << "each car. You have to answer a trivia question to acquire an item, and can only pick up one item each time you enter a car." << "\n";
		std::cout << "You are on a 'timer' as well. You have 15 steps to stop the train." << "\n";
		std::cout << "Here we go!" << std::endl;
		while (steps < 15 || win == false)
		{
			int movementChoice = 0;
			currentCar->carChallenge(p1, win);
			if (win == true)
			{
				break;
			}
			if (steps > 15)
			{
				break;
			}
			std::cout << "Would you like to move:" << "\n";
			std::cout << "1 - Forward one car" << "\n";
			std::cout << "2 - Backward one car" << std::endl;
			menuValidator(movementChoice);
			if (movementChoice == 1)
			{
				//makes sure you aren't moving forward from front car
				if (currentCar->moveForward() == nullptr)
				{
					std::cout << "You cannot move forward. So you move back instead." << std::endl;
					currentCar = currentCar->moveBack();
					currentCar->setPlayer(p1);
				}
				else
				{
					currentCar = currentCar->moveForward();
					currentCar->setPlayer(p1);
				}
				}
			else if (movementChoice == 2)
			{
				//makes sure you aren't back from last car
				if (currentCar->moveBack() == nullptr)
				{
					std::cout << "You cannot move backward. So you move forward instead." << std::endl;
					currentCar = currentCar->moveForward();
					currentCar->setPlayer(p1);
				}
				else
				{
					currentCar = currentCar->moveBack();
					currentCar->setPlayer(p1);
				}
			}
			steps++;
			std::cout << "You've taken " << steps << " steps." << std::endl;			
		}		
		if (steps < 15 && win == true)
		{
			//repeats first menu if player has won
			std::cout << "You won! Would you like to play again?" << "\n";
			std::cout << "1 - Yes" << "\n";
			std::cout << "2 - No" << std::endl;
			menuValidator(playChoice);
			p1->clearPouch();
			steps = 0;
			win = false;
			currentCar = observation;
			currentCar->setPlayer(p1);
		}
		else if (steps > 15 && win == false)
		{
			//repeats first menu if player has lost
			std::cout << "You crashed and died a horrible death! Would you like to play again?" << "\n";
			std::cout << "1 - Yes" << "\n";
			std::cout << "2 - No" << std::endl;
			menuValidator(playChoice);
			p1->clearPouch();
			steps = 0;
			win = false;
			currentCar = observation;
			currentCar->setPlayer(p1);
		}
	}
}

Train::~Train()
{
	delete coach;
	delete dining;
	delete engine;
	delete lounge;
	delete observation;
	delete sleep;
	delete p1;
}