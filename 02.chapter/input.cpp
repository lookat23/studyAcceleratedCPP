#include <iostream>
int main()
{
	std::cout << "Please in your name: ";
	std::string name;
	std::cin >> name;
	std::cout << "your name is " << name << std::endl;
	std::cout << "Please in your name: ";
	std::cin >> name;
	std::cout << "your name is " << name << std::endl;
	return 0;
}
