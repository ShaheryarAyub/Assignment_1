#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the Mark" << endl;
    cin >> marks;

    while (1)
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
        cout << "Enter the Mark" << endl;
        cin >> marks;
    }
    return 0;
}