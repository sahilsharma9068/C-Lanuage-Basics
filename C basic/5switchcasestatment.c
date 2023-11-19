#include<stdio.h>
int main(){int a;
    printf("enter you lucky no from 1 to 8 and see what is your personality");
    scanf("%d",&a);
    switch(a){
        case 1 : printf("your are a shy person "); break;
        case 2 :printf("you are introvert ");break;
        case 3 : printf("you are an extrovert person ");break;
        case 4 : printf("you are a kind person");break;
        case 5: printf("you are a loyal person");break;
        case 6: printf("you have anger issue ");break;
        case 7 : printf("you have freindly nature ");break;
        case 8 : printf("you are a bad person");break;
    }
}