#include <stdio.h>
main()
{
    int arr[100],i,*ptr,s;        
    ptr=&arr[0];       
	printf("Enter the size of the array:");
	scanf("%d",&s);
    printf("Enter array elements:\n");
    for(i=0;i<s;i++)
	{
        scanf("%d",ptr+i);   
    }
    printf("\nEntered array elements are:");
    printf("\nAddress\t\tValue\n");
    for(i=0;i<s;i++)
	{
        printf("%08X\t%03d\n",(ptr+i),*(ptr+i));
    }
}