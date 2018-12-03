#include "Parts.hh"
#include <string>
#include <iostream>

arms::arms(const std::string &serial, bool functionnal)
{
	serialnum = serial;
	funct = functionnal;
}

bool arms::isFunctionnal()
{
	if (funct) return true;
	else return false;
}

std::string arms::serial()
{
	return serialnum;
}

void arms::informations()
{
	if (funct)
	{
		std::cout<<"[parts] "<<"Arms"<<" "<<this->serialnum<<" status : OK"<<std::endl;
	}
	else
	{
		std::cout<<"[parts] "<<"Arms"<<" "<<this->serialnum<<" status : KO"<<std::endl;
	}
}





legs::legs(const std::string &serial, bool functionnal)
{
	serialnum = serial;
	funct = functionnal;
}

bool legs::isFunctionnal()
{
	if (funct) return true;
	else return false;
}

std::string legs::serial()
{
	return serialnum;
}

void legs::informations()
{
	if (funct)
	{
		std::cout<<"[parts] "<<"Legs"<<" "<<this->serialnum<<" status : OK"<<std::endl;
	}
	else
	{
		std::cout<<"[parts] "<<"Legs"<<" "<<this->serialnum<<" status : KO"<<std::endl;
	}
}





head::head(const std::string &serial, bool functionnal)
{
	serialnum = serial;
	funct = functionnal;
}

bool head::isFunctionnal()
{
	if (funct) return true;
	else return false;
}

std::string head::serial()
{
	return serialnum;
}

void head::informations()
{
	if (funct)
	{
		std::cout<<"[parts] "<<"Head"<<" "<<this->serialnum<<" status : OK"<<std::endl;
	}
	else
	{
		std::cout<<"[parts] "<<"Head"<<" "<<this->serialnum<<" status : KO"<<std::endl;
	}
}