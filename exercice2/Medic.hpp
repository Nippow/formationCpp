#ifndef MEDIC_HPP
#define MEDIC_HPP

#include <string>

class Medic
{
	public:
		Medic(const std::string &name="Bob", int stimPaks=15);
		~Medic();

		int &stimPaks();
		const std::string &name();

		void shareStimPaks(int number, int &stock);
		void addStimPaks(unsigned int number);
		void useStimPaks();
		void status();

	private:
		const std::string NAME;
		int NUMBER;
		//int STOCK;
};


#endif