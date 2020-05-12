#include <bits/stdc++.h>
#define MAXN 200100
#define pii pair<int,int>
#define ff first
#define ss second
#define ll long long
#define in_range(x, y, n) (x >= 0 and x<n and y >=0 and y<n)
using namespace std;
const ll mod = 1e9 + 7;
map<ll, ll> dp;

ll solve(ll x){
    if (dp[x]) return dp[x];
    return dp[x] = (solve(x/2LL) + solve((x-1LL)/2LL) + solve((x-2LL)/2LL))%mod;
}

int main (){
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;

    dp[0] = 1;
    dp[1] = 2;

    cout << solve(n) << endl;
    return 0;
}
