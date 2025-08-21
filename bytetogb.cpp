#include<stdio.h>
#include<conio.h>

void main()
{
    clrscr();
    float a,b;
    printf("Insert bytes:");
    scanf("%f",&a);
    b=a/1000;
    printf("%f byte=%f KB\n",a,b);
    a=b/1000;
    printf("%f KB=%f MB\n",b,a);
    b=a/1000;
    printf("%f MB=%f GB\n",a,b);    
    getch();
}