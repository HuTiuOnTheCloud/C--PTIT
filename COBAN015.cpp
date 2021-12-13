#include<bits/stdc++.h>

using namespace std;
int N,X[100],K;
void result(){
	cout<<"[";
	for(int i=1;i<=K;i++){
		cout<<X[i]<<(i<K?" ":"]");
	}
	cout<<endl;
}
int count(int n,int k){
	if(n==k||k==0){
		return 1;
	}
	if(k==1){
		return n;
	}
	return count(k-1,n-1)+count(k,n-1);
}
void Try(int i){
	for(int j=X[i-1]+1;j<=N-K+i;j++){
		X[i]=j;
		if(i==K){
			result();
		}else{
			Try(i+1);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N>>K;
		cout<<count(N,K)<<endl;
		X[0]=0;
		Try(1);
	}
	
	
}
