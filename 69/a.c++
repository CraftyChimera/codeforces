#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0, z = 0, p, q, r, t;
    cin >> t;
    while (t--)
    {
        cin >> p >> q >> r;
        x += p;
        y += q;
        z += r;
    }
    if (x != 0 || y != 0 || z != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}