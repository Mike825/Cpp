#include <iostream>
#include <string>
using namespace std;
const string separator = "=======================================================\n";

//Pell Array -> Line 104 in main()
int PellArray(int x) {
	int a1 = 1, a2 = 2;
	if (x <= 0) return -1;
	else if (x == 1) return a1;
	else if (x == 2) return a2;
	else return 2 * PellArray(x - 1)+PellArray(x - 2);
}
void module1() {
	int x;
	cout<<"Enter the index(starts from 1) of Pell Array you want to get: ";
	cin>>x;
	cout<<"The "<<x<<"th number of Pell Array is "<<PellArray(x)<<"."<<endl<<separator;
}

//Root Number -> Line 108 in main()
int rootNumber(int x) {
	//int listnum[100], tmpx = x, tmpidx = 0, rootnum;
	int rootnum, tmpx = x;
	while (tmpx >= 1) {
		//listnum[tmpidx] = tmpx % 10;
		rootnum += tmpx % 10;
		tmpx /= 10;
	}
	if (x<0) return -1;
	else {
		if (rootnum < 10) return rootnum;
		else return rootNumber(rootnum);
	}
}
void module2() {
	int rtnum;
	cout<<"Enter a positive integer to get its root number: ";
	cin>>rtnum;
	cout<<"The number "<<rtnum<<"\'s root number is "<<rootNumber(rtnum)<<"."<<endl<<separator;	
}

//Climb Stairs -> Line 112 in main()
int climbStairs(int x) {
	//Fibonacci Array starting from the 3rd number
	int a1 = 1, a2 = 2;
	if (x <= 0) return -1;
	else if (x == 1) return a1;
	else if (x == 2) return a2;
	else return climbStairs(x-1) + climbStairs(x-2);
}
void module3() {
	int stairq;
	cout<<"Mr. Tree is climbing stairs. He can climb one or two steps in one go.\nEnter the number of the stairs, and get the number of the ways he can go: ";
	cin>>stairq;
	cout<<"He can go in "<<climbStairs(stairq)<<" different ways when climbing "<<stairq<<" step(s)."<<endl<<separator;
}

//Hanoi Tower -> Line 116 in main()
int count = 1;
void outputHanoiGameplay(int n, char a = 'A', char b = 'B', char c = 'C') {
	if (n == 1) cout<<count++<<"\t"<<a<<"\t"<<c<<endl;
	else {
		outputHanoiGameplay(n-1, a, c, b);
		cout<<count++<<"\t"<<a<<"\t"<<c<<endl;
		outputHanoiGameplay(n-1, b, a, c);
	}
}
void module4() {
	int level;
	cout<<"Enter the levels of Hanoi Tower: ";
	cin>>level;
	cout<<"The gameplay of "<<level<<"-level Hanoi Tower is shown below: "<<endl;
	cout<<"Move\tSource\tDestination"<<endl;
	outputHanoiGameplay(level);
	cout<<separator;	
}


//Put apples into plates -> Line 120 in main()
int applesAndPlates(int m, int n) {
	if (m==0 || n==1) return 1;
	if (n>m) return applesAndPlates(m,m);
	if (n<=m) return applesAndPlates(m,n-1)+applesAndPlates(m-n,n);
}
void module5() {
	int m,n;
	cout<<"There are <m> apples and <n> plates. "<<endl;
	cout<<"Enter m,n to get different ways of putting these apples into plates: ";
	cin>>m>>n;
	cout<<"There are "<<applesAndPlates(m,n)<<" different ways of putting "<<m<<" apples into "<<n<<" plates."<<endl<<separator;
}

int main() {
	int choice;
	cout<<"There are 5 modules in this program."<<endl;
	cout<<"Module\tName"<<endl;
	cout<<"1\tPell Array\n2\tRoot Number\n3\tClimb Stairs\n4\tHanoi Tower\n5\tPut Apples into Plates\n6\tAll[Test one by one]"<<endl;
	cout<<"Enter your choice [1,2,3,4,5,6]: ";
	cin>>choice;
	cout<<"Module "<<choice<<separator;
	switch (choice) {
		case (1) : {
			module1();
			break;
		}
		case (2) : {
			module2();
			break;
		}
		case (3) : {
			module3();
			break;
		}
		case (4) : {
			module4();
			break;
		}
		case (5) : {
			module5();
			break;
		}
		case (6) : {
			module1();
			module2();
			module3();
			module4();
			module5();
			break;
		}
		default : {
			cout<<"Error: Module "<<choice<<" was not found."<<endl;
			break;
		}
	}
	cout<<"Program complete."<<endl;
	
	return 0;
}
