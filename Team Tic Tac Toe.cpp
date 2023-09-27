// Problem Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=831

#include <bits/stdc++.h>

using namespace std;
using namespace string_literals;

#define Sha3rawy ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define rep(i,a,b) for (int i = a; i < b; i++)
#define ef else if
const int N = 100001;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    char board[3][3];
    set<char> cnt;
    vector<string> teams(N);
    int idx = 0;
    rep(i,0,3){
        rep(j,0,3)
            cin >> board[i][j];
    }
    int cnt_1 = 0, cnt_2 = 0;

    // check the rows
    rep(i,0,3){
        cnt.clear();
        rep(j,0,3){
            cnt.insert(board[i][j]);
        }
        string temp;
        if(cnt.size() == 1){
            for(char c : cnt)temp += c;
            auto it = find(teams.begin(), teams.end(), temp);
            if(it != teams.end()) continue;
            else{
                cnt_1++;
                teams[idx++] = temp;
            }
        }
        ef(cnt.size() == 2){
            for(char c : cnt)temp += c;
            auto it = find(teams.begin(), teams.end(), temp);
            if(it != teams.end()) continue;
            else{
                cnt_2++;
                teams[idx++] = temp;
            }
        }
    }

    // check the columns
    rep(i,0,3){
        cnt.clear();
        rep(j,0,3){
            cnt.insert(board[j][i]);
        }
        string temp;
        if(cnt.size() == 1){
            for(char c : cnt)temp += c;
            auto it = find(teams.begin(), teams.end(), temp);
            if(it != teams.end()) continue;
            else{
                cnt_1++;
                teams[idx++] = temp;
            }
        }
        ef(cnt.size() == 2){
            for(char c : cnt)temp += c;
            auto it = find(teams.begin(), teams.end(), temp);
            if(it != teams.end()) continue;
            else{
                cnt_2++;
                teams[idx++] = temp;
            }
        }
    }

    // check the main diagonal
    cnt.clear();
    string temp;
    rep(i,0,3)cnt.insert(board[i][i]);
    if(cnt.size() == 1){
        for(char c : cnt)temp += c;
        auto it = find(teams.begin(), teams.end(), temp);
        if(it != teams.end())temp = "";
        else{
            cnt_1++;
            teams[idx++] = temp;
        }
    }
    ef(cnt.size() == 2){
        for(char c : cnt)temp += c;
        auto it = find(teams.begin(), teams.end(), temp);
        if(it != teams.end())temp = "";
        else{
            cnt_2++;
            teams[idx++] = temp;
        }
    }

    // check the secondary diagonal
    cnt.clear();
    temp = "";
    rep(i,0,3)cnt.insert(board[i][3-1-i]);
    if(cnt.size() == 1){
        for(char c : cnt)temp += c;
        auto it = find(teams.begin(), teams.end(), temp);
        if(it != teams.end())temp = "";
        else{
            cnt_1++;
            teams[idx++] = temp;
        }
    }
    ef(cnt.size() == 2){
        for(char c : cnt)temp += c;
        auto it = find(teams.begin(), teams.end(), temp);
        if(it != teams.end())temp = "";
        else{
            cnt_2++;
            teams[idx++] = temp;
        }
    }

    cout << cnt_1 << '\n' << cnt_2;
}

int main(){
    Sha3rawy
    setIO("tttt");
    ll tc=1;
    while(tc--) {
        solve();
    }
    return 0;
}
