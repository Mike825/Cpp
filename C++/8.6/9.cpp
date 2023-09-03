#include <iostream>
using namespace std;
int main(){
	//if else
	float weight;
	int price;
	cout<<"Please enter the weight of the things you want to buy:";
	cin>>weight;
	if (weight>500) price=9;
	else price=6;
	cout<<"The price of it(them) is(are) "<<price<<endl;
	
	int num;
	cout<<"Enter a number to see whether it\'s a negative number or not: ";
	cin>>num;
	if (num<0) cout<<num<<" is a negative number."<<endl;
	else cout<<num<<" is a positive number or it\'s 0."<<endl;
	
	//数值关系表达式
	int quantity;
	cout<<"Enter the quantity of the cup(s) you want to buy: ";
	cin>>quantity;
	float tb=(quantity-quantity/7)*3;
	float jd=quantity*3*0.88;
	if (tb>jd) cout<<"Buying "<<quantity<<" cup(s) on Jingdong is cheaper."<<endl;
	else if (tb=jd) cout<<"Buying "<<quantity<<" cup(s) on Jingdong is as cheap as doing on Taobao."<<endl;
	else cout<<"Buying "<<quantity<<" cup(s) on Taobao is cheaper."<<endl;
	
	return 0;
}
