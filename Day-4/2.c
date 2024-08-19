#include<stdio.h>

int main()

{
    int GS,BS,DA,HRA,TA;
    printf("Enter your Basic Salary:");
    scanf("%d",&BS);

    DA = (BS * 5) / 100;
    HRA = (BS * 10) / 100;
    TA = (BS * 8) / 100;
    GS = BS + DA + HRA + TA;

    printf("Gross Salary is:%d\n",GS);

   
}