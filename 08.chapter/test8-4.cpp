#include <iostream>
#include <string>
//#include <utility>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::swap;

template<class T>
void Reverse(T begin, T end)
{
	while(begin < end)
	{
		end--;
		if(begin < end)
		{
			//swap(*begin++, *end);
			char temp = *begin;
			*begin = *end;
			*end = temp;
			begin++;
		}
	}
}

int main()
{
	string s = "abcdef";
	Reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}
