#include<stdio.h>
// evaluate the (x-y)^3
int main()
{
    printf("Program for evaluating (x-y)^3\n");
    int x,y,formula;

    
    printf("add the value of x");
    scanf("%d",&x);
    
    printf("add the value of y");
    scanf("%d",&y);

    formula = x*x*x + y*y*y + 3*x*x*y +3*x*y*y;

    printf("the answer is\n %d",formula);

    // printf("%d",formula);

    }