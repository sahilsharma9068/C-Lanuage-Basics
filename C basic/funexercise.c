#include<stdio.h>
int main(){
    int i ;
    printf("how much line of code do you want ");
    scanf("%d", &i);
    for(int j = 0; j<i;j++){
        for (int k =i- j; k>0; k--)
        {
            printf(" ");
        }
        for(int l =0;l<=j;l++){
            printf("*");
        }for(int l =0;l<=j;l++){
            printf("*");}
        for (int k =i-j; k>0; k--)
        {
            printf(" ");
        }
 printf("\n");
} for(int j = 0; j<i;j++){
     for(int l = 0;l<=j;l++){printf(" ");}
    for(int k = i-j;k>0;k--){
        printf("*");
    }for(int k = i-j;k>0;k--){
        printf("*");} printf("\n");
 }}