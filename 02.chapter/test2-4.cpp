#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	cout << "Please in your name: ";
	string name;
	cin >> name;
	cout << "Please in pad value: ";
	unsigned int pad;
	cin >> pad;

	const string out = "hello," + name;

	string::size_type cols = out.size() + pad*2 + 2;
	string::size_type rows = pad*2 + 3;

	// Has Already been exported r rows
	for(int r=0; r<rows; r++)
	{
		// Has Already been exported c cols
		for(int c=0; c<cols;)
		{
			if( r == 1+pad && c == 1+pad)
			{
				cout << out;
				c += out.size();
			}else
			{
				if( r == 0 || r == rows-1 || c == 0 || c == cols-1)
				{
					cout << '*';
				}else
				{
					cout << ' ';
				}
				c++;
			}
		}
			cout << endl;
	}
}
