#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

void splite(const string str,  vector<string>& vec)
{
	typedef string::size_type st;
	st i=0;
	while(i!=str.size())
	{
		while(i != str.size() && isspace(str[i]))
		{
			i++;
		}

		st j = i;
		while(j!=str.size() && !isspace(str[j]))
		{
			j++;	
		}

		if(j!=i)
		{
			vec.push_back(str.substr(i, j-i));
			i = j;
		}
	}
}
int main()
{
	string str;
	while(cin>>str)
	{
		vector<string> vec;
		splite(str, vec);
		for(vector<string>::size_type i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << endl;
		}
	}
	return 0;
}

