#include <iostream>
using namespace std;

int main(){
	int score,i=0;
	float rank;
	cin>>score;
	while (score!=0) {
		rank+=score;
		cin>>score;
		i++;
	}
	cout<<rank/i<<endl;
	
	int pwd=12345678;
	int myPwd,count=0;
	while (count<3 && myPwd!=pwd){
		cin>>myPwd;
		if (myPwd!=pwd) {cout<<"Wrong password!"<<endl;
			if (count==3) {cout<<"Your account has been locked!"<<endl;}
		}
		else{
			cout<<"You've logined your account successfully."<<endl;
		}
	count++;
	}
		
	int num1,i1=2;
	bool flag;
	cin>>num1;
	while (i1<num1){
		if (num1%i1==0) {flag=false;}
		i1++;
	}
	cout<<flag<<endl;
	
	return 0;
}
