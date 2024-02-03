// Problem Limk: http://usaco.org/index.php?page=viewproblem2&cpid=1228

#include <bits/stdc++.h>

using namespace std;
using namespace string_literals;

#define Free_Palestine ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define ld long double
#define dd double
#define rep(i,a,b) for (ll i = a; i < b; i++)
#define repr(i,a,b) for (ll i = a; i >= b; i--)
#define repe(i,a,b) for (ll i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define ef else if
#define pb push_back
#define F first
#define S second
#define sp " "
#define endl "\n"
#define fi first
#define se second
#define watch(x) cout << (#x) << " is " << (x) << '\n'
#define setIO(name) freopen(name ".in","r",stdin);freopen(name ".out","w",stdout)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef vector<pair<ll, ll>> vpll;
typedef map<ll, ll> mpll;
// Directions {U , D , L , R , DR , UR , DL , UL}
//int dx[8] {-1 , 1 , 0 , 0 , 1 , -1 , 1 , -1};
//int dy[8] {0 , 0 , -1 , 1 , 1 , 1 , -1 , -1};
//const double pi = 3.1415926535897;
//const ll MOD = 1e9 + 7, oo = 100000000000000000;
//const int N = 1e9 + 5;

int main(){
    Free_Palestine
    int n;
    cin >> n;
    vector<pair<int,char>> loc(n);
    rep(i,0,n){
        cin >> loc[i].se;
        cin >> loc[i].fi;
    }
    sort(all(loc));
    int ans = n;
    rep(i,0,n){
        int liar = 0;
        rep(j,0,i){
            liar += (loc[j].se == 'L' ? 1 : 0);
        }
        rep(j,i+1,n){
            liar += (loc[j].se == 'G' ? 1 : 0);
        }
        ans = min(ans, liar);
    }
    cout << ans;
    return 0;
}
