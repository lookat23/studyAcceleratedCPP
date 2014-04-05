// 验证初始化列表应该在声明，还是在定义
// 应该放在定义部分
#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
	int n;
	A(int n);
};
	A::A(int n):n(n)
	{
	}

int main()
{
	A a(10);
	cout << a.n << endl;	
	return 0;
}
