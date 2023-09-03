#include <iostream>
#include <cstring>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;
const int MAXN=100;

int main() {
	int n,scores[MAXN][8];
	float average[n];
	memset(scores,0,sizeof(scores));
	memset(average,0,sizeof(average));
	
	cout<<"Enter the number of the students: ";
	cin>>n;
	cout<<"Enter the student numbers and scores of each subject(Chinese, math, English, physics, chemistry and biology) in the order above: "<<endl;
	for (int i=0;i<n;i++) {
		cin>>scores[i][0];
		for (int j=1;j<7;j++) {
			cin>>scores[i][j];
			scores[i][7]+=scores[i][j];
			average[j-1]+=scores[i][j];
		}
	}
	cout<<"Number\t\tChinese\t\tMath\t\tEnglish\t\tPhysics\t\tChemistry\tBiology\t\tTotal\n";
	for (int i=0; i<n; i++) {
		for (int j=0; j<8; j++) {
			cout<<scores[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	cout<<"Average"<<"\t\t";
	for (int i=0; i<6; i++) {
		average[i]/=n;
		printf("%.2f\t\t",average[i]);
		//cout<<average[i]<<setprecision(3)<<"\t\t";
		//cout<<round(average[i]*10)/10.0<<"\t\t";
	}
	cout<<"/"<<endl;
	//===========================//
	int psctr[MAXN][MAXN],num;
	memset(psctr,0,sizeof(psctr));
	
	cout<<"Enter levels of your Pascal\'s Triangle: ";
	cin>>num;
	
	psctr[0][0]=1;psctr[1][0]=1;psctr[1][1]=1;
	for (int i=2;i<num;i++) {
		psctr[i][0]=1;psctr[i][i]=1;
		for (int j=1;j<i;j++) {
			psctr[i][j]=psctr[i-1][j-1]+psctr[i-1][j];
		}
	}
	
	for (int i=0;i<num;i++) {
		for (int j=0;j<i+1;j++) {
			cout<<psctr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
