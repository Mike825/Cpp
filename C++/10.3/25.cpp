#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main() {
	/*
	ifstream fin(".\\25a.txt");
	ofstream fout(".\\25b.txt");
	int x, sum;
	while (fin>>x) {
		sum += x;
	}
	fout<<sum;
	*/
	ofstream fout1;
	string fname;
	int a, b;
	for (int i = 0; i < 5; i++) {
		cout<<"Enter the name of the file (without extensions) : ";
		cin>>fname;
		cout<<"Enter two numbers: ";
		cin>>a>>b;
		
		fout1.open((".\\" + fname + ".txt").c_str());
		fout1<<a<<" "<<b<<endl;
		fout1.close();
		
		cout<<"File \""<<fname<<".txt\" has been processed successfully.\n"<<endl;
	}	
	
	return 0;
}

