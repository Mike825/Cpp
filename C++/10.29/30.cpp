//#include <iostream>
//#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int q[100000], hh, tt = -1, M;
char op[100000];

void push(int x) {
	q[++tt] = x;
}

bool empty() {
	if (hh > tt) return true;
	else return false;
}

void pop() {
	hh++;
}

int query() {
	return q[hh];
}

void clear() {
	memset(q, 0, sizeof(q));
	tt = -1, hh = 0;
}

void operateQueue() {
	//Get the number of operations
	scanf("%d", &M);
	
	//Do operations
	while (M--) {
		scanf("%s", op);
		if (!strcmp(op, "push")) {
			int x;
			scanf("%d", &x);
			push(x);
			printf("Finished.\n");
		}
		else if (!strcmp(op, "query")) {
			printf("Result: %d.\n", query());
		}
		else if (!strcmp(op, "pop")) {
			pop();
			printf("Finished.\n");
		}
		else if (!strcmp(op, "empty")) {
			switch (empty()) {
				case (true) : {
					printf("Result: YES.\n");
					break;
				}
				case (false) : {
					printf("Result: NO.\n");
					break;
				}
			}
		}
		else {
			cout << "Invalid operation. Please try again." <<endl;
			M++;
		}
	}
	
}

void slideWindow() {
	//Get the size of the array, the size of the window
	int n = 0, k = 0, a[100000];
	scanf("%d %d", &n, &k);
	
	//Get the items of the array
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	//
	for (int i = 0; i < n; i++) {
		if (!empty() && (i - k + 1) > query()) {
			pop();
		}
		while (!empty() && a[q[tt]] > a[i]) {
			tt--;
		}
		q[++tt] = i;
		if (i >= k - 1) printf("%d ", a[query()]);
		
	} 
	clear();
	printf("\n");
	for (int i = 0; i < n; i++) {
		if (!empty() && (i - k + 1) > query()) {
			pop();
		}
		while (!empty() && a[query()] < a[i]) {
			tt--;
		}
		q[++tt] = i;
		if (i >= k - 1) printf("%d ", a[query()]);
	}
}

int main() {
	operateQueue();
	slideWindow();
	
	return 0;
}

