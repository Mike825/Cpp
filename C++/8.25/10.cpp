#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int countNumbersInString(string input) {
	int result = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] <= '9' && input[i] >= '0') {
			result++;
		}
	}
	return result;
} 

char findFirstCharAppearOnce(string input) {
	int times[75] = {0}, order[75] = {0}, orderCount = 1;
	char result;
	const char empty = '\0';
	for (int i = 0; i < input.size(); i++) {
		if (((input[i]-'0') <= 48) || ((input[i]-'0') >= 74)) continue;
		
		times[input[i]-'0']++;
		if (times[input[i]-'0'] == 1) {
			order[input[i]-'0'] = orderCount;
			orderCount++;
		}
		if (times[input[i]-'0'] != 1 && order[input[i]-'0'] == 1) {
			order[input[i]-'0'] = -1;
			orderCount--;
		}
	}
	for (int i = 0; i < 127; i++) {
		if (times[i] == 1 && order[i] == 1) {
			result = char(times[i] + '0');
		}
	}
	if (result == empty) return 'n';
	else return result;
}

string encryptInt(int a, int b) {
	if (b == 0) return "err0div";
	if (a < 0 || b < 0) return "errneg";
	
	double da = a, db = b;
	double awaitEncryptDouble = da/db;
	string awaitEncrypt, encryptedResult;
	stringstream tempIO;
	tempIO<<fixed<<setprecision(5)<<awaitEncryptDouble;
	tempIO>>awaitEncrypt;
	
	for (int i = 0; i < awaitEncrypt.size(); i++) {
		if (awaitEncrypt[i] == '.') {
			encryptedResult.push_back('.');
			continue;
		}
		encryptedResult.push_back(char(awaitEncrypt[i]+'A'-'0'));
	}
	
	return encryptedResult;
}


int main() {
	string input;
	
	cout<<"Enter something, and get the number of the numbers in the sentence: ";
	getline(cin, input);
	(countNumbersInString(input) == 0) ? (cout<<"There isn't any number in the string."<<endl) : ((countNumbersInString(input) == 1)? (cout<<"There is 1 number in the string."<<endl):(cout<<"There are "<<countNumbersInString(input)<<" numbers in this string."<<endl));
	cout<<endl;	
	
	input = "";
	cout<<"Enter a string only including characters, and get the first character that only appeared once in the string: ";
	getline(cin, input);
	(findFirstCharAppearOnce(input) == 'n') ? (cout<<"There isn't any character that appears once."<<endl) : (cout<<"The first character that appeared once is "<<findFirstCharAppearOnce(input)<<"."<<endl);
	cout<<endl;
	
	int a, b;
	string result;
	cout<<"Enter two positive integers, and get the encrypted code: ";
	cin>>a>>b;
	result = encryptInt(a,b);
	if (result == "err0div") {
		cout<<"Error: Division by zero."<<endl;
	}
	else if (result == "errneg") {
		cout<<"Error: One of/All entered numbers is/are negative."<<endl;
	}
	else {
		cout<<"The encrypted code of "<<a<<" and "<<b<<" is "<<result<<"."<<endl;
	}
	
	
	return 0;
}
