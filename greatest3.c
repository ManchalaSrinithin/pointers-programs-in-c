#include<stdio.h>
main()
{
	float x,y,z,*p1,*p2,*p3;
	p1=&x;
	p2=&y;
	p3=&z;
	printf("Enter any three numbers:");
	scanf("%f%f%f",p1,p2,p3);
	if(*p1>*p2&&*p1>*p3)
	printf("The greatest number is %1f",*p1);
	else if(*p2>*p1&&*p2>*p3)
	printf("The greatest number is %1f",*p2);
	else
	printf("The greatest number is %1f",*p3);
}