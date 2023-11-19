#include <stdio.h>
/*we use a function so that we have not to rewrite the code or a logic again and again the function can library defined function like
printf() and scanf() and also can be made by the user if we make a function then we don't need to write the logic again and again we just
call the funciton */
/*function 1 (with argument and with return value)*/
int sum(int a, int b)
{
   return a + b;
}
/*function 2 (with argument and withoutreturn value)*/
void printstar(int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("%c", '*');
   }
}
/*fucntion 3 (without argument and with return value)*/
int takeanumber()
{
   printf("\nenter the no ");
   int i;
   scanf("%d", &i);
   return i;
}
/*function 4 (without argument and without return value)*/
char selfdofn()
{
   int j;
   printf("\nenter the no how much emoji do you want");
   scanf(" %d ", &j);
   for (int k = 0; k < j; k++)
   {
      printf("%c", '*');
   }
}
int main()
{
   /*1.*/ int a = 5, b = 6;
   int c = sum(a, b);
   printf("the sum is %d\n", c);
   /*2.*/ printstar(20);
   /*3.*/ int g = takeanumber();
   printf("the entered no is %d", g);
   /*4*/ selfdofn();
}