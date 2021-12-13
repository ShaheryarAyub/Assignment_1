#include <iostream>
using namespace std;

class character
{
public:
    void check (char);
};

void character :: check (char ch)
{
    if ((ch >= 65 && ch <= 90)
        || (ch >= 97 && ch <= 122))
        cout << " Alphabet ";

    else if (ch >= 48 && ch <= 57)
        cout << " Digit ";

    else
        cout << " Special Character ";
}
int main()
{
    character cha;
    char c;
    cout << "Enter Character" << endl;
    cin >> c;
    cha.check(c);
}
