#include <bits/stdc++.h>
#include <string>
#include <cstdio>

using namespace std;

const unsigned int MAXN = 100000;
int stk[MAXN], top = 0, M;

void push(int x) {
	scanf("%d", &x);
	top ++;
	stk[top] = x;
}

int query() {
	return top;
}

void pop() {
	top --;
}

bool empty() {
	if (top > 0) return false;
	else return true;
}

void clear() {
	top = 0;
}

void operateStack() {
	scanf("%d", &M);
	while (M --) {
		string opr;
		cin >> opr;
		if (opr == "push") {
			int x;
			scanf("%d", &x);
			push(x);
		}
		else if (opr == "query") {
			printf("%d\n", query());
		}
		else if (opr == "pop") {
			pop();
		}
		else if (opr == "empty") {
			cout << empty() << endl;
		}
		else {
			printf("Invalid operate. Please try again.\n");
			M ++;
		}
	}
	clear();
}

void calcSuffixExpression(char opr) {
	int res;
	int b = stk[top];
	pop();
	int a = stk[top];
	pop();
	
	switch (opr) {
		case ('+') : {
			res = a + b;
			break;
		}
		case ('-') : {
			res = a - b;
			break;
		}
		case ('*') : {
			res = a * b;
			break;
		}
		case ('/') : {
			res = a / b;
			break;
		}
	}
	push(res);
}

void getNumbersToStack() {
	string og;
	getline(cin, og);
	
	for (int i = 0; i < og.size(); i ++) {
		char c = og[i];
		if (c == ' ') continue;
		else if (isdigit(c)) {
			int x = c - '0', j = i + 1;
			while (j < og.size() && isdigit(og[j])) {
				x = x * 10 + (og[j] - '0');
				j ++;
			}
			i = j - 1;
			push(x);
		}
		else {
			calcSuffixExpression(c);
		}
	}
}


int main() {
	operateStack();
	
	getNumbersToStack();
	cout << stk[top] << endl;	
	
	return 0;
}

