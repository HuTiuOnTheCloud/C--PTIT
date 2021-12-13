#include<bits/stdc++.h>

using namespace std;
void store(set<int>& hash,int max){
	int first=0,second=1;
    hash.insert(first);
    hash.insert(second);
    while(second<max){
    	int temp=first+second;
    	hash.insert(temp);
    	first=second;
    	second=temp;
	}
}
void result(int n){
	set<int> hash;
	store(hash,n);
	
	for(int i=0;i<=n;i++){
		if(hash.count(i)!=0&&hash.count(n-i)!=0){
			cout<<i<<" "<<n-i<<endl;
			return;
		}
		
	}
	cout<<"-1"<<endl;
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		result(n);
	}
	
}
