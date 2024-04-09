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

int closest(vi &values, int n, int target) {
    int left = 0, right = n - 1;
    while (left < right) {
        if (abs(values[left] - target)
            <= abs(values[right] - target)) {
            right--;
        }
        else {
            left++;
        }
    }
    return values[left];
}

void solve() {
    ll n, m, d, mod, res(0);
    cin>>n>>m>>d;
    vi values(n*m);
    rep(i, 0, n*m) {
        cin>>values[i];
        if (!i) mod = values[i]%d;
        else if (mod!=values[i]%d) {
            cout<<-1<<nl;
            return;
        }
    }
    sort(all(values));
    ll md = values[n*m/2];
    rep(i, 0, n*m)
        res += abs(md-values[i])/d;
    cout<<res<<nl;
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

