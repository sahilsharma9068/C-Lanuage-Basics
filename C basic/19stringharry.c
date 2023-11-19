/* string is not a data type we use it to store any name or word . we store the name or word in array also we have take one extra space 
other then the alphapat space for \0 in the array memory so that the array can understand tha here the string has been ended  
if the string is of 10 memory there must be a one memory more in the array if it not so then it will give song garbege value along with 
the string*/
#include<stdio.h>
int main(){
    char myname[]={'s','a','h','i','l','\0'};
    printf("%s\n", myname);
    char mynameis[]="sahil";
    printf("%s\n",mynameis);
    char input[10];
    gets(input);
    printf("your entered name is ");
    puts(input);
    printf("your entered name is %s", input);

}