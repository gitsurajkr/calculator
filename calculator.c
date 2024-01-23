#include <stdio.h>
#include <math.h>

void calculator(float a, char o, float b)
{
    switch (o)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
        break;

    case '-':
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
        break;

    case '*':
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
        break;

    case '/':
        if (b == 0)
        {
            printf("Undefined\n");
        }
        else
        {
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        }
        break;

    case '%':
        printf("%.2f %% %.2f = %.2f\n", a, b, fmod(a, b));
        break;

    default:
        printf("Invalid Operator!!\n");
        break;
    }
}

int main()
{
    int num1;
    int num2;
    char operator;
    int key;
    char a;
    while (1)
    {
        printf("\nPress 1 to Run Program \nPress 0 to quit program\n");
        scanf("%d", &key);

        if (key == 0)
        {
            printf("Exiting Program.........\n");
            return 0;
        }
        else if (key != 1)
        {
            printf("Invalid Key!! Please enter a valid key.\n");
            while (getchar() != '\n');
            continue;
        }
        else
        {
            printf("Enter First Number:");
            if (scanf("%d", &num1) != 1)
            {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                continue;
            }

            printf("Enter Operator: +, -, *, /, %%: ");
            scanf(" %c", &operator);

            printf("Enter Second Number:");
            if (scanf("%d", &num2) != 1)
            {
                printf("Invalid input.\n");
                while (getchar() != '\n');
                continue;
            }

            calculator(num1, operator, num2);
        }
    }

    return 0;
}
