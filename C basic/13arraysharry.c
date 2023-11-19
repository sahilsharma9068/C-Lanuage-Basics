#include <stdio.h>
/* in arrays we store same type of datatype this data types are stored in continues memmory and thus extraction of this data
type is very fast and quick*/
int main()
{
    /*2d arrays*/ int marks[10];
    marks[1] = 80;
    marks[2] = 90;
    marks[3] = 60;
    marks[4] = 50;
    marks[5] = 90;
    marks[6] = 40;
    marks[7] = 90;
    marks[8] = 90;
    marks[9] = 70;
    marks[10] = 50;
    for (int i = 1; i < 11; i++)
    {
        printf("the marks of student %d is %d\n", i, marks[i]);
    }
    /* we also assign a array like following */
    printf("by another method\n");
    int percnt[10] = {80, 100, 56, 78, 98, 30, 58, 56, 76, 87};
    for (int j = 0; j < 10; j++)
    {
        printf("the marks of studnet %d is %d\n", j, percnt[j]);
    }
    /*3d arrays */
    printf("in 3d arrays\n");
    int threed[2][4] = {{10, 40, 50, 90}, {10, 70, 80, 50}}; /* here 2 denote the no of rows and 4 denotes the no of columnes*/
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 4; l++)
        {

            printf("the marks of student %d %d is %d \n", k, l, threed[k][l]);
    
        }
    }
}
