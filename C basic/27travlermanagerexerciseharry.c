#include <stdio.h>
struct detail
{
    char name[20];
    char root[40];
    int distance;
};
int main()
{
    // the no of drivers is 5 and we will collect details from them
    struct detail d1, d2, d3, d4;
printf("enter the detail of Driver 1\n");
printf("what is your name\n");
scanf("%s", &d1.name);
    printf("on which root do you drive\n");
    scanf("%s", &d1.root);
    printf("how much you drive in a day appr\n");
    scanf("%d", &d1.distance);
printf("enter the detail of Driver 2\n");
    printf("what is your name\n");
    scanf("%s", &d2.name);
    printf("on which root do you drive\n");
    scanf("%s", &d2.root);
    printf("how much you drive in a day appr\n");
    scanf("%d", &d2.distance);
printf("enter the detail of Driver 3\n");
 printf("what is your name\n");
    scanf("%s", &d3.name);
    printf("on which root do you drive\n");
    scanf("%s", &d3.root);
    printf("how much you drive in a day appr\n");
    scanf("%d", &d3.distance);
printf("enter the detail of Driver 4\n");
    printf("what is your name\n");
    scanf("%s", &d4.name);
    printf("on which root do you drive\n");
    scanf("%s", &d4.root);
    printf("how much you drive in a day appr\n");
    scanf("%d", &d4.distance);
    printf("This are the detail of Driver 1\n");
    printf("Name = %s\n", d1.name);
    printf("root = %s\n",d1.root);
    printf("Distance he drive = %d\n",d1.distance);
    printf("This are the detail of Driver 2\n");
    printf("Name = %s\n", d2.name);
    printf("root = %s\n",d2.root);
    printf("Distance he drive = %d\n",d2.distance);
    printf("This are the detail of Driver 3\n");
    printf("Name = %s\n", d3.name);
    printf("root = %s\n",d3.root);
    printf("Distance he drive = %d\n",d3.distance);
    printf("This are the detail of Driver 4\n");
    printf("Name = %s\n", d4.name);
    printf("root = %s\n",d4.root);
    printf("Distance he drive = %d\n",d4.distance);
}
