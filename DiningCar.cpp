/*********************************************************************
** Program name: DiningCar.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the DiningCar class. It runs a challenge for the
				player to solve to get an item for themselves.
*********************************************************************/

#include "DiningCar.hpp"

DiningCar::DiningCar()
{
}

void DiningCar::carChallenge(Player *p, bool &win)
{
	int itemChoice = 0;
	bool chalAns;
	//initializes items in car
	Item apple("Apple");
	Item revolver("Revolver");
	Item knife("Knife");
	std::cout << "You are in the Dining car. Try not to ruin your appetite. The Lounge car is ahead and the Sleep car behind." << "\n";
	std::cout << "You see a refridgerator, an oven, and a covered serving platter." << "\n";
	std::cout << "Inside each is an apple, revolver, and a butcher knife, respectively." << "\n";	
	std::cout << "Which item would you like to take?" << "\n";
	//give options to choose item or not choose any
	std::cout << "1 - Apple" << "\n";
	std::cout << "2 - Revolver" << "\n";
	std::cout << "3 - Knife" << "\n";
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
				p->addItem(apple);
				break;
			case 2:
				std::cout << "You have added rope to your pouch." << std::endl;
				p->addItem(revolver);
				break;
			case 3:
				std::cout << "You have added oil to your pouch." << std::endl;
				p->addItem(knife);
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

bool DiningCar::challenge()
{
	int answer = 0;
	bool correct = false;
	//gives the actual challenge to get the item
	std::cout << "The Central Pacific Railroad began in:" << "\n";
	std::cout << "1 - Sacramento" << "\n";
	std::cout << "2 - San Francisco" << "\n";
	std::cout << "3 - Omaha" << "\n";
	std::cout << "4 - Promontory Point" << "\n";
	itemValidator(answer);
	if (answer == 1)
	{
		std::cout << "That is correct!" << std::endl;
		return true;
	}
	else if (answer != 1)
	{
		std::cout << "That is not the correct answer." << std::endl;
		return false;
	}
}

DiningCar::~DiningCar()
{
}