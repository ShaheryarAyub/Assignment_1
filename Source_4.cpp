#include <iostream>
using namespace std;
class Calculator 
{
private:
    int num_1;
    int num_2;
public:
    void getnums();   
    int add();
    int sub();
    int mul();
    int div();
    int rem();
};

void Calculator :: getnums()
{
    cout << "Enter First Number: ";
    cin >> num_1;
    cout << "Enter Second Number: ";
    cin >> num_2;
}

int Calculator :: add()
{
    return num_1 + num_2;
}

int Calculator :: sub()
{
    return num_1 - num_2;
}

int Calculator :: mul()
{
    return num_1 * num_2;
}

 int Calculator::div()
{
    if (num_2 == 0)
    {
        cout << "Divison By Zero" << endl;
        return INFINITY;
    }
    else
    {
        return num_1 / num_2;
    }
}

int  Calculator::rem()
{
    return num_1 % num_2;
}

int main() 
{
    Calculator cal;
    cal.getnums();
    char opp;
    cout << "Enter the operator" << endl;
    cin >> opp;   
    
    switch (opp) 
    {
    case '+':
        cout << "Result: " << cal.add() << endl;
        break;
    case '-':      
        cout << "Result: " << cal.sub() << endl;
        break;
    case '*':     
        cout << "Result: " << cal.mul() << endl;
        break;
    case '/':       
        cout << "Result: " << cal.div() << endl;
        break;
    case '%':
        cout << "Result: " << cal.rem() << endl;
        break;
    }
    return 0;
}

