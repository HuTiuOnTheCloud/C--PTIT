#include<bits/stdc++.h>

using namespace std;

bool snt(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	int l,r;
	while(t--){
		cin>>l>>r;
		int n;
		for(int i=r;i>=l;i--){
			if(snt(i)){
				n=i;
				break;
			}
			
		}
		cout<<n<<endl;
		
	}
	
	
}
