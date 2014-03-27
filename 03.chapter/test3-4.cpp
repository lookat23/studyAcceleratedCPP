//编写一个程序用于报告它的输入中最长以及最短的字符串长度
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	cout << "in some str: ";
	string str;
	int max = 0;
	int min = 0;
	cin >> str;
	max = min = str.size();
	while(cin>>str)
	{
		if(str.size()>max)
		{
			max = str.size();
		}
		if(str.size()<min)
		{
			min = str.size();
		}
	}
	cout << "max = " << max <<
					" min = " << min << endl;
	return 0;
}
