#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() <= 10)
            cout << s << "\n";
        else
        {
            string temp = "";
            temp = temp + s[0] + to_string(s.size() - 2) + s[s.size() - 1];
            cout << temp << "\n";
        }
    }
}