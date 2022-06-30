#include<stdio.h>
main()
{
	int i,l=0,j=0,*l1,flag=0;
	char str[100],str1[100],*p,*p1;
	p=str;
	p1=str1;
	l1=&l;
	printf("Enter the string :");
	gets(str);
	for(i=0;*(p+i)!='\0';i++)
	{
		l++;
	}
	for(i=*(l1)-1;i>=0;i--)
	{
		*(p1+j)=*(p+i);
		j++;
	}
	*(p1+j)='\0';
	printf("\n");
	for(i=0;*(p+i)!='\0';i++)
	{
		for(j=0;*(p1+j)!='\0';j++)
		{
			if(*(p+i)==*(p1+j))
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
			
		}
	}
	if(flag==1)
	printf("It is a palindrome number\n");
	else
	printf("It is not a palindrome number\n");
	
}