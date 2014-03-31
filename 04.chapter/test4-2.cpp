#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main()
{
	for(int i=1; i<=100; i++)
	{
		cout << i << setw(8) <<i*i << endl;
	}
	return 0;
}
