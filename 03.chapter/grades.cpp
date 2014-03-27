#include <iostream>
#include <iomanip>
#include <string>

using std::streamsize;
using std::setprecision;
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	cout << "Please enter your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << endl;

	// enter midterm and final grades
	cout << "Please enter your midterm and final grades: ";
	double midterm, final;
	cin >> midterm >> final;

	// enter homework grades
	cout << "Please enter your homework grades: ";
	int count = 0;
	double sum = 0;
	double x;
	while(cin>>x)
	{
		count++;
		sum += x;
	}
	double grade = midterm*0.2 + final*0.4 + sum/count*0.4;

	streamsize prec = cout.precision();
	cout << name << "grades is " << setprecision(4) << grade <<
	setprecision(prec) << endl;
}
