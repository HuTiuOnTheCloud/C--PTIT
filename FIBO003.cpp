#include<bits/stdc++.h>

using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 

bool isFibonacci(int n)
{
    
    
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		while(1){
			n++;
			if(isFibonacci(n) == false)
			break;
		}
		cout<<n<<endl;
	}
	
}
