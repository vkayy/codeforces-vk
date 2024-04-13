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
    ll n;
    cin>>n;
    string sum_str;
    rep(i, 1, n+1) {
        sum_str += to_string(i)+" ";
    }
    sum_str.pop_back();
    ll s(0), m(n*2);
    rep(i, 1, n+1) {
        s += i*(2*i-1);
    }
    cout<<s<<" "<<m<<nl;
    rep(i, 0, n) {
        cout<<1<<" "<<n-i<<" "<<sum_str<<nl;
        cout<<2<<" "<<n-i<<" "<<sum_str<<nl;
    }
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
 