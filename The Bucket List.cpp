// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=856

#include <bits/stdc++.h>

using namespace std;
using namespace string_literals;

#define Sha3rawy ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
typedef pair<int, int> pii;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define F first
#define S second

bool comp(const pair<pii, int>& a, const pair<pii, int>& b){
    return a.F.F < b.F.F;
}

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    int n;
    cin >> n;
    vector<pair<pii,int>> v(n);
    rep(i,0,n){
        cin >> v[i].F.F >> v[i].F.S >> v[i].S;
    }
    sort(v.begin(),v.end(),comp);
    int ans = v[0].S;
    int empty_now = 0;
    rep(i,1,n){
        empty_now = ans;
        for(int j=i-1; j>=0; j--){
            if(v[i].F.F <= v[j].F.S)
                empty_now -= v[j].S;
        }

            if(v[i].S - empty_now >= 0){
                ans += (v[i].S - empty_now);
                empty_now = 0;
            }
            else{
                empty_now -= v[i].S;
            }

    }
    cout << ans;
}

int main(){
    Sha3rawy
    setIO("blist");
    ll tc=1;
    while(tc--) {
        solve();
    }
    return 0;
}
