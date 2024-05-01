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
#define f0(lcv, hi) for (int lcv = 0; lcv <= hi; lcv++)
#define fb(lcv, hi) for (int lcv = hi; lcv >= 0; lcv--)
#define f1(lcv, hi) for (int lcv = 0; lcv < hi; lcv++)

int MOD = 1e9 + 7;
// Hardcoded, directly change from here for functions!

const int MX_SZ = 1e5 + 5;
int par[MX_SZ];

void tests()
{
    int a;
    cin>>a;
    f0(i,a/2){
        for(int j=0; j<(a/2 - i);j++){
            cout<<"*";
        }
        for(int j=0; j<(2*i + 1);j++){
            cout<<"D";
        }
        for(int j=0; j<(a/2 - i);j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    f1(i,a/2){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=(2*(a/2 - i)-1);j>0;j--){
            cout<<"D";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<'\n';
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