/*it is used to give any nick name to any data type */
#include <stdio.h>
struct studentdetail
{
   int rollno;
   int id;
   int class;
};
/*the syntex to give structure is same that is for data type bcz structure is also a data type  */
int main()
{
   typedef int integer; /*here int data type is given nickname integer now we can use integer instead of using int */
   integer a = 5;       /*here we used name integer in place of int now the name of data type int  is converted to name integer*/
   printf("vaule of a is %d\n", a);
   /*we can also use it for structure bcz structure is also a user defined data type */
   typedef struct studentdetail
   {
      int rollno;
      int id;
      int class;
   } std; /*now the structure is given the name std and now we did not need to use
the whole name struct studentdetail we only use std*/
   std s1, s2, s3;
   s1.rollno = 1;
   s1.id = 10;
   s1.class = 12;
   s2.rollno = 2;
   s2.id = 11;
   s2.class = 12;
   s3.rollno = 3;
   s3.id = 12;
   s3.class = 12;
   printf("%d\n", s1.class);
}