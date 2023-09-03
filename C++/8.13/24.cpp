#include <iostream>
#include <string>
using namespace std;
int main() {
	char s[10];
	int n=0, i=0;
	while ((s[n]=getchar())!='\n') {
		n++;
	}
	n-=1;
	while (s[i]==s[n-i]) {
		i++;
	}
	if (i>n/2) {
		cout<<"Yes"<<endl;
	}
	else {
		cout<<"No"<<endl;
	}
	
	char sen[1000];
	char ans[1000];
	n=0;i=0;
	int count=0, maxLen=-1;
	while ((sen[n]=getchar()) != ('\n')) {
		n++;
	}
	for (i=0; i<n; i++) {
		if (sen[i]!=' ' && sen[i]!='.') {
			count++;
		}
		else {
			if (count>maxLen) {
				maxLen=count;
				for (int j=0; j<count; j++) {
					ans[j]=sen[i-count+j];
				}
			}
			count=0;
		}
	}
	for (i=0;i<maxLen;i++) {
		cout<<ans[i];
		count++;
	}
	cout<<endl<<"Length = "<<count<<endl;
	
	char input[1000];
	n=0;
	int num1=0,num2=0;
	while ((input[n]=getchar()) != '+') {
		num1*=10;
		num1+=input[n]-'0';
		n++;
	}
	
	while ((input[n]=getchar()) != '\n') {
		num2*=10;
		num2+=input[n]-'0';
		n++;
	}

	cout<<num1+num2<<endl;
	
	return 0;
}
