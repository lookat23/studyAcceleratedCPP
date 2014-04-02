#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<typename RAN, typename X>
bool Binary_search(RAN b, RAN e, const X& x)
{
	while(b < e)
	{
		RAN mid = b + (e-b)/2;
		//RAN mid = (e+b)/2;
		if(x < *mid)
		{
			e = mid;
		}else if( *mid < x)
		{
			b = mid+1;
		}else
		{
			return true;
		}
	}
	return false;
}

int main()
{
	string s = "abcdefg";
	cout << Binary_search(s.begin(), s.end(), 'b') << endl;
	return 0;
}
