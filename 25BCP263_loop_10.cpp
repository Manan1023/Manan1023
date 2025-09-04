#include<stdio.h>
int main()
{
    int s=1,n;
    printf("Number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s=s*i;
    printf("factorial of n=%d",s);
}
