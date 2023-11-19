/*static variable is a different type of variable as we now that if we store any value in a varibale a like 5 and apply a++  and said to 
print a it will print 6 ,1 increase in the a and then if we again print a then  we agian we get 1 increased in 5 but if we use static
variable then if we print first time it will print 5 and increase 1 and now remeber that varable value is 6 next time it will take value
6 and make it 7 and now remember that varable value is 7 and next time increase 1 and give 8 static remeber the cahnged value but a normal 
varible did not*/
#include<stdio.h>
int fun(int b){
static int rollno=5;
    rollno=rollno+1;
    return rollno;
    }
int main(){
 int rollno;
 int a =fun(rollno);
     printf("%d\n",a);
 int b =fun(rollno);
        printf("%d\n",b);
 int c =fun(rollno);
        printf("%d\n",c);
 int d =fun(rollno);
        printf("%d\n",d);
}