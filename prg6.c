#include<stdio.h>

int main()
{
	int a=600,b=200;
	int *p1,*p2;
	p1 = &a;
	p2 = &b;
	int res = *p1/ *p2;
	printf("%d",res);
	return 0;
}
