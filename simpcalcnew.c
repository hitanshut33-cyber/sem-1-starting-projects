#include <stdio.h>
int main()
{
    float a,b;
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);

    switch(op)
    {
        case '+':
            printf("%.2f + %.2f = %.2f", a, b, a + b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", a, b, a - b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", a, b, a * b);
            break;
        case '/':
            if(b != 0)
                printf("%.2f / %.2f = %.2f", a, b, a / b);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! Operator is not correct");
    }
}