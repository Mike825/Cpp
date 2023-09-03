#include <iostream>
#include <algorithm>

using namespace std;

struct tNum {
	int num;	//number
	int iidx;	//input index
	int oidx;	//output index
};

bool compareNumValue(tNum a, tNum b) {
	//compares tNums' values
	return (a.num < b.num);
}

bool compareNumIndex(tNum a, tNum b) {
	//compares tNums' input index
	return (a.iidx < b.iidx);
}

void sortAndOutput() {
	//Define variables
	tNum numList[10000] = {0, 0, 0};
	int qt;
	
	//Input values and input indexes
	cin>>qt;
	for (int i = 0; i < qt; i++) {
		cin>>numList[i].num;
		numList[i].iidx = i;
	}
	
	//Sort the list by numbers' values [1/2]
	sort(numList, numList + qt, compareNumValue);
	
	//Get output indexes
	for (int i = 0; i < qt; i++) {
		numList[i].oidx = i + 1;
	}
	
	//Sort the list by numbers' input indexes [2/2]
	sort(numList, numList + qt, compareNumIndex);
	
	//Output indexes
	for (int i = 0; i < qt; i++) {
		cout<<numList[i].oidx<<" ";
	}
	cout<<endl;
}

int main() {
	sortAndOutput();
	
	return 0;
}
