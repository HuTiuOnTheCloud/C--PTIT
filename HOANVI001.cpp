#include<bits/stdc++.h>

using namespace std;
int x[100],used[100],n;
void result(){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<(i<n?" ":"\n");
	}
	
}
void hoan_vi(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			x[i]=j;
			used[j]=1;
			if(i==n)
				result();
			else
		
			hoan_vi(i+1);
		
		used[j]=0;
	
	}
 }
}
int main(){
	
	int t;
	cin>>t;
	memset(used,0,sizeof(used));
	while(t--){
		cin>>n;
		hoan_vi(1);
	}
}
