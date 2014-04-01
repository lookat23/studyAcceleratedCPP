#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void print(const vector<int>& vec)
{
	for(vector<int>::size_type i=0; i<vec.size(); i++)
	{
		cout << vec[i] << ' '; 
	}
	cout << endl;
}

int main()
{
	vector<int> u(5,10);
	vector<int> v(2,1);
	print(u);
	copy(v.begin(), v.end(), u.begin());
	print(u);
	return 0;
}
