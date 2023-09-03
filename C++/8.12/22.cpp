#include <iostream> 
using namespace std;
int main() {
	int q, a[10]={1,2,3,4,5,6,7,8,9,10}, r=-1;
	bool rb=false;
	cin>>q;
	for (int i=0; i<10; i++) {
		if (q==a[i]) {
			r=i;
			rb=true;
			break;
		}
	}
	cout<<"Status: "<<rb<<"\tindex: "<<r<<endl;
	
	return 0;
}
