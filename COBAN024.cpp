#include<bits/stdc++.h>

using namespace std;
int count(int a[],int m,int n){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(m==0&&n>=1){
		return 0;
	}
	return count(a,m-1,n)+count(a,m,n-a[m-1]);
}
int main(){
	
	int n,m;
	int a[50];
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}	
	cout<<count(a,m,n);
	
}
