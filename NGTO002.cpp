#include<bits/stdc++.h>

using namespace std;
const int N=1000000;
int prime[N];

void sieve(){
	prime[0]=1;prime[1]=1;
	for(int i=2;i<=sqrt(N);i++){
		if(prime[i]==0){
			for(int j=i*2;j<=N;j+=i){
				prime[j]=1;
			}
		}
	}
}
void result(){
	int count=0;
	int x,y;
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(prime[i]==0){
			count++;
		}
		
	}
	cout<<count;
}
int main(){
	int t;
	cin>>t;
	sieve();
	while(t--){
		
		result();
	}
	
}
