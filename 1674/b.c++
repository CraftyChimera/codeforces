#include <iostream>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        int index = 0, index2 = 0, val = 0;
        cin >> s;
        index = s[0] - 'a';
        index2 = (s[1] - s[0] > 0) ? s[1] - 'a' : s[1] - 'a' + 1;
        val = index * 25 + index2;
        cout << val << "\n";
    }
    return 0;
}