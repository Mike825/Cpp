#include <iostream>
#include <cstring>

using namespace std;

void calcSumBeforei(){
	//Define variables
	int n = 0;
	cout<<"Enter the number of the array items: ";
	cin>>n;
	int *a = new int[n];
	int *b = new int[n];
	
	//Get array items
	cout<<"Enter your array items: ";
	for (int i = 0; i < n; i++) {
		scanf("%d", a+i);
	}
	
	//Calculate result
	for (int i = 0; i < n; i++) {
		*(b+i) = 0;
		for (int j = 0; j < i+1; j++) {
			//b[i] += a[j];
			*(b+i) += *(a+j);
		}
	}
	
	//Output
	for (int i = 0; i < n; i++) {
		printf("%d\t", *(b + i));
	}
}

int main() {
	/*
	int a[5] = {0, 1, 2, 3, 4};
	cout<<*a<<endl;
	cout<<*(a+1)<<endl;
	cout<<*a+1<<endl;
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", a + i);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\t", *(a + i));
	}
	*/
	
	calcSumBeforei();
	
	return 0;
}

