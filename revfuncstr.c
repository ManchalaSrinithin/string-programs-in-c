#include<stdio.h>
char revi(char str[ ]);
main()
{
	char str[100];
	printf("Enter any string:");
	gets(str);
	revi(str);
}
char revi(char str[ ])
{
	int i,l=0,j=0;
	char rev[100];
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	for(i=l-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}	
	rev[j]='\0';
	printf("Reverse of the string is:%s",rev);
}