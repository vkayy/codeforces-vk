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

ll mod = pow(10, 9)+7;

vector<vi> mult(vector<vi> m1, vector<vi> m2) {
    const int r1 = m1.size(), r2 = m2.size(), c2 = m2[0].size();
    vector<vi> res(r1, vi(c2, 0));
    rep(i, 0, r1) {
        rep(j, 0, c2) {
            rep(k, 0, r2) {
                res[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    return res;
}

vector<vi> exp(vector<vi> &t, ll n) {
    if (n<1) return {{1,0},{0,1}};
    vector<vi> res = exp(t, n/2);
    if (!(n%2)) return mult(res, res);
    else return mult(t, mult(res, res));
}

void solve() {
    ll f1, f2, n, res;
    cin>>f1>>f2>>n;
    vector<vi> t, m;
    if (n==1) {
        cout<<(f1+mod)%mod<<nl;
        return;
    }
    t = {{1,-1},{1,0}};
    m = {{f2},{f1}};
    res = mult(exp(t, max(n-2, 0ll)), m)[0][0];
    while (res<0) res += mod;
    cout<<res%mod<<nl;
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

