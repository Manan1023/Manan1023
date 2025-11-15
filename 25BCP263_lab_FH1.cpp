#include<stdio.h>

int main()
{
    FILE *fpw=NULL;
    char ch;
    printf("Enter the details at the end put #.\n");
    fpw=fopen("my1stfl.c","a");
    ch=fgetc(stdin);
    while(ch!='$')
    {
        fputc(ch,fpw);
        ch=fgetc(stdin);
    }
    fclose(fpw);
    printf("\nThe data has been successfully written.\n");
}
