#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float r,p,a;
    printf("Insert Radius:");
    scanf("%f",&r);
    p=r*2*22/7;
    printf("Parameter=%f\n",p);
    a=r*r*22/7;
    printf("Area=%f\n",a);
    getch();
}