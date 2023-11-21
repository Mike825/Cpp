#include <bits/stdc++.h>
 
using namespace std;

int head, idx, dt[100000], ne[100000];	//data, pointer
void init() {
	head = -1;
	idx = 0;
}

void add_head(int x) {
	dt[idx] = x;	//data zone
	ne[idx] = head;	//pointer zone
	head = idx;
	idx++;	
}

void insert(int k, int x) {
	dt[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx;
	idx++;
}

void del(int k) {
	ne[k] = ne[ne[k]];
	
}

int main() {
	init();
	add_head(9);
	add_head(8);
	add_head(7);
	for (int i = head; i != -1; i = ne[i]) {
		printf("%d\t", dt[i]);
	}
	printf("\n");
	
	insert(1, 155);
	for (int i = head; i != -1; i = ne[i]) {
		printf("%d\t", dt[i]);;
	}
	printf("\n");
	
	del(1);
	for (int i = head; i != -1; i = ne[i]) {
		printf("%d\t", dt[i]);
	}
	printf("\n");
	
	return 0;
}

