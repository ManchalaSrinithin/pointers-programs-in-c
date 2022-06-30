#include<stdio.h>
main()
{
	int a[100],*p,n,i,*g,l=0;
	printf("Enter the size of the elements");
	scanf("%d",&n);
	p=&a[0];
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)>l)
		l=*(p+i);
	}
		printf("The greatest number is %d\n",l);	
}