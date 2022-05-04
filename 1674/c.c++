#include <iostream>
using namespace std;
int main()
{
    int t;
    string s, p;
    cin >> t;
    while (t--)
    {
        int flag = 0;
        cin >> s >> p;
        for (auto x : p)
        {
            if (x == 'a')
                flag = 1;
        }
        if (flag == 1)
        {
            if (p.size() == 1)
                cout << "1\n";
            else
                cout << "-1\n";
            continue;
        }
        long long val = 1;
        for (size_t i = 0; i < s.size(); i++)
            val *= 2;
        cout << val << "\n";
    }
    return 0;
}