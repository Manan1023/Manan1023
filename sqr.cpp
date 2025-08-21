#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float l,p,a;
    printf("Insert length:");
    scanf("%f",&l);
    p=4*l;
    printf("Parameter=%f\n",p);
    a=l*l;
    printf("Area=%f\n",a);
    getch();
}