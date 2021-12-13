#include<bits/stdc++.h>
using namespace std;

void decToHex(int n){
	char hex[100];
	int i=0;
	while(n>0){
		int temp=0;
		temp=n%16;
		if(temp<10){
			hex[i]=temp+48;
			i++;
		}else{
			hex[i]=temp+55;
			i++;
		}
		n/=16;
	}
	for(int j=i-1;j>=0;j--){
		cout<<hex[j];
	}
}

int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		
		cin>>n;
		decToHex(n);
		cout<<endl;
	}
}
