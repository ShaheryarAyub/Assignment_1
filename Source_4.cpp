#include <iostream>
using namespace std;

void calc (int num1, int num2, char op)
{
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
}    

int main() 
{
    char op;
    int num_1, num_2;
    cout << "Enter two numbers" << endl;
    cin >> num_1 >> num_2;

    cout << "Enter the operator" << endl;
    cin >> op;
    calc(num_1, num_2, op);
}
