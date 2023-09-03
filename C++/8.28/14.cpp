#include <iostream>

using namespace std;

struct tNumAndIndex {
	int num;
	int index;
};

void sortAndOutputNumbers() {
	//Define variables
	int qt;
	tNumAndIndex numList[10000] = {0, 0};
	
	//Input values
	cout<<"Enter the number of the numbers to sort: ";
	cin>>qt;
	cout<<"Enter the numbers to sort, separate them from one another using spaces: ";
	for (int i = 0; i < qt; i++) {
		cin>>numList[i].num;
	}
	
	//Copy the array
	tNumAndIndex numList1[10000] = {0, 0};
	for (int i = 0; i < qt; i++) {
		numList1[i].num = numList[i].num;
	}
	
	//Sort the numbers (using bubble sort)
	tNumAndIndex temp;
	for (int i = 0; i < qt; i++) {
		for (int j = 0; j < qt - i - 1; j++) {
			if (numList1[j + 1].num < numList1[j].num) {
				temp = numList1[j];
				numList1[j] = numList1[j + 1];
				numList1[j + 1] = temp;
			}
		}
	}
	
	//Match the index with the numbers (using binary search)
	/*Version 1
	for (int i = 0; i < qt; i++) {
		for (int j = 0; j < qt; j++) {
			if (numList1[j].num == numList[i].num) {
				numList[i].index = j + 1;
			}
		}
	}
	*/
	int query = 0, left = 0, right = 0, mid = 0;
	for (int i = 0; i < qt; i++) {
		query = numList[i].num;
		left = 0;
		right = qt - 1;
		while (left <= right) {
			mid = (left + right) / 2;
			if (query > numList1[mid].num) {left = mid + 1;}
			else if (query < numList1[mid].num) {right = mid - 1;}
			else if (query == numList1[mid].num) {numList[i].index = mid + 1; break;}
		}
	}
	
	//Output the indexes
	cout<<"The numbers and their indexes are shown below: "<<endl;
	cout<<"Numbers\t";
	for (int i = 0; i < qt; i++) {
		cout<<numList[i].num<<"\t"; 
	}
	cout<<endl;
	cout<<"Indexes\t";
	for (int i = 0; i < qt; i++) {
		cout<<numList[i].index<<"\t";
	}
	cout<<endl;
	
}

int main() {
	sortAndOutputNumbers();
	
	return 0;
}
