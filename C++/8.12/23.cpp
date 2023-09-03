#include <iostream>
using namespace std;
int main() {
	int q, n=10, a[n]={1,2,3,4,5,6,7,8,9,10}, left=0, right=n-1, mid, r=-1;
	bool rb=false;
	cin>>q;
	while (left<=right && not rb) {
		mid=(left+right)/2;
		if (q>a[mid]) {
			left=mid+1;
		}
		else if (q<a[mid]) {
			right=mid-1;
		}
		else if (q==a[mid]) {
			r=mid;
			rb=true;
		}
	}
	cout<<"Status: "<<rb<<"\tindex: "<<r<<endl;
	
	
	return 0;
}
