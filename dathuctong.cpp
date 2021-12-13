#include<bits/stdc++.h>

using namespace std;
int sumOfi(int n){
	int sum=0;
	for (int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}

double sumOfPolynomial(int n,double x){
	double sum1=0;
	if(x==0)
	  return 0;
	if(n==1)
	  return x;
	for(int i=2;i<=n;i++){
	    sum1+=(pow(x,i)/sumOfi(i));	
	}
	return sum1+x;
}

int main(){
	int t;
	cin>>t;
	int n;
	double x;
	while(t--){
	cin>>n;
	cin>>x;
	cout<<setprecision(3)<<fixed<<sumOfPolynomial(n,x)<<endl;
}
}
