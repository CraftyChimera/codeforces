#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int n, a, b, c, res = 0, rem = 0, final = 0;
    cin >> n >> a >> b >> c;
    vector<int> list{a, b, c};
    sort(list.begin(), list.end());
    a = list[0];
    b = list[1];
    c = list[2];
    res = n / a;
    rem = n % a;
    if (rem == 0)
    {
        cout << res;
        return 0;
    }
    while (res > 0)
    {
        rem += a;
        res--;
        for (int k = rem / b; k >= 0; k--)
        {
            if ((rem - k * b) % c == 0)
            {
                int res1 = res;
                res1 += k;
                res1 += (rem - k * b) / c;
                final = (final > res1) ? final : res1;
            }
        }
    }
    cout << final;
    return 0;
}