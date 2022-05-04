#include <iostream>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll n, x = 1;
    int res = 0;
    for (int i = 0; i < 32; i++)
        x *= 2;
    cin >> n;
    while (x > 0)
    {
        if ( (n & x) != 0)
            res++;
        x /= 2;
    }
    cout << res;
    return 0;
}