#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    string s;
    cin >> s;
    for (size_t i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            n++;
        else
            n = 0;
        if (n == 6)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}