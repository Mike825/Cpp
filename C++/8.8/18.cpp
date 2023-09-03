#include <iostream>
using namespace std;

int main(){
	int a[10];
	for (int i=0; i<10; i++) {
		cin>>a[i];
	}
	for(int j=9; j>-1; j--) {
		cout<<a[j]<<"\t";
	}
	cout<<endl<<endl;

	int fib[20];
	fib[0]=0;
	fib[1]=1;
	for (int a=2; a<20; a++) {
		fib[a]=fib[a-1]+fib[a-2];
	}
	for (int i=19; i>=0; i--) {
		cout<<fib[i]<<"\t";
	}
	cout<<endl<<endl;
	
	int heightOfApples[10], heightOfTaotao, heightOfChair, numberOfApplesTaotaoCanPick=0;
	cout<<"Taotao is now picking apples standing on the chair.\nPlease enter ten numbers of the height of the apples (100 to 200) on the first line,\nand enter how tall Taotao is and how tall the chair is on the second line. \nPlease separate all the number required above from each other using spaces or tabs: \n";
	for (int i=0; i<10; i++) {
		cin>>heightOfApples[i];
	}
	cin>>heightOfTaotao>>heightOfChair;
	for (int c=0; c<10; c++) {
		if (heightOfTaotao+heightOfChair>=heightOfApples[c]) {
			numberOfApplesTaotaoCanPick+=1;
		}
	}
	cout<<"Taotao is able to pick "<<numberOfApplesTaotaoCanPick<<" apples."<<endl;
	cout<<endl<<endl;
	
	int y,m,d,monthsInYears[12]={1,2,3,4,5,6,7,8,9,10,11,12},result=0;
	cout<<"Please enter <year>, <month>, <date>: ";
	cin>>y>>m>>d;
	int daysInMonths[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if ((y%4==0 && y%100!=0) || (y%400==0)) {
		if (m>2) {
			result+=1;
		}
	}
	else {
		result+=0;
	}
	for (int i=0; i<12; i++) {
		if (m==i+1) {
			break;
		}
		result+=daysInMonths[i];
	}
	result+=d;
	cout<<"This is the "<<result<<"th(st/nd/rd) day of the year "<<y<<"."<<endl<<endl;
	
	int array[5]={1,2,3,4,5};
	cout<<array[100]<<endl;
	
	return 0;
}
