#include<bits/stdc++.h>

using namespace std;

long long sum_divisor(long long n,long long m){
	long long sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(m%i!=0){
				sum+=i;
			}
			if(m%(n/i)!=0){
				sum+=(n/i);
			
			if(i==n/i){
				sum-=i;
			}
		}
		
	}
}
	return sum;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		cout<<sum_divisor(n,m)<<endl;
	}
	
}
