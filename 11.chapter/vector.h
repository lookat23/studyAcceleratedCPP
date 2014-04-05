#include <iostream>
#include <string>
#include <algorithm>


using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::ostream;
using std::copy;

template<typename T>
class Vec
{
public:
typedef size_t size_type;
typedef T* iterator;
typedef const T* const_iterator;

Vec()
{
	create();
}
Vec(size_t n,const T& t)
{
	create(n, t);
}

Vec(const_iterator b, const_iterator e);

Vec(const Vec& v)
{
	create(v.begin(), v.end());	
}
~Vec()
{
	uncreate();
}

size_type size()const
{
	return leg - head;
}

const_iterator begin() const
{
	return head;
}
iterator begin()
{
	return head;
}

const_iterator end() const
{
	return leg;
}

iterator end() 
{
	return leg;
}

Vec& operator=(const Vec& v)
{
	if(this != &v)
	{
		uncreate();
		create(v.begin(), v.end());
	}
	return *this;
}

void push_back(const T& t)
{
	if(leg == tail)
	{
		add_space();
	}
	*leg++ = t;
	
}

friend ostream& operator<<(ostream& o,const Vec& v)
{
	const_iterator it = v.begin();
	while(it != v.end())
	{
		cout << *it << endl;
		it++;
	}
	return o;
}

T& operator[](size_t n)
{
	return *(head+n);
}

const T& operator[](size_t n)const
{
	return *(head+n);
}

void erase(iterator it)
{
	if(it>=head && it < leg)
	{
		while(it != leg)
		{
			iterator cur = it;
			*cur = *++it;
		}
		leg--;
	}
}

private:
iterator head;
iterator leg;
iterator tail;

void create();
void create(size_t n, const T& t);
void create(const_iterator b, const_iterator e);

void uncreate();
void add_space();
};

template<typename T>
void Vec<T>::add_space()
{
	size_t newLen = (tail-head)*2;
	if(newLen == 0) newLen = 1;
	iterator it = new T[newLen];
	leg = copy(head, leg, it);
	head = it;
	tail = head + newLen;
}

template<typename T>
void Vec<T>::uncreate()
{
	if(head)
	{
		delete[] head;
		head = leg = tail = NULL;
	}
}

template<typename T>
void Vec<T>::create()
{
		head = leg = tail = NULL;	
}

template<typename T>
void Vec<T>::create(size_t n, const T& t)
{
	head = new T[n];
	leg = tail = head+n;
	fill(head, leg, t);
}

template<typename T>
void Vec<T>::create(const_iterator b, const_iterator e)
{
	head = new T[e-b];
	leg = tail = head+(e-b);
	copy(b, e, head);
}

