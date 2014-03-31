#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main()
{
	for(int i=1; i<=100; i++)
	{
		cout << i << setw(5) << 1.0*i*i << endl;
	}
	return 0;
}
