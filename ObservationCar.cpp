/*********************************************************************
** Program name: ObservationCar.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the ObservationCar class. It runs a challenge for the
				player to solve to get an item for themselves.
*********************************************************************/

#include "ObservationCar.hpp"

ObservationCar::ObservationCar()
{
	left = nullptr;
}

void ObservationCar::carChallenge(Player *p, bool &win)
{
	int itemChoice = 0;
	bool chalAns;
	//initializes items in car
	Item soap("Soap");
	Item rope("Rope");
	Item oil("Oil");
	std::cout << "You are in the Observation car at the back of the train. In front of you is the Sleep car." << "\n";
	std::cout << "You see a cabinet, loose floorboard, and an abandoned purse." << "\n";
	std::cout << "Inside each is a bar of soap, rope, and a can of oil, respectively." << "\n";
	std::cout << "Which item would you like to take?" << "\n";
	//give options to choose item or not choose any
	std::cout << "1 - Soap" << "\n";
	std::cout << "2 - Rope" << "\n";
	std::cout << "3 - Oil" << "\n";
	std::cout << "4 - Take Nothing" << "\n";
	itemValidator(itemChoice);
	if (itemChoice < 4)
	{
		chalAns = challenge();
		if (chalAns == true)
		{
			//uses switch to select which item to player's pouch
			switch (itemChoice)
			{
			case 1:
				std::cout << "You have added soap to your pouch." << std::endl;
				p->addItem(soap);
				break;
			case 2:
				std::cout << "You have added rope to your pouch." << std::endl;
				p->addItem(rope);
				break;
			case 3:
				std::cout << "You have added oil to your pouch." << std::endl;
				p->addItem(oil);
				break;
			}
		}
		else if (chalAns == false)
		{
			std::cout << "You were wrong. Re-enter the car to try again, but don't run out of time!" << std::endl;
		}
	}
	else if (itemChoice == 4)
	{
		std::cout << "You've chose not to try and collect anything. Re-enter to car if you change your" << "\n";
		std::cout << "mind, but be mindful of running out of time." << std::endl;
	}
	win = false;
}

bool ObservationCar::challenge()
{
	int answer = 0;
	bool correct = false;
	//gives the actual challenge to get the item
	std::cout << "Where was the locomotive invented?" << "\n";
	std::cout << "1 - Canada" << "\n";
	std::cout << "2 - England" << "\n";
	std::cout << "3 - France" << "\n";
	std::cout << "4 - United States" << "\n";
	itemValidator(answer);
	if (answer == 2)
	{
		std::cout << "That is correct!" << std::endl;
		return true;
	}
	else if (answer != 2)
	{
		std::cout << "That is not the correct answer." << std::endl;
		return false;
	}
}

ObservationCar::~ObservationCar()
{
}