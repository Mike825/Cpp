#include <iostream> 
using namespace std;
int main(){
	int a[5]={10,3,6,8,19}, n=5, temp;
	for (int i=0; i<n; i++) {
		int k=i;
		for (int j=i+1; j<n; j++){
			if (a[j]<a[k]) {
				k=j;
			}
		}
		temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	} 
	
	for (int i=0; i<n; i++) {
		cout<<a[i]<<"\t";
	}
	return 0;
}
