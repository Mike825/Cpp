#include <iostream>
#include <string>

using namespace std;

const char N = '\n';

int main() {
	//some ways of the definition of a string
	string def1 = "Keep learning";
	string def2("Keep learning");
	string def3(def1, 0, 4);
	string def4(6, '1');
	string def5(def1, 2);
	string def6("Hello", 2);
	
	cout<<def1<<N<<def2<<N<<def3<<endl;
	cout<<def4<<N<<def5<<N<<def6<<endl;
	
	//the length of a string
	string len = "Hello World";
	cout<<len.size()<<N<<len.length()<<endl;
	
	//delete something in a string
	string del1, del2, del3, del4;
	del1 = del2 = del3 = del4 = "Hello World";
	del1.erase(2);		//delete from [2] to the end
	del2.erase(1,1);	//delete from [1], delete length = 1
	del3.erase(del3.begin()+1, del3.end()-2);	//delete from [0(beginning)+1] to [[the end]-2]
	del4.erase(del4.begin());
	cout<<del1<<N<<del2<<N<<del3<<N<<del4<<N;
	
	return 0;
}
