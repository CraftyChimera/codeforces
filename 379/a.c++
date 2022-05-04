#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int total = a;
    while (a >= b)
    {
        int rem = a % b;
        a /= b;
        total += a;
        a += rem;
    }
    cout << total;
    return 0;
}