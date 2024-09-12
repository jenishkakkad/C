#include <stdio.h>

int main() {
    int user, user_2;

    printf("Enter Number In 1 2 3....\n");
    printf("1 For Full Stack Web Development...\n");
    printf("2 For Graphics...\n");
    printf("3 For App Development...\n");

    scanf("%d", &user);

    switch (user) {
        case 1:
            printf("You Have Selected Full Stack Web Development...\n");
            printf("1 HTML\n");
            printf("2 CSS\n");
            printf("3 JQuery\n");
            printf("4 JavaScript\n");
            printf("5 React\n");

            scanf("%d", &user_2);

            switch (user_2) {
                case 1:
                    printf("HTML 10000\n");
                    break;
                case 2:
                    printf("CSS 20000\n");
                    break;
                case 3:
                    printf("JQuery 30000\n");
                    break;
                case 4:
                    printf("JavaScript 50000\n");
                    break;
                case 5:
                    printf("React 100000\n");
                    break;
                default:
                    printf("Input not valid\n");
                    break;
            }
            break;

        case 2:
            printf("You Have Selected Graphics...\n");
            // Additional code for graphics can be added here
            break;

        case 3:
            printf("You Have Selected App Development...\n");
            // Additional code for app development can be added here
            break;

        default:
            printf("Input not valid\n");
            break;
    }

    return 0;
}