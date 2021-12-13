#include<bits/stdc++.h>
#define ll long long
using namespace std;

int sumOfFibo(int n){
	if(n<2){
		return 0;
		}
		
		ll f1=0,f2=2;
		ll sum=f1+f2;
		while(f2<=n){
			ll f3=4*f2+f1;
			if(f3>n){
				break;
			}
			
			f1=f2;
			f2=f3;
			sum+=f2;
		}
		return sum;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<sumOfFibo(n)<<endl;
	
}
}
