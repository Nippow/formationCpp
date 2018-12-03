#ifndef PARTS_HH
#define PARTS_HH

#include <string>

class arms
{
private:
	bool funct;
	std::string serialnum;
	
public:
	arms(const std::string &serial="A-01", bool functionnal=true);
	virtual ~arms() = default;
	bool isFunctionnal();
	std::string serial();
	void informations();
};

class legs
{
private:
	bool funct;
	std::string serialnum;
	
public:
	legs(const std::string &serial="L-01", bool functionnal=true);
	bool isFunctionnal();
	std::string serial();
	void informations();
};

class head
{
private:
	bool funct;
	std::string serialnum;
	
public:
	head(const std::string &serial="H-01", bool functionnal=true);
	bool isFunctionnal();
	std::string serial();
	void informations();
};



#endif