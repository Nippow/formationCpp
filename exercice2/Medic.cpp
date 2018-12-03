#include "Medic.hpp"
#include <string>
#include <iostream>


Medic::Medic(const std::string &name, int stimPaks): NAME(name)
{
	NUMBER = stimPaks;
}


Medic::~Medic()
{}


int &Medic::stimPaks()
{
	return NUMBER;
}

const std::string &Medic::name()
{
	return NAME;
}

void Medic::shareStimPaks(int number, int &stock)
{
	
	if (this->NUMBER<number)
	{
		std::cout<<"Don't be too greedy"<<std::endl;
	}
	else
	{
		this->NUMBER-=number;
		stock+=number;
		std::cout<<"Keep the change."<<std::endl;
	}
}

void Medic::addStimPaks(unsigned int number)
{
	if (!number)
	{
		std::cout<<"Hey boya, did you forget something ?"<<std::endl;
	}
	else
	{
		this->NUMBER+=number;
		
	}
}

void Medic::useStimPaks()
{
	if (this->NUMBER>1)
	{
		std::cout<<"Time to kick some ass and chew bubblle gum."<<std::endl;
		this->NUMBER--;
	}
	else
	{
		std::cout<<"Mediiiiiic"<<std::endl;
	}
}

void Medic::status()
{
	std::cout<<"Soldier "<<NAME<<" reporting "<<NUMBER<<" StimPaks remaining sir !"<<std::endl;

}



int main()
{
	Medic m("Junior", 5), b("Bob", 15);

	std::cout<<"Medic "<< m.name() << std::endl;
	m.status();
	m.useStimPaks();

	b.shareStimPaks(5, m.stimPaks());
	m.status();

	b.shareStimPaks(15, m.stimPaks());
	m.status();
	

	return 0;
}