#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,l,sum,sum1=0;
		
		cin>>n>>l;
	    sum=n*l+n*(n-1)/2;
		for(int i=0;i<n-1;i++){
			ll id;
			cin>>id;
			sum1+=id;
		}
		cout<<sum-sum1<<endl;
	}
	
}
