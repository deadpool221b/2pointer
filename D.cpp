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
    int n1;
    cin>>n1;
    fill(int,a,n1);
    int n2;
    cin>>n2;
    fill(int,b,n2);
    int n3;
    cin>>n3;
    fill(int,c,n3);
    int n4;
    cin>>n4;
    fill(int,d,n4);
    sort(all(a)); sort(all(b)); sort(all(c)); sort(all(d));
    vector<int> v(4);
    vector<int> u(4);
    int ans = inf;
    while(true){
        int mx = max({a[v[0]],b[v[1]],c[v[2]],d[v[3]]});
        int mn = min({a[v[0]],b[v[1]],c[v[2]],d[v[3]]});
        if(ans>mx-mn){
            ans= mx-mn;
            u = v;
        }
        if(mn==a[v[0]] && v[0]<n1-1){
            v[0]++;
        }
        else if(mn==b[v[1]] && v[1]<n2-1){
            v[1]++;
        }
        else if(mn==c[v[2]] && v[2]<n3-1){
            v[2]++;
        }
        else if(mn==d[v[3]] && v[3]<n4-1){
            v[3]++;
        }
        else break;
    }
    cout<<a[u[0]]<<" "<<b[u[1]]<<" "<<c[u[2]]<<" "<<d[u[3]];
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
