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
        ll n, m, temp;
        cin >> n >> m;
        vector<ll> distance(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            distance[i] = temp;
        }
        ll max = 0, min = distance[0];
        for (ll x : distance)
        {
            max = (x > max) ? x : max;
            min = (x > min) ? min : x;
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += distance[i];
        sum -= min;
        sum += n;
        if (sum <= m - max)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}