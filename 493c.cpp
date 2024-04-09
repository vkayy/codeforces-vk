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

struct pair_hash {
    template<typename U, typename V>
    size_t operator() (const pair<U, V> &p) const {
        return hash<U>{}(p.first)^hash<V>{}(p.second);
    }
};

bool sort_by_fst(ii p1, ii p2) {
    if (p1.first==p2.first)
        return p1.second<p2.second;
    return p1.first < p2.first;
};

bool sort_by_snd(ii p1, ii p2) {
    if (p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second < p2.second;
};

void solve() {
    ll n, m, cur;
    vii ab;
    cin>>n;
    rep(i, 0, n) {
        cin>>cur;
        ab.pb(mp(0, cur));
    }
    cin>>m;
    rep(i, n, n+m) {
        cin>>cur;
        ab.pb(mp(1, cur));
    }
    sort(all(ab), sort_by_snd);
    ll mxa, mxb, mx, cura, curb;
    mxa = cura = 3*n;
    mxb = curb = 3*m;
    mx = cura-curb;
    for (const auto &[t, d] : ab) {
        if (t) curb--;
        else cura--;
        if (cura-curb>mx) {
            mx = cura-curb;
            mxa = cura;
            mxb = curb;
        }
    }
    cout<<mxa<<":"<<mxb<<nl;
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

