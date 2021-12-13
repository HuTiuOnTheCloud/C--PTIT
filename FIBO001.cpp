#include<bits/stdc++.h>

using namespace std;

int nonFib(int n){
	int first=1,second=2,third=3;
	
	while(n>0){
		first=second;
		second=third;
		third=first+second;
		
		n=n-(third-second-1);
	}
	
	n=n+(third-second-1);
	
	return second+n;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<nonFib(n)<<endl;
		
		
	}
	
}
