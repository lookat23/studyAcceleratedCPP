// 编写一个函数从输入流读取单词，将单词放到一个向量中，利用这个函数
// 编写一个程序以计算输入的单词的数目以及每一个单词所出现的次数

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::cin;
using std::istream;
using std::sort;

istream& read(istream& in, vector<string>& w)
{
	w.clear();
	string name;
	cout << "Please in some words" << endl;
	while(in>>name)
	{
		w.push_back(name);
	}
	in.clear();
	return in;
}
void count( vector<string> w)
{
	int count = 0;
	string name;
	sort(w.begin(), w.end());
	for(int i=0; i<w.size(); i++)
	{
		if(count == 0)
		{
			name = w[i];	
			count++;
			if(i == w.size()-1)
			{
				cout << name << ": " << count << endl;
			}
		}else
		{
			if(name != w[i] || i == w.size()-1)
			{
					cout << name << ": " << count << endl;
					count = 0;
					i--;
			}else
			{
				count++;
			}
		}
	}
}

int main()
{
	vector<string> words;
	// read words in cin
	read(cin, words);

	// print words count
	cout << "words count is: " << words.size() << endl;

	count(words);
	return 0;	
}
