#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::copy;

char* copyStr(const char* s)
{
	size_t len = strlen(s) + 1;
	char* str = new char[len];
	//strcpy(str, s);
	copy(s, s+len, str);
	return str;
}

int main()
{
	const char* s = "hello";
	char* newS = copyStr(s);
	cout << newS << endl;
}
