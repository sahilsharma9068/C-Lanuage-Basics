#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int power=pow(b,2);
    int root= sqrt(a);
    int lg = log(c);
    printf("%d\n",root);
    printf("%d\n",power);
    printf("%d\n",lg);
}