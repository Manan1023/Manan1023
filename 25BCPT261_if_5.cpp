#include<stdio.h>
int main()
{
    int a;
    printf("Insert Number:");
    scanf("%d",&a);
    if(a%7==0)
        printf("a is divisible by 7.");
    else
        printf("a is not divisible by 7");
}

