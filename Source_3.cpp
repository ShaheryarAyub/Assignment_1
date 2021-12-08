#include <iostream>
using namespace std;

void check (char character)
{
    if ((character >= 65 && character <= 90)
        || (character >= 97 && character <= 122))
        cout << " Alphabet ";

    else if (character >= 48 && character <= 57)
        cout << " Digit ";

    else
        cout << " Special Character ";
}
int main()
{
    char c;
    cout << "Enter Character" << endl;
    cin >> c;
    check(c);
}
