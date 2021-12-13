#include<bits/stdc++.h>

using namespace std;

long long result(long long n){
	long long i=2,sum=0;
	while(n/i>=1){
		sum+=n/i;
		i*=2;
	}
	return sum;
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
