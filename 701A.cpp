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
#define fb(lcv, hi) for (int lcv = hi-1; lcv >= 0; lcv--)
#define f1(lcv, hi) for (int lcv = 1; lcv <= hi; lcv++)

int MOD = 1e9 + 7;
// Hardcoded, directly change from here for functions!

const int MX_SZ = 1e5 + 5;
int par[MX_SZ];

int pos(int x[], int y[], int z, int m){
    f0(i,z){
        if(y[m]==x[i]){
            return i+1;
        }
    }
    return 0;
}
int bacpos(int x[], int y[], int z, int n){
    fb(i,z){
        if(y[n]==x[i]){
            return i+1;
        }
    }
    return 0;
}

void tests()
{
    int a;
    cin>>a;
    int b[a],c[a];
    f0(i,a){
        cin>>b[i];
        c[i]=b[i];
    }
    sort(c,c+a);
    f0(i,a/2){
        cout<<pos(b,c,a,i)<<" "<<bacpos(b,c,a,a-1-i)<<'\n';
        b[pos(b,c,a,i)-1]=0;
        b[bacpos(b,c,a,a-1-i)-1]=0;
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