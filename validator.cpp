/*********************************************************************
** Program name: validator.cpp
** Author: Christopher Gundlach
** Date: 10/10/18
** Description: These are the validator functions. They cover validation for the menu choice, die type
				die size and number of rounds
*********************************************************************/

#include "validator.hpp"
#include<iostream>
#include<cctype>
#include<sstream>
#include<string>

//validates for the only two menu options
void menuValidator(int &menuInt)
{
	int temp = 0;
	std::string tempStr = "";
	bool wrongInput = false;
	do
	{
		wrongInput = false;
		std::cin >> tempStr;
		for (int i = 0; i < tempStr.length(); i++)
		{
			if (!isdigit(tempStr[i]))
			{
				wrongInput = true;
				std::cout << "Input was not an integer, please try again." << std::endl;
				break;
			}
		}
		std::stringstream ss(tempStr);
		ss >> temp;
		if (temp < 1 || temp > 2)
		{
			wrongInput = true;
			std::cout << "Please input an acceptable integer." << std::endl;
			ss.clear();
			ss.ignore();
		}
	} while (wrongInput);

	menuInt = temp;
}

// validates for an item choice in the cars
void itemValidator(int &itemInt)
{
	int temp = 0;
	std::string tempStr = "";
	bool wrongInput = false;
	do
	{
		wrongInput = false;
		std::cin >> tempStr;
		for (int i = 0; i < tempStr.length(); i++)
		{
			if (!isdigit(tempStr[i]))
			{
				wrongInput = true;
				std::cout << "Input was not an integer, please try again." << std::endl;
				break;
			}
		}
		std::stringstream ss(tempStr);
		ss >> temp;
		if (temp < 1 || temp > 4)
		{
			wrongInput = true;
			std::cout << "That number is either to high or too low. Please try again." << std::endl;
			ss.clear();
			ss.ignore();
		}
	} while (wrongInput);

	itemInt = temp;
}

//validates the pouch choice to make sure you don't pick something that doesn't exist
void pouchValidator(int &pouchInt, int pouchSize)
{
	int temp = 0;
	std::string tempStr = "";
	bool wrongInput = false;
	do
	{
		wrongInput = false;
		std::cin >> tempStr;
		for (int i = 0; i < tempStr.length(); i++)
		{
			if (!isdigit(tempStr[i]))
			{
				wrongInput = true;
				std::cout << "Input was not an integer, please try again." << std::endl;
				break;
			}
		}
		std::stringstream ss(tempStr);
		ss >> temp;
		if (temp < 1 || temp > pouchSize)
		{
			wrongInput = true;
			std::cout << "That number is either to high or too low. Please try again." << std::endl;
			ss.clear();
			ss.ignore();
		}
	} while (wrongInput);

	pouchInt = temp;
}