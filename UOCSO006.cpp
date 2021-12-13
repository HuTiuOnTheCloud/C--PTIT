#include<bits/stdc++.h>

using namespace std;

long long friendNum( long long n){
	if(n<2)
	return 0;
	else
	{
		long long sum=0;
		long long m=sqrt(n);
		for(long long i=1;i<=m;i++){
			
			if(n%i==0){
				sum=sum+i+n/i;
			}
			
		}
		if(m*m==n){
			sum=sum=m;
		}else{
			sum=sum-n;
		}
		return sum;
	}

}
int main(){
	int t;
	long long a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(friendNum(a)==b&&friendNum(b)==a)
		   cout<<"YES"<<endl;
		   else
		   cout<<"NO"<<endl;
	}
	
}
