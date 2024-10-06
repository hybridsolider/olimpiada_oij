#include <iostream>

using namespace std;

int x,y,
a = 0,
b = 0;

int main()
{
    cin >> x;
    cin >> y;

    while (y > 1)
    {

        y -= 2; 
        a++;
    }
    while ((a+b) > x)
    {
        a -= 2;
        b++;
    }
    cout << a << " " << b;
    return 0;
}