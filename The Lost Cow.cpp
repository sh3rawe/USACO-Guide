// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=735

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

ll gcd(ll a, ll b){
    while(b != 0){
        ll a2 = a; // stores the old version of a
        a = b;
        b = a2%b;
    }
    return a;
}

ll lcm(ll a, ll b){
    return (a*b) / gcd(a,b);
}

ll SumofRanges(ll start, ll end){
    if(start > end)
        swap(start, end);
    ll sum =  (end*(end+1))/2 - (start*(start+1))/2;
    sum += start;  // in case you want the sum inclusive
    return sum;
}

bool is_prime(ll n){
    ll r = n/2;
    if(n<2)
        return false;
    if(n == 2)
        return true;
    for(int i=2;i*i<=n;++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool cmp(pair<int, int> p1 ,pair <int, int> p2)
{
    if(p1.S != p2.S)
        return p1.S > p2.S;
    return p1.F < p2.F;
}

bool cmp_n(ll a, ll b){
    return a > b;
}

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    int x, y;
    cin >> x >> y;
    vi line;
    if(x == y) cout << 0;
    ef(x < y){
        int i = 1;
        while(x+i < y){
            line.pb(x+i);
            i *= -2;
        }
        line.pb(x+i);
        int le = (int)line.size();
        int ans = 1;
        REP(i, 0, le-1)ans += abs(line[i]-line[i+1]);
        ans -= (line[le-1] - y);
        cout << ans;
    }
    else{
        int i = 1;
        while(x+i > y){
            line.pb(x+i);
            i *= -2;
        }
        line.pb(x+i);
        int le = (int)line.size();
        int ans = 1;
        REP(i, 0, le-1)ans += abs(line[i]-line[i+1]);
        ans -= (y - line[le-1]);
        cout << ans;
    }
}

int main(){
    Sha3rawy_The_Flash
    setIO("lostcow");
    ll tc=1; //cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
