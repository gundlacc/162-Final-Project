/*********************************************************************
** Program name: CoachCar.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the CoachCar class. It runs a challenge for the
				player to solve to get an item for themselves.
*********************************************************************/

#include "CoachCar.hpp"

CoachCar::CoachCar()
{
}

void CoachCar::carChallenge(Player *p, bool &win)
{
	int itemChoice = 0;
	bool chalAns;
	//initializes items in car
	Item journal("Journal");
	Item whistle("Whistle");
	Item cigars("Cigars");
	std::cout << "You are in the Coach car. The Engine is ahead of you and the Lounge car behind." << "\n";
	std::cout << "You see a suitcase, toolbox, and a picnic basket." << "\n";
	std::cout << "Inside each is a journal, whistle, and a box of cigars, respectively." << "\n";
	//give options to choose item or not choose any
	std::cout << "Which item would you like to take?" << "\n";
	std::cout << "1 - Journal" << "\n";
	std::cout << "2 - Whistle" << "\n";
	std::cout << "3 - Cigars" << "\n";
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
				std::cout << "You have added a journal to your pouch." << std::endl;
				p->addItem(journal);
				break;
			case 2:
				std::cout << "You have added a whistle to your pouch." << std::endl;
				p->addItem(whistle);
				break;
			case 3:
				std::cout << "You have added cigars to your pouch." << std::endl;
				p->addItem(cigars);
				break;
			}
		}
		else if (chalAns == false)
		{
			std::cout << "You were wrong. Re-enter the car to try again, but don't run out of time!!" << std::endl;
		}
	}
	else if (itemChoice == 4)
	{
		std::cout << "You've chose not to try and collect anything. Re-enter to car if you change your" << "\n";
		std::cout << "mind, but be mindful of running out of time." << std::endl;
	}
	win = false;
}

bool CoachCar::challenge()
{
	int answer = 0;
	bool correct = false;
	//gives the actual challenge to get the item
	std::cout << "The news of the driving of the last spike for the transcontinental railroad was first:" << "\n";
	std::cout << "1 - Delivered by the Pony Express" << "\n";
	std::cout << "2 - Relayed by telephone" << "\n";
	std::cout << "3 - Transmitted by telegraph" << "\n";
	std::cout << "4 - Read about in the newspaper" << "\n";
	itemValidator(answer);
	if (answer == 3)
	{
		std::cout << "That is correct!" << std::endl;
		return true;
	}
	else if (answer != 3)
	{
		std::cout << "That is not the correct answer." << std::endl;
		return false;
	}
}

CoachCar::~CoachCar()
{
}