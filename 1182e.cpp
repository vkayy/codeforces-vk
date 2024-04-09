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


ll floor_mod(ll x, ll mod) {
    ll res = x%mod;
    if (res<0) res += mod;
    return res;
}

ll mod = pow(10, 9)+7;

vector<vi> mat_iden(ll k) {
    vector<vi> res(k, vi(k));
    rep(i, 0, k) res[i][i] = 1;
    return res;
}

vector<vi> mat_mult(vector<vi> m1, vector<vi> m2, ll mod) {
    const int r1 = m1.size(), r2 = m2.size(), c2 = m2[0].size();
    vector<vi> res(r1, vi(c2, 0));
    rep(i, 0, r1) {
        rep(j, 0, c2) {
            rep(k, 0, r2)
                res[i][j] = (res[i][j]+m1[i][k]*m2[k][j]% mod)%mod;
        }
    }
    return res;
}

vector<vi> mat_pow(vector<vi> t, ll n, ll mod) {
    vector<vi> res = mat_iden(t.size());
    while (n) {
        if (n&1) res = mat_mult(res, t, mod);
        t = mat_mult(t, t, mod);
        n /= 2;
    }
    return res;
}

ll mod_pow(ll x, ll n, ll mod) {
    ll res = 1;
    while (n) {
        if (n&1) res = res*x%mod;
        x = x*x%mod;
        n/=2;
    }
    return res;
}

void solve() {
    vector<vi> m(5, vi(5, 0)), t;
    ll n, c, res(1); vi fn(3);
    cin>>n>>fn[2]>>fn[1]>>fn[0]>>c;
    m[0][0] = m[0][1] = m[0][2] = 1;
    m[1][0] = m[2][1] = 1;
    t = mat_pow(m, n-3, mod-1);
    rep(i, 0, 3)
        res = res*mod_pow(fn[i], t[0][i], mod)%mod;
    m[3][3] = m[3][4] = m[4][4] = 1;
    m[0][3] = 2;
    t = mat_pow(m, n-2, mod-1);
    res = res*mod_pow(c, t[0][4], mod)%mod;
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

