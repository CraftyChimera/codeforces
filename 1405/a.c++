#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 0, x;
        cin >> n;
        int a[n];
        while (n--)
        {
            cin >> x;
            a[i++] = x;
        }
        i--;
        while (i >= 0)
        {
            cout << a[i] << " ";
            i--;
        }
        cout << "\n";
    }

    return 0;
}