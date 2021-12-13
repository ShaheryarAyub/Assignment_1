#include  <iostream>
using namespace std;

class pythag
{	
private:
    int x, y, z;
public:   
    void check (int, int, int);
};

void pythag::check (int a, int b, int c)
{       
    x = max (a, max(b, c));
    
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

int main()
{
    pythag val1;
    int a, b, c;
    cout << "Enter the numbers" << endl;
    cin >> a >> b >> c;   
    val1.check(a,b,c);
}
