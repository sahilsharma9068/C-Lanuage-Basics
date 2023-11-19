#include <stdio.h> /* if we use continue statement it keep our loop continue and skip the some line of code which are after the 
continue statement if the contdition for continue statement is correct */
int main()
{
    int k = 11;
    int j;
    while (k < 19)
    {
        printf("how much letter are in your name ");
        scanf("%c", &j);
        if (j == 5)
        {
            continue;
        } printf("k dikkat h r tara\n");
        k++;
    }
    return 0;
}