// file=69a
// g++ $file.cpp -std=c++17 && time ./$file < $file-in.txt

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
    int n, x, y, z;
    int dx, dy, dz;
    x = y = z = 0;
    cin >> n;
    while (n--) {
        cin>>dx>>dy>>dz;
        x += dx;
        y += dy;
        z += dz;
    }
    if (!x && !y && !z) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int main() {
    FASTIO
    // int tc;
    // cin>>tc;
    solve();
    return 0;

}

