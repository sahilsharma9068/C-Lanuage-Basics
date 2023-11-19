/*we have a heap memory other than stack meomory the heap memory is known as dynamic memory we can get the memory from dynamic memory
by using some function like malloc , calloc , relloc, free */
// stdlib is library for the dynamic memory allocation fn
/*1.Malloc fn it reserve a block of memory 
Syntex~ ptr = (ptr-type*) malloc(size in bytes);
if the memory is insuficient then ptr will be given a garbage value */
/*2.Calloc fn it reserves n  contigous block of  memory
Syntex~ ptr = (ptr-type*) calloc(n,size in bytes);
if the memory is insuficient then ptr will be given value 0*/
/*3.Realloc stnads for rellocation of memeory
if the size of dynamicaly allocated memory is insufficent then we can relocat the memory using relloc fn
Syntex~ ptr = (ptr-type*) realloc(ptr, new size in bytes);*/
/*4.free fn is used to free the allocated memory
if the allocated memory is no longer required we can free it uisng free fn 
Syntex~ free(ptr); */
#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int a, b, c;
    int *e1;
    int *e2;
    int *e3;
    printf("How much chararacter in your id \n");
    scanf("%d", &a);
    e1 = (int*) malloc(a+1 * sizeof(int));
    printf("Enter your ID\n");
    scanf("%s", e1);
    printf("How much chararacter in your id\n ");
    scanf("%d", &b);
    e2 = (int*) malloc(b+1* sizeof(int));
    printf("Enter your ID\n");
    scanf("%s", e2);
    printf("How much chararacter in your id\n ");
    scanf("%d", &c);
    e3 = (int*) malloc( c+1 * sizeof(int));
    printf("Enter your ID\n");
    scanf("%s", e3);
    printf("ID of employ 1 is %s\n", e1);
    printf("ID of employ 2 is %s\n", e2);
    printf("ID of employ 3 is %s\n", e3);
    free(e1);
    free(e2);
    free(e3);
     
}