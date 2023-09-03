#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Score {
	string name;		//name of the student
	int cs;				//score of Chinese
	int ms;				//score of math
	int total;
	int getTotal() {	//total score
		return cs + ms;
	}
};

void sortScoreAndOutput() {
	//Define variables
	string name;
	int cs, ms, index = 0;
	Score scoreboard[1000];
	//memset(scoreboard, 0, sizeof(scoreboard));
	
	//Input Scores
	cout<<"Enter each student's name, Chinese score and math score like this: \na 100 100\nUse Ctrl+Z plus Enter to stop entering at the beginning of a new line: \n";
	while (cin>>name>>cs>>ms) {
		scoreboard[index].name = name;
		scoreboard[index].cs = cs;
		scoreboard[index].ms = ms;
		scoreboard[index].total = scoreboard[index].getTotal();
		index++;
	}
	
	//Sort by total score (using bubble sort)
	Score temp;
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < index - i - 1; j++) {
			if (scoreboard[j].total < scoreboard[j+1].total) {
				temp = scoreboard[j + 1];
				scoreboard[j + 1] = scoreboard[j];
				scoreboard[j] = temp;
			}
		}
	}
	
	//Output score
	cout<<"The score of each student sorted by total score is shown below: "<<endl;
	cout<<"Name\t|Chinese |Math    |Total\n========|========|========|========\n";
	for (int i = 0; i < index; i++) {
		cout<<scoreboard[i].name<<"\t|"<<scoreboard[i].cs<<"\t |"<<scoreboard[i].ms<<"\t  |"<<scoreboard[i].total<<endl;
	}
}

int main() {
	sortScoreAndOutput();
	return 0;
}
