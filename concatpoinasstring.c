#include <stdio.h>
main()
{
    char str1[100],str2[100];
    char * s1 = str1;
    char * s2 = str2;
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    while(*(++s1));
    while(*(s1++) = *(s2++));
    printf("Conatenated string: %s", str1);
}