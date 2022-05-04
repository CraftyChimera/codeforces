#include <iostream>
using namespace std;
int main()
{
    int t, x, y, temp;
    cin >> t;
    while (t--)
    {

        cin >> x >> y;
        if (y % x != 0)
        {
            cout << "0 0\n";
            continue;
        }
        temp = y / x;
        cout << 1 << " " << temp << "\n";
    }
    return 0;
}