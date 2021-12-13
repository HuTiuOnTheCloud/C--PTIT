#include <iostream>
#include <algorithm>
#include <string>
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
	
	// Chuy?n Test case t? int[] -> string[]
	string T[10000];
	for(int i = 0; i < n; ++i) T[i] = to_string(A[i]);
	// S?p x?p m?ng T thep th? t? t? di?n
	// S? d?ng gi?i thu?t s?p x?p n?i b?t
	for(int i = 0; i < n; ++i)
	for(int j = n - 1; j > i; --j)
	// if(T[j].compare(T[j - 1]) == 1) {
	if(T[j] > T[j - 1]){
		swap(T[j], T[j - 1]);
	}
	// In k?t qu?
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
