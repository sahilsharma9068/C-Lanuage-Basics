/*1.union is very similer to structure but the differnce only difference is of memeory storage 
2.if we have to store int and char in a structure it will use 4+4=8 byte memory 4 for int and 4 for char 
3.but in union if we have to store int and char it will use only 4 byte of memory and ⭐store either int or char at one time 
4.union will use storage equal to the memory of highest memory data type*/
#include<stdio.h>
#include<string.h>
union studentdetail {
    int id ;
    char fav_char ;
    char name[44];
}; int a = 300;
int main2(){
    union studentdetail s1, s2;
    s1.id=5;
    s1.fav_char='p';
    strcpy(s1.name,"sahil");
    printf("the name of student is %s", s1.name);/*here if we want to print multiple datatype than this is not possible bcz in union
    at a time only one data type is stored bcz it uses memory equal to the memory of highest memeory data type if we want to print 
    multiple values than it will give crupted values except s1.name byz at last we stored s1.name */
}