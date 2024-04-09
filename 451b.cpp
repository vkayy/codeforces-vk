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
    ll n, l, r, k, mn(LONG_MAX), mx(LONG_MIN);
    bool valid = true;
    cin>>n;
    vi a(n), a_sort(n);
    rep(i, 0, n) cin>>a[i];
    l = 0;
    while (l<n && a[l]<a[l+1]) l++;
    r = l;
    while (r<n && a[r]>a[r+1]) {
        mx = max(mx, a[r]);
        mn = min(mn, a[r++]);
    }
    rep(i, r, n-1) {
        if (a[i]>a[i+1]) {
            cout<<"no"<<nl;
            return;
        }
    }
    if (r<n-1 && mx>a[r+1] || l && mn<a[l-1]) {
        cout<<"no"<<nl;
        return;
    }
    l = min(l+1, n);
    r = min(r+1, n);
    cout<<"yes"<<nl<<l<<" "<<r<<nl;
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

