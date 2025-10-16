#include<stdio.h>
int main()
{
    int recnatural(int);
    printf("%d",recnatural(5));
}
int recnatural(int n)
{
    return((n==0)? 1:n*recnatural(n-1));
}
