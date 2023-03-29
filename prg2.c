#include<stdio.h>

int main()
{
	int arr[20];
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("Sum = %d\n",sum);
	int flag=0;
	for(int i=0;i<sum/2;i++)
	{
		if(sum%2==0)
		{
			printf("Sum not prime\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("Sum is prime\n");
	return 0;
}
