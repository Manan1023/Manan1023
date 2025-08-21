#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert time in minutes:");
    scanf("%f",&a);
    b=a/60;
    printf("%f minutes=%f hours\n",a,b);
    getch();
}