#include <iostream>
#include <vector>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::endl;
using std::vector;
using std::string;
using std::map;
using std::cin;
using std::max;


bool not_space(char c)
{
	return !isspace(c);
}

bool is_space(char c)
{
	return isspace(c);
}

void split(vector<string>& vec,const string s)
{
	string::const_iterator b,e;
	b = s.begin();
	while(b != s.end())
	{
		b = find_if(b, s.end(), not_space);
		e = find_if(b, s.end(), is_space);
		if(b!=s.end())
		{
			vec.push_back(string(b,e));
		}
			b = e;
	}
}

void print(const map<string, vector<int> >& m)
{
	map<string, vector<int> >::const_iterator it;
	it = m.begin();
	// 计算单词最长长度
	string::size_type maxlen = 0;
	while(it != m.end())
	{
		maxlen = max(maxlen, it->first.size());
		it++;
	}
	it = m.begin();

	while(it!=m.end())
	{
		cout << it->first << 
		string(maxlen-it->first.size(), ' ') <<
		": ";
		vector<int>::const_iterator i_it;
		i_it = it->second.begin();
		cout << *i_it++;
		while(i_it!=it->second.end())
		{
			cout << ',' << *i_it++;
		}
		cout << endl;
		it++;
	}
}

int main()
{
	string s;
	map<string, vector<int> > m;
	int offsetline = 0;
	// 输入
	while(getline(cin, s))
	{
		offsetline++;
		// 拆分一行输入
		vector<string> vec;
		split(vec,s);
		// 把单词所在的行加入map对中
		for(vector<string>::const_iterator i=vec.begin(); i!=vec.end(); i++)
		{
			if(find(m[*i].begin(), m[*i].end(), offsetline) == m[*i].end())
			{
				m[*i].push_back(offsetline);	
			}
		}
	}
		// 显示map对
		print(m);
		return 0;
}
