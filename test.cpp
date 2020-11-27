#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
long long n;cin>>n;
long long count=1e9;
for(int i=1;i<=sqrt(n);++i){
	count=min(count,(n%i!=0?n/i+i-1 : n/i+i-2));
}
cout<<count<<"\n";
}
return 0;
}
