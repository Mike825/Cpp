#include <iostream>

using namespace std;



int main() {
	int a[5] = {5, 4, 8, 6, 2};
	for (int i = 0; i < 5; i++) {
		int s = i;
		
		//Get the smallest number
		for (int j = i + 1; j < 5; j++) {
			if (a[j] < a[s]) s = j;
		}
		
		//Swap
		if (s != i) {
			int tmp = a[s];
			a[s] = a[i];
			a[i] = tmp;
			
		} 
		//swap(a[i], a[s]);
		
		//Complete
	} 
	
	for (int i = 0; i < 5; i++) {
		cout << a[i] << '\t';
	}
	
	
	system("pause");
	
	return 0;
}

