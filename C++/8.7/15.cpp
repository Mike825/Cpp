#include <iostream>
using namespace std;
int main(){
	int n,i=1,s=0;
	cin>>n;
	do {
		s+=i;
		i++;
		} 
	while (s<n);
	cout<<i-1<<endl;
	
	int input,result=0;
	cin>>input;
	do {
		result*=10;
		result+=input%10;
		input/=10;
		} 
	while (input>=1);
	cout<<result<<endl;
	
	return 0;
}
