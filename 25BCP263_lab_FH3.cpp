#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fpr=NULL;
    FILE *fpw=NULL;
    char ch;
    if((fpr=fopen("my1stfl.dat","r"))==NULL)
    {
        printf("File cant be opened.");
        exit(0);
    }
    if((fpw=fopen("my2ndfl.dat","w"))==NULL)
    {
        printf("File cant be opened.");
        fclose(fpr);
        exit(0);
    }
    ch=fgetc(fpr);

    while(ch!=EOF)
    {
        fputc(ch,stdout);
        fputc(ch,fpw);
        ch=fgetc(fpr);
    }
    fclose(fpw);
    fclose(fpr);
    printf("\nThe data has been successfully written.\n");
}
