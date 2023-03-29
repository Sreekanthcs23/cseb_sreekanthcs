#include<stdio.h>

int main()
{
	int n,m;
	printf("Enter m and n:");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	printf("Enter the arrray:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered array\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
