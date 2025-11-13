#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fpr=NULL;
    char ch;
    if((fpr=fopen("my1stfl.dat","r"))==NULL)
    {
        printf("File cant be opened.");
        exit(0);
    }
    ch=fgetc(fpr);

    while(ch!=EOF)
    {
        fputc(ch,stdout);
        ch=fgetc(fpr);
    }
    fclose(fpr);
    printf("\nThe data has been successfully written.\n");
}
