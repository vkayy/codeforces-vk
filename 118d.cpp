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


ll mod = 100000000;

ll n1, n2, k1, k2;
ll dp[101][101][11][11];

ll C(ll f, ll h, ll kf, ll kh) {
    if (dp[f][h][kf][kh]==-1) {
        if (!(f+h)) return 1;
        ll res = 0;
        if (f>0 && kf>0) res = (res+C(f-1, h, kf-1, k2))%mod;
        if (h>0 && kh>0) res = (res+C(f, h-1, k1, kh-1))%mod;
        dp[f][h][kf][kh] = res;
    }
    return dp[f][h][kf][kh];
}

void solve() {
    memset(dp, -1, sizeof(dp));
    cin>>n1>>n2>>k1>>k2;
    ll res = C(n1, n2, k1, k2);
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

