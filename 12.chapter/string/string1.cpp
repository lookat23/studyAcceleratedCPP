#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::swap;
using std::istream;
using std::ostream;

class Str
{
public:
Str():data(new char[1]){ *data = '\0'; }
Str(const char* s):data(new char[strlen(s)+1])
{
	cout << "调用char* 构造" << endl;
	strcpy(data, s);
	data[strlen(s)] = '\0';	
}
Str(const Str& s)
{
	cout << "调用复制构造" << endl;
	data = new char[s.size()+1];
	strcpy(data, s.data);
}
Str(const char c):data(new char[2])
{
	data[0] = c;
	data[1] = '\0';
}
~Str()
{
	delete[] data;
}
size_t size() const
{
	return strlen(data);
}
Str& operator=(Str s)
{
	swap(data, s.data);
	cout << "调用赋值运算符" << endl;
	return *this;
}

Str& operator=(const char* s)
{
		delete[] data;
		data = new char[strlen(s)+1];
		strcpy(data, s);
		return *this;
}

Str& operator+=(const Str& s)
{
	char* temp = new char[strlen(data) + strlen(s.data)];
	strcpy(temp, data);
	strcat(temp, s.data);
	delete[] data;
	data = temp;	
	return *this;
}
friend Str operator+(const Str& l, const Str& r)
{
	Str t = l;
	t += r;
	return t;
}
friend ostream& operator<<(ostream& o, const Str& s)
{
	for(size_t i=0; i<s.size(); i++)
	{
		cout << s.data[i];
	}
	return o;
}
friend istream& operator>>(istream& i, Str& s)
{
	char c;
	while(i.get(c) && isspace(c));

	do
	{
		s += c;	
	}while(i.get(c) && !isspace(c));
	i.unget();
	return i;
}
friend bool operator==(const Str& l, const Str& r)
{
	if(l.size() != r.size())
	{
		return false;
	}
	if( &l != &r )
	{
		const char* lp = l.data;
		const char* rp = r.data;
		for(size_t i =0; i< l.size(); i++)
		{
			if(lp[i] != rp[i])
			{
				return false;
			}
		}
	}
	return true;
}
friend bool operator!=(const Str& l, const Str& r)
{
	return !(l==r);
}
private:
char* data;
};

int main()
{
//	Str s("hello");
//	s += " world";
//	cin >> s;
//	cout << s << endl;
	Str s1 = "hello";
	Str s2 = "helle";
	cout << (s1==s2) << endl;
	cout << (s1!=s2) << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	s1 = s2;
	cout << s1 << endl;
	return 0;
}
