#include<bits/stdc++.h>

using namespace std;

void dec_value(int n,int a[],int b[]){
	
	long long dec=0;
	long long dec2=0;
	long long diff;
	long long base=1;
	
	
	for(int i=n-1;i>=0;i--){
		if(a[i]==1){
			dec+=base;
		}
		if(b[i]==1){
			dec2+=base;
		}
		base*=2;
		}
		if(dec>dec2){
			diff=dec-dec2-1;
		}else if(dec2>dec){
			diff=dec2-dec-1;
		}else{
			diff=0;
		}
		
		cout<<diff<<endl;
	}
	

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x[100],y[100];
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		for(int i=0;i<n;i++){
			cin>>y[i];
		}
	
		dec_value(n,x,y);
		
	}
	
}
