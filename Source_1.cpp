#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the numbers" << endl;
    cin >> a >> b >> c;
    int y, z, x;
    x = max(a, max(b, c));
    if (x == a)
    {
        y = b;
        z = c;
    }
    if (x == b)
    {
        y = a;
        z = c;
    }
    if (x == c)
    {
        y = a;
        z = b;
    }
    if ((x * x) == (y * y) + (z * z))
    {
        cout << "Pythagorean triple";
    }
    else
    {
        cout << "Not a Pythagorean triple";
    }
}