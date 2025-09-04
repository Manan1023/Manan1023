#include<stdio.h>
int main()
{
    int a[5],i,j,t;
    printf("Enter 5 Values:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        printf("Unsorted Array=");
    for(j=0;j<5;j++)
        printf("%d ",a[j]);
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
printf("\nSorted Array=");
for(j=0;j<5;j++)
    printf("%d ",a[j]);
}
