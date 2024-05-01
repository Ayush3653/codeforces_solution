#include <bits/stdc++.h>
using namespace std;
#define f0(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
    int a,d=0;
    cin>>a;
    int b[a],c[a];
    f0(i,a){
        cin>>b[i]>>c[i];
        if(c[i]-b[i]>=2){
            d++;
        }
    }
    cout<<d;
    return 0;
}