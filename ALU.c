#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operation (+ or -): ");
    scanf(" %c", &c); // note the space before %c to skip newline

    switch (c)
    {
        case '+':
            printf("The addition of two numbers: %d\n", a + b);
            break;

        case '-':
            printf("The subtraction of two numbers: %d\n", a - b);
            break;

        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
