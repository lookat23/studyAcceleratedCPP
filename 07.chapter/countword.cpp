#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::map;
using std::string;

int main()
{
	string s;
	map<string,int> m;
	while(cin>>s)
	{
		++m[s];	
	}
	for(map<string,int>::const_iterator i=m.begin(); i!=m.end(); i++)
	{
		cout << i->first << ": " << i->second << endl;
	}
	return 0;
}
