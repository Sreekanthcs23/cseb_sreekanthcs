#include<stdio.h>

int main()
{
	char str[20];
	printf("Enter a string:");
	scanf("%s",str);
	int sum=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='*')
			sum++;
		else if(str[i]=='#')
			sum--;
	}
	printf("%d",sum);
	return 0;
}
