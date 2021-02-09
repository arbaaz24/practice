#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(int i=(0);i<(n);++i)
#define Fo(i,k,n) for(int i=(k);k<n?i<n:i>n;k<n?++i:--i) // for k in range(n)
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) cin>>s
//pi --> p
#define p(x) cout<<x<<"\n"
#define pl(x) printf("%lld\n",x)
#define ps(s) cout<<s<<"\n"
#define deb(x) cout<< #x << "=" << x << "\n" //for debugging statements
#define deb2(x, y) cout<< #x << "=" << x << #y << "=" << y
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it=a.begin(); it!=a.end(); ++it)
#define PI 3.1415926535897932384626i
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
vi g[N]; //global vector (mostly used for graph matrix)
int a[N]; //global array
int n, m, k; //boiler plate declarations
//=======================
//using namespace std::chrono;
//auto start = high_resolution_clock::now();

void solve(){
	int x, y;
	si(x); si(y);
	string s; ss(s);
	int x2, x3, y3, y2;
	x2=y2=x3=y3=0;
	fo(i, (int)s.size()){
		if(s[i]=='R')++x2;
		if(s[i]=='L')--x3;
		if(s[i]=='U')++y2;
		if(s[i]=='D')--y3;
		if((y<0 && x<0 && x3<=x && y3<=y) || (x>=0 && y>=0 && x2>=x && y2>=y) || (x<0 && y>=0 && x3<=x && y2>=y) || (x>=0 && y<0 && x2>=x && y3<=y)){
			p("YES");
			return;
		}
		if(a==b){
		
		}
	
	p("NO");
}
			

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	int t=1;
    si(t);
	while(t--){
		solve();
	}

	return 0;
}


