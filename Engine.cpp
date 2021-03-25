/*********************************************************************
** Program name: Engine.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the Engine class. It asks the player to choose
				an item from the pouch to try and stop the train.
*********************************************************************/

#include "Engine.hpp"

Engine::Engine()
{
	right = nullptr;
}

void Engine::carChallenge(Player *p, bool &win)
{
	bool empty = false;
	empty = p->emptyPouch();		
	if (empty == false)
	{
		Item choice;
		std::string choiceName = "";
		std::cout << "You have made it to the engine room! The Coach car is behind you and it's time to try and stop this train!" << "\n";
		std::cout << "Here's what's currently in your pouch." << std::endl;
		//simply shows items in the pouch
		p->showPouch();
		std::cout << "You see that the speed control lever had broken off with only a short bit sticking out." << "\n";
		std::cout << "Select an item to see if it will stop the train." << std::endl;
		//allows player to select an item
		choice = p->selectItem();
		choiceName = choice.returnName();
		if (choiceName == "Wrench")
		{
			//winner
			std::cout << "You did it! The train was stopped and no one died! You win!" << std::endl;
			win = true;
		}
		else if (choiceName != "Wrench")
		{
			//not winner
			std::cout << "Sorry, that item did not work. Leave the engine and return to try again." << std::endl;
			win = false;
		}
	}
	else if (empty = true)
	{
		std::cout << "You have made it to the engine room! The Coach car is behind you and it's time to try and stop this train!" << "\n";
		std::cout << "You see that the speed control lever had broken off with only a short bit sticking out." << "\n";
		std::cout << "Unfortunately, your pouch is empty so you cannot stop the train. Go get an item to try and stop this train." << std::endl;
		win = false;
	}
}

Engine::~Engine()
{
}