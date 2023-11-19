/*write no 1 2 3 4 5 6 7 8 and print them reverse in a array*/
#include<stdio.h>
#include<string.h>
    void arrrev(int ary[]){
    int temp;
    for(int i = 0; i<(9/2);i++){
        temp= ary[i];
        ary[i]=ary[9-i];
        ary[9-i]=temp;
    }
}
int main(){
     int array[]={1,2,3,4,5,6,7,8,9};
     for (int i = 0; i < 9; i++)
     {
        printf("%d", array[i]);
       
     }printf("\n");
     for (int j = 0; j < 9; j++)
     {
         printf("%d",array[8-j]);
     }printf("\n");
     /*trying the new method swaping the no to print reverse the no */
     arrrev(array);
      for (int i = 0; i < 9; i++)
     {
        printf("%d", array[i]);
       
     }
     
    
}