/*we use or make any pointer null bcz let suppose we have a pointer int*ptr then this has a garbage value but by chance if this 
garbage value is equal to any addres in the code then it will create a problem so to avoid this we make the pointer null 
and in c language the null pointer can not be drefrenced */
/*Null pointer is a pointer which has value reserved to indicate that the pointer or reference does not refer to a valid object*/
/*Difference btwn null pointer and uninitlised pointer is that uninitilised pointer contains a undifined value btw nulll pointer 
contains a difined vlaue in most compilers it is 0 */
/*✨Null pointer is a value whereas Void pointer is a type (similar to int*ptr , char*ptr)*/
#include<stdio.h>
int main(){
    int a = 56;
    int *ptr;
    ptr = NULL;
    printf("%d",ptr);
}
