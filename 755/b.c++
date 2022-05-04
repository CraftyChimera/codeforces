#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> a;
    string s;
    int m, n,common=0;
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        a[s]=1;
    }
    for(int i=0;i<m;i++)
    {cin>>s;
      if(a.find(s)!=a.end())common++;
    }
int polOnly=n-common,EnOnly=m-common;
if(common%2!=0)polOnly+=1;
if(polOnly>EnOnly)cout<<"YES";
else cout<<"NO";
    return 0;
}