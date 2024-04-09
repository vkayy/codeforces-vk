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

void solve() {
    ll n, res;
    cin>>n;
    vii ab(n);
    rep(i, 0, n) {
        ll ai, bi;
        cin>>ai>>bi;
        ab[i]=mp(ai, bi);
    }
    res = n;
    rep(i, 0, n) {
        ii abi = ab[i];
        rep(j, 0, n) {
            ii abj = ab[j];
            if (i!=j && abj.second==abi.first) {
                res--;
                break;
            }
        }
    }
    cout<<res<<nl;
}

int main() {
    FASTIO
    solve();
    return 0;

}

