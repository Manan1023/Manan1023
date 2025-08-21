#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert weight in Kilogram:");
    scanf("%f",&a);
    b=a*1000;
    printf("%f kg=%f g\n",a,b);
    getch();
}