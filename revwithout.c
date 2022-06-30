#include<stdio.h>
main()
{
	int i,l=0,j=0;
	char str[100],rev[100];
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	printf("length of the string:%d\n",l);
	for(i=l-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}	
	rev[j]='\0';
	puts(rev);
}