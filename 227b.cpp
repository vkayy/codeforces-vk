// file=227b
// g++ $file.cpp -std=c++17 -o $file && time ./$file < $file-in.txt

// #include <bits/stdc++.h>
#include "bits/stdc++.h"
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
    ll n, m, q, v, p;
    cin >> n;
    vi arr(n), res(n);
    rep(i, 0, n) {
        cin >> arr[i];
        res[arr[i]-1] = i+1;
    }
    cin >> m;
    while (m--) {
        cin >> q;
        v += res[q-1];
        p += n-res[q-1]+1;
    }
    cout<<v<<" "<<p<<nl;
}

int main() {
    FASTIO
    solve();
    return 0;

}

