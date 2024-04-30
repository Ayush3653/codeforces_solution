#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nin int n; cin >> n;
#define nil ll n; cin >> n;
#define tit int t = 1; cin >> t;
#define til ll t = 1; cin >> t;
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vl vector<long>
#define vvl vector<long long>
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));

// make sure to sort before applying unique // else only consecutive duplicates would be removed

#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define f0(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for (int lcv = hi; lcv >= 0; lcv--)
#define f1(lcv, hi) for (int lcv = 1; lcv <= hi; lcv++)

int MOD = 1e9 + 7;
// Hardcoded, directly change from here for functions!

const int MX_SZ = 1e5 + 5;
int par[MX_SZ];

void tests()
{
    int a;
    cin>>a;
    if(a==0){
        cout<<"O-|-OOOO\n";
        exit(0);
    }
    while(a!=0){
    switch(a%10){
        case 0:
        cout<<"O-|-OOOO\n";
        a=a/10;
        break;
        case 1:
        cout<<"O-|O-OOO\n";
        a=a/10;
        break;
        case 2:
        cout<<"O-|OO-OO\n";
        a=a/10;
        break;
        case 3:
        cout<<"O-|OOO-O\n";
        a=a/10;
        break;
        case 4:
        cout<<"O-|OOOO-\n";
        a=a/10;
        break;
        case 5:
        cout<<"-O|-OOOO\n";
        a=a/10;
        break;
        case 6:
        cout<<"-O|O-OOO\n";
        a=a/10;
        break;
        case 7:
        cout<<"-O|OO-OO\n";
        a=a/10;
        break;
        case 8:
        cout<<"-O|OOO-O\n";
        a=a/10;
        break;
        case 9:
        cout<<"-O|OOOO-\n";
        a=a/10;
        break;
    }
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
