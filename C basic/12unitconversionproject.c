/* we also can write this program wtihout using any function we can write the logic of change values inside the if statement 
thus then we don't need to call the function here i used function which will also work c*/
#include <stdio.h>
float kmtomiles(float i)
{
    return i * 0.62137119;
}
float inchestofoot(float j)
{
    return (j * ((float)1 / 12));
}
float inchestocm(float k)
{
    return (k * 2.54);
}
float poundstokg(float l)
{
    return (l * 0.45359237);
}
int main()
{
    printf("to change km to miles enter 1 \n to change inches to foot enter 2\n to change inches to cms enter 3\n to change pound to kg enter 4");
    int m;
    scanf("%d", &m);
    if (m == 1)
    {
        float n;
        printf("enter the value in kms");

        scanf("%f", &n);

        printf("  %f miles", kmtomiles(n));
    }
 else if (m == 2)
    {
        float n;
        printf("enter the value in inches");

        scanf("%f", &n);

        printf("  %f foot ", inchestofoot(n));
}        else  if (m ==3 )
          {
        float n;
        printf("enter the value in inches");

        scanf("%f", &n);

    printf("  %f cms ", inchestocm(n)); }
     else if (m == 4)
    {
        float n;
        printf("enter the value in pounds ");

        scanf("%f", &n);

            printf(" %f kgs", poundstokg(n));}  }