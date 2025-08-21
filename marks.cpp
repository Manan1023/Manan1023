#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float p,c,m,a;
    printf("Insert marks of physics:");
    scanf("%f",&p);
    printf("Insert marks of chemistry:");
    scanf("%f",&c);
    printf("Insert marks of maths:");
    scanf("%f",&m);
    a=(p+c+m)/3;
    printf("Avrage Marks=%f\n",a);
    printf("Total Marks=%f\n",p+c+m);
    getch();
}