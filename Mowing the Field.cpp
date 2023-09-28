// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=593

#include <bits/stdc++.h>

using namespace std;
using namespace string_literals;

#define Sha3rawy ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
typedef pair<int, int> pii;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define ef else if
const int N = 1e9;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    int n; cin >> n;
    int x = 0, y = 0, t = 0;
    map<pii, int> grid;
    int ans = N;
    rep(i, 0, n){
        char d;
        int s;
        cin >> d >> s;
        rep(j, 0, s){
            t++;
            if(d == 'N') y++;
            ef(d == 'S') y--;
            ef(d == 'E') x++;
            else x--;
            if(grid.count({x,y}) == 1)
                ans = min(ans, t - grid[{x,y}]);
            grid[{x,y}] = t;
        }
    }
    if(ans == N) cout << -1;
    else cout << ans;
}

int main(){
    Sha3rawy
    setIO("mowing");
    ll tc=1;
    while(tc--) {
        solve();
    }
    return 0;
}
