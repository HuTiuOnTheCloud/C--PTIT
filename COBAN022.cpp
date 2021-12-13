#include<bits/stdc++.h>

using namespace std;

int result(int x, int y,int m){
	int k=m/x;
	int count=k;
	int b=0;
	while(k>0){
		b=k+(b%y);
		k=b/y;
	    count+=k;
		
	}
	
	 return count;
}


int main(){
int t;
int x,y,m;
cin>>t;
while(t--){
cin>>x>>y>>m;
cout<<result(x,y,m);
	
}	
	
	
}
