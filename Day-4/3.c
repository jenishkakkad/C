#include<stdio.h>

int main()

{
    int FA,SA,TA;

    printf("First angle:");
    scanf("%d",&FA);

    printf("Second angle:");
    scanf("%d",&SA);

    TA = 180-FA-SA;

    printf("Third angle:%d",TA);

}
