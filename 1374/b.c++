#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        ll c1 = 0, c2 = 0;
        cin >> n;
        while (n % 2 == 0)
        {
            n /= 2;
            c1++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            c2++;
        }
        if (n != 1 or c1 > c2)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << (2 * c2 - c1) << "\n";
    }

    return 0;
}
