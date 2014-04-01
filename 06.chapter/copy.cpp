#include <iostream>
#include <algorithm>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	string s = "hello";
	string t = "world";
	copy(t.begin(), t.end(), back_inserter(s));
	//s.insert(s.end(), t.begin(), t.end());
	cout << s << endl;
	return 0;
}
