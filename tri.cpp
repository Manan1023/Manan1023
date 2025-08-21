#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float h,l,a;
    printf("Insert Hight:");
    scanf("%f",&h);
    printf("Insert Length:");
    scanf("%f",&l);
    a=h*l/2;
    printf("Area=%f\n",a);
    getch();
}