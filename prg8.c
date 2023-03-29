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
	printf("Diagonal elements\n");
	for(int i=0;i<m;i++)
	{
		printf("%d  ",arr[i][i]);
	}
	printf("\nupper diagonal elements\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<j)
				printf("%d  ",arr[i][j]);
		}
	}
	printf("\nlower diagonal elements\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>j)
				printf("%d  ",arr[i][j]);
		}
	}
	printf("\n non diagonal elements\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			printf("%d  ",arr[i][j]);
		}
	}
	return 0;
}
