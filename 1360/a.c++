#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
        {
            int temp = b;
            b = a;
            a = temp;
        }
        if (2 * a >= b)
            cout << 4 * a * a << "\n";
        else
            cout << b * b << "\n";
    }
    return 0;
}