#include<stdio.h>    /*we use break statement to break a loop in mid  it is also used in switch case*/
int main (){ 
   // int i =10;
   // while(i>0)  {   printf("i is greater than 0\n" );
   // if(i==9){  break; }
      //  i--; 
   // }    
   int age;
   for(int i = 0; i<10; i++){    printf("enter your age")  ; scanf("%d",&age);
   if (age<18){ break;}   printf("you can play video\n"); 

   }
    return 0;
}