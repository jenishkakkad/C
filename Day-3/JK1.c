#include<stdio.h>
// evaluate the (x+y)^2
int main()
{
    printf("Program for evaluating (x+y)^2\n");
    int x,y,formula;
    printf("add the value of x");
    scanf("%d",&x);
    printf("add the value of y");
    scanf("%d",&y);
    formula = x*x + y*y + 2*x*y;
    printf("the answer is\n %d",formula);
    // printf("%d",formula);
    }