#include<bits/stdc++.h>
using namespace std;

int bisearch(int arr[],int left,int right,int x){
	while(left<=right){
		int mid=(left+right)/2;
	 if(arr[mid]==x&&arr[mid-1]!=x)
	   return mid;
	 if(arr[mid]<x){
	 	left=mid+1;
	 }else{
	 	right=mid-1;
	 }
	}
	return -1;
	
}

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n];
	int b[m];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<m;j++){
		cin>>b[j];
	}
	for(int j=0;j<m;j++){
		if(bisearch(arr,0,n-1,b[j])!=-1)
		   cout<<bisearch(arr,0,n-1,b[j])+1<<" ";
		else cout<<0<<" ";
	}
	
}
