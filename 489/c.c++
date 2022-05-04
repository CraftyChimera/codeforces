#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, n, temp = 0;
    string s, l;
    cin >> m >> n;
    if (m == 1 && n == 0)
    {
        cout << "0 0";
        return 0;
    }
    if (n == 0 || n > 9 * m)
    {
        cout << "-1 -1";
        return 0;
    }
    temp = n;
    for (long long i = 0; i < m; i++)
    {
        if (temp > 9)
        {
            l += "9";
            temp -= 9;
        }
        else
        {
            l += to_string(temp);
            temp = 0;
        }
    }
    // 3 15
    temp = n;
    for (long long i = m - 1; i > -1; i--)
    {
        if (temp >= 9 * i)
        {
            s += to_string(temp - 9 * i);
            temp = 9 * i;
        }
        else
        {
            if (i == m - 1)
            {
                s += "1";
                temp--;
            }
            else
                s += "0";
        }
    }
    cout << s << " " << l;
    return 0;
}