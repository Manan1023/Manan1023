#include<stdio.h>
int main()
{
    int sumofno(int);
    printf("%d",sumofno(10));
}
int sumofno(int n)
{
    return((n==0)? 0:n%10+sumofno(n/10));
    /*if(n==0)
        return 0;
    else
        return(n+sumofno(n-1));*/
}
