#include<stdio.h>
int main(){
    char name[20];
    int a,b;
      printf("Enter the name of the coustmer\n");
      scanf("%s",&name );
      printf("Enter the item he bought\n");
      scanf("%d",&a);
      printf("Enter the total amount of money he had to pay\n");
      scanf("%d",&b);
      printf("Dear %s\nYou bought %d items.You have to pay %d rupees\nThanks for visiting our shop",name,a,b);
}