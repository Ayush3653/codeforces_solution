#include <bits/stdc++.h>
using namespace std;
#define f0(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for (int lcv = hi; lcv >= 0; lcv--)
#define f1(lcv, hi) for (int lcv = 1; lcv <= hi; lcv++)

int add(int x){
    int e=0;
    f0(i,x){
        e=e+i+1;
    }
    return e;
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
    int a,d=0,x=0;
    cin>>a;
    string b[a];
    int c[a],e[a];
    f0(i,a){
        cin>>b[i];
    }
    f0(i,a){
        d=0;
        f0(j,a){
            if(b[i][j]=='C'){
                d++;
            }
        }
       c[i]=add(d-1);
    }
    f0(i,a){
        d=0;
        f0(j,a){
            if(b[j][i]=='C'){
                d++;
            }
        }
       e[i]=add(d-1);
    }
    f0(i,a){
        x=x+c[i]+e[i];
    }
    cout<<x;
    return 0;
}