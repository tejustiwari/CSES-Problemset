//tejustiwari
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
typedef long long int ll;   typedef vector<int> vi; typedef vector<ll> vll;   typedef pair<int,int>	pi;  typedef pair<ll,ll>	 pll;
const  ll M =1000000007;    const ll M1 = 998244353;    const double PI = 3.141592653589793;

//------------------------Template Above------------------------

int main(){
  fio
  ll n;
  cin>>n;
  cout<<n<<' ';
  while(n!=1){
    if(n%2==0)
      n/=2;
    else
      n=n*3+1;
    cout<<n<<' ';
  }
  return 0;
}

//--------------------------------------------------------------
