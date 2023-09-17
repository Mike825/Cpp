#include <iostream>
#include <string>

using namespace std;

float usePointers(float a, float b) {
	float * pa = & a;
	float * pb = & b;
	
	if (*pa >= *pb) return *pa + 10.0;
	else return *pb + 10.0;
}

int main() {
	/*
	int a = 3;
	char b = 'b';
	float c = 3.14;
	string d = "Hello World";
	
	int * pa = & a;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<pa<<endl;
	cout<<&pa<<endl;
	cout<<*pa<<endl;
	
	char * pb = & b;
	cout<<pb<<endl;
	
	float * pc = & c;
	cout<<pc<<endl;
	
	string * pd = & d;
	cout<<pd<<endl;
	*/
	
	float a, b;
	cin>>a>>b;
	cout<<usePointers(a, b)<<endl;
	
	return 0;
}

