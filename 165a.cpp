// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

#include "bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
#define FASTIO                \
    ios ::sync_with_stdio(0); \
    cin.tie(0);               \
    cout.tie(0);
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define nl "\n"
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i=a; i<b; i++)

void solve() {
    ll n, x, y, res = 0;
    cin>>n; vii cs(n);
    rep(i, 0, n) {
        cin>>x>>y;
        cs[i] = mp(x, y);
    }
    for (const auto &[x, y] : cs) {
        bool rt, lt, lw, up;
        rt = lt = lw = up = false;
        for (const auto &[nx, ny] : cs) {
            if (nx>x && ny==y) rt = true;
            if (nx<x && ny==y) lt = true;
            if (nx==x && ny<y) lw = true;
            if (nx==x && ny>y) up = true;
            if (rt&&lt&&lw&&up) break;
        }
        res += rt&&lt&&lw&&up;
    }
    cout<<res<<nl;
}

int main() {
    FASTIO
    // int tc;
    // cin>>tc;
    // while(tc--) {
    //     solve();
    // } 
    solve();
    return 0;

}

