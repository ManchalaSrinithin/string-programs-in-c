#include<stdio.h>
int strcmpi(int str [ ],int str1 [ ]);
main()
{
	int z;
	char str[100],str1[100];
	printf("Enter the string:");
	gets(str);
	printf("Enter the second string:");
	gets(str1);
	z=strcmpi(str,str1);
	if(z==1)
	printf("The both strings are same\n");
	else
	printf("The given strings are not same\n");
	
}
int strcmpi(int str [ ],int str1 [ ])
{
	int i,l=0,j,l1=0;
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
	return 1;
	else
	{
	return 0;
	break;
	}
	}
}