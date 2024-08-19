#include <stdio.h>
// area of triangle
int main()
{
    float JK,JR;
    float JKRJ;

    printf("Enter value of l and b :");
    scanf("%f", &JK);
    scanf("%f", &JR);
    JKRJ = 0.5 * JK * JR;

    printf("area of triangle is :%f",JKRJ);
}