/*it is little bit like functions the diffrence is that it is the function which call itself in its code 
it reduce the line of code and do step by step work like in the following code we give a value to the reursion fn and will will deep and 
deep and deep until it got  i = 1 */
#include<stdio.h>
int recursion(int i){
    
     
     if ( i==0 || i==1){
        return 1;}
        else { 
             return ( i*recursion(i-1));
        
     }
}
int main(){
            
 int j ;
 printf("enter the no whose factorial you want");
  scanf("%d",&j);
  printf("the factorial of %d is %d", j , recursion(j));

}