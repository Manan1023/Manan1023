#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int j;
    printf("Write your String:");
    gets(a);
    strcpy(b,a);
    printf("Your copied string is=%s",b);
    strupr(a);
    printf("\nYour upper cased string is=%s",a);
    strlwr(a);
    printf("\nYour lower cased string is=%s",a);
    printf("\nLength of array is:%d",strlen(a));
    strcpy(a,b);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            j=i+1;
            continue;
        }
        else
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]+32;
            }
            if(a[j]>='a')
            {
                a[j]=a[j]-32;
            }
        }
    }
    printf("\nTitle case:%s",a);
    for(int i=0;i<strlen(a);i++)
    {
            if(a[i]>='a'&&a[i]<='z')
            {
                a[i]=a[i]-32;
            }
            else
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]+32;
            }
    }
    printf("\nToggle case:%s",a);
}

