#include <stdio.h>

int main()

{
    float maths, english, science, Ans;

    printf("Enter maths mark:");
    scanf("%f", &maths);

    printf("Enter english mark:");
    scanf("%f", &english);

    printf("Enter science mark:");
    scanf("%f", &science);

    // if (maths,english,science < 0 && maths,english,science > 100)
    // {
    //     printf("Enter Your Valid Marks\n");
    // }

    // else
    // {
    //     printf("marks is valid");
    // }

    Ans = (maths + english + science)/3;

    printf("Average mark:%f\n", Ans);
}