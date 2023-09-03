#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<i*i<<"\t";
	}
	cout<<endl;
	
	int sum=0;
	for(int i=1;i<=100;i++){
		sum+=i;
	}
	cout<<sum<<endl;
	
	for(int i=2;i<=100;i++){
		if (i%2==0) {cout<<i<<"\t";}
	}
	cout<<endl;
	
	int sum1=0,sum2=0;
	for (int i=0;i<=100;i++){
		if (i%2==0) {sum2+=i;}
		else {sum1+=i;}
	}
	cout<<sum1<<"\t"<<sum2<<endl;
	
	return 0;
}
