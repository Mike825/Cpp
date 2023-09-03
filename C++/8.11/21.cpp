#include <iostream>
using namespace std;
int main() {
	int n=9, a[n]={9,8,7,6,5,4,3,2,1}, temp, j;
	
	for (int x=0; x<n; x++) {
		cout<<" "<<a[x]<<"\t";
	}
	cout<<"<- Original array"<<endl;
	
	
	for (int i=0; i<n; i++) {
		temp=a[i];
		for (j=i-1; (j>=0 && temp<a[j]); j--) {
			a[j+1]=a[j];
			//===========================//
			for (int x=0;x<n;x++) {      //
				cout<<" "<<a[x]<<"\t";   //
			}                            //
			cout<<endl;                  //
			//===========================//
		}
		a[j+1]=temp;
		//================================//
		for (int x=0;x<n;x++) {           //
			cout<<"*"<<a[x]<<"*"<<"\t";   //
		}                                 //
		cout<<endl;                       //
		//================================//
	}
	for (int i=0; i<n; i++) {
		cout<<" "<<a[i]<<"\t";
	}
	cout<<"<- Processed array"<<endl;
	
	return 0;
}
