// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=615

#include <bits/stdc++.h>

using namespace std;
using namespace string_literals;

#define Free_Palestine ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define ld long double
#define dd double
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repr(i,a,b) for (int i = a; i >= b; i--)
#define repe(i,a,b) for (int i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define ef else if
#define pb(x) push_back(x)
#define F first
#define S second
#define sp " "
#define setIO(name) freopen(name ".in","r",stdin);freopen(name ".out","w",stdout)
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef vector<pair<ll, ll>> vpll;
typedef map<ll, ll> mpll;
/*const double pi = 3.1415926535897;
const ll MOD=998244353, oo = 100000000000000000;
const int N = 1e5+5;*/

int main(){
    Free_Palestine
    setIO("pails");
    int x, y, m;
    cin >> x >> y >> m;
    int x_pails = m/x;
    int y_pails = m/y;
    int ans = 0;
    repe(i,0,x_pails){
        repe(j,0,y_pails){
            int sum = 0;
            sum = (i*x) + (j*y);
            if(sum <= m)
                ans = max(ans, sum);
        }
    }
    cout << ans;
    return 0;
}
