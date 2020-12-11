//tejustiwari
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
typedef long long int ll;
const ll M =1000000007;

//------------------------Template Above------------------------

vector<ll> combinations(1000006, -1);

ll diceCombinations(ll value) {
  if(value == 0)
    return 1;
  else if(value < 0)
    return 0;
  else if(combinations[value] == -1) {
    combinations[value] = 0;
    for(int i = 1; i <= 6; i++) {
      if(i <= value) {
        combinations[value] = ( combinations[value]%M + diceCombinations(value - i)%M )%M;
      }
    }
  }

  return combinations[value] % M;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll n, x;
  cin >> n >> x;
  // memset(combinations,-1, sizeof(combinations));
  cout << diceCombinations(n);
  return 0;
}

//--------------------------------------------------------------
