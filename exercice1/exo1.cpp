#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	float temperature;
	std::string scale, celsius = "Celsius", fahrenheit="Fahrenheit";

	std::cin>>temperature>>scale;


	if (!scale.compare(fahrenheit))
	{
		std::cout <<std::setprecision(4)<<std::fixed<< float(5.0/9.0*(temperature-32))<<" Celsius"<<std::endl;
	}
	else
	{
		std::cout << std::setprecision(4)<<std::fixed<<float((temperature*9.0/5.0)+32)<<" Fahrenheit"<<std::endl;
	}

	return 0;
}