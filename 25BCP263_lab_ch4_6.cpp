#include<stdio.h>
int main()
{
    int Gcd(int,int);
    printf("%d",Gcd(30,25));
}
int Gcd(int n,int s)
{
    return((n%s==0)? s:Gcd(s,n%s));
}
