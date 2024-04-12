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

bool all_same(const vi &a) {
    for (int i=1; i<a.size(); i++) {
        if (a[i]!=a[0]) {
            return false;
        }
    }
    return true;
}
void solve() {
    ll n, cur(0), res(LONG_MAX);
    cin>>n; vi a(n);
    rep(i, 0, n) {
        cin>>a[i];
        if (a[i]==a[0]) cur++;
        else res = min(res, cur), cur = 0;
    }
    res = min(res, cur);
    cout<<(all_same(a) ? -1 : res)<<nl;
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

