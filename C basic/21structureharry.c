/*structure is a self defiend data type we use structure when  we have to store mulitiple data type bcz in a array we can only use 
one type of data type .Structure is defined outside the main function */
#include<stdio.h>
#include<string.h> 
 struct multiple
         {
            char name[44];
            int rollno;
           int class;
           
         }s1,s2,s3;
int main(){
          struct multiple e1,e2,e3;
        
         s1.rollno= 10;
         s1.class = 12;
         e1.rollno=4;
         e1.class=2;
         s2.rollno=3;
         e3.rollno=34;
         strcpy(e1.name,"sahilsharma");
 printf("%d\n", s1.class);
printf("%d\n", s1.rollno);
printf("%d\n", e1.class);
  printf("%s",e1.name);

}