#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

void print(const vector<int>& vec)
{
	for(vector<int>::size_type i=0; i<vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	vector<int> v2;
	v2.push_back(30);
	v2.push_back(40);
	copy(v2.begin(), v2.end(), back_inserter(v1));
	print(v1);
	return 0;
}
