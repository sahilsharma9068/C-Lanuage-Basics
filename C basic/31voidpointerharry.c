/* void pointer are the pointers where data type is not defined we can store any type of data in this pointer which we want but if we 
want to print that datatype value from the void pointer then we have to do typecasting */
#include<stdio.h>
int main(){
      int a = 88;
      float b = 5.88;
      void *ptr;
      ptr =&a;
      printf("%d\n",*((int*)ptr));
      ptr = &b;
      printf("%f",*((float*)ptr));
}