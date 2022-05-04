#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 4 << " " << n - 4 << endl;
        return 0;
    }
    cout << 9 << " " << n - 9 << endl;
    return 0;
}