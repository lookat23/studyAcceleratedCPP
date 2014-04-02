// 利用模版优化split函数，支持所有容器

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::istream_iterator;
using std::ostream_iterator;
using std::string;

bool not_space(char c)
{
	return !isspace(c);
}

bool is_space(char c)
{
	return isspace(c);
}

template<typename Out>
void split(const string& s, Out t)
{
	string::const_iterator b,e;
	b = s.begin();
	while(b != s.end())
	{
		b = find_if(b, s.end(), not_space);
		e = find_if(b, s.end(), isspace);
		if(b != s.end())
		{
			*t++ = string(b,e);
		}
		b = e;
	}
}

int main()
{
	// 输入单词
	string s;
	while(cin>>s)
	{
		// 划分单词 
		split(s, ostream_iterator<string>(cout,	"\n"));
	}
	return 0;
}
