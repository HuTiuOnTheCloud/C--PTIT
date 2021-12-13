#include<bits/stdc++.h>

using namespace std;

void dec(long long n){
	int bin[100];
	int i=0;
	while(n>0){
		bin[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<bin[j];
	}
	cout<<endl;
}

int main(){
	
	int t;
	long long n;
	cin>>t;
	while(t--){
		cin>>n;
	dec(n);	
	}

}
