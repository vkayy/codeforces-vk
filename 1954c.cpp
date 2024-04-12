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
    string x, y;
    cin>>x>>y;
    ll diff(x.size());
    rep(i, 0, x.size()) {
        if (x[i]!=y[i]) {
            diff = i;
            if (x[i]<y[i])
                swap(x, y);
        break;
        }
    }
    rep(i, diff+1, x.size())
        if (x[i]>y[i]) swap(x[i], y[i]);
    cout<<x<<nl<<y<<nl;
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

