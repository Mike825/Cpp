#include <iostream>
using namespace std;
int main(){
	int a=10;
	cout<<a<<endl;
	
	a+=10;
	cout<<a<<endl;
	a-=10;
	cout<<a<<endl;
	a*=10;
	cout<<a<<endl;
	a/=10;
	cout<<a<<endl;
	a%=10;
	cout<<a<<endl;
	
	a++;
	cout<<a<<endl;
	++a;
	cout<<a<<endl;
	a--;
	cout<<a<<endl;
	--a;
	cout<<a<<endl;
	
	int c;
	int d;
	c=a++;
	d=++a;
	cout<<c<<'\n'<<d<<endl;
	
	float a1=5.5;
	float b1=6.7;
	float c1=9.3;
	double result=(-b1+4*a1*c1)/(2*a1);
	cout<<result<<endl;
		
	return 0;
}
