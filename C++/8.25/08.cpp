#include <iostream>
#include <string>

using namespace std;

const char N = '\n', T = '\t';

string split(string input, int mode = 1) {
	string separator, result = "";
	switch (mode) {
		case (1): {	//Standard mode
			separator = " ,.?!;:\"\'~";
			break;
		}
		case (2): {	//Advanced mode
			separator = " ,./;\'\\[]<>?:\"|{}`~!@#$%^&*()-=_+\n\t";
			break;
		}
		default: {	//Otherwise standard mode
			separator = " ,.?!;:\"\'~";
			break;
		} 
	}
	
	int pos1 = 0, pos2;
	while (pos1 < input.size()) {
		pos2 = input.find_first_of(separator, pos1);
		if (pos2 != pos1) {
			result.append(input.substr(pos1, pos2 - pos1) + "\n");
		}
		if (pos2 == -1) {
			break;
		}
		pos1 = pos2 + 1;
	}
	
	return result;
}

int main() {
	cout<<split("H,e.l?l!o:w;o~r\'l\"d", 1)<<endl;
	cout<<split("I   love Beijing ;,[]Tian\'anmen }{}.a!n-d=China", 2)<<endl;
	return 0;
}
