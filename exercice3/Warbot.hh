#ifndef WARBOT_HH
#define WARBOT_HH

#include "Parts.hh"
#include <string>

class WarBot
{
	private:
		arms Arms;
		legs Legs;
		head Head;

		std::string serialnum;
		bool funct;

	public:
		WarBot(const std::string &serial="Bob-01");
		virtual ~WarBot() = default;
		void setParts(const arms &);
		void setParts(const legs &);
		void setParts(const head &);


		void swapParts(arms &);
		void swapParts(legs &);
		void swapParts(head &);

		void informations();
		bool status();

};







#endif