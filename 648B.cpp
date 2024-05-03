#include <bits/stdc++.h>
using namespace std;
#define f0(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for (int lcv = hi; lcv >= 0; lcv--)
#define f1(lcv, hi) for (int lcv = 1; lcv <= hi; lcv++)

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
    int a,c=0,d;
    cin>>a;
    int b[2*a];
    f0(i,2*a){
        cin>>b[i];
        c=c+b[i];
    }
    d=c/a;
    sort(b,b+(2*a));
    f0(i,a){
        cout<<b[i]<<" "<<b[2*a-1-i]<<'\n';
    }
    return 0;
}