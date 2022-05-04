#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, temp;
    cin >> t;
    while (t--)
    {
        int min = 10000;
        cin >> n;
        vector<int> list(n, 0);
        for (int i = 0; i < n; i++)
            cin >> list[i];
        sort(list.begin(), list.end());
        for (size_t i = 1; i < list.size(); i++)
        {
            temp = list[i] - list[i - 1];
            if (temp < min)
                min = temp;
        }
        cout << min << "\n";
    }
    return 0;
}