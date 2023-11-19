#include <stdio.h> 
 int main()
 {          /* int a ; 
    printf("enter the no. whose table you want "); 
    scanf("%d " , &a ); 
    printf(  "\n  a * 1 = %d " , a*1 ) ;
    printf(  "\n a * 2=  %d " , a*2  );
    printf( "\n  a *3 =  %d " , a*3  );
    printf( "\n a * 4 = %d " , a*4 );
    printf( "\n a * 5 = %d " , a*5 );
    printf( "\n a * 6 = %d " , a*6 );
    printf( "\n a * 7 = %d " , a*7 );
    printf( "\n a * 8 = %d " , a*8 );
    printf( "\n a * 9 = %d " , a*9 );
    printf( "\n a * 10 = %d " , a*10 );*/
 int j;
       printf("enter the no whose multiplication table do you want");
    scanf(" %d", &j );
    for(int i = 1 ; i< 11; i++){  
        printf( "\n%d*%d = %d",j,i,j*i);
    }
     

    
 }