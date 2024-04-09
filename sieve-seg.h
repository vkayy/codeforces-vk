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

vi simple_sieve(ll limit, vi &primes) {
    vector<bool> mark(limit + 1, true);
    for (ll p=2; p*p<limit; p++) {
        if (mark[p] == true) {
            for (ll i=p*p; i<limit; i+=p)
                mark[i] = false;
        }
    }
    for (ll p=2; p<limit; p++) {
        if (mark[p] == true)
            primes.push_back(p);
    }
    return primes;
}
 
void segmented_sieve(ll n, vi &primes) {
    ll limit = floor(sqrt(n))+1;
    primes.reserve(limit);
    simple_sieve(limit, primes); 

    ll low = limit;
    ll high = 2*limit;

    while (low < n) {
        if (high >= n) 
           high = n;
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));
 
        for (ll i = 0; i < primes.size(); i++) {
            ll loLim = floor(low/primes[i]) * primes[i];
            if (loLim < low)
                loLim += primes[i];
            for (ll j=loLim; j<high; j+=primes[i])
                mark[j-low] = false;
        }
        for (int i = low; i<high; i++) {
            if (mark[i - low] == true) {
                // do something
            }
        }
        low = low + limit;
        high = high + limit;
    }
}
