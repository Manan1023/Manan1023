#include<stdio.h>
int main()
{
    int recnatural(int);
    recnatural(10);
}
int recnatural(int n)
{
    printf("%d\n",n*2-1);
    return((n==1)? 0:recnatural(n-1));
}
