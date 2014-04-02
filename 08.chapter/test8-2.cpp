#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;

template<typename Out>
bool Equal(Out b, Out e, Out b2)
{
	while(b != e)
	{
		if( *b++ != *b2++)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string s1 = "hello";
	string s2 = "hello";
	string s3 = "world";
	cout << Equal(s1.begin(), s1.end(), s2.begin()) << endl;
	cout << Equal(s1.begin(), s1.end(), s3.begin()) << endl;
}
