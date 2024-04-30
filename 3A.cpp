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

// make sure to sort before applying unique //  only consecutive duplicates would be removed

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
    string c, d;
        cin>>c;
        cin>>d;
        int r = 50-c[1];
        char t = c[0];
        int n = 50-d[1];
        char m = d[0];
        int w = t-97;
        int z = m-97;
        int x = abs(8-r+97-(int)t);
        int y = abs(8-t+97-(int)m);
        int k = x;
        int l = y;
        int v = abs(z-k);
            if(x > y){
                k=k-x+1;
                cout<<k<<'\n';
                if(z > w)
                while(k!=0){
                    cout<<"RU\n";
                    k--;
                }
                if(w > z)
                while(k!=0){
                    cout<<"LU\n";
                    k--;
                }
            }
            k=x;
            l=y;
            if(x < y){
                k=k+y;
                cout<<k<<'\n';
                if(z > w)
                while(v!=0){
                    cout<<"RD\n";
                    v--;
                }
                if(w > z)
                while(k!=0){
                    cout<<"LD\n";
                    k--;
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