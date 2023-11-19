/*Here we will give commands in terminal to over c program*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
     printf("no  of argc is %d\n",argc);
for (int i = 0; i < argc; i++)      
{
     printf("The value of argc %d is %s\n",i,argv[i]);
}

    return 0;
}