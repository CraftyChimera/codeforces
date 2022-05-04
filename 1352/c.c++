#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll val = (a * b) / (a - 1), cond = ((a * b) % (a - 1) == 0);
        cout << val - cond << "\n";
    }

    return 0;
}