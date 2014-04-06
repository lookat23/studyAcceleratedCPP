#include<cstdio>
int main()
{
	const char* s="#include<cstdio>%cint main()%c%s";
	printf(s,10,10,s);
}
