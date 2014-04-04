#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <cstdio>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	char c[10];
	char* b = c;
	printf("%s\n",b);
	b = b--;
	printf("%s\n",b);
	int n = 10;
	n = n--;
	cout << n << endl;
	return 0;
}
