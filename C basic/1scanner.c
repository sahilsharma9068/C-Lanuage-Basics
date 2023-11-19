#include <stdio.h> 
int main(int argc, char const *argv[])
{
     int p , t ; 
     float r ,si ; 
     printf( " inter the p t r "); 
     scanf("%d %d %f ", &p , &t , &r ); 
     
     si = (p*r*t)/100;  
     printf("%f" , si );
      return 0;
}
