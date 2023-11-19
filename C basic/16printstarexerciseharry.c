#include <stdio.h>
int main()
{
    int n;
    printf("how much no of rows of traingular start do you want to print");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    /*for reverse start traingle*/
    for (int a = n; a > 0; a--)
    {
        for (int b = 0; b < a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a = n; a > 0; a--)
    {
        for (int b = 0; b < a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int a = n; a > 0; a--)
    {
        for (int b = 0; b < a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}
