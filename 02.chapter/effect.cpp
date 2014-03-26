#include <iostream>

int main()
{
	{
		const std::string a = "hello";
		std::cout << a << std::endl;
		{const std::string a = "world";
		std::cout << a << std::endl;};
	}
	return 0;
}
