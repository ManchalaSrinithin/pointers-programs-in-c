#include<stdio.h>
main()
{
	int x,y,z,a,*p1,*p2,*p3,*p4,avg,*p;
	p1=&x;
	p2=&y;
	p3=&z;
	p4=&a;
	p=&avg;
	printf("Enter any four subject marks:");
	scanf("%d%d%d%d",p1,p2,p3,p4);
	*p=(*p1+*p2+*p3+*p4)/4;
	if(*p>90&&*p<=100)
	printf("grade is A+\n");
	if(*p>80&&*p<=90)
	printf("grade is A\n");
	if(*p>70&&*p<=80)
	printf("grade is B\n");
	if(*p>60&&*p<=70)
	printf("grade is c\n");
	
}