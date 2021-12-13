#include<bits/stdc++.h>

using namespace std;

bool check_divisor(long long x){
	
	int count=0;
	if(x<2){
		return false;
	}
	  
	  
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
		
		while(x%i==0){
			
			x/=i;
			count++;
			if(count>1){
		return true;
		}
		
	 }
    }
}

return false;
}
int main(){
	int t;
	long long x;
	cin>>t;
	while(t--){
		cin>>x;
		if(check_divisor(x)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
} 
