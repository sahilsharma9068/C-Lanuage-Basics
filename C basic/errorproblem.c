 #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char turn[10];
   printf("Sahil it's your turn\n");
    gets(turn);
    srand(time(NULL));
    int a = rand()%10;
    printf("a=%d\n", a);
   if(turn=="sessior" )   {
    if(a==1||a==2||a==0||a==3){
        printf("computer turn is :Rock\n");
        printf("You lose\n");     }}
    else if(  turn == "rock" ){
        if( a==4||a==5||a==6){
        printf("computer turn is :paper\n");
        printf("You lose\n"); 
            }    }
    else if(turn =="paper" ){
        if(a==7||a==8||a==9){
        printf("computer turn is :sessior\n");
        printf("You lose\n"); }}
    else if( turn=="paper"  ){ if(a==0||a==1||a==2||a==3){
        printf("computer turn is :Rock\n");
        printf("Hurrah! Sahil you won the match\n");}}
    else if(turn=="rock"   ){ if(a==4||a==5||a==6 ){
        printf("computer turn is :paper\n");
        printf("Hurrah! Sahil you won the match\n"); }
    }
    else if(turn=="sessior"  ){if(a==7||a==8||a==9 ){
        printf("computer turn is :sessior\n");
        printf("Hurrah! Sahil you won the match\n"); }
    }
    else{
        printf("computer turn is %s\n ", turn);
        printf("the match is tie\n");
    }


   }
