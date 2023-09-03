#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const char N = '\n', T = '\t';

int main() {
	//iterate over a string
	string iter = "Hello";
	for (int i = 0; i < iter.size(); i++) {
		cout<<iter[i]<<T;
	}
	cout<<N;
	
	//find something in a string
	string things = "apple banana orange watermelon grape peach apple";
	cout<<things.find("banana")<<N;
	cout<<things.find('p')<<N;
	cout<<things.rfind("banana", 20)<<N;
	cout<<things.rfind('b', 20)<<N;
	cout<<things.find_first_of("apple", 0)<<N;
	cout<<things.find_first_not_of("apple", 0)<<N;
	cout<<things.find_last_of("apple")<<N;
	cout<<things.find_last_not_of("apple")<<N;
	
	//sort a string
	string sortStr = "qwertyuiopasdfghjklzxcvbnm";
	sort(sortStr.begin(),sortStr.end());
	cout<<sortStr<<N;
	
	//separate a string
	string sep = "abcdefghijklmnopqrstuvwxyz", afterSep;
	afterSep = sep.substr(1, 5);
	cout<<afterSep<<N;
	
	//replace something in a string
	string rp1, rp2, rp3, rp4;
	rp1 = rp2 = rp3 = rp4 = "Hello World!";
	rp1.replace(5, 6, "******");
	rp2.replace(5, 7, "*******");
	rp3.replace(rp3.size()-1, 1, 1, '*');
	rp4.replace(rp4.begin(), rp4.end(),"************");
	cout<<rp1<<N<<rp2<<N<<rp3<<N<<rp4<<N;
	
	
	return 0;
}
