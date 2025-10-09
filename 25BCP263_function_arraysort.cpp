#include<stdio.h>
void get(int []);
void display(int []);
void Asort(int[]);
int main()
{
    int x[10];
    get(x);
    Asort(x);
    display(x);
}
void get(int a[])
{
    printf("Enter Five Values");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
}
void Asort(int a[])
{
    int t;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(i==j)
                continue;
            else
                if(*(a+i)>*(a+j))
                {
                   t=a[i];
                   a[i]=a[j];
                   a[j]=t;
                }
        }
    }
}
void display(int a[])
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}

