#include<bits/stdc++.h>

using namespace std;
long long num(long long k){
	int count=0;
	while(k>0){
		count++;
		k=k/10;
	}
	return count;
}
void isArmstrong(long long x){
	long long n=num(x);
	long long temp=x;
	long long sum=0;
	long long j;
	while(x>0){
	    j=x%10;
		sum+=pow(j,n);
		x=x/10;
	}
if(sum==temp){
	cout<<"1"<<endl;
}else{
	cout<<"0"<<endl;
}
	  
	
	
}
int main(){
	int t;
	cin>>t;
  long long n;
	while(t--){
	  
		cin>>n;
        isArmstrong(n);
}
}
