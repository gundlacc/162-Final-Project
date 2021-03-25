/*********************************************************************
** Program name: Space.cpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the abstract Space class. It has all the inherited
				functions that all derived classes use.
*********************************************************************/

#include "Space.hpp"

Space::Space()
{
}

Space * Space::moveForward()
{
	return right;
}

Space * Space::moveBack()
{
	return left;
}

void Space::setNext(Space *next)
{
	right = next;
}

void Space::setPrev(Space *prev)
{
	left = prev;
}

void Space::setPlayer(Player *p1)
{
	player = p1;
}

Space::~Space()
{
}