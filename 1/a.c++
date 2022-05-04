#include <iostream>
using namespace std;
typedef long long ll;
ll ceil(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    else
        return (a / b + 1);
}

int main()
{
    ll m, n, a;
    cin >> m >> n >> a;
    cout << ceil(m, a) * ceil(n, a);
    return 0;
}