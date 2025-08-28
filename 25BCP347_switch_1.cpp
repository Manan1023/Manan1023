#include<stdio.h>
int main()
{
    int a,b,c;
    printf("1=addition.\n2=multiplication.\n3=odd or even.\n4=divisible by 5.\n5=prime number.\n");
    printf("Inseart choise:");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        {
            printf("Inseart Numbers:");
            scanf("%d %d",&a,&b);
            printf("%d + %d =%d",a,b,a+b);
            break;
        }
    case 2:
        {
            printf("Inseart Numbers:");
            scanf("%d %d",&a,&b);
            printf("%d * %d =%d",a,b,a*b);
            break;
        }
    case 3:
        {
            printf("Inseart Number:");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("Number is even,");
            }
            else
            {
                printf("Number is odd.");
            }
            break;
        }
    case 4:
        {
            printf("Inseart Number:");
            scanf("%d",&a);
            if(a%5==0)
            {
                printf("Number is divisible by 5.");
            }
            else
            {
                printf("Number is not divisible by 5.");
            }
            break;
        }
    case 5:
        {
            printf("Inseart Number:");
            scanf("%d",&a);
            int i=2;
            while(i<a)
            {
                if(a%i==0)
                {
                    b=0;
                    break;
                }
                else
                {
                    b=1;
                }
                i++;
            }
            if(b)
            {
                printf("Number is prime.");
            }
            else
            {
                printf("Number is not prime.");
            }
            break;
        }
    default:
        {
            printf("Invalid choice.");
        }
    }
}
