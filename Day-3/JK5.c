#include<stdio.h>
//  swaping two values without third variable
int main()
{
    int a,b;

    printf("enter the first value = ");
    scanf("%d",&a);
    printf("enter the second value = ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("the new value of a = %d",a);
    printf("the new value of b = %d",b);
    }