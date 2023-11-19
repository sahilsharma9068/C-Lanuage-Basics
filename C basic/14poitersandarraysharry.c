#include <stdio.h>
/*poiters are used to store the adress of any data type*/
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("%d\n" , ptr);/*it will print the addres of the int */
    printf("%d\n", *ptr);/*it will print the value of the int*/
    int array[4] = {1, 5, 6, 8};
    printf("%d\n", &array[0]);/*it will print the addres of the element*/
    printf("%d\n", &array[1]);/*it will print the addres of the element*/
    printf("%d\n", &array[3]);/*it will print the addres of the element*/
    printf("%d\n", *(&array[1]));/*it will print the value of element*/
    printf("%d\n", array);/*it will print the addres of the  0th element of the array */
    printf("%d\n", array + 1);/*it will print the addres of 1st element of the array*/
}