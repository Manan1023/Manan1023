#include<stdio.h>
int main()
{
    int recnatural(int);
    recnatural(10);
}
int recnatural(int n)
{
    printf("%d\n",n);
    return((n==1)? 0:recnatural(n-1));
}
