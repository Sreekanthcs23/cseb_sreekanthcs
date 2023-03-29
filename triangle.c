#include<stdio.h>

int main()
{
	float a,b,c;
	printf("Enter the sides:");
	scanf("%f %f %f",&a,&b,&c);
	if((a+b < c) || (a+c < b) || (b+c < a))
		printf("False");
		
	else
		printf("True");
	return 0;
}
