#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void seqList() {
	//Address
	int a[] = {1, 2, 3, 4, 5};
	for (int *p = a; p < a + 5; p++) {
		cout<<p<<endl;
	}
	cout<<endl;
	
	double b[] = {1, 2, 3, 4, 5};
	for (double *p = b; p < b + 5; p++) {
		cout<<p<<endl;
	}
	cout<<endl;
	
	//Inquire
	double *p = (double *)0x71fde0;
	cout<<*p<<endl<<endl;		//5
	
	//Insert
	int an = 5;
	for (int i = an; i >= 2; i--) {
		a[i + 1] = a[i];
	}
	a[2] = 700;
	an++;
	
	for (int i = 0; i < an; i++) {
		printf("%d\t", i);
	}
	cout<<'\n'<<endl;
	
	//Delete
	for (int i = 3; i < an; i++) {
		a[i] = a[i + 1];
	}
	an--;
	for (int i = 0;i < an; i++) {
		printf("%d\t", a[i]);
	}
}

int main() {
	seqList();
	
	
	
	return 0;
}

