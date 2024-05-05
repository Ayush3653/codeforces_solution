#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
    int a,b,c,x,y,z,m,n;
    cin>>a>>b>>c;
    x=a,y=b/2,z=c/4;
    m=min(x,y);
    n=min(m,z);
    cout<<n*(1+2+4);
    return 0;
}