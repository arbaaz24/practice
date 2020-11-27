//we should ouput a string
//some work required to get hexadecimal
#include<bits/stdc++.h>
#define FOR(i,a,n) for(int i=(a);i<=(n);++i)
#define ROF(i,a,n) for(int i=(a);i>=(n);--i)
#define ll long long 
using namespace std;
int main(){
	int t;cin>>t;
   while(t--){	
	   int n;	cout<<"Enter number: ";	cin>>n;
   	   int a,b;	cout<<"\nenter from and to base: ";	cin>>a>>b;
	   int res=0;
	   res+=n%10; n/=10;
		while(n>0){
			res+=(n%10)*a; a*=a; n/=10;
		} 
		string ans="";
		while(res>0){
			ans.append(1,res%b+48);
			res/=b;
		}
		reverse(ans.begin(),ans.end());
	   cout<<ans<<"\n";
   }	   
	return 0;
}
