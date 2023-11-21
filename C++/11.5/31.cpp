//#include <iostream>
//#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

void guess() {
	//Get a random number
	int x, res = rand() % 100 + 1;
	
	//Guess!
	cout << "Guess a number (1 to 100): ";
	cin >> x;
	do {
		if (x == res) break;
		else {
			if (x > res) {
				cout << "It is wrong. The number you entered is bigger. Guess again: ";
			}
			else {
				cout << "It is wrong. The number you entered is smaller. Guess again: ";
			}
			cin >> x;
		}
	}
	while (x != res) ;
	cout << "You're right!" << endl;
}

void queryNumber() {
	int n, m, a[100000] = {0};
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	while (m--) {
		int x;
		scanf("%d", &x);
		int l = 1, r = n, mid;
		while (l < r) {
			mid = l + r >> 1;
			if (a[mid] >= x) {
				r = mid;
			}
			else {
				l = mid + 1;
			}
		}
		if (a[l] == x) printf("%d \n", l);
		else printf("-1 \n");
	}
}

//Cut down trees
long long a[1000000] = {0}, m = 0, n = 0, l = 2e9, r = -1, mid = 0;
bool f(long long x) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		int y = a[i] - x;
		if (y > 0) ans += y;
	}
	if (ans >= m) return 1;
	else return 0;
}

void cutDownTrees() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
		if (a[i] < l) l = a[i];
		if (a[i] > r) r = a[i];
	}
	while (l < r) {
		mid = l + r + 1 >> 1;
		if (f(mid)) {
			l = mid;
		}
		else {
			r = mid - 1;
		}
	}
	printf("%lld", l);
}

int main() {
	guess();
	queryNumber();
	cutDownTrees();
	
	return 0;
}

