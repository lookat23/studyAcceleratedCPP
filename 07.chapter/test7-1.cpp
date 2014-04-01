// 统计输入单词的出现次数，并按出现次数顺序输出
#include <iostream>
#include <vector>
#include <string>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::map;
using std::pair;
using std::ostream;
using std::sort;

bool not_space(char c)
{
	return !isspace(c);
}

bool is_space(char c)
{
	return isspace(c);
}

void splite(vector<string>& vec, const string str)
{
	string::const_iterator b,e;
	b = str.begin();
	while(b != str.end())
	{
		b = find_if(b, str.end(), not_space);
		e = find_if(b, str.end(), is_space);
		if(b != str.end())
		{
			vec.push_back(string(b,e));
		}
		b = e;
	}
}
//bool cmp(const pair<string, int>& a, const pair<string, int>& b)
//{
//	return a.second < b.second;
//}
ostream& operator<<(ostream& out,const map<string, int>& m)
{
	map<string, int>::const_iterator it;
	it = m.begin();
	for(; it!=m.end(); it++)
	{
		out << it->first << ": " << it->second << endl;
	}
	return out;
}

bool cmp(const pair<string, int>& a, const pair<string, int>& b)
{
	return a.second < b.second;
}

void sort_print(const map<string, int>& m)
{
	vector<pair<string, int> > vec;
	map<string, int>::const_iterator it = m.begin();
	for(; it != m.end(); it++)
	{
		vec.push_back(*it);
	}
	sort(vec.begin(), vec.end(), cmp);
	vector<pair<string, int> >::const_iterator vec_it = vec.begin();
	for(; vec_it != vec.end(); vec_it++)
	{
		cout << vec_it->first << ": " << vec_it->second << endl;
	}
}

void print(const map<string, int>& m)
{
	map<string, int>::const_iterator it;
	it = m.begin();
	for(; it!=m.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}
}

int main()
{
	map<string, int> m;
	string str;
	// 输入单词
	while(getline(cin, str))
	{
		vector<string> vec;
		// 拆分单词
		splite(vec, str);	
		// 利用map 统计单词出现次数
		for(vector<string>::size_type i = 0; i < vec.size(); i++)
		{
			m[vec[i]]++;
		}
	}
	
	// 输出单词出现次数
	//print(m);
	//cout << m;
	sort_print(m);
	return 0;
}
