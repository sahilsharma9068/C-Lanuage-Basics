#include<stdio.h> 
 /*it is used when we have to break a loop mostly we also can use break statement but if we use 
 break statement the only runinng loop will break but if we use goto statement it will exit all the loop and go to end */
int main(){   /* lineone:    printf("on the way\n"); 
goto end;   
end:    */  int number;
for(int i = 0; i < 10 ; i++ ){  printf("enter a no. to exit the code enter 0 ");
 for (int j = 0 ; j <8 ; j++ ){
      scanf("%d" , &number);  
      if(number==0){ goto end ;}   }

} end: 
 return 0 ; }