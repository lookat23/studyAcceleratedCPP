#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::isupper;
using std::islower;

int main()
{
	string s;
	while(cin>>s)
	{
		string::size_type i = 0;
		while(i!=s.size())
		{
			if(islower(s[i]))
			{
				cout << s[i];	
			}
			i++;
		}
		cout << ' ';
		i=0;
		while(i!=s.size())
		{
			if(isupper(s[i]))
			{
				cout << s[i];	
			}
			i++;
		}
		cout << endl;
	}
	return 0;
}	
