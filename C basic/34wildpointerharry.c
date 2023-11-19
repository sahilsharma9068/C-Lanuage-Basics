/*wild pointer and uninitialized pointer both are same if we create a pointer like int *ptr it is a wild pointer until any addres is not
given to it or initilized to it */
/*wild pointer are very bad for our program bcz they can crash our code very badly bcz they are uninitilized and have random addres stored 
in them*/
#include<stdio.h>
int main(){
    int a = 5;
    int *ptr; // here ptr is a wild pointer
    printf("%d\n",ptr);
    ptr = &a; // now ptr is not a wild pointer bcz now it is initilized with some addres
    printf("%d", ptr);
}
