#include<stdio.h>
#include "24unionharry.c" /* this will include the progam code inside the file 24unionharry.c and if there is anyglobal variable or any fn in that code
                         then we did not have to difine that again it bcz we now had included that file
                         Remember that we can only use global variable from that included program */
#define Pi 3.14 // it will define pi every where as 3.14 where we say pi it mean for pre processor 3.14
#define Square(r) r*r
/*int main(){
    printf("the id from the included file is %d", s1.id);
}
this will show an error bcz we have now two main fn bcz one from the included file and one here we create so we hare creat main fn with different name*/
int main(){ 
    int b= 5;
    printf("the id from the included progaram is %d\n", a);
 printf("%f\n",Pi); 
 printf("area of square is %d ", Square(b));
}
