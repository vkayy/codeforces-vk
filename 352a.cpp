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

void solve() {
    ll n, cur, cnt(0);
    cin>>n;
    rep(i, 0, n) {
        cin>>cur;
        cnt += cur==5;
    }
    if (cnt/9 && cnt<n) cout<<string(cnt/9*9, '5').append(string(n-cnt, '0'))<<nl;
    else cout<<(cnt==n ? -1 : 0)<<nl;
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

