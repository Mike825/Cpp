#include <iostream>
#include <string>

using namespace std;

const char N = '\n';

int main() {
	//insert something into a string
	string ins1 = "Hello";
	
	ins1.push_back('W'); //insert a character
	cout<<ins1<<N;
	
	ins1.erase(5);
	
	ins1.insert(5, " World");//insert a string
	cout<<ins1<<N;
	
	ins1.erase(ins1.begin()+4, ins1.end()+0);
	
	//append something into a string
	string app1 = "Hello", app2 = " World";
	app1.append(app2);
	cout<<app1<<N;
	
	//convert a string into uppercase or lowercase
	string upper = "HELLO WORLD", lower = "hello world";
	
	for (int i = 0; i < lower.size(); i++) {
		lower[i] = toupper(lower[i]);
	}
	
	for (int i = 0; i < upper.size(); i++) {
		upper[i] = tolower(upper[i]);
	}
	cout<<upper<<N<<lower<<N; 
	
	return 0;
}
