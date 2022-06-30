#include<stdio.h>
char palin(char [ ]);
main()
{
	char str[100],z;
	printf("Enter any string:");
	gets(str);
	z=palin(str);
	if(z==1)
	printf("The given number is a palindrome");
	else
	printf("The given number is not a palindrome");	
}
char palin(char str[ ])
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
	for(i=0;i<=l;i++)
	{
	if(rev[i]==str[i])
	return 1;
	else
	{
	return 0;
	break;
	}
	}
}
