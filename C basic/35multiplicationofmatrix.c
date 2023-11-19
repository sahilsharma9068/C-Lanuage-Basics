#include <stdio.h>
#include <stdlib.h>
int main()
{      
    int a, b, c, d;
    printf("How much rows in matrix 1\n");
    scanf("%d", &a);
    printf("How much column in matrix 1\n");
    scanf("%d", &b);
    printf("How much rows in matrix 2\n");
    scanf("%d", &c);
    printf("How much column in matrix 2\n ");
    scanf("%d", &d);
    int result[a][d];
    int mtr1[a][b];
    int mtr2[c][d];
    int mlt=0;
    if (b == c)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                // printf("ENTER THE ELEMENT %d%d\n",i,j);
                scanf("%d ", &mtr1[i][j]);
            }
        }
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                // printf("ENTER THE ELEMENT %d%d\n",i,j);2
                scanf("%d", &mtr1[i][j]);
            }
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
               for(int k =0;k<b;k++)  {
                mlt += mtr1[i][k]*mtr2[k][j];
               }
               result[i][j]= mlt;
               mlt=0;
    }}     
        }
         for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d\n", result[i][j]);
            
            } }
        }