/*Others C Pre-processor: #define ,#include,#undef,#ifdef,#ifndef,#if,#else,#elif,#pragma*/
/*Macro & Description : __DATE__= The current date as character literal in "MM DD YYY" format
                       __TIME__= This contains the current time as a character literal in "HH:MM:SS" format
                       __FILE__=The current file as a string literal
                       __LINE__=The current line number as a decimal contast 
                       __STDC__=Definded as I(one) when the complier with the ANSI standard
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("File name is %s\n",__FILE__);
    printf("Current time is %s\n",__TIME__);
    printf("Today date is %s\n", __DATE__);
    printf("The line is %d\n",__LINE__);
    printf("ANSI:%d\n",__STDC__);
}
