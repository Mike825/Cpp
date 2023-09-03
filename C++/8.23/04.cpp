#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	string h = "Hello world!";
	cout<<h<<endl;
	
	string replaceSpace, replaceTempVar;
	while (cin>>replaceTempVar && ((replaceTempVar != ".") || (replaceTempVar != "\n"))) {
		replaceSpace += replaceTempVar+" ";
	}
	cout<<replaceSpace<<endl;
	
	string week[8] = {"0","Mon.","Tue.","Wed.","Thur.","Fri.","Sat.","Sun."};
	int weekInput;
	scanf("%d",&weekInput);
	//cin>>weekInput;
	if (weekInput <= 0 || weekInput > 7) cout<<"Error"<<endl;
	else cout<<week[weekInput]<<endl;
		
	return 0;
}
