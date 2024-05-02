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
#define f0(lcv, hi) for (unsigned long long int lcv = 0; lcv < hi; lcv++)
#define fb(lcv, hi) for (int lcv = hi; lcv >= 0; lcv--)
#define f1(lcv, hi) for (unsigned long long int lcv = 1; lcv <= hi; lcv++)

int MOD = 1e9 + 7;
// Hardcoded, directly change from here for functions!

const int MX_SZ = 1e5 + 5;
int par[MX_SZ];

int comp(int x,int y){
    int m=0,n=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            m++;
        }
    }
    for(int i=2;i<=y/2;i++){
        if(y%i==0){
            n++;
        }
    }
    if(m>0&&n>0){
        return 1;
    }
    return -1;
}

void tests()
{
    int a,c=1,d=1,e=0,f=0;
    cin>>a;
    A:
    if(((a-c)/2+(a+d)/2==a)&&(comp((a-c)/2,(a+d)/2)==1)){
        cout<<(a-c)/2<<" "<<(a+d)/2;
        exit(0);
    }
    c++;
    d++;
    goto A;
}

int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

        tests();
    return 0;
}