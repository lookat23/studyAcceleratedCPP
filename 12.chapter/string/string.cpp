#include "vector.h"
using std::istream;
using std::strlen;

class Str
{
public:
	Str():data(){ }

	Str(const char* c)
	{ 
		//copy(c,c+strlen(c),std::back_inserter(data)); 

		while(*c != '\0')
		{
			data.push_back(*c);
			c++;
		}
	}

	template<typename In>
	Str(In b, In e)
	{
		//copy(b, e, std::back_inserter(data));
		while(b != e)
		{
			data.push_back(*b);
			b++;
		}
	}

	typedef Vec<char>::size_type size_type;

	Str& operator+=(const Str& s)
	{
		//copy(s.data.begin(), s.data.end(), std::back_inserter(data));
		Vec<char>::const_iterator it;
		it = s.begin();
		while(it != s.end())
		{
			data.push_back(*it);
			it++;
		}
		return *this;
	}
	
	Vec<char>::iterator begin(){ return data.begin(); }
	Vec<char>::const_iterator begin()const{ return data.begin();}
	Vec<char>::iterator end(){ return data.end(); }
	Vec<char>::const_iterator end()const{ return data.end();}

	size_type size() const
	{
		return data.size();
	}

	friend Str operator+(const Str& l, const Str& r)
	{
		Str s;
		s = l;
		s += r;	
		return s;
	}
	friend ostream& operator<<(ostream& ou, const Str& s)
	{
		for(size_t i=0; i<s.size(); i++)
		{
			ou << s[i];
		}
		return ou;
	}
	friend istream& operator>>(istream& in, Str& s)
	{
		char c;
		while(in.get(c) && isspace(c));
		if(in)
		{
			do
			{
				s.data.push_back(c);
			}while(in.get(c) && !isspace(c));
		}
		if(in)
		{
			in.unget();
		}

		return in;
	}
	char& operator[](size_type n)
	{
		return data[n];
	}
	const char& operator[](size_type n)const
	{
		return data[n];
	}
	const char* c_str() const
	{
		return data.begin();
	}
private:
	Vec<char> data;
};

int main()
{
//	Str s("hello");
	Str s = "hello";
	//cin >> s;
	s += "world";
	cin >> s;
	cout << s << endl;
	char arr[3] = {'c','a','t'};
	Str ss(arr,arr+3);
	cout << ss << endl;
	cout << ss.c_str() << endl;
	return 0;
}
