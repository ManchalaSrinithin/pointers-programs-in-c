#include<stdio.h>
main()
{
	float x,y,z,*p1,*p2,*p3;
	p1=&x;
	p2=&y;
	p3=&z;
	printf("Enter any two numbers:");
	scanf("%f%f",p1,p2);
	*p3=*p1+*p2;
	printf("addition=%f\n",*p3);
}