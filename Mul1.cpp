#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int a,b,c;
    printf("Insert Numbers:");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("%d×%d=%d\n",a,b,c);
    getch();
}