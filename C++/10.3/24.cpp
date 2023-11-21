#include <iostream>
#include <string>

using namespace std;

void swapInt1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapInt2(int * ap, int * bp) {
	int temp = * ap;
	* ap = * bp;
	* bp = temp;
}

void swapInt3(int & a, int & b) {
	int temp = a;
	a = b;
	b = temp;
}

struct tStudent {
	string name;
	char gender;
	int age;
};

int main() {
	int a = 10, b = 20;
	swapInt1(a, b);
	cout<<a<<" "<<b<<endl;
	
	swapInt2(& a, & b);
	cout<<a<<" "<<b<<endl;
	
	swapInt3(a, b);
	cout<<a<<" "<<b<<endl;
	
	tStudent xiaoming = {"Xiao Ming", 'm', 10};
	tStudent * p;
	p = & xiaoming;
	cout<<(* p).name<<" "<<(* p).gender<<" "<<(* p).age<<endl;
	
	
	return 0;
}

