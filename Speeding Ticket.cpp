// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=568

#include <bits/stdc++.h>

using namespace std;
using namespace string_literals;

#define Sha3rawy_The_Flash ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define dd double
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<double> vd;
typedef vector<pair<int, int>> vpi;
typedef vector<pair<ll, ll>> vpll;
typedef map<ll, ll> mpll;
#define loop(n) for(int i=0;i<n;i++)
#define REP(i,a,b) for (int i = a; i < b; i++)
#define REPE(i,a,b) for (int i = a; i <= b; i++)
#define YES cout<<"YES"
#define NO cout<<"NO"
#define Yes cout<<"Yes"
#define No cout<<"No"
#define yes cout<<"yes"
#define no cout<<"no"
#define ef else if
#define pb(x) push_back(x)
#define F first
#define S second
#define sp " "
const double pi = 3.1415926535897;
const ll mod=1000000007, oo = 100000000000000000;
const ll N = 1e18;

void solve(){
    int n, m, ans = 0;
    cin >> n >> m;
    pair<int, int> a[n], b[m];
    loop(n)cin>>a[i].F>>a[i].S;
    loop(m)cin>>b[i].F>>b[i].S;
    REPE(i, 1, n)a[i].F += a[i-1].F;
    REPE(i, 1, m)b[i].F += b[i-1].F;
    for(int i=0, j=0; j<m; ){
        if(b[j].S > a[i].S){
            int t = b[j].S - a[i].S;
            if(t > ans)
                ans = t;
        }
        if(a[i].F == b[j].F) ++i, ++j;
        ef(a[i].F > b[j].F) ++j;
        ef(a[i].F < b[j].F) ++i;
    }
    cout << ans;
  
    /*REP(i, 0, n)cout << a[i].F << sp << a[i].S << '\n';
    REP(i, 0, m)cout << b[i].F << sp << b[i].S << '\n';*/
}

int main(){
    Sha3rawy_The_Flash
    /*freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);*/
    ll tc=1; //cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
