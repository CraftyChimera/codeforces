#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, flag = 0;
        cin >> n;
        vector<ll> list(n, 0);
        for (ll i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            list[i] = temp;
        }
        ll in = n % 2;
        while (in < n)
        {
            if (list[in] > list[in + 1])
            {
                ll temp = list[in + 1];
                list[in + 1] = list[in];
                list[in] = temp;
            }
            in += 2;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (list[i] > list[i + 1])
            {
                cout << "NO\n";
                flag = -1;
                break;
            }
        }
        if (flag == 0)
            cout << "YES\n";
    }
    return 0;
}