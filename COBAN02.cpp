#include<bits/stdc++.h>

using namespace std;

bool is_perfect(long long n){
	long long b=sqrt(n);
	return (b*b==n);
}
bool check_digits(long long x){
	while(x>0){
		long long j=x%10;
		if(j!=0&&j!=1&&j!=4&&j!=9){
			return false;
		}else{
			x/=10;
		}
		
	}
	return true;
}

long long result(int y){
	long long a,b;
	
	a=pow(10,(y-1));
	b=(pow(10,y));
	for(long long i=a;i<b;i++){
		if(is_perfect(i)==true&&check_digits(i)==true){
		   return i;
			
		}
		
}
return -1;


}
int main(){
	int n;
	int t;
	cin>>t;
	while(t--){
			cin>>n;
			cout<<result(n)<<endl;
	}

	
	
}
