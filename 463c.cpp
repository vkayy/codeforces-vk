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
    ll n, x1, y1, x2, y2, mx1(LONG_MIN), mx2(LONG_MIN);
    cin>>n;
    vector<vi> board(n, vi(n, 0));
    unordered_map<ll, ll> lead, tran;
    rep(i, 0, n) {
        rep(j, 0, n) {
            cin>>board[i][j];
            lead[i-j] += board[i][j];
            tran[i+j] += board[i][j];
        }
    }
    rep(i, 0, n) {
        rep(j, 0, n) {
            ll d = lead[i-j]+tran[i+j]-board[i][j];
            if ((i+j)%2 && d>mx2) {
                mx2 = d;
                x2 = i+1;
                y2 = j+1;
            } else if (!((i+j)%2) && d>mx1) {
                mx1 = d;
                x1 = i+1;
                y1 = j+1;
            }
        }
    }
    cout<<mx1+mx2<<nl<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<nl;
}

int main() {
    FASTIO
    solve();
    return 0;

}

