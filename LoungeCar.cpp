/*********************************************************************
** Program name: LoungeCar.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the LoungeCar class. It runs a challenge for the
				player to solve to get an item for themselves.
*********************************************************************/

#include "LoungeCar.hpp"

LoungeCar::LoungeCar()
{
}

void LoungeCar::carChallenge(Player *p, bool &win)
{
	int itemChoice = 0;
	bool chalAns;
	//initializes items in car
	Item candle("Candle");
	Item wrench("Wrench");
	Item horseshoe("Horseshoe");
	std::cout << "You are in the Lounge car. The Coach car is ahead and the Dining car behind." << "\n";
	std::cout << "You see a trunk, upturned carpet corner, and a wallet." << "\n";
	std::cout << "Inside each is a candle, a wrench, and a horseshoe, respectively." << "\n";
	std::cout << "Which item would you like to take?" << "\n";
	//give options to choose item or not choose any
	std::cout << "1 - Candle" << "\n";
	std::cout << "2 - Wrench" << "\n";
	std::cout << "3 - Horseshoe" << "\n";
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
				std::cout << "You have added a candle to your pouch." << std::endl;
				p->addItem(candle);
				break;
			case 2:
				std::cout << "You have added a wrench to your pouch." << std::endl;
				p->addItem(wrench);
				break;
			case 3:
				std::cout << "You have added a horseshoe to your pouch." << std::endl;
				p->addItem(horseshoe);
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

bool LoungeCar::challenge()
{
	int answer = 0;
	bool correct = false;
	//gives the actual challenge to get the item
	std::cout << "A transcontinental railroad first became a priority because:" << "\n";
	std::cout << "1 - Families missed their loved ones" << "\n";
	std::cout << "2 - Wagon makers went on strike" << "\n";
	std::cout << "3 - The Civil War made it necessary" << "\n";
	std::cout << "4 - Gold was discovered in California" << "\n";
	itemValidator(answer);
	if (answer == 4)
	{
		std::cout << "That is correct!" << std::endl;
		return true;
	}
	else if (answer != 4)
	{
		std::cout << "That is not the correct answer." << std::endl;
		return false;
	}
}

LoungeCar::~LoungeCar()
{
}