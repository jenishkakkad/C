#include<stdio.h>

int main()

{
     int first,second,third;

     printf("Enter a value of the first number:");
     scanf("%d",&first);
     printf("Enter a value of the second number:");
     scanf("%d",&second);
     printf("Enter a value of the third number:");
     scanf("%d",&third);

     (first < second) ? (first < third) ? printf("%d is min",first) : printf("%d is min",third) : (second < third) ? printf("%d is min",second) : printf("%d is min",third);
}