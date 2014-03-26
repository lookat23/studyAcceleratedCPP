#include <iostream>
#include <string>

int main()
{
	std::cout << "Please input your name!" << std::endl;
	std::string name;
	std::cin >> name;
	std::string str = "your name is ";
	int len = name.size() + str.size() +4;

	for(int i=0; i<len; i++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
	std::cout << '*';
	for(int i=0; i<len-2; i++)
	{
		std::cout << ' ';
	}
	std::cout << '*' << std::endl;
	std::cout << "* " << str << name << " *" << std::endl;
	std::cout << '*';
	for(int i=0; i<len-2; i++)
	{
		std::cout << ' ';
	}
	std::cout << '*' << std::endl;
	for(int i=0; i<len; i++)
	{
		std::cout << "*";
	}
	std::cout << std::endl;
	return 0;
}
