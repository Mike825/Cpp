#include <iostream>
#include <string>
using namespace std;
int main(){
	//calculating prices
	float price;
	int quantity,cost;
	cout<<"Enter the price: "; cin>>price;
	cout<<"Enter the quantity: "; cin>>quantity;
	if (quantity >= 5 && quantity < 10) cost = price * quantity * 0.9;
	else if (quantity >= 10) cost = price * quantity * 0.8;
	else cost = price * quantity;
	cout<<"The customer should pay "<<cost<<"$"<<endl;
	
	//finding the biggest number
	int a,b,c;
	cout<<"Enter 3 different numbers, separate them using space or new lines: "; cin>>a>>b>>c;
	
	//V1 of finding the biggest number: too difficult to read
	/*
	if (b>a) if (b>c) cout<<"The second number "<<b<<" is the biggest."<<endl;
	else if (b<c) cout<<"The third number "<<c<<" is the biggest."<<endl;
	else cout<<"The second number "<<b<<" is equal to the third one "<<c<<"."<<endl;
	else if (b<a) if (a>c) cout<<"The first number "<<a<<" is the biggest."<<endl;
	else if (a<c) cout<<"The third number "<<c<<" is the biggest."<<endl;
	else cout<<"The first number "<<a<<" is equal to the third one "<<c<<"."<<endl;
	else cout<<"The first number "<<a<<" is equal to the second one "<<b<<"."<<endl;
	*/
	
	//V2 of finding the biggest number: 
	if (b>a) {
		if (b>c) {
			cout<<"The second number "<<b<<" is the biggest."<<endl;}
		else if (b<c) {
			cout<<"The third number "<<c<<" is the biggest."<<endl;}
		else {
			cout<<"The second number "<<b<<" is equal to the third one "<<c<<"."<<endl;}}
	else if (b<a) {
		if (a>c) {
			cout<<"The first number "<<a<<" is the biggest."<<endl;}
		else if (a<c) {
			cout<<"The third number "<<c<<" is the biggest."<<endl;}
		else {
			cout<<"The first number "<<a<<" is equal to the third one "<<c<<"."<<endl;}}
	else {
		if (a>c) {
			cout<<"Both the first number "<<a<<" and the second number "<<b<<" is the biggest."<<endl;}
		else if (a<c) {
			cout<<"The third number "<<c<<" is the biggest."<<endl;}
		else {
			cout<<"The three numbers are all equal to one another."<<endl;}}
	
	//a tiny calculator
	int num1,num2,result;
	char opr;//operator
	string err;
	cout<<"Enter 2 numbers and an operator, separate them from one another using spaces or new lines: ";
	cin>>num1>>num2>>opr;
	switch(opr){
		case '+' : {
			result=num1+num2;
			break;
		}
		case '-' : {
			result=num1-num2;
			break;
		}
		case '*' : {
			result=num1*num2;
			break;
		}
		case '/' : {
			if (num2==0) cout<<"Error: Can\'t divide by 0!"<<endl;err="Error";break;
			float num11=num1,num21=num2;
			result=num11/num21;
			break;
		}
		default : {
			cout<<"Error: The operator you entered before is invalid!"<<endl;err="Error";
			break;
		}
	}
	if (err!="Error") {
		cout<<"The result of "<<num1<<opr<<num2<<" is "<<result<<"."<<endl;}
	else {
		cout<<"There\'s no result, because an error occured."<<endl;
	}
	
	return 0;
	
}
