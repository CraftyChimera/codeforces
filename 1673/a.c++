#include <iostream>
using namespace std;
int min(int a, int b)
{
    return (a > b) ? b : a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int val = 0;
        cin >> s;
        if (s.length() == 1)
        {
            cout << "Bob " << s[0] - 'a' + 1 << "\n";
            continue;
        }
        for (auto x : s)
            val += x - 'a' + 1;
        if (s.length() % 2 == 1)
        {
            int mini = min(s[0] - 'a' + 1, s[s.length() - 1] - 'a' + 1);
            val -= 2 * mini;
        }
        cout << "Alice " << val << "\n";
    }

    return 0;
}