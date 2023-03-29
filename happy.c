#include<stdio.h>

void happy(int num)
{
	if(num/10 == 0)
	{
		if(num == 1)
		{
			printf("happy number\n");
		}
		else
		{
			printf("not happy number\n");
		}
		return;
	}
	int sum=0;
	while(num > 0)
	{
		int d = num%10;
		sum += (d*d);
		num = num/10;;
	}
	happy(sum);
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	happy(n);
	return 0;
}
