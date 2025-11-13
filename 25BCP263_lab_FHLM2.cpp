#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fpw=NULL;
    char ch[100];
    printf("Enter the details at the end put #.\n");
    fpw=fopen("my1stfl.dat","a");
    printf("Line1:");
    gets(ch);
    int i=1;
    while(ch[0]!=' ')
    {
        i++;
        fputs(ch,fpw);
        printf("Line%d:",i);
        gets(ch);
    }
    fclose(fpw);
    printf("\nThe data has been successfully written.\n");
}
