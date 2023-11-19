// here we will use fn fgetc= get character from file, fgets = get string from file, fputs= put string in file, fputc= put character in file
/*if open file as r it will simply read the file 
  if open file as r+ it will read and also write by clearing the content only how much later we write in the file 
  if open file as w it will simply write in the file and erase the previous content
  if open file as w+ it will read and write int the file by clearing all the content of file  
  if open file as a+ it will read and write int the file keeping  the previous content of file  
  */
#include<stdio.h>
int main(){
 FILE *ptr =NULL;
 ptr = fopen("file1.txt","r+");
 char a = fgetc(ptr);
printf(" the get character is %c\n", a);
  a = fgetc(ptr);
printf(" the get character is %c\n", a);// now it will second character from the file
char str[30];
fgets(str, 6, ptr);// if we want to get 5 character from the file the we have to give 6 int vlaue bcz in 6th memoery a null is stored to tell the string that here it ends
printf(" the get character is %s\n", str);
fputc('k',ptr);
fputs("My name is sahil",ptr);
fclose(ptr);
//  FILE *ptr =NULL;
 ptr = fopen("file1.txt","w+");
  a = fgetc(ptr);
printf(" the get character is %c\n", a);
  a = fgetc(ptr);
printf(" the get character is %c\n", a);// now it will second character from the file
 str[30];
fgets(str, 6, ptr);// if we want to get 5 character from the file the we have to give 6 int vlaue bcz in 6th memoery a null is stored to tell the string that here it ends
printf(" the get character is %s\n", str);
fputc('k',ptr);
fputs("My name is sahil",ptr);
fclose(ptr);

}