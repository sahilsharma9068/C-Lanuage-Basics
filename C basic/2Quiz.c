#include <stdio.h>
    int main(int argc, char const *argv[])
{
    char a  ;
    char b   ;
    printf("are you failed or passed in math ");
    scanf("%c ", &a );
    printf("are you failed or passed in science");
    scanf("%c", &b) ; 
    if( a=="p"& b=="p") { printf("you won 45 rupees");} 
    else if ( a=="p"){ print("you won 15 rupees");} 
    else if ( b == "p") { printf("you won 15 rupees");}


    return 0;
}
