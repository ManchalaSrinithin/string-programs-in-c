#include<stdio.h>
char comp(char [ ],char[ ]);
main()
{
	char str[100],str1[100];
	int z;
	printf("Enter the string:");
	gets(str);
	printf("Enter the another string:");
	gets(str1);
	z=comp(str,str1);
	if(z==1)
	printf("both strings are same");
	else
	printf("both strings are different");
	
}
char comp(char str[ ],char str1[ ])
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