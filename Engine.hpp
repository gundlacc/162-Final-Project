/*********************************************************************
** Program name: Engine.hpp
** Author: Christopher Gundlach
** Date: 11/28/18
** Description: This is the header for the Engine class.
*********************************************************************/

#ifndef ENGINE_HPP
#define ENGINE_HPP
#include"Space.hpp"
#include"Player.hpp"
#include"Item.hpp"
#include<iostream>
#include<string>

class Engine :
	public Space
{
public:
	Engine();
	virtual void carChallenge(Player*, bool&) override;
	virtual ~Engine();
};

#endif // !ENGINE_HPP