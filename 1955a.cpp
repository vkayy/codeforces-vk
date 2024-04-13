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
#define IN(i,l,r) (l<i&&i<r)
#define LINR(i,l,r) (l<=i&&i<=r)
#define LIN(i,l,r) (l<=i&&i<r)
#define INR(i,l,r) (l<i&&i<=r)

int nene(ll k, vi &a, ll ni) {
    ll left = ni, elim;
    do {
        elim = 0;
        for (const auto &e : a) {
            if (left>=e) {
                elim++;
            }
        }
        left -= elim;
    } while (elim>0);
    return left;
}

void solve() {
    ll k, q;
    cin>>k>>q;
    vi a(k);
    rep(i, 0, k) {
        cin>>a[i];
    }
    vi n(q);
    rep(i, 0, q) {
        cin>>n[i];
    }
    rep(i, 0, q) {
        cout<<nene(k, a, n[i])<<" ";
    }
    cout<<nl;
}

int main() {
    FASTIO
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    } 
    return 0;

}

