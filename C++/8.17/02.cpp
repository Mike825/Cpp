#include <iostream>
using namespace std;

int fact(int x) {
	if (x<0) return -1;
	else if (x==0 || x==1) return 1;
	else return x*fact(x-1);
}

int fib(int x) {
	if (x<1) return -1;
	else if (x==1) return 0;
	else if (x==2 || x==3) return 1;
	else return fib(x-1)+fib(x-2);
}

int main() {
	cout<<fact(5)<<endl;
	cout<<fib(10)<<endl;
	
	return 0;
}
