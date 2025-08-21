#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert weight in gram:");
    scanf("%f",&a);
    b=a/1000;
    printf("%f g=%f kgs\n",a,b);
    getch();
}