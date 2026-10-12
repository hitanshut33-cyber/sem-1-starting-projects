#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of A:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("A is Even number");
    }
    else
    {
        printf("A is Odd number");
    }
    return 0;
}