#include<bits/stdc++.h>

using namespace std;

long long result(int k){
	
	return (9*pow(10,(k-1)/2));
	
}
int main(){
	int t;
	int k;
	cin>>t;
	while(t--){
		cin>>k;
		cout<<result(k)<<endl;
		
	}
	
}
