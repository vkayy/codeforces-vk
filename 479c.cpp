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

bool sort_by_fst(ii p1, ii p2) {
    if (p1.first==p2.first)
        return p1.second<p2.second;
    return p1.first < p2.first;
};

void solve() {
    ll n; cin>>n;
    vii dates(n);
    rep(i, 0, n) {
        ll a, b; cin>>a>>b;
        dates[i] = mp(a, b);
    }
    sort(all(dates), sort_by_fst);
    ll lst(dates[0].second);
    rep(i, 1, n) {
        ii cur = dates[i];
        if (dates[i].second<lst)
            lst = dates[i].first;
        else lst = dates[i].second;
    }
    cout<<lst<<nl;
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

// 3 1, 4 2, 5 2
// 4 3, 5 2, 6 1
