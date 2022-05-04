#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
typedef long long ll;

void sieve(set<ll> &list, ll n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (ll i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (ll j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    for (ll i = 0; i <= n; i++)
    {
        if (prime[i] == true)
        {
            list.insert(i * i);
        }
    }
}

int main()
{
    ll n, x, max = 0;
    cin >> n;
    vector<ll> thing;
    set<ll> list;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        thing.push_back(x);
        max = (max > x) ? max : x;
    }
    sieve(list, sqrt(max));
    for (int i = 0; i < n; i++)
    {
        if (list.find(thing[i]) != list.end())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}