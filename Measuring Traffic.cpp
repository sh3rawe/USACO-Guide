// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=917

#include <bits/stdc++.h>

using namespace std;
using namespace string_literals;

#define Sha3rawy ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ef else if
#define F first
#define S second
#define sp " "

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    int miles;
    cin >> miles;
    vector<pair<string, pair<int,int>>> road(miles);
    REP(i, 0, miles){
        cin >> road[i].F;
        cin >> road[i].S.F >> road[i].S.S;
    }
    int mini = -1e9, maxi = 1e9;
    for(int i = miles-1; i>=0; i--){
        if(road[i].F == "none"){
            mini = max(mini, road[i].S.F);
            maxi = min(maxi, road[i].S.S);
        }
        ef(road[i].F == "on"){
            /*
               you want to get the maximum minimum and the minimum maximum
               , so we subtract the greater value from the minimum
               and the smaller value from the maximum
            */
            mini -= road[i].S.S;
            maxi -= road[i].S.F;
            if(mini < 0)
                mini = 0;
        }
        ef(road[i].F == "off"){
            mini += road[i].S.F;
            maxi += road[i].S.S;
        }
    }
    cout << mini << sp << maxi << '\n';

    mini = -1e9, maxi = 1e9;
    for(int i = 0; i<miles; i++){
        if(road[i].F == "none"){
            mini = max(mini, road[i].S.F);
            maxi = min(maxi, road[i].S.S);
        }
        ef(road[i].F == "on"){
            mini += road[i].S.F;
            maxi += road[i].S.S;
        }
        ef(road[i].F == "off"){
            mini -= road[i].S.S;
            maxi -= road[i].S.F;
            if(mini < 0)
                mini = 0;
        }
    }
    cout << mini << sp << maxi;
}

int main(){
    Sha3rawy
    setIO("traffic");
    ll tc=1; //cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
