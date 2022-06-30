#include<stdio.h>
main()
{
	int i,l=0,k=0;
	char str[100],str1[100];
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	for(i=0;i<=l;i++)
	{
		str1[k]=str[i];
		k++;
	}	
	puts(str1);
}