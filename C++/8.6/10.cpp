#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
	//scanf
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	cout<<x<<y<<z<<endl;
	
	int a;
	scanf("%4d",&a);
	cout<<a<<endl;
	
	//printf
	const int i=1024;
	printf("*%d*\n",i);
	printf("*%d*\n",i);
	printf("*%6d*\n",i);
	printf("*%6.5d*\n",i);
	printf("*%-6.5d*\n",i);
	printf("*%06d*\n",i);
	printf("*%+6d*\n",i);
	
	const double d=3.1415926535897932384626;
	printf("*%f*\n",d);
	printf("*%10f*\n",d);
	printf("*%10.2f*\n",d);
	printf("*%-10.2f*\n",d);
	printf("*%+10.2f*\n",d);
	printf("*%010.2f*\n",d);
	
	const char * s="Hello world";
	printf("*%s*\n",s);
	printf("*%20s*\n",s);
	printf("*%-20s*\n",s);
	printf("*%.10s*\n",s);
	
	return 0;
}
