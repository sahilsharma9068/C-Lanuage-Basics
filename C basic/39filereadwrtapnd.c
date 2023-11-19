/*Here we will read from a file and write in a file*/
#include <stdio.h>
int main()
{
    FILE *sk = NULL;
    char str[30];
    sk = fopen("file1.txt", "r");
    fscanf(sk, "%s", str);
    printf("%s", str);
   FILE *sp ;
   char string[78] = "how_are_you ";
   sp=fopen("file1.txt","w");// if we write something in the file it will clear all previous content and write new if we want to keep previous we use append 
   fprintf(sp,"%s",string);
 FILE *ss;
 char sssb[34]= "You are my bro ";
 ss = fopen("file1.txt","a");// how much time we run the code it will write how much time and not clear the previous
 fprintf(ss,"%s",sssb);
}