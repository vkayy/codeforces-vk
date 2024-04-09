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
    ll n, m, cur, lst;
    cin>>n>>m;
    deque<ii> cs(n);
    rep(i, 0, n) {
        ll cur; cin >> cur;
        cs.push_back(mp(i, cur));
    }
    while (!cs.empty()) {
        const auto [ci, cv] = cs.front();
        if (cv>m) cs.push_back(mp(ci, cv-m));
        cs.pop_front();
        lst = ci+1;
    }
    cout<<lst<<nl;
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

