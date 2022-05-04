#include <iostream>
using namespace std;
int main()
{
    int t, final = 0;
    cin >> t;
    while (t--)
    {
        int total = 0, temp;
        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            total += temp;
        }
        if (total >= 2)
            final++;
    }
    cout << final;
}
