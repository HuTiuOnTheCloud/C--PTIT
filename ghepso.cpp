#include <bits/stdc++.h>
#define SIZE 3
using namespace std;

void process() {
	// Test case
	int A[10000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	
	// Chuyển Test case từ int[] -> string[]
	string T[10000];
	for(int i = 0; i < n; ++i) T[i] = to_string(A[i]);
	// Sắp xếp mảng T thep thứ tự từ điển
	// Sử dụng giải thuật sắp xếp nổi bột
	for(int i = 0; i < n; ++i)
	for(int j = n - 1; j > i; --j)
	// if(T[j].compare(T[j - 1]) == 1) {
	if(T[j] > T[j - 1]){
		swap(T[j], T[j - 1]);
	}
	// In kết quả
	for(int i = 0; i < n; ++i) cout << T[i];
	cout << endl;
}

int main () {
	int t;
	cin >> t;
	while (t--)
	{
		process();
	}
	
}