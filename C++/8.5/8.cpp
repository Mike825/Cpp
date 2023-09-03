#include <iostream>
#include <string>

using namespace std;
int main(){
	string name;
	cout<<"Please enter your name: ";
	cin>>name;
	cout<<"Your name is "<<name<<endl;
	
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	cout<<a<<b<<c<<d<<e<<endl;
	
	float tc,tf;
	cout<<"Please enter <x> degree Centigrade: ";
	cin>>tc;
	tf=9*tc/5+32;
	cout<<tc<<" degree Centigrade is equal to "<<tf<<" degree Fahrenheit."<<endl; 
	
	int num;
	cout<<"Please enter a 3-digit number: ";
	cin>>num;
	cout<<"The number after processing is "<<num*1000+num<<endl;
	cout<<"The number after dividing 7,11,13 is "<<(num*1000+num)/7/11/13<<endl;
	cout<<"The number you entered before is "<<num<<". It is equal to the one after dividing."<<endl;

	return 0;
}
