#include<stdio.h>

int main()
{
	int a=100,b=200,sum;
	int *p1,*p2;
	p1 = &a;
	p2 = &b;
	sum = *p1 + *p2;
	printf("Sum: %d\n",sum);
	return 0;
}
