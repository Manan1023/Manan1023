#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float s,a;
    printf("Insert amount:");
    scanf("%f",&s);
    a=s/10;
    s=s-a;
    printf("Net Sale=%f\n",s);
    getch();
}