#include <iostream>
using namespace std;

int main()
{
    char character;
    cout << "Enter Character" << endl;
    cin >> character;

    {
        if ((character >= 65 && character <= 90)
            || (character >= 97 && character <= 122))
            cout << " Alphabet ";

        else if (character >= 48 && character <= 57)
            cout << " Digit ";

        else
            cout << " Special Character ";
    }

    return 0;
}