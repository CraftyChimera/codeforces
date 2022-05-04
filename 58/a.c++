#include <iostream>
using namespace std;

int main()
{
    string s, m = "hello";
    int i = 0;
    cin >> s;
    for (auto &x : s)
    {
        if (x == m[i])
            i++;
    }
    if (i == 5)
        cout << "YES";
    else
        cout << "NO";
}