#include<stdio.h>/*by this exercise we will see that some time using recursive approch is not good bcz in some cases 
it take more time than itrative approch*/
int fab_itrativeapproch(int n)
{
    int a = 0;
    int b = 1;
    for (int j = 0; j < n - 1; j++)
    {
        b = a + b;
        a = b - a;
     }        return (a);

}
int fab_recursiveapproch(int n){
    if(n==1||n==2){
        return n-1;
    }
else {
    return  (fab_recursiveapproch(n-1)+fab_recursiveapproch(n-2));
}
}
int main()
{
    int number;
    printf("enter the fabnico no you want ");
    scanf("%d", &number);
    printf("the no fabinoccino is %d by intrative approch\n", fab_itrativeapproch(number));
        printf("the no fabinoccino is %d by recursive approch", fab_recursiveapproch(number));

}
