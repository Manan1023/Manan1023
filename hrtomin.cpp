#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert time in hour:");
    scanf("%f",&a);
    b=a*60;
    printf("%f hours=%f minutes\n",a,b);
    getch();
}