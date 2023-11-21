#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

void sortNumbersInFiles() {
	FILE *fin, *fout;
	int n, a[n];
	fin = fopen(".\\test1.txt", "r");
	fout = fopen(".\\test2.txt", "w");
	
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	sort(a, a + n);
	
	for (int i = 0; i < n; i++) {
		fprintf(fout, "%d\t", a[i]);
	}
	
	cout<<"Your files have been processed successfully."<<endl;
}

void outputFileInReverse() {
	int n, a[100];
	freopen(".\\test3.txt", "r", stdin);
	freopen(".\\test4.txt", "w", stdout);
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	
	for (int i = n; i >= 0; i--) {
		printf("%d\t", a[i]);
	}
	
	//cout<<"\nYour files have been processed successfully."<<endl;
}

int main() {
	sortNumbersInFiles();
	outputFileInReverse();
	
	return 0;
}

