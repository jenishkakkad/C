#include <stdio.h>

int main()

{
    float maths, english, science, Ans;

    printf("Enter maths mark:");
    scanf("%d", &maths);

    printf("Enter english mark:");
    scanf("%d", &english);

    printf("Enter science mark:");
    scanf("%d", &science);

    if (0 < maths, 0 < english, 0 < science || 100 < maths, 100 < english, 100 < science)
    {
        printf("Enter Your Valid Marks\n");
    }

    else
    {
        printf("marks is valid");
    }

    Ans = maths + english + science / 3;

    printf("Average mark:%d\n",Ans);
}