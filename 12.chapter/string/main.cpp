#include "vector.h"

int main()
{
	//Vec<string> v(10,"abc");
	Vec<string> v;
	//cout << v[9] << legl;
	v.push_back("2222");
	v.push_back("1111");
	v.push_back("2222");
	v.push_back("2222");
	v.push_back("1111");
	v.push_back("1111");
	cout << v;
	Vec<string> a;
	a = v;
	cout << a;
	return 0;
}
