#include<stdio.h>
main()
{
	int i,n,j;
	char str[100];
	printf("Enter any string:");
	gets(str);
	printf("Enter the size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}	
}