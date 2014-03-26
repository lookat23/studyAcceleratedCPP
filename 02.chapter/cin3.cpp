#include <iostream>
#include <string>

int main()
{
	std::cout << "Please in your name: ";
	std::string name;
	std::cin >> name;
	std::string out = "hello, " + name;
	std::string first(out.size()+4,'*');
	std::string second(out.size()+2,' ');
	second = '*' + second + '*';

	out = "* " + out + " *";
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << out << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}
