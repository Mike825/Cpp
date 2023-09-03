#include <iostream>
using namespace std;

int main() {
	int n, x, f; //Niannian; Xiaofeng; Teacher Feifei
	for (f = 1; f <= 3; f++) {
		for (n = 1; n <= 3; n++) {
			for (x = 1; x <= 3; x++) {
				if ((n == 2) + (x == 3) + (f == 3) + (x != 3) == 3) {
					if (n * x * f == 1 * 2 * 3) {
						cout<<"Niannian: "<<n<<"\tXiaofeng: "<<x<<"\tTeacher Feifei: "<<f<<endl;
					}
				}
			}
		}
	}
	
	
	return 0;
}
