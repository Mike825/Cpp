#include <iostream>
using namespace std;
int main(){
	for (int i=0; i<4; i++) {
		for (int j=0; j<i+1; j++) {
			cout<<"*"<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for (int x=0; x<=100/5; x++){
		for (int y=0; y<=100/3; y++){
			for (int z=0; z<=100*3; z++){
				if (5*x+3*y+z/3==100 && x+y+z==100){
					cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<endl;
				}
			}
		}
	}
	cout<<endl;
	
	for (int d01=1; d01<=9; d01++){
		for (int d02=0; d02<=9; d02++){
			for (int d03=0; d03<=9; d03++){
				if (d01*d01*d01+d02*d02*d02+d03*d03*d03==d01*100+d02*10+d03*1){
					cout<<d01<<d02<<d03<<"\t";
				}
			}
		}
	}
	return 0;
}
