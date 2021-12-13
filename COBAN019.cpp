#include<bits/stdc++.h>

using namespace std;

long long convert(long long n){
	long long dem=0;
	while(n>1){
		if(n%3==0){
			n/=3;
		}
		else if(n%2==0){
			n/=2;
		}else{
			n--;
		}
		dem++;
	}
	return dem+1;
}

int main(){
long long n;
int t;
cin>>t;

while(t--){
	cin>>n;
	cout<<convert(n)<<endl;
	
}

}
