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
    ll n, cur, d; cin>>n;
    vector<ll> valid;
    unordered_set<ll> enc;
    unordered_map<ll, vi> seq;
    unordered_map<ll, ll> res;
    rep(i, 0, n) {
        cin>>cur;
        seq[cur].push_back(i);
        enc.insert(cur);
    }
    for (const auto &[k, v] : seq) {
        if (v.size()<2) {
            res[k] = 0;
            continue;
        }
        d = v[1]-v[0];
        rep(i, 1, v.size()) {
            if (d!=v[i]-v[i-1]) {
                d = 0;
                enc.erase(k);
                break;
            }
        }
        res[k] = d;
    }
    copy(all(enc), back_inserter(valid));
    sort(all(valid));
    cout<<valid.size()<<nl;
    for (const auto &n : valid)
        cout<<n<<" "<<res[n]<<nl;
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

