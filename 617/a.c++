#include <iostream>
using namespace std;

int ceil(int x)
{
    if (x % 5 == 0)
        return x / 5;
    return x / 5 + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << ceil(n);
    return 0;
}