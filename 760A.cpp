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
    int a,b;
    cin>>a>>b;
    if(a==2){
        switch(b){
            case 1:
            cout<<4;
            break;
            default:
            cout<<5;
            break;
        }
        exit(0);
    }
    if(a%2!=0&&a<8){
        switch(b){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            cout<<5;
            break;
            case 6:
            case 7:
            cout<<6;
            break;
        }
    }
    if(a%2==0&&a<8){
        switch(b){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            cout<<5;
            break;
            case 7:
            cout<<6;
            break;
        }
    }
    if(a%2==0&&a>=8){
        switch(b){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            cout<<5;
            break;
            case 6:
            case 7:
            cout<<6;
            break;
        }
    }
    if(a%2!=0&&a>=8){
        switch(b){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            cout<<5;
            break;
            case 7:
            cout<<6;
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