#include <iostream>

using namespace std;

//Direction
enum tDir {
	_up = 0, _down = 1, _left = 2, _right = 3
};

struct tPoint {
	int xpos, ypos, dir;
};

int getSum() {
	//Define variables
	int grid[100][100] = {0};
	int gnum = 0;
	int result = 0;
	tPoint pt = {0};
	
	//Input values
	cin>>gnum>>pt.xpos>>pt.ypos>>pt.dir;
	for (int i = 0; i < gnum; i++) {
		for (int j = 0; j < gnum; j++) {
			cin>>grid[i][j];
		}
	}
	
	//Calculate
	switch (pt.dir) {
		case (_up) : {
			for (int i = pt.xpos - 1; i >= 0; i--) {
				result += grid[i][pt.ypos - 1];
			}
			break;
		}
		case (_down) : {
			for (int i = pt.xpos - 1; i <= gnum; i++) {
				result += grid[i][pt.ypos - 1];
			}
			break;
		}
		case (_left) : {
			for (int i = pt.ypos - 1; i >= 0; i--) {
				result += grid[pt.xpos - 1][i];
			}			
			break;
		}
		case (_right) : {
			for (int i = pt.ypos - 1; i <= gnum; i++) {
				result += grid[pt.xpos - 1][i];
			}
			break;
		}
		default : {
			result = -1;
			break;
		}
	} 
	
	//Return
	return result;
}

int main() {
	cout<<getSum()<<endl;
	
	return 0;
}
