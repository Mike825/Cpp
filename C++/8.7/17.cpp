#include <iostream>
using namespace std;
int main(){
	for (int i=1; i<=10; i++) {
		for (int j=0; j<i+1; j++) {
			if (i==5) {
			break;
			}
			else {
			cout<<i<<"\t";
			}
		}
	}
	
	return 0;
}
