/*int this exercise we will remove the chracter btwn the <>this braces and space in starting and in ending of the main line which we
have to print this is used by html to show main content on the screen */
#include<stdio.h>
#include<string.h>
void parser(char *string){
    int in =0;
    int index=0;
    for (int i = 0; i < strlen(string); i++)
    {
        if(string[i]=='<'){
            in =1;
        }
        else if(string[i]=='>'){
            in=0;
        }else if(in==0){
            string[index]=string[i];
            index++;
        }
    } string[index]='\0';
    while(string[0]==' '){
        for (int i = 0; i <strlen(string); i++)
        {
             string[i]=string[i+1];
        }
        while( string[strlen(string)-1] ==' '){

             string[strlen(string)-1]='\0';
            
        }
    }
}
int main(){
     char html[1000]="<sahil>      you are a good person     <sharma>";
     parser(html);
     printf("~%s~",html);

}