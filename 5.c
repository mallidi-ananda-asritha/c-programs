#include<stdio.h>
void main()
{
int amount, discount,a, net_amount;
printf("enter the amount:");
scanf("%d" , &amount);
printf("enter the discount :");
scanf("%d", &discount);
a = amount * discount / 100;
net_amount = amount - a;
printf("net amount = %d", net_amount);
}
