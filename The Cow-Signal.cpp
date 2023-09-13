// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=665

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
    int m, n, k;
    cin >> m >> n >> k;
    string a[m];
    loop(m)cin>>a[i];
    string b[m];
    REP(i, 0, m){
        int t = k;
        REP(j, 0, n){
            REP(u, 0, t)b[i].pb(a[i][j]);
        }
    }
    REP(j, 0, m){
        loop(k)cout<<b[j]<<'\n';
    }
}

int main(){
    Sha3rawy_The_Flash
    /*freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);*/
    ll tc=1; //cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
