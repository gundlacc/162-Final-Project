/*********************************************************************
** Program name: Space.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the abstract Space class.
*********************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP
#include"Player.hpp"
#include"validator.hpp"

class Space
{
protected:
	Space *top = nullptr;
	Space *right;
	Space *bottom = nullptr;
	Space *left;
	Player *player;
public:
	Space();
	virtual Space* moveForward();
	virtual Space* moveBack();
	virtual void carChallenge(Player*, bool&) = 0;
	virtual void setNext(Space*);
	virtual void setPrev(Space*);
	virtual void setPlayer(Player*);
	virtual ~Space();
};

#endif // !SPACE_HPP