#include <iostream>

using namespace std;

//Insertion sort

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i < n; i++) {
		int np = a[i], j;
		for (j = i - 1; j >= 0; j--) {
			if (np < a[j]) a[j + 1] = a[j];
			else break;
		}
		a[j + 1] = np;
	}
	
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
	
	return 0;
}

