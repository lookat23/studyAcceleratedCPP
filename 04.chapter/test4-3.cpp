#include <iostream>
#include <iomanip>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::setw;

int WeiShu(int n)
{
	if(n<10) return 1;
	return 1+WeiShu (n/10);
}

int main()
{
	int max = 200;
	int w = WeiShu(max);
	for(int i=1; i<=max; i++)
	{
		cout << i << string(w - WeiShu(i) + 1,' ') << i*i << endl;
	}
	return 0;
}
