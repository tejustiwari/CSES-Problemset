#include <bits/stdc++.h>
using namespace std;
#define ff                  first
#define ss                  second
#define pb                  push_back
#define mp                  make_pair
#define all(v)              v.begin(),v.end()
#define f(i,a,b,c)          for( i=a; i<b;i+=c)
#define rf(i,a,b,c)         for( i=b-1;i>=a;i-=c)
#define fo(i,n)             for( i=0; i < n ; i++)
#define rfo(i,n)            for( i=n-1; i >=0 ; i--)
#define mem(a,b)            memset(a, (b), sizeof(a))
#define alldec(v)           v.begin(),v.end(),greater<int>()
#define fio                 ios_base::sync_with_stdio(0); cin.tie(0);
#define debug1(x)           cout<<#x<<"="<<x<<endl;
#define debug2(x,y)         cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl;
#define debug3(x,y,z)       cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl;
#define debug4(x,y,z,w)     cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<" "<<#w <<"="<<w<<endl;
#define debugarray(arr,n)   for(int i=0;i<n;i++) {cout<<"i="<<i<<" arr[i]="<<arr[i]<<"\n";}
#define debugmatrix(a,n,m)  cout<<setw(5*m+8)<<"MATRIX\n\n";for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<setw(10)<<a[i][j];}cout<<"\n";}
#define file_io             freopen("Input_file_name.txt","r",stdin);freopen("Output_file_name.txt","w",stdout)
typedef long long int ll;   typedef vector<int> vi; typedef vector<ll> vll;   typedef pair<int,int> pi;  typedef pair<ll,ll>   pll;
const  ll M1 =1000000007;    const ll M = 998244353;      const double PI = 3.141592653589793;   vll primefactors, factors, fact;
bool isPowerTwo(ll x)       {return(x && !(x&(x-1)));}
ll   power(ll a, ll b)      {ll r=1;while(b){if(b&1)r=(r*a);a=(a*a);b>>=1;}return r;}
ll   powerM(ll a,ll b)      {ll r=1;while(b){if(b&1)r=(r*a)%M;a=(a*a)%M;b>>=1;}return r;}
void getFactorial(ll n)     {fact.pb(1);for(ll i=1;i<=n;i++)fact.pb((i*1ll*fact[i-1])%M);}
bool isPrime(ll n)          {if(n<2)return false;for(ll i=2;i*i<=n;i++)if(n%i==0)return false;return true;}
ll   modi(ll a)             {ll m=M,s=1,p=0; while(a>1){ll q=a/m,t=m;m=a%m;a=t;t=p;p=s-q*p;s=t;}return s>=0?s:s+M;}
void getFactors(ll n)       {factors.clear();for(ll i=1;i*i<=n;i++){if(n%i==0){factors.pb(i);if(n/i!=i)factors.pb(n/i);}}sort(all(factors));}
ll   add(ll a,ll b)         {return((a%M)+(b%M)+M)%M;}  ll sub(ll a,ll b){return((a%M)-(b%M)+M)%M;}  ll mul(ll a,ll b){return((a%M)*(b%M))%M;}
void getPrimeFactors(ll n)  {primefactors.clear();for(ll i=2;i*i<=n;i++){if(n%i==0){primefactors.pb(i);while(n%i==0)n=n/i;}}if(n!=1)primefactors.pb(n);}
bool isSubstring(string s1, string s2){ if (s1.find(s2) != string::npos) return true; else return false; }
ll   ncr(ll n, ll r)        {if(r==0)return 1;fact[0]=1;for(int i=1;i<=n;i++)fact[i]=fact[i-1]*i%M;return(fact[n]*modi(fact[r])%M*modi(fact[n-r])%M)%M;}

//----------Template Above----------

void solve() {
  ll n;
  cin >> n;
  vll v(n+1);
  v[0]=0;
  v[1]=0;
  v[2]=6;
  v[3]=28;
  v[4]=96;
  v[5]=252;
  v[6]=550;
  v[7]=1056;
  v[8]=1848;
  for (ll k = 9; k <= n; k++) {
    ll ans = 48 + (k-4)*(40 + (k-4)*8);
    ans /= 2;
    ans = 4*(k-1)*(k-2);
    v[k] = k*k*(k*k-1)/2 - ans;
  }
  for (ll i = 1; i <= n; i++) {
    cout << v[i] << '\n';
  }
}

//---------- Main() Below ----------

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll t = 1;
  // cin >> t;
  while(t--)
    solve();
  return 0;
}
