#include<stdio.h>
main()
{
	int i,l=0,j,flag,l1=0;
	char str[100],str1[100];
	printf("Enter the string:");
	gets(str);
	printf("Enter the second string:");
	gets(str1);
	for(i=0;str[i]!=0;i++)
	{
		l++;
	}	
	for(j=0;str1[j]!=0;j++)
	{
		l1++;
	}	
	for(i=0,j=0;i<=l,j<=l1;i++,j++)
	{
	if(str[i]==str1[j])
	flag=1;
	else
	{
	flag=0;
	break;
	}
	}
	if(flag==1)
	printf("The both strings are same\n");
	else
	printf("The given strings are not same\n");
	}
        
	
