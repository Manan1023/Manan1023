#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float l,b,p,a;
    printf("Insert length:");
    scanf("%f",&l);
    printf("Insert width:");
    scanf("%f",&b);
    p=2*(l+b);
    printf("Parameter=%f\n",p);
    a=l*b;
    printf("Area=%f\n",a);
    getch();
}
