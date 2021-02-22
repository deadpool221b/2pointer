#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define endl '\n'
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pf push_front
#define lb lower_bound
#define ub upper_bound
#define rev(a) a.rbegin(),a.rend()
#define all(a) a.begin(),a.end()
#define setbits(x) (__builtin_popcount(x))
#define pi pair<int,int>
#define precise(a,k) cout<<fixed<<setprecision(k)<<a;
#define fill(s,x,n) vector<s> x(n); rep(i,0,n) cin>>x[i];
#define minpq(type) priority_queue<type,vector<type>,greater<type>>
#define debug(...) cerr<<"{ "<<#__VA_ARGS__<<" = "<<(__VA_ARGS__)<<" }"<<endl;
#define debugp(...) cerr<<"{ "<<#__VA_ARGS__<<" = "<<"("<<(__VA_ARGS__).ff<<","<<(__VA_ARGS__).ss<<")"<<" }"<<endl;
#define debugv(...) cerr<<"{ "; for(int i=0; i<size(__VA_ARGS__); i++) cerr<<#__VA_ARGS__<<"["<<i<<"]"<<" = "<<(__VA_ARGS__)[i]<<" ; "; cerr<<"}"<<endl;
#define debugpv(...) cerr<<"{ "; for(int i=0; i<size(__VA_ARGS__); i++) cerr<<#__VA_ARGS__<<"["<<i<<"]"<<" = "<<"("<<(__VA_ARGS__)[i].ff<<","<<(__VA_ARGS__)[i].ss<<")"<<" ; "; cerr<<"}"<<endl;
#define mod 998244353
#define inf 1000000007
#define inf64  1000000000000000005
#define PI 3.141592653589793

void solve(){
    int n,re;
    cin>>n>>re;
    fill(int,a,n)
    int curr = 0;
    int l = 0;
    int ans = 0;
    rep(r,0,n){
        curr = a[r]-a[l];
       // cout<<r<<" "<<l<<" "<<curr<<endl; 
        while(curr>re){
            ans+=n-r;
            l++;
            curr = a[r]-a[l];
        }
    }
    cout<<ans;
}

    
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);  
    #endif
    */
    int test;
    //cin>>test;    
    test=1;
    //sieve();
    //int cse=1;
    while(test--){
       // cout<<"Case #"<<cse<<": ";
        solve();
        cout<<endl;
        //cse++;
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}
