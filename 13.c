//taking principal amount, discount, no of years and calculating the simple intrest.
#include<stdio.h>
void main()
{
int p, t, r , simple_intrest;
printf("enteer the values of p t r:");
scanf("%d %d %d", &p, &t, &r);
simple_intrest = p * t * r / 100;
printf("simple intrest = %d", simple_intrest);
}
