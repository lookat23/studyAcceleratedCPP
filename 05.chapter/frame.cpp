#include <iostream>
#include <string>
#include <vector>

using std::endl;
using std::cin;
using std::cout;
using std::istream;
using std::string;
using std::vector;
using std::max;

typedef vector<string>::size_type st;

void read(istream& in, vector<string>& vec)
{
	string s;
	while(getline(cin, s))
	{
		vec.push_back(s);
	}
	cin.clear();
}

void frame(vector<string>& vec)
{
	// 找出字符串中，最大长度
	st maxlen=0;
	for(st i=0; i<vec.size(); i++)
	{
		maxlen = max(maxlen, vec[i].size());
	}
	// 填充图案
	for(st i=0; i<vec.size();i++)
	{
		string& s = vec[i];
		s += string(maxlen - s.size(), ' ');
		s.insert(0 , "* ");
		s += " *";
	}
	vec.insert(vec.begin(), string(maxlen+4, '*'));
	vec.push_back(string(maxlen+4, '*'));
}
void print(const vector<string>& vec)
{
	for(st i=0; i<vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}

int main()
{
	cout << "Please in some line" << endl;
	vector<string> vec;
	// 输入一些字符串
	read(cin, vec);

	// 加框	
	frame(vec);
	// 显示
	print(vec);
	return 0;
}
