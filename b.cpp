#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=(0);i<(n);++i)
#define Fo(i,k,n) for(int i=(k);k<n?i<n:i>n;k<n?++i:--i) // for k in range(n)
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define deb(x) cout<< #x << "=" << x << endl; //for debugging statements
#define deb2(x, y) cout<< #x << "=" << x << #y << "=" << y;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it=a.begin(); it!=a.end(); ++it)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
//declaring most used functions
int mpow(int base, int exp); //binary exponentiation but with mod for big vals.
void ipgraph(int n, int m);// graph input
void dfs(int u, int par);
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6+13, M = N;
//=======================
vi g[N]; //global vector (mostly used as row for graph matrix)
int a[N]; //global array
int n, m, k; //boiler plate declarations
//=======================


void solve(){
	int i, j, n , m;
	cout<<"b.cpp alsochanged";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t=1;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}

int mpow(int base, int exp){
	base %= MOD;
	int res = 1;
	while(exp > 0){
		if(exp & 1) res=((ll)res*base) % MOD;
		base=((ll)base*base) % MOD;
		exp>>=1;
	}
	return res;
}

void ipgraph(int n, int m){
	int i, u ,v;
	while(m--){
		cin>>u>>v;
		--u;--v;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if(v == par) continue;
		dfs(v, u);
	}
}
