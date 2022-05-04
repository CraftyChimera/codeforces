#include <iostream>
using namespace std;

int main()
{
    double a, b, x = 1.5;
    int i = 1;
    cin >> a >> b;
    a = b / a;
    for (; x <= a; i++)
    {
        x *= 1.5;
    }
    cout << i;
}