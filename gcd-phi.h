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

ll gcd(ll a, ll b) { 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
 
ll phi(ll n) { 
    ll result = 1; 
    for (ll i = 2; i < n; i++) 
        if (gcd(i, n) == 1) 
            result++; 
    return result; 
} 
