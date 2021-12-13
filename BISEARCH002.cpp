#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	long long int arr[MAX];
	int test[MAX]{ 0 };
	
	
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		if (test[t] == 0) {
			test[t] = 1;
			arr[t] = i;
		}
	}
	
	for (int i = 1;i <= m;i++) {
		int t; cin >> t;
		
		if (test[t] == 1) {
			cout << arr[t] << " ";
		}
		
		else
			cout << 0 << " ";
	}
	
	
	
}
