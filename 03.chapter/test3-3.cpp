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
	int count = 0;
	for(int i=0; i<vec_words.size(); i++)
	{
		if(count==0)
		{
			word = vec_words[i];
			//cout << "-----" << word << endl;
			count++;
		}else
		{
			if(word == vec_words[i])
			{
				count++;
				if(i == vec_words.size()-1)
				{
					cout << word << ": " << count << endl;
				}
			}else
			{
				cout << word << ": " << count << endl;
				word = vec_words[i];
				count = 1;
			}
		}
	}
}
