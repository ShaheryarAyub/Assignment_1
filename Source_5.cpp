#include <iostream>
using namespace std;

int main()
{
    int num;
    char c;
    cout << "Enter  Character" << endl;
    cin >> c;
    cout << "Enter Number" << endl;
    cin >> num;

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' && c >= 'A' && c <= 'Z')

        cout << "The character was Uppercase Vowel Letter and the result is: " << num * num << endl;

    else if (c >= 'A' && c <= 'Z')

        cout << "The character was Uppercase Consonant Letter and the result is: " << num * 2 << endl;

    else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' && c >= 'a' && c <= 'z')

        cout << "The character was Lowercase Vowel Letter and the result is: " << num * num * num << endl;

    else if (c >= 'a' && c <= 'z')

        cout << "The character was Lowercase Consonant Letter and the result is: " << num * 3 << endl;

    else

        cout << "The character is a special character and the result is: " << num << endl;

    return 0;

}