#include<stdio.h>
//  swaping two values with third variable
int main()
{
    int a,b,c;

    printf("enter the first value = ");
    scanf("%d",&a);
    printf("enter the second value = ");
    scanf("%d",&b);

   c = a;
   a = b; 
   b = c;

    printf("the new value of a = %d\n",a);
    printf("the new value of b = %d",b);
    }