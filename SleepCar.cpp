/*********************************************************************
** Program name: SleepCar.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the SleepCar class. It runs a challenge for the
				player to solve to get an item for themselves.
*********************************************************************/

#include "SleepCar.hpp"

SleepCar::SleepCar()
{
}

void SleepCar::carChallenge(Player *p, bool &win)
{
	int itemChoice = 0;
	bool chalAns;
	//initializes items in car
	Item shoe("Shoe");
	Item spectacles("Spectacles");
	Item hammer("Hammer");
	std::cout << "You are in the Sleep car. Try to stay quiet. The Dining car is ahead of you. The Observation car is behind." << "\n";
	std::cout << "You look inside three different sleeping areas." << "\n";
	std::cout << "Inside each is an old shoe, spectacles, and a hammer, respectively." << "\n";
	std::cout << "Which item would you like to take?" << "\n";
	//give options to choose item or not choose any
	std::cout << "1 - Shoe" << "\n";
	std::cout << "2 - Spectacles" << "\n";
	std::cout << "3 - Hammer" << "\n";
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
				std::cout << "You have added a shoe to your pouch." << std::endl;
				p->addItem(shoe);
				break;
			case 2:
				std::cout << "You have added spectacles to your pouch." << std::endl;
				p->addItem(spectacles);
				break;
			case 3:
				std::cout << "You have added a hammer to your pouch." << std::endl;
				p->addItem(hammer);
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

bool SleepCar::challenge()
{
	int answer = 0;
	bool correct = false;
	//gives the actual challenge to get the item
	std::cout << "What was the most track laid in one day during the construction of the Transcontinental Railroad?" << "\n";
	std::cout << "1 - 3 miles" << "\n";
	std::cout << "2 - 10 miles" << "\n";
	std::cout << "3 - 23 miles" << "\n";
	std::cout << "4 - 55 miles" << "\n";
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

SleepCar::~SleepCar()
{
}