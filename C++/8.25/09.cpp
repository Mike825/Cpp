#include <iostream>
#include <string>

using namespace std;

string splitUsingPoundSign(string input) {
	string poundSign = "#", result = "";
	int pos1 = 0, pos2;
	while (pos1 < input.size()) {
		pos2 = input.find_first_of(poundSign, pos1);
		if (pos2 != pos1) result.append(input.substr(pos1, pos2 - pos1) + "\n");
		if (pos2 == -1) break;
		pos1 = pos2 + 1;
	}
	return result;
}

string outputStringBetweenTwoPoundSigns(string input) {
	string result = "";
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '#') {
			for (i++; input[i] != '#'; i++) {
				result.push_back(input[i]);
			}
			result.push_back('\n');
		}
	}	
	return result;	
}

string inputAndReplaceFruit() {
	const string fruit[8] = {"apples", "bananas", "pears", "oranges", "peaches", "watermelons", "strawberries", "grapes"};
	string result = "", input;
	int pos = -1, id = -1;
	cout<<"Write some sentences including some fruit below, and you\'ll get a surprise: (use Ctrl+Z plus Enter to exit)"<<endl;
	while (getline(cin, input)) {
		for (int i = 0; i < 8; i++) {
			pos = input.find(fruit[i]);
			if (pos != -1) {
				id = i;
				break;
			} 
		}
		if (pos == -1) {
			cout<<"You did not enter any fruit."<<endl;
		}
		else {
			cout<<input.replace(pos, fruit[id].size(), "brussel sprouts")<<endl;
			result = input.replace(pos, fruit[id].size(), "brussel sprouts");
		}		
	}
	return result;
}

int main() {
	string input;
	cout<<"Write a sentence in the following line, insert some strings between two '#', the process will output anything you entered between two '#'.";
	cout<<"\nWrite it on this line: ";
	getline(cin, input);
	cout<<"Split the string using #: "<<endl<<splitUsingPoundSign(input)<<endl;
	cout<<"Output the strings between two #: "<<endl<<outputStringBetweenTwoPoundSigns(input)<<endl;
	
	inputAndReplaceFruit();
	return 0;
}


