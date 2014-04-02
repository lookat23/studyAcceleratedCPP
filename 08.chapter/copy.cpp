// 将copy当输出用

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
using std::ostream_iterator;
using std::istream_iterator;

int main()
{
	vector<int> vec;
	for(int i=0; i<10; i++)
	{
		vec.push_back(i);
	}
	//copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	copy(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));
	return 0;
}
