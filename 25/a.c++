#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if ((x + y) % 2 != 0)
    {
        if ((x + z) % 2 != 0)
        {
            cout << "1";
            return 0;
        }
        else
        {
            cout << "2";
            return 0;
        }
    }
    if ((x + z) % 2 != 0)
    {
        cout << "3";
        return 0;
    }
    for (int i = 4; i <= n; i++)
    {
        cin >> y;
        if ((x + y) % 2 == 1)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}