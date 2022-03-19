#include <iostream>
#include <fstream>
#include "route.cpp"

int main()
{
	std::string mytext;
	std::ifstream myfile; myfile.open("test.txt");

	if(myfile.is_open())
	{
		while(myfile)
		{
			mytext = myfile.get();
			myfile.close();
			std::cout<<mytext;
			//std::cout<<mytext;
		}
	}
	std::cout<<mytext;
}
