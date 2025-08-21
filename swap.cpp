#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    int a,b,c;
    printf("Insert Numbers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a and b are swaped.a=%d,b=%d\n",a,b);
    getch();
}