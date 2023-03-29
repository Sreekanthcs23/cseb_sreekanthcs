#include<stdio.h>

int main()
{
	int a=12;
	int *ptr;
	ptr=&a;
	printf("Address of a direct: %p\n",&a);
	printf("Adress of a using pointer: %p\n",ptr);
}
