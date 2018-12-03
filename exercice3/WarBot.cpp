#include "Warbot.hh"
#include "Parts.hh"

#include <iostream>

WarBot::WarBot(const std::string &_serial)
{
	serialnum = _serial;
}

void WarBot::setParts(const arms &_arm)
{
	Arms = _arm;
}

void WarBot::setParts(const legs &_leg)
{
	Legs = _leg;
}

void WarBot::setParts(const head &_head)
{
	Head = _head;
}

void WarBot::swapParts(arms &_arms)
{
	arms temp;

	temp = this->Arms;
	this->Arms = _arms;
	_arms = temp;
}

void WarBot::swapParts(legs &_legs)
{
	legs temp;

	temp = this->Legs;
	this->Legs = _legs;
	_legs = temp;
}

void WarBot::swapParts(head &_head)
{
	head temp;

	temp = this->Head;
	this->Head = _head;
	_head = temp;
}



void WarBot::informations()
{
	std::cout<<"[WarBot] "<< this->serialnum<<std::endl;
	Arms.informations();
	Legs.informations();
	Head.informations();
}


bool WarBot::status()
{
	if(Arms.isFunctionnal()&&Legs.isFunctionnal()&&Head.isFunctionnal())
	{
		return true;
	} 
	else 
	{
		return false;
	}
}


int main()
{
	WarBot r2d2;

	std::cout << std::boolalpha << r2d2.status() << std::endl;

	r2d2.informations();

	return 0;
}