#include <bits/stdc++.h>

using namespace std;
 

void result(){
	string n;
	cin>>n;
	int bit0,bit1, max=-1;
	for(int i=0;i<n.length();i++){
		for(int j=i;j<n.length();j++){
			bit0=0;
			bit1=0;
			for(int q=i;q<=j;q++){
				if(n[q]=='0'){
					bit0++;
				}
				if(n[q]=='1'){
					bit1++;
				}
			}
			if(max<(bit0-bit1)){
				max=bit0-bit1;
			} 
		}
	}
	cout<<max<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		result();
    
	}
    
}
