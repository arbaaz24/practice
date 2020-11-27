//to calculate if a number is prime or not
#include<bits/stdc++.h>
#define FOR(i,a,n) for(int i=(a);i<=(n);++i)
#define ROF(i,a,n) for(int i=(a);i>=(n);--i)
#define ll long long 
using namespace std;
int main(){
	int t;cin>>t;
   while(t--){	
		ll n; cin>>n; vector<bool>is_prime(n+1,true);//since bool only requires 1 byte
		is_prime[0]=is_prime[1]=false;
		FOR(i,2,n){
			if(is_prime[i] && i*i<=n){
				for(int j=i*i; j<=n ;j+=i)
				is_prime[j]=false;
			}
		}
		cout<<is_prime[n]<<"\n";
   }	   
	return 0;
}
