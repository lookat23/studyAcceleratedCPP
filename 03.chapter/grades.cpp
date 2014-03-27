#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using std::streamsize;
using std::setprecision;
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

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
	vector<double> homeworkGrades;
	double x;
	while(cin>>x)
	{
		homeworkGrades.push_back(x);
	}
	double middleGrade;
	size_t vecLen = homeworkGrades.size();
	if(vecLen%2)
	{
		//even
		if(vecLen == 0)
		{
			middleGrade = 0;
		}else
		{
			middleGrade = (homeworkGrades[vecLen/2-1]+homeworkGrades[vecLen/2])/2;
		}
	}else
	{
		//odd
		middleGrade = homeworkGrades[vecLen/2];
	}
	double grade = midterm*0.2 + final*0.4 + middleGrade*0.4;

	streamsize prec = cout.precision();
	cout << name << "grades is " << setprecision(4) << grade <<
	setprecision(prec) << endl;
}
