#include <iostream>
#include <string>
int main()
{
	std::cout << "Please in your name: ";
	std::string name;
	getline(std::cin,name);
	std::cout << "your name is " << name << std::endl;
	return 0;
}
