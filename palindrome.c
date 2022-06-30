#include<stdio.h>
main()
{
	int i,l=0,j=0,k=0,flag;
	char str[100],rev[100],str1[100];
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
	for(i=0;i<=l;i++)
	{
		str1[k]=str[i];
		k++;
	}	
	for(j=0,k=0;k<=l,j<=l;k++,j++)
	{
	if(rev[j]==str1[k])
	flag=1;
	else
	{
	flag=0;
	break;
	}
	}
	if(flag==1)
	printf("The given string is a palindrome string\n");
	else
	printf("The given string is not a palindrome string\n");
	}
        
	
