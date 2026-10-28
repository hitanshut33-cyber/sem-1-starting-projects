#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter a number for its table : ");
    scanf("%d",&n);
    printf("your table is :\n");
    for (i=1; i<=10; i++)
    {
    printf("%d X %d = %d\n",n,i,n*i);
    }
}