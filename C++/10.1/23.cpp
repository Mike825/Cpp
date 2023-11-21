#include <iostream>

using namespace std;

int f1(int a) {
	return a;
} 

int f2(int a, int b) {
	return (a + b);
}
typedef int (*addP) (int, int);

void f3() {cout<<"item1"<<endl;}
void f4() {cout<<"item2"<<endl;}
void f5() {cout<<"item3"<<endl;}
typedef void (*fP)();

int main() {
	int (*p1)(int a);
	p1 = f1;
	cout<<p1(5)<<" "<<(*p1)(10)<<endl;
	
	addP p2;
	p2 = f2;
	cout<<p2(1, 2)<<" "<<(*p2)(2, 3)<<endl;
	
	fP menu[3] = {f3, f4, f5};
	int n;
	cin>>n;
	menu[n]();
	
	return 0;
}

