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
    int a,b,c,x,y,z=0;
    cin>>a>>b>>c;
    int d[b],e[c];
    f0(i,b){
        cin>>d[i];
    }
    f0(i,c){
        cin>>e[i];
    }
    f0(i,max(b,c)){
        f0(j,min(b,c)){
            if((max(b,c)==b)?(d[i]==e[j]):(e[i]==d[j])){
                z++;
            }
        }
    }
    /*//cout<<z<<'\n';*/
    if(z<min(b,c)){
    f0(i,a){
        x=0,y=0;
        f0(j,b){
            if(d[j]==i+1){
                x++;
            }
        }
        f0(j,c){
            if(e[j]==i+1){
                y++;
            }
        }
        if(x==y){
            if(max(b,c)==b){
                cout<<"2 ";
            }
            if(min(b,c)==b){
                cout<<"1 ";
            }
        }
        if(x>0&&y==0){
            cout<<"1 ";
        }
        if(y>0&&x==0){
            cout<<"2 ";
        }
    }
    }
    if(z==min(b,c)&&b!=c){
        f0(i,a){
            if(max(b,c)==b){
                cout<<"1 ";
            }
            if(min(b,c)==b){
                cout<<"2 ";
            }
        }
    }
    if(b==c&&z==b){
        f0(i,a){
            cout<<"1 ";
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