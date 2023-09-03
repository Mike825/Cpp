#include <iostream>

using namespace std;

struct tTime_short {
	int h;
	int m;
	tTime_short operator + (const tTime_short x) const {
		tTime_short temp;
		temp.h = h + x.h + (m + x.m) / 60;
		temp.m = (m + x.m) % 60;
		return temp;
	}
};

tTime_short calcTotalTime() {
	//Define variables
	tTime_short time[100] = {0, 0}, result = {0, 0};
	int num;
	
	//Input number
	cout<<"Enter the number of the time you want to calculate: ";
	cin>>num;
	
	//Input time and get a result
	cout<<"Enter <hour> and <minute>, separate them using spaces: \n";
	for (int i = 0; i < num; i++) {
		cin>>time[i].h>>time[i].m;
		result = result + time[i];
	}
	
	//Return the result
	return result;
}

int main() {
	int h, m;
	tTime_short result = calcTotalTime();
	h = result.h;
	m = result.m;
	cout<<"The total time is "<<h<<" hr "<<m<<" min."<<endl;
	return 0;
}
