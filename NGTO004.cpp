#include<bits/stdc++.h>

using namespace std;
long long result(long long n){
	long long max;
	
	while(n%2==0){
		n/=2;
		if(max<2) max=2;
	}
	while(n%3==0){
		n/=3;
		if(max<3) max=3;
	}
	for(long i=5;i<=sqrt(n);i+=6){
		while(n%i==0){
			n/=i;
			if(max<i) max=i;
		}
		while(n%(i+2)==0){
			n/=(i+2);
			if(max<(i+2)) max=i+2;
		}
	}
	if(n>4) max=n;
	return max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<result(n)<<endl;
	}
	
}
