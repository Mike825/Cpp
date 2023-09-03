#include <iostream>

using namespace std;

struct Window {
	int leftPos;
	int rightPos;
	int topPos;
	int bottomPos;
};

int calcSuperposArea(Window w1, Window w2) {
	//w1 is on the left of w2
	if (w1.rightPos <= w2.leftPos) {
		return 0;
	}
	else if ((w1.topPos == w2.topPos) && (w1.bottomPos == w2.bottomPos)) {
		return (w1.rightPos - w2.leftPos) * (w1.topPos - w1.bottomPos);
	}
	else if ((w1.topPos != w2.topPos) || (w1.bottomPos != w2.bottomPos)) {
		if ((w1.topPos > w2.topPos) && (w1.bottomPos > w2.bottomPos)) {
			return (w1.rightPos - w2.leftPos) * (w2.topPos - w1.bottomPos);
		}
		else if ((w1.topPos == w2.topPos) && (w1.bottomPos != w2.bottomPos)) {
			if (w1.bottomPos > w2.bottomPos) {
				return (w1.rightPos - w2.leftPos) * (w1.topPos - w1.bottomPos);
			}
			else {
				return (w1.rightPos - w2.leftPos) * (w2.topPos - w2.bottomPos);
			}
		}
		else if ((w1.topPos != w2.topPos) && (w1.bottomPos == w2.bottomPos)) {
			if (w1.topPos > w2.topPos) {
				return (w1.rightPos - w2.leftPos) * (w2.topPos - w2.bottomPos);
			}
			else {
				return (w1.rightPos - w2.leftPos) * (w1.topPos - w1.bottomPos);
			}
		}
		else if ((w1.topPos < w2.topPos) && (w1.bottomPos < w2.bottomPos)) {
			return (w1.rightPos - w2.leftPos) * (w1.topPos - w2.bottomPos);
		}
	}
	
	//w1 is on the right of w2
	if (w1.leftPos >= w2.rightPos) {
		return 0;
	}
	else if ((w1.topPos == w2.topPos) && (w1.bottomPos == w2.bottomPos)) {
		return (w2.rightPos - w1.leftPos) * (w1.topPos - w1.bottomPos);
	}
	else if ((w1.topPos != w2.topPos) || (w1.bottomPos != w2.bottomPos)) {
		if ((w1.topPos > w2.topPos) && (w1.bottomPos > w2.bottomPos)) {
			return (w2.rightPos - w1.leftPos) * (w2.topPos - w1.bottomPos);
		}
		else if ((w1.topPos == w2.topPos) && (w1.bottomPos != w2.bottomPos)) {
			if (w1.bottomPos > w2.bottomPos) {
				return (w2.rightPos - w1.leftPos) * (w1.topPos - w1.bottomPos);
			}
			else {
				return (w2.rightPos - w1.leftPos) * (w2.topPos - w2.bottomPos);
			}
		}
		else if ((w1.topPos != w2.topPos) && (w1.bottomPos == w2.bottomPos)) {
			if (w1.topPos > w2.topPos) {
				return (w2.rightPos - w1.leftPos) * (w2.topPos - w2.bottomPos);
			}
			else {
				return (w2.rightPos - w1.leftPos) * (w1.topPos - w1.bottomPos);
			}
		}
		else if ((w1.topPos < w2.topPos) && (w1.bottomPos < w2.bottomPos)) {
			return (w2.rightPos - w1.leftPos) * (w1.topPos - w2.bottomPos);
		}
	}
	
	//Another way to calculate this problem is written in function anotherWayToCalc(Window w1, Window w2).
}

int anotherWayToCalc(Window w1, Window w2) {
	Window spArea = {
	max(w1.leftPos, w2.leftPos),	 //leftPos
	min(w1.rightPos, w2.rightPos),	 //rightPos
	min(w1.topPos, w2.topPos), 		 //topPos
	max(w1.bottomPos, w2.bottomPos)	 //bottomPos
	};
	
	int result = (spArea.rightPos - spArea.leftPos) * (spArea.topPos - spArea.bottomPos);
	if (spArea.rightPos <= spArea.leftPos || spArea.topPos <= spArea.bottomPos) {
		result = 0;
	}
	return result;
}


int main() {
	int l1, l2, r1, r2, t1, t2, b1, b2;
	cout<<"Enter two windows' left, right, top, bottom positions to calculate their superposition area."<<endl;
	cout<<"Enter like this: \n10 100 60 20\n60 160 200 50\n-> 400\n"<<endl;
	cin>>l1>>r1>>t1>>b1;
	cin>>l2>>r2>>t2>>b2;
	Window w1 = {l1, r1, t1, b1}, w2 = {l2, r2, t2, b2};
	cout<<"The superposition area between window 1("<<l1<<", "<<r1<<", "<<t1<<", "<<b1<<") and window 2("<<l2<<", "<<r2<<", "<<t2<<", "<<b2<<") is "<<calcSuperposArea(w1, w2)<<"."<<endl;
	cout<<"The superposition area between window 1("<<l1<<", "<<r1<<", "<<t1<<", "<<b1<<") and window 2("<<l2<<", "<<r2<<", "<<t2<<", "<<b2<<") is "<<anotherWayToCalc(w1, w2)<<"."<<endl;
	
	return 0;
}
