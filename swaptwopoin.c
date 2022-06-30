#include<stdio.h>
main() 
{
   int n,*n1,*n2,n3;
   n1=&n;
   n2=&n3;
	printf("\nEnter the first number : ");
   scanf("%d",n1);
   printf("\nEnter the Second number : ");
   scanf("%d",n2);
	*n1=*n1+*n2;
   *n2=*n1-*n2;
   *n1=*n1-*n2;
   printf("\nFirst number is  : %d", *n1);
   printf("\nSecond number : %d", *n2);
}