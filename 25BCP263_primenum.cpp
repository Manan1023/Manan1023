#include<stdio.h>
int main()
{
    int a,j=1;
    printf("Put Your Number:");
    scanf("%d",&a);
    if(a>2)
    {
        if(a%2==0)
        {
            j=0;
        }
        else
        {
            for(int i=3;i<=a/2;i+=2)
            {
                if(a%i==0)
                {
                    j=0;
                    break;
                }
            }
        }
        if(j)
        {
            printf("%d is prime.",a);
        }
        else
        {
            printf("%d is not prime.",a);
        }
    }
    else
    {
        if(a==1)
        {
            printf("1 is neither prime nor composite.");
        }
        else
        printf("%d is prime",a);
    }
}
