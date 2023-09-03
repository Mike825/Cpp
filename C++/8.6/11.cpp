#include <iostream>
using namespace std;
int main(){
	int cn,mt;
	cin>>cn>>mt;
	if (cn>=90 && mt>=95) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
		
	int year;
	cin>>year;
	if ((year%4==0 && year%100!=0) || year%400==0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	bool flag=true;
	int a=20;
	cout<<a+flag<<endl;
	
	char c;
	cin>>c;
	c=((c>='A' && c<='Z')?(c+32):c);
	cout<<c<<endl;
		
	return 0;
}
