#include <iostream>
#include <string>

int main()
{
	std::cout << "Please in your name: ";
	std::string name;
	std::cin >> name;
	std::string out = "hello, " + name;
	const int pad = 0;
	const int rows = pad*2 + 3;
	
	const std::string::size_type cols = out.size() + pad*2 +2;

	int r = 0;

	// 已经输出了r行
	while(r!=rows)
	{
		int c = 0;
		// 已经输出了c列
		while(c!=cols)
		{
			if(r == 0 || r == rows-1 || c == 0 || c == cols-1)
			{
				std::cout << '*';
				c++;
			}else if(r == rows/2 && c == 1 + pad)
			{
				std::cout << out;
				c = c+out.size(); 
			}else
			{
				std::cout << ' ';
				c++;
			}
		}
		std::cout << std::endl;
		r++;
	}

	return 0;
}
