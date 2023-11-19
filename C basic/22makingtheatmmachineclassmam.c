#include<stdio.h>
int main(){
    int moneywithdraw, enteredpin;
    int pincode = 9068;
    int moneyinaccount = 25000;
    printf("how much money do you want to withdraw\n");
    scanf("%d", &moneywithdraw);
    for(int i = 0; i <3 ; i++){
    printf(" enter your pin\n ");
    scanf("%d" ,&enteredpin);
    if(enteredpin==pincode&& moneywithdraw<moneyinaccount){ 
        printf("here's your money %d\n", moneywithdraw); 
        break;
    }
   else if (enteredpin==pincode && moneywithdraw>moneyinaccount){
    printf("you don't have enough money in your account");
    break;
    }
    else {
        printf("your entered pin is incorrect\n");
        
    }printf("your card has been blocked bcz you enter wrong pin 3 times");
    

}}
