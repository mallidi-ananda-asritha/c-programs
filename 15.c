// taking two numbers and swapping them
#include<stdio.h>
void main()
{
 int a , b , temp;
printf("enter two numbers:");
scanf("%d %d", &a , &b);
temp = a ;
a = b ;
b = temp;
printf("the value of a after swapping is %d",a);
printf("the value of b after swapping is %d", b);
 }
