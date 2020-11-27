#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,n) for(int i=(a);i<=(n);++i)
#define ROF(i,a,n) for(int i=(a);i>=(n);--i)
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
	int n; cin>>n;	
	cout<<"the fibonacci number at indice "<<n<< " is:";
	if(n<=2) {cout<<1<<"\n";continue;}
	int i=1,size=log2(n);
	vector<bool>v(size+1);//using bool rahter than int saves space
	v[0]=n%2;
	while((n>>1) > 1){
		n>>=1;
		v[i]=n%2; ++i;
		}
	int f0=1,f1=1;
	//remember to decrement i by 1
	for(i-=1;i>=0;--i){
		int temp=f0;
		f0=f0*(2*f1-f0);  //2k indice(even)
		f1=temp*temp+f1*f1;//2k+1 indice(odd)
		if(v[i]){
			temp=f0;
			f0=f1;
			f1+=temp;
		}
	}
	cout<<f0<<"\n";
	}
}



