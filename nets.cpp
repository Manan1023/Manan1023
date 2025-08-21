#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float s,a,d;
    printf("Insert Salary:");
    scanf("%f",&s);
    a=s/10;
    d=s*3/100;
    s=s+a-d;
    printf("Net Salary=%f\n",s);
    getch();
}