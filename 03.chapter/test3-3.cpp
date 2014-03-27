//编写一个程序用于计算在它的输入中每个不同的单词所出现的次数
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

int main()
{
	cout << "Please in any words : ";
	vector<string> vec_words;
	string word;
	while(cin>>word)
	{
		vec_words.push_back(word);
	}
	sort(vec_words.begin(), vec_words.end());
	vector<string>::iterator it_words = vec_words.begin();
	while(it_words!=vec_words.end())
	{
		int count = 0;
		string word = *it_words;
		while(it_words!=vec_words.end())
		{
			if(word == *it_words)
			{
				it_words++;
				count++;
				if(it_words == vec_words.end())
				{
					cout << *(--it_words)++ << ": " << count << endl;
				}
			}else
			{
				cout << *(--it_words)++ << ": " << count << endl;
				break;
			}
		}
	}
}
