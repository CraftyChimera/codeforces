#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        cout << (x / 3) + (x % 3 == 1) << " " <<     (x / 3) + (x % 3 == 2) << "\n";
    }
    return 0;
}