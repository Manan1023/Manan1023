#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert temperature in Fahrenheit:");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("%f°f=%f°c\n",a,b);
    getch();
}