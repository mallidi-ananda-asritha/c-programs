//printing the largest of two numbers
#include<stdio.h>
void main()
{
 int a, b;
 printf("enter the values of a and b:");
 scanf("%d %d", &a, &b);
 if(a > b)
    printf("a is largest");
 else
    printf("b is largest");
}
