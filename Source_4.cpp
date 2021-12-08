#include <iostream>
using namespace std;

int main()
{
    char op;
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    cout << "Enter the operator" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    case '%':
        cout << num1 % num2;
        break;
    default:
        cout << "Error operator is not correct";
        break;
    }
    return 0;
}