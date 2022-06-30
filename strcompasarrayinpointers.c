#include<stdio.h>
main()
{
	int i,l=0,j,flag,l1=0;
	char str[100],*str1,str2[100],*str3;
	str1=&str[0];
	str3=&str2[0];
	printf("Enter the string:");
	gets(str);
	printf("Enter the second string:");
	gets(str2);
	for(i=0;*(str1+i)!=0;i++)
	{
		l++;
	}	
	for(j=0;*(str3+j)!=0;j++)
	{
		l1++;
	}	
	for(i=0,j=0;i<=l,j<=l1;i++,j++)
	{
	if(*(str1+i)==*(str3+j))
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
        
	
