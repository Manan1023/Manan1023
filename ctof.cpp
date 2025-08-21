#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert temperature in Celsius:");
    scanf("%f",&a);
    b=a*9/5+32;
    printf("%f°c=%f°f\n",a,b);
    getch();
}