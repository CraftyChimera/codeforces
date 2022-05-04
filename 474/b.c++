#include<iostream>
using namespace std;

int main()
{int n,x,m;cin>>n;int a[n];
cin>>x;a[0]=x;
for(int i=1;i<n;i++)
{cin>>x;a[i]=a[i-1]+x;}
cin>>m;
while(m--)
{cin>>x;int i=0,lo=0;
cout<<lo++<<" ";}

    return 0;
}