#include <iostream>

using namespace std;

char * strcpy(char * a, const char * b) {
	char * p = a;
	while (*b != '\0') {
		*a = *b;
		a++, b++;
	}
	*a = '\0';
	return p;
}

size_t strlen(const char * str) {
	const char * p = str;
	while (* p++);
	return (p - str - 1);
}

int strcmp(const char * a, const char *b) {
	int s = 0;
	while (!(s = *a - *b) && *b) {
		++a, ++b;
	}
	return s;
}

int main() {
	char a[100] = {0};
	cout<<strcpy(a, "abcdef")<<endl;
	cout<<a<<endl;
	cout<<strlen(a)<<endl;
	cout<<strcmp(a, "fedcba")<<endl;
	
	return 0;
}

