#include <iostream>
#include <cstdio>

class A
{
public:
A(char* p):p(p){}
const char*& re()
{
	return p;
}

private:
	char* p;
};

int main()
{
	char arr[3] = {'1','2','3'};
	A a(arr);
	printf("%c\n",*arr);

	printf("%c\n",*a.re());
	char arr2[1] = {'a'};
	//(**(a.re()))++; 
	//const char* c =arr;
	//a.re() = arr2;
	const char* c = arr;
	printf("%c\n",*c);
	c = arr2;
	printf("%c\n",*c);
	printf("%c\n",*a.re());
	return 0;
}
