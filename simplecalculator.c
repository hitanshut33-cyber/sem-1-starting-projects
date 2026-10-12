#include<stdio.h>
int main()
{
    int a, b, sum, difference, product, quotient;
    printf("Enter value of A:");
    scanf("%d", &a);
    printf("Enter value of B:");
    scanf("%d", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    printf("Sum of A and B is : %d\n", sum);
    printf("Difference of A and B is : %d\n", difference);
    printf("Product of A and B is : %d\n", product);
    printf("Quotient of A and B is : %d\n", quotient);
    return 0;
}