#include<stdio.h>

int main()
{
	char arr[20];
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array:");
	scanf("%s",arr);
	for(int i=0;i<n;i++)
		printf("%c",arr[i]);
	printf("\n");
	for(int i=0;i<n/2;i++)
	{
		char t = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = t;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i] == '0')
			arr[i] = '$';
	}
	for(int i=0;i<n;i++)
		printf("%c",arr[i]);
	return 0;
}
