/*Dangling means Hanging(Latak rha h) */
/*A pointer pointing to a freed memory location or the location whose content has been deleted is called dangling pointer */
/*Dangling pointers arise during object destruction when and object that has an incoming referecne is deleted or deallocated
, without modifying the value of the pointer so that the pointer still points to the memor location of the deallocated memory*/
#include <stdio.h>
#include <stdlib.h>
int *fn()
{
    // a is local variable and goes out of scope on function return over
    int a;
    return &a;
} // when we run the code it will give a warning that fn returns address of local variable so don't worry it is not an error
int main()
{
    // Case 1: Dangling of the pointer bcz of Deallocation of memory
    char *str = "Hi Sahil";
    int a;
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr);  // ptr now becomes a dangling pointer
    ptr = NULL; // ptr no longer dangling
    // Case 2: Due to Returnig Local variable in function call
    int *pk = fn(); /* pk points to invalid location bcz the fn return the address of a to pk but after the excution of the function fn
                    the variable a has been deleted bcz when fn execute then stack memory of main make upper memory stack in which variable a is stored and and 
                    the execution of fn that upper stack is deleted thus local varable a is deleted after execution thus now the pk is pointing a varible which does
                     not exist thus now the pk is a dangling pointer */
    //Case 3: Due to varible going out of scope 
    int *sk;
    {
        int i =0;
        sk = &i;
    }// this is a scope
    /*sk is now a dangling pointer bcz we give address of i to sk but now we are out of scope and out of scope i did not exist and sk is pointing to a no existing 
    variable */
/*1- Dangling pointers can introduce nasty bugs in our C program 
  2- Dangling pointers bugs frequently become security holes at times
  3- We can avoid issues caused by dangling pointers by initializing pointer to NULL
  4- After de-allocating memory, pointer will be no longer dangling 
  5- Assinging Null value means pointer is null pointer */

}
