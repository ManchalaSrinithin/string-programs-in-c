#include <stdio.h>   
main()  
{  
    char str[100],l=0,i,j;  
    int flag;  
    printf("Enter any string:");
    gets(str); 
	for(i=0;str[i]!=0;i++)
	{
	l++;	
	} 
    printf("Duplicate characters in a given string:\n");  
    for(i=0;i<l;i++)
	 {  
        flag=1;  
        for(j=i+1;j<l;j++)
		{  
            if(str[i]==str[j]&&str[i]!=' ')
			 {  
                flag++;  
                str[j]='\0';  
            }  
        }  
        if(flag>1&&str[i]!='\0')  
        {
		
           printf("%c\n", str[i]);  
       	}
    }  
   
}  