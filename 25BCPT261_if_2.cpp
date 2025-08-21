#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c)
    {
        printf("All 3 values are same.");
    }
    else
    {
        if(a>=b && a>=c)
        {
            if(a=b)
            {
                printf("a and b are largest.");
            }
            else
            {
                if(a=c)
                    printf("a and c are the largest.");
                else
                    printf("a is the largest.");
            }
        }
        else
        {
            if(b>=a && b>=c)
            {
                if(b=c)
                    printf("b and c are the largest.");
                else
                    printf("b is the largest.");
            }
            else
            {
                if(c>=a && c>=b)
                {

                            printf("c is the largest.");
                }
            }
        }
    }
    if(a<=b&& a<=c)
    {
        if(a=b)
        {
            printf("a and b are Smallest.");
        }
        else
        {
            if(a=c)
                printf("a and c are the smallest.");
            else
                printf("a is the smallest.");
        }
    }
    else
    {
        if(b<=a && b<=c)
        {
            if(b=c)
                printf("b and c are the smallest");
            else
                printf("b is the smallest");
        }
        else
        {
            if(c<=a && c<=b)
            {
                printf("c is the smallest");
            }
        }
    }

}
