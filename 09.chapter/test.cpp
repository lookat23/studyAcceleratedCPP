// 测试构造函数的初始化顺序

#include <iostream>

using std::cout;
using std::endl;

class Person
{
public:
	int b;
	int a;
	Person(int n):b(n),a(b){};
};

int main()
{
	Person p(10);
	cout << "a = " << p.a << ' ';
	cout << "b = " << p.b << endl;
	return 0;
}
