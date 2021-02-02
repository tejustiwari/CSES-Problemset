#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll M = 1e9 + 7;

//----------Template Above----------

ll numberOfWays (ll sum, ll idx, vector<ll> &coins, ll ways[][106]) {
  ll n = coins.size();
  if(sum == 0)
    return ways[sum][idx] = 1;
  else if(sum < 0 || idx < 0)
    return 0;
  if(ways[sum][idx] == -1) {
    if (coins[idx] <= sum) {
      ways[sum][idx] = (numberOfWays(sum - coins[idx], idx, coins, ways)%M + numberOfWays(sum, idx - 1, coins, ways)%M)%M;
    }
    else {
      ways[sum][idx] = numberOfWays(sum, idx - 1, coins, ways)%M;
    }
  }
  return ways[sum][idx];
}

void solve () {
  ll i, n, sum;
  cin >> n >> sum;
  vector<ll> coins(n);
  // vector<vector<ll>> ways(sum+6,vector<ll>(n+6,-1));
  ll ways[sum+6][106];
  memset(ways, -1, sizeof(ways));
  for (i = 0; i < n; i++) {
    cin >> coins[i];
  }
  sort(coins.begin(), coins.end());
  cout << numberOfWays(sum, n-1, coins, ways) <<'\n';
}

//---------- Main() Below ----------

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll t = 1;
  // cin >> t;
  while(t--)
    solve();
  return 0;
}
