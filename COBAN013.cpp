#include<bits/stdc++.h>

using namespace std;

int result(int a[],int n){
	int neg=0,pos=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			return -1;
		}
		if(a[i]>0){
			pos++;
		}else{
			neg++;
		}
	}
	return (pos>neg?neg:pos);
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
		}
    	cout<<result(arr,n)<<endl;
	}
}
