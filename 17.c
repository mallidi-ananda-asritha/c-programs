//accept two numbers and display the relationship between them, whether they are equal, 1st num is large or 2nd num is large.
#include<stdio.h>
void main()
{
int a , b;
 printf("enter two numbers:");
 scanf("%d %d", &a, &b);
 if(a == b)
    printf("both are equal\n");
 else
    if(a > b)
        printf( "a is larger");
    else
        printf("b is larger");

}
