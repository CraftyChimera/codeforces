#include <iostream>
using namespace std;

int ret(int a, int b)
{
    if (b <= a)
        return a - b;
    if (b % 2 == 0)
        return ret(a, b / 2) + 1;
    if (b % 2 == 1)
        return ret(a, b + 1) + 1;
    return 0;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << ret(m, n);
    return 0;
}