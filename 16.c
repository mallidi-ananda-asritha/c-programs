//printing whether a number is oven or odd with conditional expreession.
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("Even") : printf("Odd");
}
