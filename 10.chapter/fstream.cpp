#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main()
{
	ifstream infile("string.cpp");
	ofstream oufile("out");
	string s;
	while(getline(infile, s))
	{
		oufile << s << endl;
	}
	return 0;
}
