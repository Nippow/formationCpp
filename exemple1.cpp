#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char** argv)
{
	if (argc<2)
	{
		std::cout<<"my_cat : Usage : ./ my_cat file [...]"<<std::endl;
		return (-1);
	}

	

	for (int i=1; i<(argc); i++)
	{
		std::ifstream file(argv[i]);

		if (!file.is_open())
		{
			std::cout<<"my_cat : < "<<argv[i]<<" >: No such file or directory"<<std::endl;
			return(-1);
		}
		
		std::string line;

    	while (getline(file, line)) 
    	{
        	std::cout<<line.c_str()<<std::endl;
		}

		file.close();	
	}
	

	return 0;
}

