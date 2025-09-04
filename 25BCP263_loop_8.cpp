#include<stdio.h>
int main()
{
    int s,n;
    printf("Numbers you want to print=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s+=i*2-1;
    printf("sum of n odd numbers=%d",s);
}
