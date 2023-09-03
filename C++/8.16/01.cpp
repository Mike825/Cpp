#include <iostream>
//#include <cmath>
using namespace std;

//Manhattan Distance
float abs(float x) {
	if (x>0) return x;
	if (x<0) return -x;
	if (x=0) return 0;
}

float mhtdst(float x1,float y1,float x2,float y2) {
	//using <cmath>: return abs(x1-x2)+abs(y1-y2);
    return abs(x1-x2)+abs(y1-y2);
}

//C^m_n
int factorial(int x) {
	if (x==0 || x==1) return 1;
	else if (x>1) return x*factorial(x-1);
	else return -1;
}

double c(int m, int n) {
	return factorial(n)/(factorial(m)*factorial(n-m));
}

//Swap two int variables' values
void swapint(int &x, int &y) {
	int temp;
	temp=x;
	x=y;
	y=temp;
}

//Check for prime pairs
bool checkPrimeNumber(int x) {
	bool flag = true;
	if (x<=1) flag=true;
	for (int i=2; i<x; i++) {
		if (x%i==0) {
			flag = false;
			break;
		}
	}
	return flag;
}
void outputPrimePairs(int n) {
	bool checkEmpty = true;
	for (int i=2; i<=n-2; i++) {
		if (checkPrimeNumber(i)==true && checkPrimeNumber(i+2)==true) {
			cout<<i<<"\t"<<i+2<<endl;
			checkEmpty = false;
		}
	}
	if (checkEmpty) {
		cout<<"There are no prime pairs within "<<n<<"."<<endl;
	}
}

int main() {
	//Manhattan Distance
	float x1,y1,x2,y2;
	cout<<"Enter <x1>, <y1>, <x2>, <y2> to get Manhattan Distance between two points: ";
	cin>>x1>>y1>>x2>>y2;
	cout<<"The Manhattan Distance between A("<<x1<<","<<y1<<") and B("<<x2<<","<<y2<<") is "<<mhtdst(x1,y1,x2,y2)<<"."<<endl;
	cout<<endl;
	
	//C^m_n
	unsigned int m,n;
	cout<<"Enter two positive integers m, n(m<n) to get [C^m_n](LaTeX): ";
	cin>>m>>n;
	cout<<"[C^"<<m<<"_"<<n<<"](LaTeX) is "<<c(m,n)<<"."<<endl;
	cout<<endl;
	
	//Swap two int variables' values
	int x,y;
	cout<<"Enter two numbers to swap them: ";
	cin>>x>>y;
	swapint(x,y);
	cout<<x<<"\t"<<y<<endl;
	cout<<endl;
	
	//Check for prime pairs
	unsigned int n1;
	cout<<"Enter a positive integer n to get prime pairs within n: ";
	cin>>n1;
	cout<<"Prime pairs within "<<n1<<" is shown below: "<<endl;
	outputPrimePairs(n1);
	cout<<endl;
	
	return 0;
}


