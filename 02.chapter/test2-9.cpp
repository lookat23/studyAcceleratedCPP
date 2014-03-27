#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Please in two num: ";
	int n1,n2;
	cin >> n1 >> n2;
	if(n1>n2)
	{
		cout << n1 << '>' << n2;
	}else if( n1<n2)
	{
		cout << n1 << '<' << n2;
	}else
	{
		cout << n1 << '=' << n2;
	}
	cout << endl;
	return 0;
}
