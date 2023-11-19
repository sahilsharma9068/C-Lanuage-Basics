#include<stdio.h>
/*in call by refrene we give the addres of the variable to the function and then can change the value by the variable in main function
but if we use call by value then we can't change the value of varible in main function*/
/*this is the exercise given by harry*/
void interchange(int*a, int *b){
int c = *a+*b;
int d=*a-*b;
*a=c;
*b=d;
return ;
}
int main(){
    int a, b;
    printf("enter any two no ");
    scanf("%d",&a);
        scanf("%d",&b);

    interchange(&a,&b);
    printf("a=%d,b=%d",a,b);
}