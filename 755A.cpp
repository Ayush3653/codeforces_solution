#include <bits/stdc++.h>
using namespace std;
int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);
    long long int a;
    cin>>a;
    if(a==1){
        cout<<3;
        exit(0);
    }
    if(a==2){
        cout<<4;
        exit(0);
    }
    else{
    cout<<(pow(a-1,2)-1)/a;
    }

    return 0;
}