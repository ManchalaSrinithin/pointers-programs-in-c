#include<stdio.h>
main()
{
	int str[100],*str1[100];
    int i,x,pos,n;
    printf("Enter any values:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
   		str1[i]=&str[i];
	}
    printf("\nEnter %d values:",n);
    for (i=0;i<n;i++)
    {
    scanf("%d",str1[i]);
	}
    printf("Enter value to be inserted:");
    scanf("%d",&x);
 	printf("Enter the position to be inserted:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
	    *(str1[i+1])=*(str1[i]);
	}
    *(str1[pos-i])=x;
    for(i=0;i<=n;i++)
    printf("\n%d",*(str1[i]));
}                