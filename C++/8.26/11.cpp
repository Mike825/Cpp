#include <iostream>
#include <string>

using namespace std;

struct Date {
	int year;
	int month;
	int day;	
};

struct Cat {
	string name;
	int age;
	char gender;
	Date birthday;
	string sound() {
		return "Meow~";
	}
};

int main() {
	Cat myCat;
	cin>>myCat.name>>myCat.age>>myCat.gender;
	cin>>myCat.birthday.year>>myCat.birthday.month>>myCat.birthday.day;
	cout<<myCat.name<<myCat.age<<myCat.gender<<myCat.birthday.year<<myCat.birthday.month<<myCat.birthday.day<<endl;
	cout<<myCat.sound()<<endl;
	return 0;
}
