#include <iostream>

using namespace std;



int main() {
	int a = 10;
	int *p = NULL;
	p = &a;
	cout<<*p<<endl;
	
	int list[10];
	for (int i = 0; i < 10; i++) {
		cin>>list[i];
	}
	int *plist = &list[0];
	for (int i = 0; i < 10; i++) {
		cout<<*plist<<"\t";
		plist++;
	}
	
	void *pv;
	float b = 2.5;
	pv = &a;
	cout<<*(int *)pv<<endl;
	pv = &b;
	cout<<*(float *)pv<<endl;
	
	int **pp = &p;
	int ***ppp = &pp;
	int ****pppp = &ppp;
	cout<<*p<<"\t"<<**pp<<"\t"<<***ppp<<"\t"<<****pppp<<endl;
	
	return 0;
}

