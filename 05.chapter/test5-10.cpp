// 回文是指一种顺读和倒读都相同的单词。编写一个程序，让它找出一个单词集中的
// 全部回文并且找出最长的回文
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

void print(const vector<string>& vec)
{
	for(vector<string>::size_type i=0; i<vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
}

int main()
{
	typedef string::size_type st;
	string s;
	cin >> s;
	vector<string> vec;
	for(st i=0; i<s.size(); i++)
	{
		st j=s.size()-i-1;
		for(;j>=i+1; j--)
		{
			st k = j;
			st u = i;
			for(; k>=(j-i)/2; k--,u++)
			{
				if(s[u]!=s[k])
				{
					break;
				}
				if(k == (j-i)/2 +1)
				{
					vec.push_back(string(s,u,j-u+1));
				}
			}
		}
	}

	cout << endl;
	print(vec);
	return 0;
}

