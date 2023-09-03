#include <iostream>
#include <string>

using namespace std;

struct strset {
	string element;
	
	strset operator + (const strset x) const {
		strset result;
		result.element.append(element);	
		
		for (int i = 0; i < x.element.size(); i++) {
			if (result.element.find(x.element[i]) == -1 && element.find(x.element[i]) == -1) result.element.push_back(x.element[i]);
		}
		
		return result;
	}
	
	strset operator - (const strset x) const {
		strset result;
		result.element.append(element);
		
		for (int i = 0; i < x.element.size(); i++) {
			if (result.element.find(x.element[i]) != -1) result.element.erase(result.element.find(x.element[i]), 1);
		}
		
		return result;
	}
	
	strset operator * (const strset x) const {
		strset result;
		
		for (int i = 0; i < x.element.size(); i++) {
			if (element.find(x.element[i]) != -1) result.element.push_back(x.element[i]);
		}
		
		return result;
	}
	
};

string oprset(char opr, strset a, strset b) {
	string result;
	
	switch (opr) {
		case ('+') : {
			result = (a + b).element;
			break;
		}
		case ('-') : {
			result = (a - b).element;
			break;
		}
		case ('*') : {
			result = (a * b).element;
			break;
		}
		default : {
			result = "Error: Invalid operator.";
			break;
		}
	}
	
	return result;
}

int main() {
	string ae, be;
	cin>>ae>>be;
	strset a = {ae}, b = {be};
	char opr;
	cin>>opr;
	cout<<oprset(opr, a, b)<<endl;
	
	
	return 0;
}
