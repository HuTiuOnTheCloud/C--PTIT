#include<bits/stdc++.h>

using namespace std;
bool prime(int n){
if(n<2)
 return false;
 for(int i=2;i<=sqrt(n);i++){
 	if(n%i==0)
 	  return false;
 }
 return true;	
}
bool digit_prime(int n){
	int temp;
	while(n){
		temp=n%10;
		if(!(prime(temp)))
		  return false;
		n/=10;
	}
	return true;
}
void result(int n){
	int count=0;
	for(int i=2;i<=n;i++){
		if(prime(i)&&digit_prime(i))
		count++;
	}
	cout<<count<<endl;
}

int main(){
	int t;
	int n;
	cin>>t;
	while(t--){
		cin>>n;
		result(n);
		
	}
	
}
