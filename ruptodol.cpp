#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert amount in rupees:");
    scanf("%f",&a);
    b=a/48;
    printf("%f ₹=%f $\n",a,b);
    getch();
}