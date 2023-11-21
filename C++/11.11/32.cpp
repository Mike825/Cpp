#include <bits/stdc++.h>

using namespace std;

int n, a[5000000 + 5];

void quickSort(int l, int r) {
	if (l >= r) return;
	
	int i = l - 1, j = r + 1, pivot = a[l + r >> 1];
	while (i < j) {
		do i++; while (a[i] < pivot);
		do j--; while (a[j] > pivot);
		if (i < j) swap(a[i], a[j]);
	}
	quickSort(l, j);
	quickSort(j + 1, r);
	
}

int k;

void qs_findk(int l, int r) {
	if (l >= r) return;
	int i = l - 1, j = r + 1;
	int pivot = a[l + r >> 1];
	
	while (i < j) {
		do i++; while (a[i] < pivot);
		do j--; while (a[i] < pivot);
		if (i < j) swap(a[i], a[j]);
	}
	if (k <= j) qs_findk(l, j);
	else qs_findk(j + 1, r);
}

void findk() {
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qs_findk(0, n - 1);
	printf("%d", a[k]);
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	quickSort(0, n - 1);
	
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	findk();
	return 0;
}

