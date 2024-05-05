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
    int a,b,d,x;
    cin>>a>>b;
    if(b%a==0){
        cout<<b/a;
        exit(0);
    }
    if(a==1){
        cout<<b;
        exit(0);
    }
    if((a%10==0)){
        cout<<"1";
        exit(0);
    }
    if((a%5==0)&&(a%10!=0)){
        if(b!=5){
            cout<<"2";
            exit(0);
        }
        else{
            cout<<"1";
            exit(0);
        }
    }
    if((a%10==2||a%10==4||a%10==8||a%10==6)&&(b%2!=0)){
        for(int i=1;;i++){
            x=a*i;
            if(x%10==0){
                d=i;
                break;
            }
        }
        cout<<d;
        exit(0);
    }
    if((a%5!=0)&&(a%10!=0)){
        for(int i=1;;i++){
            x=a*i;
            if(x%10==b&&x>10){
                d=i;
                break;
            }
        }
        cout<<d;
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