#include <bits/stdc++.h>
using namespace std;
#define f0(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)
void tests()
{
    int a[5],c[5],b[5],d,e=0,x=0,y=0;
    fill(c,c+5,0);
    f0(i,5){
        cin>>a[i];
        b[i]=a[i];
    }
    f0(i,5){
        x=x+b[i];
    }
    f0(i,5){
        d=0;
        f0(j,5){
            if((a[i]==a[j])&&(i!=j&&a[i]!=0)){
                a[j]=0;
                d++;
            }
        }
        if(d>=2){
            c[i]=3*a[i];
        }
        if(d==1){
            c[i]=2*a[i];
        }
        if(d==0){
            e++;
        }
    }
    if(e==5){
        cout<<x;
        exit(0);
    }
    if(e<5){
        f0(i,5){
            y=max(y,c[i]);
        }
        cout<<x-y;
        exit(0);
    }
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    tests();
    return 0;
}