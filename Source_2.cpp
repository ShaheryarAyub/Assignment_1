#include <iostream>
using namespace std;

class Grade
{
public:
    void PrintGrade(int);
};

void Grade :: PrintGrade(int marks)
{
    if (marks < 0 || marks > 100)
        cout << "invalid marks" << endl;
    else if (marks >= 90)
        cout << "Grade is A+" << endl;
    else if (marks >= 80)
        cout << "Grade is A" << endl;
    else if (marks >= 70)
        cout << "Grade is B" << endl;
    else if (marks >= 60)
        cout << "Grade is C" << endl;
    else if (marks >= 50)
        cout << "Grade is D" << endl;
    else
        cout << "Fail" << endl;
}

int main()
{
    Grade marks;
    int m;
    cout << "Enter the marks: ";
    cin >> m;    
    while (1)
    {
        marks.PrintGrade(m);
        cout << "Enter the marks: ";
        cin >> m;        
    }
}
