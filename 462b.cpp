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

bool sort_by_snd(ii p1, ii p2) {
    if (p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second < p2.second;
};

void solve() {
    vector<pair<char, ll>> card_freq;
    unordered_map<char, ll> m;
    ll n, k, res(0);
    string toast;
    char cur;
    cin>>n>>k;
    rep(i, 0, n) {
        cin>>cur;
        m[cur]++;
    }
    for (const auto &[k, v] : m) {
        card_freq.pb(mp(k, v));
        m[k] = 0;
    }
    sort(all(card_freq), sort_by_snd);
    while (k && !card_freq.empty()) {
        auto [ch, v] = card_freq.back();
        const ll n = k<v ? k : v;
        toast.append(string(n, ch));
        card_freq.pop_back();
        k -= n;
    }
    for (const auto &ch : toast) m[ch]++;
    for (const auto &[k, v] : m) res += v*m[k];
    cout<<res<<nl;
}

int main() {
    FASTIO
    solve();
    return 0;

}

