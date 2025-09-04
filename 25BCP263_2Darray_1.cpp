#include<stdio.h>
int main()
{
    int m1[2][2],m2[2][2],a[2][2],i,j;
    printf("Enter 2x2 matrix values:");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&m1[i][j]);
    printf("Enter 2x2 matrix values:");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            scanf("%d",&m2[i][j]);
            a[i][j]=m1[i][j]+m2[i][j];
        }
    printf("Sum of matrix is=");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            printf(" %d",a[i][j]);
    printf("\n");
}
