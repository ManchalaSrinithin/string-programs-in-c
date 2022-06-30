#include<stdio.h>
main()
{
	int i,l=0,s=0;
	char str[100];
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	for(i=0;i<=l;i++)
	{
		if(str[i]==' ')
		{
			s++;	
		}
	}
	printf("Number of words=%d",s+1);
}