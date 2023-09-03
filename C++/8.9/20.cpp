#include <iostream>
using namespace std;
int main() {
	int n=9, a[n]={9,8,7,6,5,4,3,2,1}, temp;
	
	//==========================//
	for (int x=0;x<n;x++) {     //
		cout<<" "<<a[x]<<"\t";       //
	}                           //
	cout<<"Original array ";    //
	cout<<endl;                 //
	//==========================//
	
	for (int i=0; i<n-1; i++) {
		for (int j=0; j<n-i-1; j++) {
			if (a[j]>a[j+1]) {
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				
			//======================//
			for (int x=0;x<n;x++) { //
				cout<<" "<<a[x]<<"\t";   //
			}                       //
			cout<<endl;             //
			//======================//
			
			}
		}
		
		//======================//
		for (int x=0;x<n;x++) { //
			cout<<"*"<<a[x]<<"*\t";   //
		}                       //
		cout<<endl;             //
		//======================//
		
	}
	
	for (int i=0; i<n; i++) {
		cout<<" "<<a[i]<<"\t";
	}
	cout<<"Processed Array ";
	
	return 0;
}
