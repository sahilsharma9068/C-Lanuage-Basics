#include<stdio.h>
int main(){
    int year,month,date;  
    printf("Enter your birth date\n");
    scanf("%d",&date);  
    printf("Enter your birth month\n");
    scanf("%d",&month);
    printf("Enter your birth year\n");
    scanf("%d",&year);
    // 02,09,2023
    if(date>02){
        date=30-date;
        month=month-1;
    }
    else{   
        date=2-date;

    }
    if(month>9){ 
        month=12-month;
        year=year-1;
    }
    else{
        month=9-month;
    }
printf("you are %d day %d month and %d year old",date,month,2023-year);
    

    
}